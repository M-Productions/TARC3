#include "global.h"
#include "battle.h"
#include "battle_ai_main.h"
#include "load_save.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_transition.h"
#include "main.h"
#include "task.h"
#include "safari_zone.h"
#include "script.h"
#include "event_data.h"
#include "metatile_behavior.h"
#include "field_player_avatar.h"
#include "fieldmap.h"
#include "follower_npc.h"
#include "random.h"
#include "starter_choose.h"
#include "script_pokemon_util.h"
#include "palette.h"
#include "window.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "tv.h"
#include "trainer_see.h"
#include "field_message_box.h"
#include "sound.h"
#include "strings.h"
#include "trainer_hill.h"
#include "secret_base.h"
#include "string_util.h"
#include "overworld.h"
#include "field_weather.h"
#include "battle_tower.h"
#include "gym_leader_rematch.h"
#include "battle_frontier.h"
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "fldeff.h"
#include "fldeff_misc.h"
#include "field_control_avatar.h"
#include "mirage_tower.h"
#include "field_screen_effect.h"
#include "data.h"
#include "vs_seeker.h"
#include "item.h"
#include "script.h"
#include "field_name_box.h"
#include "wild_encounter_ow.h"
#include "constants/battle_frontier.h"
#include "constants/battle_setup.h"
#include "constants/event_objects.h"
#include "constants/game_stat.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"
#include "fishing.h"
#include "constants/rgb.h"

enum TransitionType
{
    TRANSITION_TYPE_NORMAL,
    TRANSITION_TYPE_CAVE,
    TRANSITION_TYPE_FLASH,
    TRANSITION_TYPE_WATER,
};

// this file's functions
static void DoBattlePikeWildBattle(void);
static void DoSafariBattle(void);
static void DoGhostBattle(void);
static void DoStandardWildBattle(bool32 isDouble);
static void UNUSED CB2_EndWildBattle(void);
static void CB2_EndScriptedWildBattle(void);
static void CB2_EndMarowakBattle(void);
static void TryUpdateGymLeaderRematchFromWild(void);
static void TryUpdateGymLeaderRematchFromTrainer(void);
static void CB2_GiveStarter(void);
static void CB2_StartFirstBattle(void);
static void CB2_EndFirstBattle(void);
static void SaveChangesToPlayerParty(void);
static void HandleBattleVariantEndParty(void);
static void CB2_EndTrainerBattle(void);
static bool32 IsPlayerDefeated(u32 battleOutcome);
#if FREE_MATCH_CALL == FALSE
static u16 GetRematchTrainerId(u16 trainerId);
#endif //FREE_MATCH_CALL
static void RegisterTrainerInMatchCall(void);
static void HandleRematchVarsOnBattleEnd(void);
static const u8 *GetIntroSpeechOfApproachingTrainer(void);
static const u8 *GetTrainerCantBattleSpeech(void);

EWRAM_DATA TrainerBattleParameter gTrainerBattleParameter = {0};
EWRAM_DATA u16 gPartnerTrainerId = 0;
EWRAM_DATA static u8 *sTrainerBattleEndScript = NULL;
EWRAM_DATA static bool8 sShouldCheckTrainerBScript = FALSE;
EWRAM_DATA static u8 sNoOfPossibleTrainerRetScripts = 0;
static EWRAM_DATA enum BattlePuzzles sActivePuzzle = BP_NONE;

// The first transition is used if the enemy Pokémon are lower level than our Pokémon.
// Otherwise, the second transition is used.
static const u8 sBattleTransitionTable_Wild[][2] =
{
    [TRANSITION_TYPE_NORMAL] = {B_TRANSITION_SLICE,          B_TRANSITION_WHITE_BARS_FADE},
    [TRANSITION_TYPE_CAVE]   = {B_TRANSITION_CLOCKWISE_WIPE, B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_FLASH]  = {B_TRANSITION_BLUR,           B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_WATER]  = {B_TRANSITION_WAVE,           B_TRANSITION_RIPPLE},
};

static const u8 sBattleTransitionTable_Trainer[][2] =
{
    [TRANSITION_TYPE_NORMAL] = {B_TRANSITION_POKEBALLS_TRAIL, B_TRANSITION_ANGLED_WIPES},
    [TRANSITION_TYPE_CAVE]   = {B_TRANSITION_SHUFFLE,         B_TRANSITION_BIG_POKEBALL},
    [TRANSITION_TYPE_FLASH]  = {B_TRANSITION_BLUR,            B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_WATER]  = {B_TRANSITION_SWIRL,           B_TRANSITION_RIPPLE},
};

// Battle Frontier (excluding Pyramid and Dome, which have their own tables below)
static const u8 sBattleTransitionTable_BattleFrontier[] =
{
    B_TRANSITION_FRONTIER_LOGO_WIGGLE,
    B_TRANSITION_FRONTIER_LOGO_WAVE,
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL_IN_SEQ
};

static const u8 sBattleTransitionTable_BattlePyramid[] =
{
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_SQUARES_SPIRAL
};

static const u8 sBattleTransitionTable_BattleDome[] =
{
    B_TRANSITION_FRONTIER_LOGO_WIGGLE,
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_SQUARES_SPIRAL
};

#define REMATCH(trainer1, trainer2, trainer3, trainer4, trainer5, map)  \
{                                                                       \
    .trainerIds = {trainer1, trainer2, trainer3, trainer4, trainer5},   \
    .mapGroup = MAP_GROUP(map),                                         \
    .mapNum = MAP_NUM(map),                                             \
}

const struct RematchTrainer gRematchTable[REMATCH_TABLE_ENTRIES] =
{
    [REMATCH_ROSE] = REMATCH(TRAINER_ROSE_1, TRAINER_ROSE_2, TRAINER_ROSE_3, TRAINER_ROSE_4, TRAINER_ROSE_5, MAP_ROUTE118),
    [REMATCH_ANDRES] = REMATCH(TRAINER_ANDRES_1, TRAINER_ANDRES_2, TRAINER_ANDRES_3, TRAINER_ANDRES_4, TRAINER_ANDRES_5, MAP_ROUTE105),
    [REMATCH_DUSTY] = REMATCH(TRAINER_DUSTY_1, TRAINER_DUSTY_2, TRAINER_DUSTY_3, TRAINER_DUSTY_4, TRAINER_DUSTY_5, MAP_ROUTE111),
    [REMATCH_LOLA] = REMATCH(TRAINER_LOLA_1, TRAINER_LOLA_2, TRAINER_LOLA_3, TRAINER_LOLA_4, TRAINER_LOLA_5, MAP_ROUTE109),
    [REMATCH_RICKY] = REMATCH(TRAINER_RICKY_1, TRAINER_RICKY_2, TRAINER_RICKY_3, TRAINER_RICKY_4, TRAINER_RICKY_5, MAP_ROUTE109),
    [REMATCH_LILA_AND_ROY] = REMATCH(TRAINER_LILA_AND_ROY_1, TRAINER_LILA_AND_ROY_2, TRAINER_LILA_AND_ROY_3, TRAINER_LILA_AND_ROY_4, TRAINER_LILA_AND_ROY_5, MAP_ROUTE124),
    [REMATCH_CRISTIN] = REMATCH(TRAINER_CRISTIN_1, TRAINER_CRISTIN_2, TRAINER_CRISTIN_3, TRAINER_CRISTIN_4, TRAINER_CRISTIN_5, MAP_ROUTE121),
    [REMATCH_BROOKE] = REMATCH(TRAINER_BROOKE_1, TRAINER_BROOKE_2, TRAINER_BROOKE_3, TRAINER_BROOKE_4, TRAINER_BROOKE_5, MAP_ROUTE111),
    [REMATCH_WILTON] = REMATCH(TRAINER_WILTON_1, TRAINER_WILTON_2, TRAINER_WILTON_3, TRAINER_WILTON_4, TRAINER_WILTON_5, MAP_ROUTE111),
    [REMATCH_VALERIE] = REMATCH(TRAINER_VALERIE_1, TRAINER_VALERIE_2, TRAINER_VALERIE_3, TRAINER_VALERIE_4, TRAINER_VALERIE_5, MAP_MT_PYRE_6F),
    [REMATCH_CINDY] = REMATCH(TRAINER_CINDY_1, TRAINER_CINDY_3, TRAINER_CINDY_4, TRAINER_CINDY_5, TRAINER_CINDY_6, MAP_ROUTE104),
    [REMATCH_THALIA] = REMATCH(TRAINER_THALIA_1, TRAINER_THALIA_2, TRAINER_THALIA_3, TRAINER_THALIA_4, TRAINER_THALIA_5, MAP_ABANDONED_SHIP_ROOMS_1F),
    [REMATCH_JESSICA] = REMATCH(TRAINER_JESSICA_1, TRAINER_JESSICA_2, TRAINER_JESSICA_3, TRAINER_JESSICA_4, TRAINER_JESSICA_5, MAP_ROUTE121),
    [REMATCH_WINSTON] = REMATCH(TRAINER_WINSTON_1, TRAINER_WINSTON_2, TRAINER_WINSTON_3, TRAINER_WINSTON_4, TRAINER_WINSTON_5, MAP_ROUTE104),
    [REMATCH_STEVE] = REMATCH(TRAINER_STEVE_1, TRAINER_STEVE_2, TRAINER_STEVE_3, TRAINER_STEVE_4, TRAINER_STEVE_5, MAP_ROUTE114),
    [REMATCH_TONY] = REMATCH(TRAINER_TONY_1, TRAINER_TONY_2, TRAINER_TONY_3, TRAINER_TONY_4, TRAINER_TONY_5, MAP_ROUTE107),
    [REMATCH_NOB] = REMATCH(TRAINER_NOB_1, TRAINER_NOB_2, TRAINER_NOB_3, TRAINER_NOB_4, TRAINER_NOB_5, MAP_ROUTE115),
    [REMATCH_KOJI] = REMATCH(TRAINER_KOJI_1, TRAINER_KOJI_2, TRAINER_KOJI_3, TRAINER_KOJI_4, TRAINER_KOJI_5, MAP_ROUTE127),
    [REMATCH_FERNANDO] = REMATCH(TRAINER_FERNANDO_1, TRAINER_FERNANDO_2, TRAINER_FERNANDO_3, TRAINER_FERNANDO_4, TRAINER_FERNANDO_5, MAP_ROUTE123),
    [REMATCH_DALTON] = REMATCH(TRAINER_DALTON_1, TRAINER_DALTON_2, TRAINER_DALTON_3, TRAINER_DALTON_4, TRAINER_DALTON_5, MAP_ROUTE118),
    [REMATCH_BERNIE] = REMATCH(TRAINER_BERNIE_1, TRAINER_BERNIE_2, TRAINER_BERNIE_3, TRAINER_BERNIE_4, TRAINER_BERNIE_5, MAP_ROUTE114),
    [REMATCH_ETHAN] = REMATCH(TRAINER_ETHAN_1, TRAINER_ETHAN_2, TRAINER_ETHAN_3, TRAINER_ETHAN_4, TRAINER_ETHAN_5, MAP_JAGGED_PASS),
    [REMATCH_JOHN_AND_JAY] = REMATCH(TRAINER_JOHN_AND_JAY_1, TRAINER_JOHN_AND_JAY_2, TRAINER_JOHN_AND_JAY_3, TRAINER_JOHN_AND_JAY_4, TRAINER_JOHN_AND_JAY_5, MAP_METEOR_FALLS_1F_2R),
    [REMATCH_JEFFREY] = REMATCH(TRAINER_JEFFREY_1, TRAINER_JEFFREY_2, TRAINER_JEFFREY_3, TRAINER_JEFFREY_4, TRAINER_JEFFREY_5, MAP_ROUTE120),
    [REMATCH_CAMERON] = REMATCH(TRAINER_CAMERON_1, TRAINER_CAMERON_2, TRAINER_CAMERON_3, TRAINER_CAMERON_4, TRAINER_CAMERON_5, MAP_ROUTE123),
    [REMATCH_JACKI] = REMATCH(TRAINER_JACKI_1, TRAINER_JACKI_2, TRAINER_JACKI_3, TRAINER_JACKI_4, TRAINER_JACKI_5, MAP_ROUTE123),
    [REMATCH_WALTER] = REMATCH(TRAINER_WALTER_1, TRAINER_WALTER_2, TRAINER_WALTER_3, TRAINER_WALTER_4, TRAINER_WALTER_5, MAP_ROUTE121),
    [REMATCH_KAREN] = REMATCH(TRAINER_KAREN_1, TRAINER_KAREN_2, TRAINER_KAREN_3, TRAINER_KAREN_4, TRAINER_KAREN_5, MAP_ROUTE116),
    [REMATCH_JERRY] = REMATCH(TRAINER_JERRY_1, TRAINER_JERRY_2, TRAINER_JERRY_3, TRAINER_JERRY_4, TRAINER_JERRY_5, MAP_ROUTE116),
    [REMATCH_ANNA_AND_MEG] = REMATCH(TRAINER_ANNA_AND_MEG_1, TRAINER_ANNA_AND_MEG_2, TRAINER_ANNA_AND_MEG_3, TRAINER_ANNA_AND_MEG_4, TRAINER_ANNA_AND_MEG_5, MAP_ROUTE117),
    [REMATCH_ISABEL] = REMATCH(TRAINER_ISABEL_1, TRAINER_ISABEL_2, TRAINER_ISABEL_3, TRAINER_ISABEL_4, TRAINER_ISABEL_5, MAP_ROUTE110),
    [REMATCH_MIGUEL] = REMATCH(TRAINER_MIGUEL_1, TRAINER_MIGUEL_2, TRAINER_MIGUEL_3, TRAINER_MIGUEL_4, TRAINER_MIGUEL_5, MAP_ROUTE103),
    [REMATCH_TIMOTHY] = REMATCH(TRAINER_TIMOTHY_1, TRAINER_TIMOTHY_2, TRAINER_TIMOTHY_3, TRAINER_TIMOTHY_4, TRAINER_TIMOTHY_5, MAP_ROUTE115),
    [REMATCH_SHELBY] = REMATCH(TRAINER_SHELBY_1, TRAINER_SHELBY_2, TRAINER_SHELBY_3, TRAINER_SHELBY_4, TRAINER_SHELBY_5, MAP_MT_CHIMNEY),
    [REMATCH_CALVIN] = REMATCH(TRAINER_CALVIN_1, TRAINER_CALVIN_2, TRAINER_CALVIN_3, TRAINER_CALVIN_4, TRAINER_CALVIN_5, MAP_ROUTE102),
    [REMATCH_ELLIOT] = REMATCH(TRAINER_ELLIOT_1, TRAINER_ELLIOT_2, TRAINER_ELLIOT_3, TRAINER_ELLIOT_4, TRAINER_ELLIOT_5, MAP_ROUTE106),
    [REMATCH_ISAIAH] = REMATCH(TRAINER_ISAIAH_1, TRAINER_ISAIAH_2, TRAINER_ISAIAH_3, TRAINER_ISAIAH_4, TRAINER_ISAIAH_5, MAP_ROUTE128),
    [REMATCH_MARIA] = REMATCH(TRAINER_MARIA_1, TRAINER_MARIA_2, TRAINER_MARIA_3, TRAINER_MARIA_4, TRAINER_MARIA_5, MAP_ROUTE117),
    [REMATCH_ABIGAIL] = REMATCH(TRAINER_ABIGAIL_1, TRAINER_ABIGAIL_2, TRAINER_ABIGAIL_3, TRAINER_ABIGAIL_4, TRAINER_ABIGAIL_5, MAP_ROUTE110),
    [REMATCH_DYLAN] = REMATCH(TRAINER_DYLAN_1, TRAINER_DYLAN_2, TRAINER_DYLAN_3, TRAINER_DYLAN_4, TRAINER_DYLAN_5, MAP_ROUTE117),
    [REMATCH_KATELYN] = REMATCH(TRAINER_KATELYN_1, TRAINER_KATELYN_2, TRAINER_KATELYN_3, TRAINER_KATELYN_4, TRAINER_KATELYN_5, MAP_ROUTE128),
    [REMATCH_BENJAMIN] = REMATCH(TRAINER_BENJAMIN_1, TRAINER_BENJAMIN_2, TRAINER_BENJAMIN_3, TRAINER_BENJAMIN_4, TRAINER_BENJAMIN_5, MAP_ROUTE110),
    [REMATCH_PABLO] = REMATCH(TRAINER_PABLO_1, TRAINER_PABLO_2, TRAINER_PABLO_3, TRAINER_PABLO_4, TRAINER_PABLO_5, MAP_ROUTE126),
    [REMATCH_NICOLAS] = REMATCH(TRAINER_NICOLAS_1, TRAINER_NICOLAS_2, TRAINER_NICOLAS_3, TRAINER_NICOLAS_4, TRAINER_NICOLAS_5, MAP_METEOR_FALLS_1F_2R),
    [REMATCH_ROBERT] = REMATCH(TRAINER_ROBERT_1, TRAINER_ROBERT_2, TRAINER_ROBERT_3, TRAINER_ROBERT_4, TRAINER_ROBERT_5, MAP_ROUTE120),
    [REMATCH_LAO] = REMATCH(TRAINER_LAO_1, TRAINER_LAO_2, TRAINER_LAO_3, TRAINER_LAO_4, TRAINER_LAO_5, MAP_ROUTE113),
    [REMATCH_CYNDY] = REMATCH(TRAINER_CYNDY_1, TRAINER_CYNDY_2, TRAINER_CYNDY_3, TRAINER_CYNDY_4, TRAINER_CYNDY_5, MAP_ROUTE115),
    [REMATCH_MADELINE] = REMATCH(TRAINER_MADELINE_1, TRAINER_MADELINE_2, TRAINER_MADELINE_3, TRAINER_MADELINE_4, TRAINER_MADELINE_5, MAP_ROUTE113),
    [REMATCH_JENNY] = REMATCH(TRAINER_JENNY_1, TRAINER_JENNY_2, TRAINER_JENNY_3, TRAINER_JENNY_4, TRAINER_JENNY_5, MAP_ROUTE124),
    [REMATCH_DIANA] = REMATCH(TRAINER_DIANA_1, TRAINER_DIANA_2, TRAINER_DIANA_3, TRAINER_DIANA_4, TRAINER_DIANA_5, MAP_JAGGED_PASS),
    [REMATCH_AMY_AND_LIV] = REMATCH(TRAINER_AMY_AND_LIV_1, TRAINER_AMY_AND_LIV_2, TRAINER_AMY_AND_LIV_4, TRAINER_AMY_AND_LIV_5, TRAINER_AMY_AND_LIV_6, MAP_ROUTE103),
    [REMATCH_ERNEST] = REMATCH(TRAINER_ERNEST_1, TRAINER_ERNEST_2, TRAINER_ERNEST_3, TRAINER_ERNEST_4, TRAINER_ERNEST_5, MAP_ROUTE125),
    [REMATCH_CORY] = REMATCH(TRAINER_CORY_1, TRAINER_CORY_2, TRAINER_CORY_3, TRAINER_CORY_4, TRAINER_CORY_5, MAP_ROUTE108),
    [REMATCH_EDWIN] = REMATCH(TRAINER_EDWIN_1, TRAINER_EDWIN_2, TRAINER_EDWIN_3, TRAINER_EDWIN_4, TRAINER_EDWIN_5, MAP_ROUTE110),
    [REMATCH_LYDIA] = REMATCH(TRAINER_LYDIA_1, TRAINER_LYDIA_2, TRAINER_LYDIA_3, TRAINER_LYDIA_4, TRAINER_LYDIA_5, MAP_ROUTE117),
    [REMATCH_ISAAC] = REMATCH(TRAINER_ISAAC_1, TRAINER_ISAAC_2, TRAINER_ISAAC_3, TRAINER_ISAAC_4, TRAINER_ISAAC_5, MAP_ROUTE117),
    [REMATCH_GABRIELLE] = REMATCH(TRAINER_GABRIELLE_1, TRAINER_GABRIELLE_2, TRAINER_GABRIELLE_3, TRAINER_GABRIELLE_4, TRAINER_GABRIELLE_5, MAP_MT_PYRE_3F),
    [REMATCH_CATHERINE] = REMATCH(TRAINER_CATHERINE_1, TRAINER_CATHERINE_2, TRAINER_CATHERINE_3, TRAINER_CATHERINE_4, TRAINER_CATHERINE_5, MAP_ROUTE119),
    [REMATCH_JACKSON] = REMATCH(TRAINER_JACKSON_1, TRAINER_JACKSON_2, TRAINER_JACKSON_3, TRAINER_JACKSON_4, TRAINER_JACKSON_5, MAP_ROUTE119),
    [REMATCH_HALEY] = REMATCH(TRAINER_HALEY_1, TRAINER_HALEY_2, TRAINER_HALEY_3, TRAINER_HALEY_4, TRAINER_HALEY_5, MAP_ROUTE104),
    [REMATCH_JAMES] = REMATCH(TRAINER_JAMES_1, TRAINER_JAMES_2, TRAINER_JAMES_3, TRAINER_JAMES_4, TRAINER_JAMES_5, MAP_PETALBURG_WOODS),
    [REMATCH_TRENT] = REMATCH(TRAINER_TRENT_1, TRAINER_TRENT_2, TRAINER_TRENT_3, TRAINER_TRENT_4, TRAINER_TRENT_5, MAP_ROUTE112),
    [REMATCH_SAWYER] = REMATCH(TRAINER_SAWYER_1, TRAINER_SAWYER_2, TRAINER_SAWYER_3, TRAINER_SAWYER_4, TRAINER_SAWYER_5, MAP_MT_CHIMNEY),
    [REMATCH_KIRA_AND_DAN] = REMATCH(TRAINER_KIRA_AND_DAN_1, TRAINER_KIRA_AND_DAN_2, TRAINER_KIRA_AND_DAN_3, TRAINER_KIRA_AND_DAN_4, TRAINER_KIRA_AND_DAN_5, MAP_ABANDONED_SHIP_ROOMS2_1F),
    [REMATCH_WALLY_VR] = REMATCH(TRAINER_WALLY_VR_2, TRAINER_WALLY_VR_3, TRAINER_WALLY_VR_4, TRAINER_WALLY_VR_5, TRAINER_WALLY_VR_5, MAP_VICTORY_ROAD_1F),
    [REMATCH_ROXANNE] = REMATCH(TRAINER_ROXANNE_1, TRAINER_ROXANNE_2, TRAINER_ROXANNE_3, TRAINER_ROXANNE_4, TRAINER_ROXANNE_5, MAP_RUSTBORO_CITY),
    [REMATCH_BRAWLY] = REMATCH(TRAINER_BRAWLY_1, TRAINER_BRAWLY_2, TRAINER_BRAWLY_3, TRAINER_BRAWLY_4, TRAINER_BRAWLY_5, MAP_DEWFORD_TOWN),
    [REMATCH_WATTSON] = REMATCH(TRAINER_WATTSON_1, TRAINER_WATTSON_2, TRAINER_WATTSON_3, TRAINER_WATTSON_4, TRAINER_WATTSON_5, MAP_MAUVILLE_CITY),
    [REMATCH_FLANNERY] = REMATCH(TRAINER_FLANNERY_1, TRAINER_FLANNERY_2, TRAINER_FLANNERY_3, TRAINER_FLANNERY_4, TRAINER_FLANNERY_5, MAP_LAVARIDGE_TOWN),
    [REMATCH_NORMAN] = REMATCH(TRAINER_NORMAN_1, TRAINER_NORMAN_2, TRAINER_NORMAN_3, TRAINER_NORMAN_4, TRAINER_NORMAN_5, MAP_PETALBURG_CITY),
    [REMATCH_WINONA] = REMATCH(TRAINER_WINONA_1, TRAINER_WINONA_2, TRAINER_WINONA_3, TRAINER_WINONA_4, TRAINER_WINONA_5, MAP_FORTREE_CITY),
    [REMATCH_TATE_AND_LIZA] = REMATCH(TRAINER_TATE_AND_LIZA_1, TRAINER_TATE_AND_LIZA_2, TRAINER_TATE_AND_LIZA_3, TRAINER_TATE_AND_LIZA_4, TRAINER_TATE_AND_LIZA_5, MAP_MOSSDEEP_CITY),
    [REMATCH_JUAN] = REMATCH(TRAINER_JUAN_1, TRAINER_JUAN_2, TRAINER_JUAN_3, TRAINER_JUAN_4, TRAINER_JUAN_5, MAP_SOOTOPOLIS_CITY),
    [REMATCH_SIDNEY] = REMATCH(TRAINER_SIDNEY, TRAINER_SIDNEY, TRAINER_SIDNEY, TRAINER_SIDNEY, TRAINER_SIDNEY, MAP_EVER_GRANDE_CITY),
    [REMATCH_PHOEBE] = REMATCH(TRAINER_PHOEBE, TRAINER_PHOEBE, TRAINER_PHOEBE, TRAINER_PHOEBE, TRAINER_PHOEBE, MAP_EVER_GRANDE_CITY),
    [REMATCH_GLACIA] = REMATCH(TRAINER_GLACIA, TRAINER_GLACIA, TRAINER_GLACIA, TRAINER_GLACIA, TRAINER_GLACIA, MAP_EVER_GRANDE_CITY),
    [REMATCH_DRAKE] = REMATCH(TRAINER_DRAKE, TRAINER_DRAKE, TRAINER_DRAKE, TRAINER_DRAKE, TRAINER_DRAKE, MAP_EVER_GRANDE_CITY),
    [REMATCH_WALLACE] = REMATCH(TRAINER_WALLACE, TRAINER_WALLACE, TRAINER_WALLACE, TRAINER_WALLACE, TRAINER_WALLACE, MAP_EVER_GRANDE_CITY),
};

#define tState data[0]
#define tTransition data[1]

static void Task_BattleStart(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        if (!FldEffPoison_IsActive()) // is poison not active?
        {
            BattleTransition_StartOnField(tTransition);
            ClearMirageTowerPulseBlendEffect();
            tState++; // go to case 1.
        }
        break;
    case 1:
        if (IsBattleTransitionDone() == TRUE)
        {
            PrepareForFollowerNPCBattle();
            CleanupOverworldWindowsAndTilemaps();
            SetMainCallback2(CB2_InitBattle);
            RestartWildEncounterImmunitySteps();
            ClearPoisonStepCounter();
            DespawnOWEOnBattleStart();
            DestroyTask(taskId);
        }
        break;
    }
}

static void CreateBattleStartTask(enum BattleTransition transition, u16 song)
{
    u8 taskId = CreateTask(Task_BattleStart, 1);

    gTasks[taskId].tTransition = transition;
    if (!FlagGet(FLAG_SYS_DONT_TRANSITION_BATTLE_MUSIC))
        PlayMapChosenOrBattleBGM(song);
    FlagClear(FLAG_SYS_DONT_TRANSITION_BATTLE_MUSIC);
}

static void Task_BattleStart_Debug(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        if (!FldEffPoison_IsActive()) // is poison not active?
        {
            BattleTransition_StartOnField(tTransition);
            ClearMirageTowerPulseBlendEffect();
            tState++; // go to case 1.
        }
        break;
    case 1:
        if (IsBattleTransitionDone() == TRUE)
        {
            CleanupOverworldWindowsAndTilemaps();
            SetMainCallback2(CB2_InitBattle);
            RestartWildEncounterImmunitySteps();
            ClearPoisonStepCounter();
            DestroyTask(taskId);
        }
        break;
    }
}

static void CreateBattleStartTask_Debug(u8 transition, u16 song)
{
    u8 taskId = CreateTask(Task_BattleStart_Debug, 1);

    gTasks[taskId].tTransition = transition;
    PlayMapChosenOrBattleBGM(song);
}

#undef tState
#undef tTransition

static bool8 CheckSilphScopeInPokemonTower(u16 mapGroup, u16 mapNum)
{
    if (mapGroup == MAP_GROUP(MAP_POKEMON_TOWER_1F)
     && (mapNum == MAP_NUM(MAP_POKEMON_TOWER_1F)
      || mapNum == MAP_NUM(MAP_POKEMON_TOWER_2F)
      || mapNum == MAP_NUM(MAP_POKEMON_TOWER_3F)
      || mapNum == MAP_NUM(MAP_POKEMON_TOWER_4F)
      || mapNum == MAP_NUM(MAP_POKEMON_TOWER_5F)
      || mapNum == MAP_NUM(MAP_POKEMON_TOWER_6F)
      || mapNum == MAP_NUM(MAP_POKEMON_TOWER_7F))
     && !(CheckBagHasItem(ITEM_SILPH_SCOPE, 1)))
        return TRUE;
    else
        return FALSE;
}

void BattleSetup_StartWildBattle(void)
{
    if (GetSafariZoneFlag())
        DoSafariBattle();
    else if (CheckSilphScopeInPokemonTower(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum))
        DoGhostBattle();
    else
        DoStandardWildBattle(FALSE);
}

void BattleSetup_StartDoubleWildBattle(void)
{
    DoStandardWildBattle(TRUE);
}

void BattleSetup_StartBattlePikeWildBattle(void)
{
    DoBattlePikeWildBattle();
}

static void DoStandardWildBattle(bool32 isDouble)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = 0;
    if (IsNPCFollowerWildBattle())
    {
        gBattleTypeFlags |= BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_DOUBLE;
    }
    else if (isDouble)
        gBattleTypeFlags |= BATTLE_TYPE_DOUBLE;
    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE)
    {
        VarSet(VAR_TEMP_E, 0);
        gBattleTypeFlags |= BATTLE_TYPE_PYRAMID;
    }
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void DoStandardWildBattle_Debug(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = 0;
    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE)
    {
        VarSet(VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0);
        gBattleTypeFlags |= BATTLE_TYPE_PYRAMID;
    }
    CreateBattleStartTask_Debug(GetWildBattleTransition(), 0);
    //IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    //IncrementGameStat(GAME_STAT_WILD_BATTLES);
    //IncrementDailyWildBattles();
    //TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartRoamerBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = BATTLE_TYPE_ROAMER;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

static void DoSafariBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndSafariBattle;
    gBattleTypeFlags = BATTLE_TYPE_SAFARI;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
}

static void DoGhostBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = BATTLE_TYPE_GHOST;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    SetMonData(&gParties[B_TRAINER_OPPONENT_A][0], MON_DATA_NICKNAME, gText_Ghost);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

static void DoBattlePikeWildBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = BATTLE_TYPE_PIKE;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

static void DoTrainerBattle(void)
{
    CreateBattleStartTask(GetTrainerBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_TRAINER_BATTLES);
    TryUpdateGymLeaderRematchFromTrainer();
}

static void DoBattlePyramidTrainerHillBattle(void)
{
    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE)
        CreateBattleStartTask(GetSpecialBattleTransition(B_TRANSITION_GROUP_B_PYRAMID), 0);
    else
        CreateBattleStartTask(GetSpecialBattleTransition(B_TRANSITION_GROUP_TRAINER_HILL), 0);

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_TRAINER_BATTLES);
    TryUpdateGymLeaderRematchFromTrainer();
}

// Initiates battle where Wally catches Ralts
void StartWallyTutorialBattle(void)
{
    CreateMaleMon(&gParties[B_TRAINER_OPPONENT_A][0], SPECIES_RALTS, 5);
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = BATTLE_TYPE_CATCH_TUTORIAL;
    CreateBattleStartTask(B_TRANSITION_SLICE, 0);
}

void StartOldManTutorialBattle(void)
{
    CreateMaleMon(&gParties[B_TRAINER_OPPONENT_A][0], SPECIES_WEEDLE, 5);
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = BATTLE_TYPE_CATCH_TUTORIAL;
    CreateBattleStartTask(B_TRANSITION_SLICE, 0);
}

struct BattlePuzzle
{
    enum Move playerAttackMove;
    enum Move playerDefendMove;
    enum Move playerStatusMove;
    enum Move playerAceMove;
    u32 playerStatusEffect;
    u32 playerHP;
    u32 playerMaxHP;

    enum Species partnerSpecies;
    enum Move partnerAttackMove;
    enum Move partnerDefendMove;
    enum Move partnerStatusMove;
    enum Move partnerAceMove;
    u32 partnerStatusEffect;
    u32 partnerHP;
    u32 partnerMaxHP;

    enum Species enemySpecies;
    enum Move enemyAttackMove;
    enum Move enemyDefendMove;
    enum Move enemyStatusMove;
    enum Move enemyAceMove;
    u32 enemyStatusEffect;
    u32 enemyHP;
    u32 enemyMaxHP;

    enum Species enemyTwoSpecies;
    enum Move enemyTwoAttackMove;
    enum Move enemyTwoDefendMove;
    enum Move enemyTwoStatusMove;
    enum Move enemyTwoAceMove;
    u32 enemyTwoStatusEffect;
    u32 enemyTwoHP;
    u32 enemyTwoMaxHP;

    u32 battleFlags;
    AiScoreFunc aiFunc;
    u32 (*puzzleFunc)(void);
    bool32 doNothingPlayer;
    bool32 doNothingEnemy;
};

static s32 AI_SequentialMoves(enum BattlerId battlerAtk, enum BattlerId battlerDef, enum Move move, s32 score)
{
    u32 targetSlot = min(gBattleResults.battleTurnCounter, MAX_MON_MOVES - 1);
    if (move != gBattleMons[battlerAtk].moves[targetSlot])
        return 0;

    return score;
}

static EWRAM_DATA bool8 sRampardosHasRolled = FALSE;
static EWRAM_DATA u8 sRampardosRolledTurn = 0;
static EWRAM_DATA u8 sRampardosChosenSlot = 0;
static EWRAM_DATA u8 sRampardosHeadbuttStreak = 0;

static void ResetRampardosRandomAI(void)
{
    sRampardosHasRolled = FALSE;
    sRampardosRolledTurn = 0;
    sRampardosChosenSlot = 0;
    sRampardosHeadbuttStreak = 0;
}

static s32 AI_RampardosRandom(enum BattlerId battlerAtk, enum BattlerId battlerDef, enum Move move, s32 score)
{
    u32 turn = gBattleResults.battleTurnCounter;

    if (!sRampardosHasRolled || turn != sRampardosRolledTurn)
    {
        sRampardosHasRolled = TRUE;
        sRampardosRolledTurn = turn;

        if (sRampardosHeadbuttStreak >= 2)
            sRampardosChosenSlot = 0;
        else if (sRampardosHeadbuttStreak == 1)
            sRampardosChosenSlot = RandomPercentage(RNG_NONE, 75) ? 1 : 0;
        else
            sRampardosChosenSlot = RandomPercentage(RNG_NONE, 50) ? 1 : 0;

        if (sRampardosChosenSlot == 1)
            sRampardosHeadbuttStreak++;
        else
            sRampardosHeadbuttStreak = 0;
    }

    if (move == gBattleMons[battlerAtk].moves[sRampardosChosenSlot])
        return 100;

    return score;
}

static s32 AI_AttackPartner(enum BattlerId battlerAtk, enum BattlerId battlerDef, enum Move move, s32 score)
{
    enum BattlerId desiredTarget = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);

    if (battlerDef != desiredTarget)
        return 0;

    return score;
}

#define BP_BRUTE_BONNET_ENEMY_MOVE_ATTACK MOVE_FALSE_SURRENDER
#define BP_BRUTE_BONNET_ENEMY_MOVE_STATUS MOVE_POISON_POWDER
static s32 AI_BruteBonnetSporeCycle(enum BattlerId battlerAtk, enum BattlerId battlerDef, enum Move move, s32 score)
{
    enum BattlerId partner = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);

    if (battlerDef != partner)
        return 0;

    bool32 bagonPoisoned = gBattleMons[partner].status1 & STATUS1_POISON;

    if (move == BP_BRUTE_BONNET_ENEMY_MOVE_STATUS)
        return bagonPoisoned ? 0 : 100;

    if (move == BP_BRUTE_BONNET_ENEMY_MOVE_ATTACK)
        return bagonPoisoned ? 100 : 0;

    return score;
}

#define BP_BRUTE_BONNET_POISON_DURATION 3
static EWRAM_DATA u8 sBruteBonnetPoisonTurns[2] = {0};

static void ResetBruteBonnetPoisonCounter(void)
{
    sBruteBonnetPoisonTurns[0] = 0; // Larvesta
    sBruteBonnetPoisonTurns[1] = 0; // Bagon
}

#include "battle_interface.h"
static void BruteBonnetPoisonCounter(enum BattlerId battler, u8 *turns)
{
    if (!(gBattleMons[battler].status1 & STATUS1_POISON))
    {
        *turns = 0;
        return;
    }

    (*turns)++;
    if (*turns >= BP_BRUTE_BONNET_POISON_DURATION)
    {
        gBattleMons[battler].status1 &= ~STATUS1_POISON;
        *turns = 0;
        UpdateHealthboxAttribute(gHealthboxSpriteIds[battler], GetBattlerMon(battler), HEALTHBOX_ALL);
    }
}

static enum BattlerId GetPuzzleEnemyBattler(void)
{
    return GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
}

static u32 PuzzleOutcome_BruteBonnet(void)
{
    BruteBonnetPoisonCounter(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT), &sBruteBonnetPoisonTurns[0]);
    BruteBonnetPoisonCounter(GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT), &sBruteBonnetPoisonTurns[1]);

    if (!IsBattlerAlive(GetPuzzleEnemyBattler()))
        return B_OUTCOME_PUZZLE_COMPLETE;

    return 0;
}

static bool32 IsPuzzlePartnerAlive(void)
{
    return IsBattlerAlive(GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT));
}

static u32 PuzzleOutcome_Rampardos(void)
{
    enum BattlerId enemy = GetPuzzleEnemyBattler();

    if (gBattleMons[enemy].statStages[STAT_ATK] == MAX_STAT_STAGE)
        return B_OUTCOME_PUZZLE_COMPLETE;

    // if (gBattleMons[enemy].statStages[STAT_ATK] == MIN_STAT_STAGE)
    //     return B_OUTCOME_LOST;

    if (!IsBattlerAlive(enemy))
        return B_OUTCOME_LOST;

    return 0;
}

static u32 PuzzleOutcome_Armaldo(void)
{
    enum BattlerId enemy = GetPuzzleEnemyBattler();

    if (gBattleMons[enemy].status1 & STATUS1_SLEEP)
        return B_OUTCOME_PUZZLE_COMPLETE;

    if (!IsPuzzlePartnerAlive())
        return B_OUTCOME_LOST;

    if (!IsBattlerAlive(enemy))
        return B_OUTCOME_WON;

    return 0;
}

static s32 AI_AnorithBurrowCycle(enum BattlerId battlerAtk, enum BattlerId battlerDef, enum Move move, s32 score)
{
    if (gBattleResults.battleTurnCounter == 0)
        return (move == MOVE_PROTECT) ? 100 : 0;

    return (move == MOVE_HARDEN) ? 100 : 0;
}

static u32 PuzzleOutcome_Anorith(void)
{
    enum BattlerId anorithOne = GetPuzzleEnemyBattler();

    if (!(IsBattlerAlive(anorithOne)))
        return B_OUTCOME_LOST;

    if (!IsPuzzlePartnerAlive())
        return B_OUTCOME_LOST;

    return 0;
}

static EWRAM_DATA bool8 sBastiodonApproachFromBehind = FALSE;
static EWRAM_DATA bool8 sBastiodonGuardRolled = FALSE;
static EWRAM_DATA u8 sBastiodonGuardRolledTurn = 0;
static EWRAM_DATA bool8 sBastiodonGuardUpThisTurn = FALSE;
static EWRAM_DATA u32 sBastiodonPrevHP = 0;

#define BP_BP_BASTIODON_ENEMY_MOVE_ATTACK MOVE_HEADBUTT
#define BP_BP_BASTIODON_ENEMY_MOVE_DEFEND MOVE_BASTIODON_GUARD_1
#define BP_BP_BASTIODON_ENEMY_MOVE_STATUS MOVE_HARDEN
static void ResetBastiodonGuardAI(void)
{
    sBastiodonApproachFromBehind = (VarGet(VAR_0x8004) == DIR_SOUTH);
    sBastiodonGuardRolled = FALSE;
    sBastiodonGuardRolledTurn = 0;
    sBastiodonGuardUpThisTurn = FALSE;
    sBastiodonPrevHP = 0;
}

static s32 AI_BastiodonFlankGuard(enum BattlerId battlerAtk, enum BattlerId battlerDef, enum Move move, s32 score)
{
    u32 turn = gBattleResults.battleTurnCounter;

    if (turn == 0)
        sBastiodonPrevHP = gBattleMons[GetPuzzleEnemyBattler()].hp;

    if (!sBastiodonGuardRolled || turn != sBastiodonGuardRolledTurn)
    {
        sBastiodonGuardRolled = TRUE;
        sBastiodonGuardRolledTurn = turn;
        gBattleMons[battlerAtk].volatiles.consecutiveMoveUses = 0;
        sBastiodonGuardUpThisTurn = RandomPercentage(RNG_NONE, 50);
    }

    if (sBastiodonApproachFromBehind)
    {
        if (move == BP_BP_BASTIODON_ENEMY_MOVE_DEFEND)
            return 0;
        if (move == BP_BP_BASTIODON_ENEMY_MOVE_STATUS)
            return sBastiodonGuardUpThisTurn ? 100 : 0;
    }
    else
    {
        if (move == BP_BP_BASTIODON_ENEMY_MOVE_STATUS)
            return 0;
        if (move == BP_BP_BASTIODON_ENEMY_MOVE_DEFEND)
            return sBastiodonGuardUpThisTurn ? 100 : 0;
    }

    return score;
}

static u32 PuzzleOutcome_Bastiodon(void)
{
    enum BattlerId enemy = GetPuzzleEnemyBattler();
    u32 currentHP = gBattleMons[enemy].hp;

    if (sBastiodonPrevHP != 0 && currentHP > sBastiodonPrevHP)
        return B_OUTCOME_PUZZLE_COMPLETE;

    sBastiodonPrevHP = currentHP;

    if (!IsBattlerAlive(enemy))
        return B_OUTCOME_WON;

    if (!IsBattlerAlive(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)))
        return B_OUTCOME_LOST;

    return 0;
}

static u32 PuzzleOutcome_Cradily(void)
{

    if (!IsPuzzlePartnerAlive())
        return B_OUTCOME_LOST;

    if (!IsBattlerAlive(GetPuzzleEnemyBattler()))
        return B_OUTCOME_WON;

    return 0;
}

static EWRAM_DATA u8 sTyrantrumStillStreak = 0;
#define BP_TYRANTRUM_ENEMY_MOVE_ATTACK MOVE_GIGA_IMPACT
#define BP_TYRANTRUM_ENEMY_MOVE_IDLE   MOVE_HONE_CLAWS

static void ResetTyrantrumStillStreak(void)
{
    sTyrantrumStillStreak = 0;
}

static s32 AI_TyrantrumMotionSense(enum BattlerId battlerAtk, enum BattlerId battlerDef, enum Move move, s32 score)
{
    bool32 playerMoved = (GetBattlerChosenMove(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)) != MOVE_LARVESTA_DEFEND);

    if (move == BP_TYRANTRUM_ENEMY_MOVE_ATTACK)
        return playerMoved ? 100 : 0;
    if (move == BP_TYRANTRUM_ENEMY_MOVE_IDLE)
        return playerMoved ? 0 : 100;

    return score;
}

static u32 PuzzleOutcome_Tyrantrum(void)
{
    enum BattlerId player = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);

    if (!IsBattlerAlive(player))
        return B_OUTCOME_LOST;

    if (!IsBattlerAlive(GetPuzzleEnemyBattler()))
        return B_OUTCOME_LOST;

    if (GetBattlerChosenMove(player) == MOVE_LARVESTA_DEFEND)
        sTyrantrumStillStreak++;
    else
        sTyrantrumStillStreak = 0;

    if (sTyrantrumStillStreak >= 3)
        return B_OUTCOME_PUZZLE_COMPLETE;

    return 0;
}

static u32 PuzzleOutcome_Tyrantrum_Lose(void)
{
    if (!IsBattlerAlive(GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT)))
        return B_OUTCOME_PUZZLE_COMPLETE;

    if (!IsBattlerAlive(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)))
        return B_OUTCOME_LOST;

    return 0;
}

static const struct BattlePuzzle sBattlePuzzles[BP_COUNT] =
{
    [BP_TUTORIAL] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK_TUTORIAL,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_TALK_TUTORIAL,
        .playerAceMove = MOVE_LARVESTA_TICKLE_TUTORIAL,

        .enemySpecies = SPECIES_DRAMPA,
        .enemyAttackMove = MOVE_SNORE,
        .enemyStatusMove = MOVE_NASTY_PLOT,
        .enemyStatusEffect = STATUS1_SLEEP_TURN(2),

        .doNothingEnemy = TRUE,

        .aiFunc = AI_SequentialMoves,
    },

    [BP_HEADBUTT] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS_2,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .partnerSpecies = SPECIES_PHANPY,
        .partnerAttackMove = MOVE_MUD_SLAP,
        .partnerDefendMove = MOVE_PROTECT,
        .partnerStatusMove = MOVE_ENCORE,
        .partnerAceMove = MOVE_BULLDOZE,

        .enemySpecies = SPECIES_RAMPARDOS,
        .enemyAttackMove = MOVE_MEDITATE,
        .enemyDefendMove = MOVE_HEAD_CHARGE,

        .battleFlags = BATTLE_TYPE_DOUBLE,
        .aiFunc = AI_RampardosRandom,
        .puzzleFunc = PuzzleOutcome_Rampardos,
    },

    [BP_SING] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_FOLLOW_ME,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .partnerSpecies = SPECIES_JIGGLYPUFF,
        .partnerAttackMove = MOVE_TACKLE,
        .partnerDefendMove = MOVE_PROTECT,
        .partnerStatusMove = MOVE_CHARM,
        .partnerAceMove = MOVE_SING,

        .enemySpecies = SPECIES_ARMALDO,
        .enemyAttackMove = MOVE_ANCIENT_POWER,

        .battleFlags = BATTLE_TYPE_DOUBLE,
        .aiFunc = AI_AttackPartner,
        .puzzleFunc = PuzzleOutcome_Armaldo,
    },

    [BP_ANORITH] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_POKE,

        .partnerSpecies = SPECIES_JIGGLYPUFF,
        .partnerAttackMove = MOVE_TACKLE,
        .partnerDefendMove = MOVE_PROTECT,
        .partnerStatusMove = MOVE_WHIRLWIND,

        .enemySpecies = SPECIES_ANORITH,
        .enemyAttackMove = MOVE_DETECT,
        .enemyDefendMove = MOVE_HARDEN,

        .battleFlags = BATTLE_TYPE_DOUBLE,
        .aiFunc = AI_AnorithBurrowCycle,
        .puzzleFunc = PuzzleOutcome_Anorith,
    },

    [BP_BRUTE_BONNET] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS_2,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .partnerSpecies = SPECIES_BAGON,
        .partnerAttackMove = MOVE_DRAGON_BREATH,
        .partnerDefendMove = MOVE_PROTECT,
        .partnerStatusMove = MOVE_DRAGON_DANCE,

        .enemySpecies = SPECIES_BRUTE_BONNET,
        .enemyAttackMove = BP_BRUTE_BONNET_ENEMY_MOVE_ATTACK,
        .enemyStatusMove = BP_BRUTE_BONNET_ENEMY_MOVE_STATUS,

        .battleFlags = BATTLE_TYPE_DOUBLE,
        .aiFunc = AI_BruteBonnetSporeCycle,
        .puzzleFunc = PuzzleOutcome_BruteBonnet,
    },

    [BP_BASTIODON] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .enemySpecies = SPECIES_BASTIODON,
        .enemyAttackMove = BP_BP_BASTIODON_ENEMY_MOVE_ATTACK,
        .enemyDefendMove = BP_BP_BASTIODON_ENEMY_MOVE_DEFEND,
        .enemyStatusMove = BP_BP_BASTIODON_ENEMY_MOVE_STATUS,
        .enemyHP = 90,

        .aiFunc = AI_BastiodonFlankGuard,
        .puzzleFunc = PuzzleOutcome_Bastiodon,
    },

    [BP_CRADILY] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .partnerSpecies = SPECIES_PHANPY,
        .partnerAttackMove = MOVE_MUD_SLAP,
        .partnerDefendMove = MOVE_PROTECT,
        .partnerStatusMove = MOVE_ENCORE,
        .partnerAceMove = MOVE_BULLDOZE,

        .battleFlags = BATTLE_TYPE_DOUBLE,
        .enemySpecies = SPECIES_CRADILY,
        .enemyAttackMove = MOVE_DIG,

        .puzzleFunc = PuzzleOutcome_Cradily
    },

    [BP_ROARING_MOON] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .enemySpecies = SPECIES_ROARING_MOON,
        .enemyAttackMove = MOVE_CRUNCH,
        .enemyDefendMove = MOVE_BRAVE_BIRD,
        .enemyStatusMove = MOVE_HOWL,
        .enemyAceMove = MOVE_BRAVE_BIRD,
        
        .aiFunc = AI_SequentialMoves,
    },

    [BP_GREAT_TUSK] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .enemySpecies = SPECIES_GREAT_TUSK,
        .enemyAttackMove = MOVE_CRUNCH,
        .enemyDefendMove = MOVE_BULLDOZE,
        .enemyStatusMove = MOVE_HOWL,
        .enemyAceMove = MOVE_BULLDOZE,
        
        .aiFunc = AI_SequentialMoves,
    },

    [BP_SCREAM_TAIL] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .enemySpecies = SPECIES_SCREAM_TAIL,
        .enemyAttackMove = MOVE_CRUNCH,
        .enemyDefendMove = MOVE_SING,
        .enemyStatusMove = MOVE_HOWL,
        .enemyAceMove = MOVE_CRUNCH,

        .aiFunc = AI_SequentialMoves,
    },

    [BP_TYRANTRUM] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .enemySpecies = SPECIES_TYRANTRUM,
        .enemyAttackMove = BP_TYRANTRUM_ENEMY_MOVE_ATTACK,
        .enemyStatusMove = BP_TYRANTRUM_ENEMY_MOVE_IDLE,

        .aiFunc = AI_TyrantrumMotionSense,
        .puzzleFunc = PuzzleOutcome_Tyrantrum,
    },

    [BP_TYRANTRUM_LOSE] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_SPECIAL_LOCKED,

        .enemySpecies = SPECIES_TYRANTRUM,
        .enemyAttackMove = BP_TYRANTRUM_ENEMY_MOVE_ATTACK,
        .enemyStatusMove = BP_TYRANTRUM_ENEMY_MOVE_IDLE,

        .aiFunc = AI_AttackPartner,
        .puzzleFunc = PuzzleOutcome_Tyrantrum_Lose,
        .doNothingPlayer = TRUE,
        .battleFlags = BATTLE_TYPE_DOUBLE,
    },

    [BP_DRAMPA] =
    {
        .playerAttackMove = MOVE_LARVESTA_ATTACK,
        .playerDefendMove = MOVE_LARVESTA_DEFEND,
        .playerStatusMove = MOVE_LARVESTA_STATUS,
        .playerAceMove = MOVE_LARVESTA_SPECIAL,

        .partnerSpecies = SPECIES_TYRANTRUM,
        .partnerAttackMove = BP_TYRANTRUM_ENEMY_MOVE_ATTACK,
        .partnerDefendMove = MOVE_WIDE_GUARD,
        .partnerStatusMove = BP_TYRANTRUM_ENEMY_MOVE_IDLE,

        .enemySpecies = SPECIES_DRAMPA,
        .enemyAttackMove = MOVE_SNORE,
        .enemyStatusMove = MOVE_NASTY_PLOT,
        .enemyDefendMove = MOVE_REST,

        .battleFlags = BATTLE_TYPE_DOUBLE,
    }
};

void SetBattlePuzzleOutcome(void)
{
    if (sBattlePuzzles[sActivePuzzle].puzzleFunc != NULL)
        gBattleOutcome |= sBattlePuzzles[sActivePuzzle].puzzleFunc();
}

bool32 DoesBattleHavePuzzle(void)
{
    return sBattlePuzzles[sActivePuzzle].puzzleFunc != NULL;
}

bool32 PuzzleMoveDoNothing(enum BattlerId battlerAtk)
{
    if (sBattlePuzzles[sActivePuzzle].doNothingPlayer)
        return IsOnPlayerSide(battlerAtk);

    if (sBattlePuzzles[sActivePuzzle].doNothingEnemy)
        return !IsOnPlayerSide(battlerAtk);

    return FALSE;
}

bool32 IsAnorithComboReady(void)
{
    if (sActivePuzzle != BP_ANORITH)
        return FALSE;

    enum BattlerId player = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
    return GetBattlerChosenMove(player) == MOVE_LARVESTA_POKE;
}

static void DoSoftReset_Task(u8 taskId)
{
    if (!gPaletteFade.active)
        DoSoftReset();
}

void ClearBattlePuzzle(void)
{
    if (sActivePuzzle != BP_TYRANTRUM_LOSE
     && gBattleOutcome == B_OUTCOME_LOST
     && IsPlayerDefeated(gBattleOutcome))
    {
        FadeOutMapMusic(4);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_WHITE);
        CreateTask(DoSoftReset_Task, 0);
    }

    sActivePuzzle = BP_NONE;
}

void AdjustNonPuzzleLarvestaMoves(void)
{
    struct Pokemon *player = &gParties[B_TRAINER_PLAYER][0];
    const struct BattlePuzzle *puzzlesData = &sBattlePuzzles[BP_HEADBUTT];
    SetMonMoveSlot(player, puzzlesData->playerAttackMove, 0);
    SetMonMoveSlot(player, puzzlesData->playerDefendMove, 1);
    SetMonMoveSlot(player, puzzlesData->playerStatusMove, 2);
    SetMonMoveSlot(player, puzzlesData->playerAceMove, 3);
    CalculateMonStats(player);
}

void AdjustBattleData(enum BattlePuzzles puzzle)
{
    struct Pokemon *player = &gParties[B_TRAINER_PLAYER][0];
    struct Pokemon *partner = &gParties[B_TRAINER_PLAYER][1];
    struct Pokemon *enemy = &gParties[B_TRAINER_OPPONENT_A][0];
    enum Species speciesPlayer;

    u32 level = BATTLE_LEVEL;

    switch (puzzle)
    {
    case BP_ROARING_MOON:
        speciesPlayer = SPECIES_SLITHER_WING;
        break;
    case BP_GREAT_TUSK:
        speciesPlayer = SPECIES_SLITHER_WING;
        break;
    case BP_SCREAM_TAIL:
        speciesPlayer = SPECIES_SLITHER_WING;
        break;
    case BP_DRAMPA:
        speciesPlayer = SPECIES_SLITHER_WING;
        break;
    case BP_TYRANTRUM_LOSE:
        enum BattlePuzzles partnerPuzzle;
        switch (VarGet(VAR_SECOND_SAVED))
        {
        case CHAR_JIGGLYPUFF:
            partnerPuzzle = BP_SING;
            break;
        case CHAR_PHANPY:
            partnerPuzzle = BP_CRADILY;
            break;
        case CHAR_BAGON:
        default:
            partnerPuzzle = BP_BRUTE_BONNET;
            break;
        }
        const struct BattlePuzzle *puzzlesData = &sBattlePuzzles[partnerPuzzle];
        CreateMon(partner, puzzlesData->partnerSpecies, PUZZLE_LEVEL, Random32(), OTID_STRUCT_RANDOM_NO_SHINY);
        SetMonMoveSlot(partner, puzzlesData->partnerAttackMove, 0);
        SetMonMoveSlot(partner, puzzlesData->partnerDefendMove, 1);
        SetMonMoveSlot(partner, puzzlesData->partnerStatusMove, 2);
        SetMonMoveSlot(partner, puzzlesData->partnerAceMove, 3);
        u32 stat = 100;
        SetMonData(partner, MON_DATA_HP, &stat);
        SetMonData(partner, MON_DATA_MAX_HP, &stat);
        stat = 0;
        SetMonData(partner, MON_DATA_ATK, &stat);
        SetMonData(partner, MON_DATA_SPATK, &stat);
        CalculateMonStats(partner);
        return;
    default:
        speciesPlayer = SPECIES_LARVESTA;
        level = PUZZLE_LEVEL;
        break;
    }

    SetMonData(player, MON_DATA_SPECIES, &speciesPlayer);
    SetMonData(enemy, MON_DATA_LEVEL, &level);
    CalculateMonStats(player);
    CalculateMonStats(enemy);
}

#define HP_MAX_DEFAULT 100
void StartPuzzleBattle(enum BattlePuzzles puzzle)
{
    const struct BattlePuzzle *puzzlesData = &sBattlePuzzles[puzzle];
    u32 hpMax;
    u32 hpStart;

    struct Pokemon *player = &gParties[B_TRAINER_PLAYER][0];
    SetMonMoveSlot(player, puzzlesData->playerAttackMove, 0);
    SetMonMoveSlot(player, puzzlesData->playerDefendMove, 1);
    SetMonMoveSlot(player, puzzlesData->playerStatusMove, 2);
    SetMonMoveSlot(player, puzzlesData->playerAceMove, 3);
    SetMonData(player, MON_DATA_STATUS, &puzzlesData->playerStatusEffect);
    hpMax = puzzlesData->playerMaxHP ? puzzlesData->playerMaxHP : HP_MAX_DEFAULT;
    hpStart = puzzlesData->playerHP ? puzzlesData->playerHP : hpMax;
    SetMonData(player, MON_DATA_HP, &hpStart);
    SetMonData(player, MON_DATA_MAX_HP, &hpMax);
    gPartiesCount[B_TRAINER_PLAYER] = 1;

    if (puzzlesData->partnerSpecies)
    {
        struct Pokemon *partner = &gParties[B_TRAINER_PLAYER][1];
        CreateMon(partner, puzzlesData->partnerSpecies, PUZZLE_LEVEL, Random32(), OTID_STRUCT_RANDOM_NO_SHINY);
        SetMonMoveSlot(partner, puzzlesData->partnerAttackMove, 0);
        SetMonMoveSlot(partner, puzzlesData->partnerDefendMove, 1);
        SetMonMoveSlot(partner, puzzlesData->partnerStatusMove, 2);
        SetMonMoveSlot(partner, puzzlesData->partnerAceMove, 3);
        SetMonData(partner, MON_DATA_STATUS, &puzzlesData->partnerStatusEffect);
        hpMax = puzzlesData->partnerMaxHP ? puzzlesData->partnerMaxHP : HP_MAX_DEFAULT;
        hpStart = puzzlesData->partnerHP ? puzzlesData->partnerHP : hpMax;
        SetMonData(partner, MON_DATA_HP, &hpStart);
        SetMonData(partner, MON_DATA_MAX_HP, &hpMax);
        CalculateMonStats(partner);
        gPartiesCount[B_TRAINER_PLAYER] = 2;
    }

    struct Pokemon *enemy = &gParties[B_TRAINER_OPPONENT_A][0];
    CreateMon(enemy, puzzlesData->enemySpecies, PUZZLE_LEVEL, Random32(), OTID_STRUCT_RANDOM_NO_SHINY);
    SetMonMoveSlot(enemy, puzzlesData->enemyAttackMove, 0);
    SetMonMoveSlot(enemy, puzzlesData->enemyDefendMove, 1);
    SetMonMoveSlot(enemy, puzzlesData->enemyStatusMove, 2);
    SetMonMoveSlot(enemy, puzzlesData->enemyAceMove, 3);
    SetMonData(enemy, MON_DATA_STATUS, &puzzlesData->enemyStatusEffect);
    hpMax = puzzlesData->enemyMaxHP ? puzzlesData->enemyMaxHP : HP_MAX_DEFAULT;
    hpStart = puzzlesData->enemyHP ? puzzlesData->enemyHP : hpMax;
    SetMonData(enemy, MON_DATA_HP, &hpStart);
    SetMonData(enemy, MON_DATA_MAX_HP, &hpMax);
    CalculateMonStats(enemy);

    if (puzzlesData->enemyTwoSpecies)
    {
        struct Pokemon *enemyTwo = &gParties[B_TRAINER_OPPONENT_A][1];
        CreateMon(enemyTwo, puzzlesData->enemyTwoSpecies, PUZZLE_LEVEL, Random32(), OTID_STRUCT_RANDOM_NO_SHINY);
        SetMonMoveSlot(enemyTwo, puzzlesData->enemyTwoAttackMove, 0);
        SetMonMoveSlot(enemyTwo, puzzlesData->enemyTwoDefendMove, 1);
        SetMonMoveSlot(enemyTwo, puzzlesData->enemyTwoStatusMove, 2);
        SetMonMoveSlot(enemyTwo, puzzlesData->enemyTwoAceMove, 3);
        SetMonData(enemyTwo, MON_DATA_STATUS, &puzzlesData->enemyTwoStatusEffect);
        hpMax = puzzlesData->enemyTwoMaxHP ? puzzlesData->enemyTwoMaxHP : HP_MAX_DEFAULT;
        hpStart = puzzlesData->enemyTwoHP ? puzzlesData->enemyTwoHP : hpMax;
        SetMonData(enemyTwo, MON_DATA_HP, &hpStart);
        SetMonData(enemyTwo, MON_DATA_MAX_HP, &hpMax);
        CalculateMonStats(enemyTwo);
    }

    AdjustBattleData(puzzle);
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = puzzlesData->battleFlags;
    sActivePuzzle = puzzle;
    ResetRampardosRandomAI();
    ResetBastiodonGuardAI();
    ResetTyrantrumStillStreak();
    ResetBruteBonnetPoisonCounter();
    SetDynamicAIFunc(puzzlesData->aiFunc);
    StoreInitialPlayerAvatarState();
    CreateBattleStartTask(B_TRANSITION_SLICE, 0);
}

void StartPuzzleBattleScript(struct ScriptContext *ctx)
{
    enum BattlePuzzles puzzle = ScriptReadByte(ctx);
    StartPuzzleBattle(puzzle);
}

bool32 ClearPuzzlePartners(void)
{
    for (s32 i = 1; i < PARTY_SIZE; i++)
        ZeroMonData(&gParties[B_TRAINER_PLAYER][i]);
    gPartiesCount[B_TRAINER_PLAYER] = 1;
    return FALSE;
}

bool32 SetNonPuzzlePartner(void)
{
    if (!PlayerHasFollowerNPC())
        return ClearPuzzlePartners();

    u32 objId = GetFollowerNPCData(FNPC_DATA_OBJ_ID);
    enum BattlePuzzles puzzle;

    switch (OW_SPECIES(&gObjectEvents[objId]))
    {
    case SPECIES_BAGON:
        puzzle = BP_BRUTE_BONNET;
        break;
    case SPECIES_JIGGLYPUFF:
        puzzle = BP_SING;
        break;
    case SPECIES_PHANPY:
        puzzle = BP_HEADBUTT;
        break; 
    default: return ClearPuzzlePartners();
    }
    const struct BattlePuzzle *puzzlesData = &sBattlePuzzles[puzzle];
    struct Pokemon *partner = &gParties[B_TRAINER_PLAYER][1];
    u32 hp = HP_MAX_DEFAULT;
    CreateMon(partner, puzzlesData->partnerSpecies, PUZZLE_LEVEL, Random32(), OTID_STRUCT_RANDOM_NO_SHINY);
    SetMonMoveSlot(partner, puzzlesData->partnerAttackMove, 0);
    SetMonMoveSlot(partner, puzzlesData->partnerDefendMove, 1);
    SetMonMoveSlot(partner, puzzlesData->partnerStatusMove, 2);
    SetMonMoveSlot(partner, puzzlesData->partnerAceMove, 3);
    SetMonData(partner, MON_DATA_STATUS, &puzzlesData->partnerStatusEffect);
    SetMonData(partner, MON_DATA_HP, &hp);
    SetMonData(partner, MON_DATA_MAX_HP, &hp);
    CalculateMonStats(partner);
    gPartiesCount[B_TRAINER_PLAYER] = 2;
    gBattleTypeFlags = BATTLE_TYPE_DOUBLE;
    return TRUE;
}

void StartNonPuzzleBattle(void)
{
    HealPlayerParty();
    SetNonPuzzlePartner();
    ZeroEnemyPartyMons();
    struct Pokemon *player = &gParties[B_TRAINER_PLAYER][0];
    const struct BattlePuzzle *puzzlesData = &sBattlePuzzles[BP_HEADBUTT];
    SetMonMoveSlot(player, puzzlesData->playerAttackMove, 0);
    SetMonMoveSlot(player, puzzlesData->playerDefendMove, 1);
    SetMonMoveSlot(player, puzzlesData->playerStatusMove, 2);
    SetMonMoveSlot(player, puzzlesData->playerAceMove, 3);
    CreateMon(&gParties[B_TRAINER_OPPONENT_A][0], VarGet(VAR_ENCOUNTER_MON), BATTLE_LEVEL, Random32(), OTID_STRUCT_RANDOM_NO_SHINY);
    GiveMonInitialMoveset(&gParties[B_TRAINER_OPPONENT_A][0]);
    LockPlayerFieldControls();
    CalculateMonStats(&gParties[B_TRAINER_PLAYER][0]);
    CalculateMonStats(&gParties[B_TRAINER_OPPONENT_A][0]);
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    StoreInitialPlayerAvatarState();
    CreateBattleStartTask(GetWildBattleTransition(), 0);
}

void BattleSetup_StartScriptedWildBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = 0;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartScriptedDoubleWildBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_DOUBLE;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void StartMarowakBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndMarowakBattle;
    gBattleTypeFlags = BATTLE_TYPE_GHOST;

    if (CheckBagHasItem(ITEM_SILPH_SCOPE, 1))
    {
        u32 personality = GetMonPersonality(SPECIES_MAROWAK, MON_FEMALE, NATURE_SERIOUS, RANDOM_UNOWN_LETTER);

        CreateMonWithIVsPersonality(&gParties[B_TRAINER_OPPONENT_A][0], SPECIES_MAROWAK, 30, 31, personality);
    }

    CreateBattleStartTask(GetWildBattleTransition(), 0);
    SetMonData(&gParties[B_TRAINER_OPPONENT_A][0], MON_DATA_NICKNAME, gText_Ghost);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

void BattleSetup_StartLatiBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartLegendaryBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;

    switch (GetMonData(&gParties[B_TRAINER_OPPONENT_A][0], MON_DATA_SPECIES))
    {
    case SPECIES_GROUDON:
    case SPECIES_GROUDON_PRIMAL:
        CreateBattleStartTask(B_TRANSITION_GROUDON, MUS_VS_KYOGRE_GROUDON);
        break;
    case SPECIES_KYOGRE:
    case SPECIES_KYOGRE_PRIMAL:
        CreateBattleStartTask(B_TRANSITION_KYOGRE, MUS_VS_KYOGRE_GROUDON);
        break;
    case SPECIES_RAYQUAZA:
    case SPECIES_RAYQUAZA_MEGA:
        CreateBattleStartTask(B_TRANSITION_RAYQUAZA, MUS_VS_RAYQUAZA);
        break;
    case SPECIES_DEOXYS_NORMAL:
    case SPECIES_DEOXYS_ATTACK:
    case SPECIES_DEOXYS_DEFENSE:
    case SPECIES_DEOXYS_SPEED:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_RG_VS_DEOXYS);
        break;
    case SPECIES_LUGIA:
    case SPECIES_HO_OH:
    default:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_RG_VS_LEGEND);
        break;
    case SPECIES_MEW:
        CreateBattleStartTask(B_TRANSITION_GRID_SQUARES, MUS_VS_MEW);
        break;
    }

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void StartGroudonKyogreBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;

    if (gGameVersion == VERSION_RUBY)
        CreateBattleStartTask(B_TRANSITION_ANGLED_WIPES, MUS_VS_KYOGRE_GROUDON); // GROUDON
    else
        CreateBattleStartTask(B_TRANSITION_RIPPLE, MUS_VS_KYOGRE_GROUDON); // KYOGRE

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void StartRegiBattle(void)
{
    enum BattleTransition transitionId;
    enum Species species;

    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;

    species = GetMonData(&gParties[B_TRAINER_OPPONENT_A][0], MON_DATA_SPECIES);
    switch (species)
    {
    case SPECIES_REGIROCK:
        transitionId = B_TRANSITION_REGIROCK;
        break;
    case SPECIES_REGICE:
        transitionId = B_TRANSITION_REGICE;
        break;
    case SPECIES_REGISTEEL:
        transitionId = B_TRANSITION_REGISTEEL;
        break;
    default:
        transitionId = B_TRANSITION_GRID_SQUARES;
        break;
    }
    CreateBattleStartTask(transitionId, MUS_VS_REGI);

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

static void DowngradeBadPoison(void)
{
    u8 i;
    u32 status = STATUS1_POISON;
    if (B_TOXIC_REVERSAL < GEN_5)
        return;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SANITY_HAS_SPECIES) && GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_STATUS) == STATUS1_TOXIC_POISON)
            SetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_STATUS, &status);
    }
}

static void UNUSED CB2_EndWildBattle(void)
{
    CpuFill16(0, (void *)(BG_PLTT), BG_PLTT_SIZE);
    ResetOamRange(0, 128);

    if (IsNPCFollowerWildBattle())
    {
        RestorePartyAfterFollowerNPCBattle();
        if (FNPC_FLAG_HEAL_AFTER_FOLLOWER_BATTLE != 0
         && (FNPC_FLAG_HEAL_AFTER_FOLLOWER_BATTLE == FNPC_ALWAYS
         || FlagGet(FNPC_FLAG_HEAL_AFTER_FOLLOWER_BATTLE)))
            HealPlayerParty();
    }

    if (IsPlayerDefeated(gBattleOutcome) == TRUE && CurrentBattlePyramidLocation() == PYRAMID_LOCATION_NONE && !InBattlePike())
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToField);
        DowngradeBadPoison();
        gFieldCallback = FieldCB_ReturnToFieldNoScriptCheckMusic;
    }
}

static void CB2_EndScriptedWildBattle(void)
{
    CpuFill16(0, (void *)(BG_PLTT), BG_PLTT_SIZE);
    ResetOamRange(0, 128);

    if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE)
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        else
            SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        DowngradeBadPoison();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
}

static void CB2_EndMarowakBattle(void)
{
    CpuFill16(0, (void *)BG_PLTT, BG_PLTT_SIZE);
    ResetOamRange(0, 128);

    if (IsPlayerDefeated(gBattleOutcome))
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        // If result is TRUE player didnt defeat Marowak, force player back from stairs
        if (gBattleOutcome == B_OUTCOME_WON)
            gSpecialVar_Result = FALSE;
        else
            gSpecialVar_Result = TRUE;
        DowngradeBadPoison();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
}

enum BattleEnvironments BattleSetup_GetEnvironmentId(void)
{
    if (gMapHeader.mapType == MAP_TYPE_INDOOR)
        return BATTLE_ENVIRONMENT_BUILDING;
    
    s32 mapGroup = gSaveBlock1Ptr->location.mapGroup;

    switch (mapGroup)
    {
    case MAP_GROUP(MAP_JURASSIC_PARK_BEACH_DOCKS): return BATTLE_ENVIRONMENT_SAND;
    case MAP_GROUP(MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE): return BATTLE_ENVIRONMENT_PLAIN;
    case MAP_GROUP(MAP_JURASSIC_PARK_MARSHLANDS_MAIN): return BATTLE_ENVIRONMENT_POND;
    case MAP_GROUP(MAP_JURASSIC_PARK_DESERT_MAIN): return BATTLE_ENVIRONMENT_SAND;
    case MAP_GROUP(MAP_JURASSIC_PARK_MOUNTAIN_BASE): return BATTLE_ENVIRONMENT_MOUNTAIN;
    default: return BATTLE_ENVIRONMENT_PLAIN;
    }

    u16 tileBehavior;
    s16 x, y;

    if (ShouldUseFishingEnvironmentInBattle())
        GetXYCoordsOneStepInFrontOfPlayer(&x, &y);
    else
        PlayerGetDestCoords(&x, &y);

    tileBehavior = MapGridGetMetatileBehaviorAt(x, y);

    if (MetatileBehavior_IsTallGrass(tileBehavior))
        return BATTLE_ENVIRONMENT_GRASS;
    if (MetatileBehavior_IsLongGrass(tileBehavior))
        return BATTLE_ENVIRONMENT_LONG_GRASS;
    if (MetatileBehavior_IsSandOrDeepSand(tileBehavior))
        return BATTLE_ENVIRONMENT_SAND;

    switch (gMapHeader.mapType)
    {
    case MAP_TYPE_TOWN:
    case MAP_TYPE_CITY:
    case MAP_TYPE_ROUTE:
        break;
    case MAP_TYPE_UNDERGROUND:
        if (MetatileBehavior_IsIndoorEncounter(tileBehavior))
            return BATTLE_ENVIRONMENT_BUILDING;
        if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
            return BATTLE_ENVIRONMENT_POND;
        return BATTLE_ENVIRONMENT_CAVE;
    case MAP_TYPE_INDOOR:
    case MAP_TYPE_SECRET_BASE:
        return BATTLE_ENVIRONMENT_BUILDING;
    case MAP_TYPE_UNDERWATER:
        return BATTLE_ENVIRONMENT_UNDERWATER;
    case MAP_TYPE_OCEAN_ROUTE:
        if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
            return BATTLE_ENVIRONMENT_WATER;
        return BATTLE_ENVIRONMENT_PLAIN;
    }
    if (MetatileBehavior_IsDeepOrOceanWater(tileBehavior))
        return BATTLE_ENVIRONMENT_WATER;
    if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
        return BATTLE_ENVIRONMENT_POND;
    if (MetatileBehavior_IsMountain(tileBehavior))
        return BATTLE_ENVIRONMENT_MOUNTAIN;
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
    {
        // Is BRIDGE_TYPE_POND_*?
        if (MetatileBehavior_GetBridgeType(tileBehavior) != BRIDGE_TYPE_OCEAN)
            return BATTLE_ENVIRONMENT_POND;

        if (MetatileBehavior_IsBridgeOverWater(tileBehavior) == TRUE)
            return BATTLE_ENVIRONMENT_WATER;
    }
    if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(MAP_ROUTE113) && gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_ROUTE113))
        return BATTLE_ENVIRONMENT_SAND;
    if (GetSavedWeather() == WEATHER_SANDSTORM)
        return BATTLE_ENVIRONMENT_SAND;

    return BATTLE_ENVIRONMENT_PLAIN;
}

static enum TransitionType GetBattleTransitionTypeByMap(void)
{
    u16 tileBehavior;
    s16 x, y;

    PlayerGetDestCoords(&x, &y);
    tileBehavior = MapGridGetMetatileBehaviorAt(x, y);

    if (GetFlashLevel())
        return TRANSITION_TYPE_FLASH;

    if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
        return TRANSITION_TYPE_WATER;

    switch (gMapHeader.mapType)
    {
    case MAP_TYPE_UNDERGROUND:
        return TRANSITION_TYPE_CAVE;
    case MAP_TYPE_UNDERWATER:
        return TRANSITION_TYPE_WATER;
    default:
        return TRANSITION_TYPE_NORMAL;
    }
}

static u16 GetSumOfPlayerPartyLevel(u8 numMons)
{
    u8 sum = 0;
    int i;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        enum Species species = GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES_OR_EGG);

        if (species != SPECIES_EGG && species != SPECIES_NONE && GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_HP) != 0)
        {
            sum += GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_LEVEL);
            if (--numMons == 0)
                break;
        }
    }
    return sum;
}

static u8 GetSumOfEnemyPartyLevel(u16 opponentId, u8 numMons)
{
    u8 i;
    u8 sum;
    u32 count = numMons;
    const struct TrainerMon *party;

    if (GetTrainerPartySizeFromId(opponentId) < count)
        count = GetTrainerPartySizeFromId(opponentId);

    sum = 0;

    party = GetTrainerPartyFromId(opponentId);
    for (i = 0; i < count && party != NULL; i++)
        sum += party[i].lvl;

    return sum;
}

enum BattleTransition GetWildBattleTransition(void)
{
    u8 transitionType = GetBattleTransitionTypeByMap();
    u8 enemyLevel = GetMonData(&gParties[B_TRAINER_OPPONENT_A][0], MON_DATA_LEVEL);
    u8 playerLevel = GetSumOfPlayerPartyLevel(1);

    if (enemyLevel < playerLevel)
    {
        if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE)
            return B_TRANSITION_BLUR;
        else
            return sBattleTransitionTable_Wild[transitionType][0];
    }
    else
    {
        if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE)
            return B_TRANSITION_GRID_SQUARES;
        else
            return sBattleTransitionTable_Wild[transitionType][1];
    }
}

enum BattleTransition GetTrainerBattleTransition(void)
{
    u8 minPartyCount = 1;
    u8 transitionType;
    u8 enemyLevel;
    u8 playerLevel;
    u32 trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentA);
    enum TrainerClassID trainerClass = GetTrainerClassFromId(TRAINER_BATTLE_PARAM.opponentA);

    if (DoesTrainerHaveMugshot(trainerId))
        return B_TRANSITION_MUGSHOT;

    if (trainerClass == TRAINER_CLASS_TEAM_MAGMA
        || trainerClass == TRAINER_CLASS_MAGMA_LEADER
        || trainerClass == TRAINER_CLASS_MAGMA_ADMIN)
        return B_TRANSITION_MAGMA;

    if (trainerClass == TRAINER_CLASS_TEAM_AQUA
        || trainerClass == TRAINER_CLASS_AQUA_LEADER
        || trainerClass == TRAINER_CLASS_AQUA_ADMIN)
        return B_TRANSITION_AQUA;

    switch (GetTrainerBattleType(trainerId))
    {
    case TRAINER_BATTLE_TYPE_SINGLES:
        minPartyCount = 1;
        break;
    case TRAINER_BATTLE_TYPE_DOUBLES:
        minPartyCount = 2; // double battles always at least have 2 Pokémon.
        break;
    }

    transitionType = GetBattleTransitionTypeByMap();
    enemyLevel = GetSumOfEnemyPartyLevel(trainerId, minPartyCount);
    playerLevel = GetSumOfPlayerPartyLevel(minPartyCount);

    if (enemyLevel < playerLevel)
        return sBattleTransitionTable_Trainer[transitionType][0];
    else
        return sBattleTransitionTable_Trainer[transitionType][1];
}

#define RANDOM_TRANSITION(table) (table[Random() % ARRAY_COUNT(table)])
enum BattleTransition GetSpecialBattleTransition(enum BattleTransitionGroup id)
{
    u16 var;
    u8 enemyLevel = GetMonData(&gParties[B_TRAINER_OPPONENT_A][0], MON_DATA_LEVEL);
    u8 playerLevel = GetSumOfPlayerPartyLevel(1);

    if (enemyLevel < playerLevel)
    {
        switch (id)
        {
        case B_TRANSITION_GROUP_TRAINER_HILL:
        case B_TRANSITION_GROUP_SECRET_BASE:
        case B_TRANSITION_GROUP_E_READER:
            return B_TRANSITION_POKEBALLS_TRAIL;
        case B_TRANSITION_GROUP_B_PYRAMID:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattlePyramid);
        case B_TRANSITION_GROUP_B_DOME:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleDome);
        default:
            break;
        }

        if (VarGet(VAR_FRONTIER_BATTLE_MODE) != FRONTIER_MODE_LINK_MULTIS)
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleFrontier);
    }
    else
    {
        switch (id)
        {
        case B_TRANSITION_GROUP_TRAINER_HILL:
        case B_TRANSITION_GROUP_SECRET_BASE:
        case B_TRANSITION_GROUP_E_READER:
            return B_TRANSITION_BIG_POKEBALL;
        case B_TRANSITION_GROUP_B_PYRAMID:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattlePyramid);
        case B_TRANSITION_GROUP_B_DOME:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleDome);
        default:
            break;
        }

        if (VarGet(VAR_FRONTIER_BATTLE_MODE) != FRONTIER_MODE_LINK_MULTIS)
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleFrontier);
    }

    var = gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum * 2 + 0]
        + gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum * 2 + 1];

    return sBattleTransitionTable_BattleFrontier[var % ARRAY_COUNT(sBattleTransitionTable_BattleFrontier)];
}

void ChooseStarter(void)
{
    SetMainCallback2(CB2_ChooseStarter);
    gMain.savedCallback = CB2_GiveStarter;
}

static void CB2_GiveStarter(void)
{
    u16 starterMon;

    *GetVarPointer(VAR_STARTER_MON) = gSpecialVar_Result;
    starterMon = GetStarterPokemon(gSpecialVar_Result);
    ScriptGiveMon(starterMon, 5, ITEM_NONE);
    ResetTasks();
    PlayBattleBGM();
    SetMainCallback2(CB2_StartFirstBattle);
    BattleTransition_Start(B_TRANSITION_BLUR);
}

static void CB2_StartFirstBattle(void)
{
    UpdatePaletteFade();
    RunTasks();

    if (IsBattleTransitionDone() == TRUE)
    {
        gBattleTypeFlags = BATTLE_TYPE_FIRST_BATTLE;
        gMain.savedCallback = CB2_EndFirstBattle;
        FreeAllWindowBuffers();
        SetMainCallback2(CB2_InitBattle);
        RestartWildEncounterImmunitySteps();
        ClearPoisonStepCounter();
        IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
        IncrementGameStat(GAME_STAT_WILD_BATTLES);
        IncrementDailyWildBattles();
        TryUpdateGymLeaderRematchFromWild();
    }
}

static void CB2_EndFirstBattle(void)
{
    Overworld_ClearSavedMusic();
    DowngradeBadPoison();
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static void TryUpdateGymLeaderRematchFromWild(void)
{
    if (GetGameStat(GAME_STAT_WILD_BATTLES) % 60 == 0)
        UpdateGymLeaderRematch();
}

static void TryUpdateGymLeaderRematchFromTrainer(void)
{
    if (GetGameStat(GAME_STAT_TRAINER_BATTLES) % 20 == 0)
        UpdateGymLeaderRematch();
}

static u16 GetTrainerAFlag(void)
{
    return TRAINER_FLAGS_START + TRAINER_BATTLE_PARAM.opponentA;
}

static u16 GetTrainerBFlag(void)
{
    return TRAINER_FLAGS_START + TRAINER_BATTLE_PARAM.opponentB;
}

static bool32 IsPlayerDefeated(u32 battleOutcome)
{
    switch (battleOutcome)
    {
    case B_OUTCOME_LOST:
    case B_OUTCOME_DREW:
    case B_OUTCOME_FORFEITED:
        return TRUE;
    case B_OUTCOME_WON:
    case B_OUTCOME_RAN:
    case B_OUTCOME_PLAYER_TELEPORTED:
    case B_OUTCOME_MON_FLED:
    case B_OUTCOME_CAUGHT:
        return FALSE;
    default:
        return FALSE;
    }
}

void ResetTrainerOpponentIds(void)
{
    TRAINER_BATTLE_PARAM.opponentA = 0;
    TRAINER_BATTLE_PARAM.opponentB = 0;
}

void InitTrainerBattleParameter(void)
{
    memset(gTrainerBattleParameter.data, 0, sizeof(TrainerBattleParameter));
    sTrainerBattleEndScript = NULL;
}

void TrainerBattleLoadArgs(const u8 *data)
{
    InitTrainerBattleParameter();
    memcpy(gTrainerBattleParameter.data, data, sizeof(TrainerBattleParameter));
    sTrainerBattleEndScript = (u8*)data + sizeof(TrainerBattleParameter);
}

void TrainerBattleLoadArgsTrainerA(const u8 *data)
{
    TrainerBattleParameter *temp = (TrainerBattleParameter*)data;

    TRAINER_BATTLE_PARAM.playMusicA = temp->params.playMusicA;
    TRAINER_BATTLE_PARAM.objEventLocalIdA = temp->params.objEventLocalIdA;
    TRAINER_BATTLE_PARAM.opponentA = temp->params.opponentA;
    TRAINER_BATTLE_PARAM.introTextA = temp->params.introTextA;
    TRAINER_BATTLE_PARAM.defeatTextA = temp->params.defeatTextA;
    TRAINER_BATTLE_PARAM.battleScriptRetAddrA = temp->params.battleScriptRetAddrA;
}

void TrainerBattleLoadArgsTrainerB(const u8 *data)
{
    TrainerBattleParameter *temp = (TrainerBattleParameter*)data;

    TRAINER_BATTLE_PARAM.playMusicB = temp->params.playMusicB;
    TRAINER_BATTLE_PARAM.objEventLocalIdB = temp->params.objEventLocalIdB;
    TRAINER_BATTLE_PARAM.opponentB = temp->params.opponentB;
    TRAINER_BATTLE_PARAM.introTextB = temp->params.introTextB;
    TRAINER_BATTLE_PARAM.defeatTextB = temp->params.defeatTextB;
    TRAINER_BATTLE_PARAM.battleScriptRetAddrB = temp->params.battleScriptRetAddrB;
}

// loads trainer A parameter to trainer B. Used for second trainer in trainer_see.c
void TrainerBattleLoadArgsSecondTrainer(const u8 *data)
{
    TrainerBattleParameter *temp = (TrainerBattleParameter*)data;

    TRAINER_BATTLE_PARAM.playMusicB = temp->params.playMusicA;
    TRAINER_BATTLE_PARAM.objEventLocalIdB = temp->params.objEventLocalIdA;
    TRAINER_BATTLE_PARAM.opponentB = temp->params.opponentA;
    TRAINER_BATTLE_PARAM.introTextB = temp->params.introTextA;
    TRAINER_BATTLE_PARAM.defeatTextB = temp->params.defeatTextA;
    TRAINER_BATTLE_PARAM.battleScriptRetAddrB = temp->params.battleScriptRetAddrA;
}

void SetMapVarsToTrainerA(void)
{
    if (TRAINER_BATTLE_PARAM.objEventLocalIdA != LOCALID_NONE)
    {
        gSpecialVar_LastTalked = TRAINER_BATTLE_PARAM.objEventLocalIdA;
        gSelectedObjectEvent = GetObjectEventIdByLocalIdAndMap(TRAINER_BATTLE_PARAM.objEventLocalIdA, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    }
}

void SetMapVarsToTrainerB(void)
{
    if (TRAINER_BATTLE_PARAM.objEventLocalIdB != LOCALID_NONE)
    {
        gSpecialVar_LastTalked = TRAINER_BATTLE_PARAM.objEventLocalIdB;
        gSelectedObjectEvent = GetObjectEventIdByLocalIdAndMap(TRAINER_BATTLE_PARAM.objEventLocalIdB, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    }
}

// expects parameters have been loaded correctly with TrainerBattleLoadArgs
const u8 *BattleSetup_ConfigureTrainerBattle(const u8 *data)
{
    switch (TRAINER_BATTLE_PARAM.mode)
    {
    case TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT:
        return EventScript_DoNoIntroTrainerBattle;
    case TRAINER_BATTLE_DOUBLE:
        SetMapVarsToTrainerA();
        return EventScript_TryDoDoubleTrainerBattle;
    case TRAINER_BATTLE_CONTINUE_SCRIPT:
        if (gApproachingTrainerId == 0)
        {
            SetMapVarsToTrainerA();
        }
        return EventScript_TryDoNormalTrainerBattle;
    case TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC:
        SetMapVarsToTrainerA();
        return EventScript_TryDoNormalTrainerBattle;
    case TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE:
    case TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC:
        SetMapVarsToTrainerA();
        return EventScript_TryDoDoubleTrainerBattle;
#if FREE_MATCH_CALL == FALSE
    case TRAINER_BATTLE_REMATCH_DOUBLE:
        SetMapVarsToTrainerA();
        TRAINER_BATTLE_PARAM.opponentA = GetRematchTrainerId(TRAINER_BATTLE_PARAM.opponentA);
        return EventScript_TryDoDoubleRematchBattle;
    case TRAINER_BATTLE_REMATCH:
        SetMapVarsToTrainerA();
        TRAINER_BATTLE_PARAM.opponentA = GetRematchTrainerId(TRAINER_BATTLE_PARAM.opponentA);
        return EventScript_TryDoRematchBattle;
#endif //FREE_MATCH_CALL
    case TRAINER_BATTLE_EARLY_RIVAL:
        SetMapVarsToTrainerA();
        return EventScript_DoNoIntroTrainerBattle;
    case TRAINER_BATTLE_TWO_TRAINERS_NO_INTRO:
        gNoOfApproachingTrainers = 2; // set TWO_OPPONENTS gBattleTypeFlags
        gApproachingTrainerId = 1; // prevent trainer approach
        return EventScript_DoNoIntroTrainerBattle;
    default:
        if (gApproachingTrainerId == 0)
        {
            SetMapVarsToTrainerA();
        }
        return EventScript_TryDoNormalTrainerBattle;
    }
}

const u8* BattleSetup_ConfigureFacilityTrainerBattle(u8 facility, const u8* scriptEndPtr)
{
    sTrainerBattleEndScript = (u8*)scriptEndPtr;

    switch (facility)
    {
    case FACILITY_BATTLE_PYRAMID:
        if (gApproachingTrainerId == 0)
        {
            SetMapVarsToTrainerA();
            TRAINER_BATTLE_PARAM.opponentA = LocalIdToPyramidTrainerId(gSpecialVar_LastTalked);
        }
        else
        {
            TRAINER_BATTLE_PARAM.opponentB = LocalIdToPyramidTrainerId(gSpecialVar_LastTalked);
        }
        return EventScript_TryDoNormalTrainerBattle;
    case FACILITY_BATTLE_TRAINER_HILL:
        if (gApproachingTrainerId == 0)
        {
            SetMapVarsToTrainerA();
            TRAINER_BATTLE_PARAM.opponentA = LocalIdToHillTrainerId(gSpecialVar_LastTalked);
        }
        else
        {
            TRAINER_BATTLE_PARAM.opponentB = LocalIdToHillTrainerId(gSpecialVar_LastTalked);
        }
        return EventScript_TryDoNormalTrainerBattle;
    default:
        return sTrainerBattleEndScript;
    }
}

void ConfigureAndSetUpOneTrainerBattle(u8 trainerObjEventId, const u8 *trainerScript)
{
    gSelectedObjectEvent = trainerObjEventId;
    gSpecialVar_LastTalked = gObjectEvents[trainerObjEventId].localId;
    TrainerBattleLoadArgs(trainerScript + 1);
    BattleSetup_ConfigureTrainerBattle(trainerScript + 1);
    ScriptContext_SetupScript(EventScript_StartTrainerApproach);
    LockPlayerFieldControls();
}

void ConfigureTwoTrainersBattle(u8 trainerObjEventId, const u8 *trainerScript)
{
    gSelectedObjectEvent = trainerObjEventId;
    gSpecialVar_LastTalked = gObjectEvents[trainerObjEventId].localId;

    if (gApproachingTrainerId == 0)
        TrainerBattleLoadArgs(trainerScript + 1);
    else
        TrainerBattleLoadArgsSecondTrainer(trainerScript + 1);

    BattleSetup_ConfigureTrainerBattle(trainerScript + 1);
}

void SetUpTwoTrainersBattle(void)
{
    ScriptContext_SetupScript(EventScript_StartTrainerApproach);
    LockPlayerFieldControls();
}

#define OPCODE_OFFSET 1
bool32 GetTrainerFlagFromScriptPointer(const u8 *data)
{
    TrainerBattleParameter *temp = (TrainerBattleParameter*)(data + OPCODE_OFFSET);
    return FlagGet(TRAINER_FLAGS_START + temp->params.opponentA);
}

bool32 GetRematchFromScriptPointer(const u8 *data)
{
#if FREE_MATCH_CALL
    return FALSE;
#else
    TrainerBattleParameter *temp = (TrainerBattleParameter*)(data + OPCODE_OFFSET);
    return ShouldTryRematchBattleForTrainerId(temp->params.opponentA);
#endif
}

#undef OPCODE_OFFSET

// Set trainer's movement type so they stop and remain facing that direction
// Note: Only for trainers who are spoken to directly
//       For trainers who spot the player this is handled by PlayerFaceApproachingTrainer
void SetTrainerFacingDirection(void)
{
    struct ObjectEvent *objectEvent = &gObjectEvents[gSelectedObjectEvent];
    SetTrainerMovementType(objectEvent, GetTrainerFacingDirectionMovementType(objectEvent->facingDirection));
}

u8 GetTrainerBattleMode(void)
{
    return TRAINER_BATTLE_PARAM.mode;
}

u8 GetRivalBattleFlags(void)
{
    return TRAINER_BATTLE_PARAM.rivalBattleFlags;
}

bool8 GetTrainerFlag(void)
{
    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE)
        return GetBattlePyramidTrainerFlag(gSelectedObjectEvent);
    else if (InTrainerHill())
        return GetHillTrainerFlag(gSelectedObjectEvent);
    else
        return FlagGet(GetTrainerAFlag());
}

static void SetBattledTrainersFlags(void)
{
    if (TRAINER_BATTLE_PARAM.opponentB != 0)
        FlagSet(GetTrainerBFlag());
    FlagSet(GetTrainerAFlag());
}

static void UNUSED SetBattledTrainerFlag(void)
{
    FlagSet(GetTrainerAFlag());
}

bool8 HasTrainerBeenFought(u16 trainerId)
{
    return FlagGet(TRAINER_FLAGS_START + trainerId);
}

void SetTrainerFlag(u16 trainerId)
{
    FlagSet(TRAINER_FLAGS_START + trainerId);
}

void ClearTrainerFlag(u16 trainerId)
{
    FlagClear(TRAINER_FLAGS_START + trainerId);
}

void BattleSetup_StartTrainerBattle(void)
{
    if (gNoOfApproachingTrainers == 2)
    {
        if (FollowerNPCIsBattlePartner())
            gBattleTypeFlags = (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_TRAINER);
        else
            gBattleTypeFlags = (BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_TRAINER);
    }
    else
    {
        if (FollowerNPCIsBattlePartner())
        {
            gBattleTypeFlags = (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TRAINER);
            TRAINER_BATTLE_PARAM.opponentB = 0xFFFF;
        }
        else
        {
            gBattleTypeFlags = (BATTLE_TYPE_TRAINER);
        }
    }

    if (GetTrainerBattleMode() == TRAINER_BATTLE_EARLY_RIVAL && GetRivalBattleFlags() & RIVAL_BATTLE_TUTORIAL)
        gBattleTypeFlags |= BATTLE_TYPE_FIRST_BATTLE;

    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE)
    {
        VarSet(VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0);
        gBattleTypeFlags |= BATTLE_TYPE_PYRAMID;

        if (gNoOfApproachingTrainers == 2)
        {
            FillFrontierTrainersParties(1);
            ZeroMonData(&gParties[B_TRAINER_OPPONENT_A][1]);
            ZeroMonData(&gParties[B_TRAINER_OPPONENT_A][2]);
            ZeroMonData(&gParties[B_TRAINER_OPPONENT_B][1]);
            ZeroMonData(&gParties[B_TRAINER_OPPONENT_B][2]);
        }
        else
        {
            FillFrontierTrainerParty(1);
            ZeroMonData(&gParties[B_TRAINER_OPPONENT_A][1]);
            ZeroMonData(&gParties[B_TRAINER_OPPONENT_A][2]);
        }

        MarkApproachingPyramidTrainersAsBattled();
    }
    else if (InTrainerHillChallenge())
    {
        gBattleTypeFlags |= BATTLE_TYPE_TRAINER_HILL;

        if (gNoOfApproachingTrainers == 2)
            FillHillTrainersParties();
        else
            FillHillTrainerParty();

        SetHillTrainerFlag();
    }
    else if (GetTrainerBattleType(TRAINER_BATTLE_PARAM.opponentA) == TRAINER_BATTLE_TYPE_DOUBLES)
    {
        gBattleTypeFlags |= BATTLE_TYPE_DOUBLE;
    }

    sNoOfPossibleTrainerRetScripts = gNoOfApproachingTrainers;
    gNoOfApproachingTrainers = 0;
    sShouldCheckTrainerBScript = FALSE;
    gWhichTrainerToFaceAfterBattle = 0;
    gMain.savedCallback = CB2_EndTrainerBattle;

    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE || InTrainerHillChallenge())
        DoBattlePyramidTrainerHillBattle();
    else
        DoTrainerBattle();

    ScriptContext_Stop();
}

static void CB2_EndDebugBattle(void)
{
    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
    {
        for (u32 i = 0; i < 3; i++)
        {
            u16 monId = gSaveBlock2Ptr->frontier.selectedPartyMons[i] - 1;
            if (monId < PARTY_SIZE)
                SavePlayerPartyMon(gSaveBlock2Ptr->frontier.selectedPartyMons[i] - 1, &gParties[B_TRAINER_PLAYER][i]);
        }
        LoadPlayerParty();
    }
    SetMainCallback2(CB2_EndTrainerBattle);
}

void BattleSetup_StartTrainerBattle_Debug(void)
{
    sNoOfPossibleTrainerRetScripts = gNoOfApproachingTrainers;
    gNoOfApproachingTrainers = 0;
    sShouldCheckTrainerBScript = FALSE;
    gWhichTrainerToFaceAfterBattle = 0;
    gMain.savedCallback = CB2_EndDebugBattle;

    CreateBattleStartTask_Debug(GetWildBattleTransition(), 0);

    ScriptContext_Stop();
}

static void SaveChangesToPlayerParty(void)
{
    u8 i = 0, j = 0;
    u8 participatedPokemon = VarGet(B_VAR_SKY_BATTLE);
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if ((participatedPokemon >> i & 1) == 1)
        {
            SavePlayerPartyMon(i, &gParties[B_TRAINER_PLAYER][j]);
            j++;
        }
    }
}

static void HandleBattleVariantEndParty(void)
{
    if (B_FLAG_SKY_BATTLE == 0 || !FlagGet(B_FLAG_SKY_BATTLE))
        return;
    SaveChangesToPlayerParty();
    LoadPlayerParty();
    FlagClear(B_FLAG_SKY_BATTLE);
}

static void CB2_EndTrainerBattle(void)
{
    HandleBattleVariantEndParty();

    gIsDebugBattle = FALSE;
    if (FollowerNPCIsBattlePartner())
    {
        RestorePartyAfterFollowerNPCBattle();
        if (FNPC_FLAG_HEAL_AFTER_FOLLOWER_BATTLE != 0
         && (FNPC_FLAG_HEAL_AFTER_FOLLOWER_BATTLE == FNPC_ALWAYS
         || FlagGet(FNPC_FLAG_HEAL_AFTER_FOLLOWER_BATTLE)))
            HealPlayerParty();
    }

    if (GetTrainerBattleMode() == TRAINER_BATTLE_EARLY_RIVAL)
    {
        if (IsPlayerDefeated(gBattleOutcome) == TRUE)
        {
            gSpecialVar_Result = TRUE;
            if (GetRivalBattleFlags() & RIVAL_BATTLE_HEAL_AFTER)
            {
                HealPlayerParty();
            }
            else
            {
                SetMainCallback2(CB2_WhiteOut);
                return;
            }
        }
        else
        {
            gSpecialVar_Result = FALSE;
        }
        DowngradeBadPoison();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        SetBattledTrainerFlag();
    }
    else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_SECRET_BASE)
    {
        DowngradeBadPoison();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
    else if (DidPlayerForfeitNormalTrainerBattle())
    {
        if (FlagGet(B_FLAG_NO_WHITEOUT) || CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE || InTrainerHillChallenge())
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        else
            SetMainCallback2(CB2_WhiteOut);
    }
    else if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE || InTrainerHillChallenge() || (!NoAliveMonsForPlayer()) || FlagGet(B_FLAG_NO_WHITEOUT))
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        else
            SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        DowngradeBadPoison();
        if (CurrentBattlePyramidLocation() == PYRAMID_LOCATION_NONE && !InTrainerHillChallenge())
        {
            RegisterTrainerInMatchCall();
            SetBattledTrainersFlags();
        }
    }
}

static void CB2_EndRematchBattle(void)
{
    if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_SECRET_BASE)
    {
        DowngradeBadPoison();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
    else if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        RegisterTrainerInMatchCall();
        SetBattledTrainersFlags();
        HandleRematchVarsOnBattleEnd();
        DowngradeBadPoison();
    }
}

void BattleSetup_StartRematchBattle(void)
{
    gBattleTypeFlags = BATTLE_TYPE_TRAINER;
    if (GetTrainerBattleType(TRAINER_BATTLE_PARAM.opponentA) == TRAINER_BATTLE_TYPE_DOUBLES)
        gBattleTypeFlags |= BATTLE_TYPE_DOUBLE;
    
    gMain.savedCallback = CB2_EndRematchBattle;
    DoTrainerBattle();
    ScriptContext_Stop();
}

void ShowTrainerIntroSpeech(void)
{
    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE)
    {
        if (gNoOfApproachingTrainers == 0 || gNoOfApproachingTrainers == 1)
            CopyPyramidTrainerSpeechBefore(LocalIdToPyramidTrainerId(gSpecialVar_LastTalked));
        else
            CopyPyramidTrainerSpeechBefore(LocalIdToPyramidTrainerId(gObjectEvents[gApproachingTrainers[gApproachingTrainerId].objectEventId].localId));

        ShowFieldMessageFromBuffer();
    }
    else if (InTrainerHillChallenge())
    {
        if (gNoOfApproachingTrainers == 0 || gNoOfApproachingTrainers == 1)
            CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_INTRO, LocalIdToHillTrainerId(gSpecialVar_LastTalked));
        else
            CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_INTRO, LocalIdToHillTrainerId(gObjectEvents[gApproachingTrainers[gApproachingTrainerId].objectEventId].localId));

        ShowFieldMessageFromBuffer();
    }
    else
    {
        ShowFieldMessage(GetIntroSpeechOfApproachingTrainer());
    }
}

const u8 *BattleSetup_GetScriptAddrAfterBattle(void)
{
    if (sTrainerBattleEndScript != NULL)
        return sTrainerBattleEndScript;
    else
        return EventScript_TestSignpostMsg;
}

const u8 *BattleSetup_GetTrainerPostBattleScript(void)
{
    if (sShouldCheckTrainerBScript)
    {
        sShouldCheckTrainerBScript = FALSE;
        if (TRAINER_BATTLE_PARAM.battleScriptRetAddrB != NULL)
        {
            gWhichTrainerToFaceAfterBattle = 1;
            return TRAINER_BATTLE_PARAM.battleScriptRetAddrB;
        }
    }
    else
    {
        if (TRAINER_BATTLE_PARAM.battleScriptRetAddrA != NULL)
        {
            gWhichTrainerToFaceAfterBattle = 0;
            return TRAINER_BATTLE_PARAM.battleScriptRetAddrA;
        }
    }

    return EventScript_TryGetTrainerScript;
}

void ShowTrainerCantBattleSpeech(void)
{
    ShowFieldMessage(GetTrainerCantBattleSpeech());
}

void PlayTrainerEncounterMusic(void)
{
    if (FlagGet(FLAG_SYS_DONT_TRANSITION_BATTLE_MUSIC))
        return;
    
    u16 trainerId;
    u16 music;

    if (gApproachingTrainerId == 0)
        trainerId = TRAINER_BATTLE_PARAM.opponentA;
    else
        trainerId = TRAINER_BATTLE_PARAM.opponentB;

    if (TRAINER_BATTLE_PARAM.mode != TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC
        && TRAINER_BATTLE_PARAM.mode != TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC)
    {
        switch (GetTrainerEncounterMusicId(trainerId))
        {
        case TRAINER_ENCOUNTER_MUSIC_MALE:
            music = MUS_ENCOUNTER_MALE;
            break;
        case TRAINER_ENCOUNTER_MUSIC_FEMALE:
            music = MUS_ENCOUNTER_FEMALE;
            break;
        case TRAINER_ENCOUNTER_MUSIC_GIRL:
            music = MUS_ENCOUNTER_GIRL;
            break;
        case TRAINER_ENCOUNTER_MUSIC_INTENSE:
            music = MUS_ENCOUNTER_INTENSE;
            break;
        case TRAINER_ENCOUNTER_MUSIC_COOL:
            music = MUS_ENCOUNTER_COOL;
            break;
        case TRAINER_ENCOUNTER_MUSIC_AQUA:
            music = MUS_ENCOUNTER_AQUA;
            break;
        case TRAINER_ENCOUNTER_MUSIC_MAGMA:
            music = MUS_ENCOUNTER_MAGMA;
            break;
        case TRAINER_ENCOUNTER_MUSIC_SWIMMER:
            music = MUS_ENCOUNTER_SWIMMER;
            break;
        case TRAINER_ENCOUNTER_MUSIC_TWINS:
            music = MUS_ENCOUNTER_TWINS;
            break;
        case TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR:
            music = MUS_ENCOUNTER_ELITE_FOUR;
            break;
        case TRAINER_ENCOUNTER_MUSIC_HIKER:
            music = MUS_ENCOUNTER_HIKER;
            break;
        case TRAINER_ENCOUNTER_MUSIC_INTERVIEWER:
            music = MUS_ENCOUNTER_INTERVIEWER;
            break;
        case TRAINER_ENCOUNTER_MUSIC_RICH:
            music = MUS_ENCOUNTER_RICH;
            break;
        default:
            music = MUS_ENCOUNTER_SUSPICIOUS;
        }
        PlayNewMapMusic(music);
    }
}

static const u8 *ReturnEmptyStringIfNull(const u8 *string)
{
    if (string == NULL)
        return gText_EmptyString2;
    else
        return string;
}

static const u8 *GetIntroSpeechOfApproachingTrainer(void)
{
    if (gApproachingTrainerId == 0)
    {
        if (OW_NAME_BOX_NPC_TRAINER)
            gSpeakerName = GetTrainerNameFromId(TRAINER_BATTLE_PARAM.opponentA);

        return ReturnEmptyStringIfNull(TRAINER_BATTLE_PARAM.introTextA);
    }
    else
    {
        if (OW_NAME_BOX_NPC_TRAINER)
            gSpeakerName = GetTrainerNameFromId(TRAINER_BATTLE_PARAM.opponentB);

        return ReturnEmptyStringIfNull(TRAINER_BATTLE_PARAM.introTextB);
    }
}

const u8 *GetTrainerALoseText(void)
{
    const u8 *string;

    if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_SECRET_BASE)
        string = GetSecretBaseTrainerLoseText();
    else
        string = TRAINER_BATTLE_PARAM.defeatTextA;

    StringExpandPlaceholders(gStringVar4, ReturnEmptyStringIfNull(string));
    return gStringVar4;
}

const u8 *GetTrainerBLoseText(void)
{
    StringExpandPlaceholders(gStringVar4, ReturnEmptyStringIfNull(TRAINER_BATTLE_PARAM.defeatTextB));
    return gStringVar4;
}

const u8 *GetTrainerWonSpeech(void)
{
    StringExpandPlaceholders(gStringVar4, ReturnEmptyStringIfNull(TRAINER_BATTLE_PARAM.victoryText));
    return gStringVar4;
}

static const u8 *GetTrainerCantBattleSpeech(void)
{
    return ReturnEmptyStringIfNull(TRAINER_BATTLE_PARAM.cannotBattleText);
}

s32 FirstBattleTrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (table[i].trainerIds[0] == trainerId)
            return i;
    }

    return -1;
}

s32 TrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId)
{
    s32 i, j;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        for (j = 0; j < REMATCHES_COUNT; j++)
        {
            if (table[i].trainerIds[j] == 0) break; // one line required to match -g
            if (table[i].trainerIds[j] == trainerId)
                return i;
        }
    }

    return -1;
}

// Returns TRUE if the given trainer (by their entry in the rematch table) is not allowed to have rematches.
// This applies to the Elite Four and Victory Road Wally (if he's not been defeated yet)
static inline bool32 IsRematchForbidden(s32 rematchTableId)
{
    if (rematchTableId >= REMATCH_ELITE_FOUR_ENTRIES)
        return TRUE;
    else if (rematchTableId == REMATCH_WALLY_VR)
        return !FlagGet(FLAG_DEFEATED_WALLY_VICTORY_ROAD);
    else
        return FALSE;
}

static void SetRematchIdForTrainer(const struct RematchTrainer *table, u32 tableId)
{
#if FREE_MATCH_CALL == FALSE
    s32 i;

    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        u16 trainerId = table[tableId].trainerIds[i];

        if (trainerId == 0)
            break;
        if (!HasTrainerBeenFought(trainerId))
            break;
    }

    gSaveBlock1Ptr->trainerRematches[tableId] = i;
#endif //FREE_MATCH_CALL
}

static inline bool32 DoesCurrentMapMatchRematchTrainerMap(s32 i, const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
    return table[i].mapGroup == mapGroup && table[i].mapNum == mapNum;
}

bool32 TrainerIsMatchCallRegistered(s32 i)
{
    return FlagGet(TRAINER_REGISTERED_FLAGS_START + i);
}

#if FREE_MATCH_CALL == FALSE
static bool32 UpdateRandomTrainerRematches(const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
    s32 i;

    if (CheckBagHasItem(ITEM_VS_SEEKER, 1) && I_VS_SEEKER_CHARGING != 0)
        return FALSE;

    for (i = 0; i < REMATCH_SPECIAL_TRAINER_START; i++)
    {
        if (!DoesCurrentMapMatchRematchTrainerMap(i,table,mapGroup,mapNum) || IsRematchForbidden(i))
            continue; // Only check permitted trainers within the current map.

        if (gSaveBlock1Ptr->trainerRematches[i] != 0)
        {
            // Trainer already wants a rematch. Don't bother updating it.
            return TRUE;
        }
        else if (TrainerIsMatchCallRegistered(i) && ((Random() % 100) <= 30))
            // 31% chance of getting a rematch.
        {
            SetRematchIdForTrainer(table, i);
            return TRUE;
        }
    }

    return FALSE;
}
#endif //FREE_MATCH_CALL

void UpdateRematchIfDefeated(s32 rematchTableId)
{
    if (HasTrainerBeenFought(gRematchTable[rematchTableId].trainerIds[0]) == TRUE)
        SetRematchIdForTrainer(gRematchTable, rematchTableId);
}

static bool32 DoesSomeoneWantRematchIn_(const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
#if FREE_MATCH_CALL == FALSE
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (table[i].mapGroup == mapGroup && table[i].mapNum == mapNum && gSaveBlock1Ptr->trainerRematches[i] != 0)
            return TRUE;
    }
#endif //FREE_MATCH_CALL

    return FALSE;
}

static bool32 IsRematchTrainerIn_(const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (table[i].mapGroup == mapGroup && table[i].mapNum == mapNum)
            return TRUE;
    }

    return FALSE;
}

static bool8 IsFirstTrainerIdReadyForRematch(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;
    if (tableId >= MAX_REMATCH_ENTRIES)
        return FALSE;
#if FREE_MATCH_CALL == FALSE
    if (gSaveBlock1Ptr->trainerRematches[tableId] == 0)
        return FALSE;
#endif //FREE_MATCH_CALL

    return TRUE;
}

static bool8 IsTrainerReadyForRematch_(const struct RematchTrainer *table, u16 trainerId)
{
    s32 tableId = TrainerIdToRematchTableId(table, trainerId);

    if (tableId == -1)
        return FALSE;
    if (tableId >= MAX_REMATCH_ENTRIES)
        return FALSE;
#if FREE_MATCH_CALL == FALSE
    if (gSaveBlock1Ptr->trainerRematches[tableId] == 0)
        return FALSE;
#endif //FREE_MATCH_CALL

    return TRUE;
}

u16 GetRematchTrainerIdFromTable(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    const struct RematchTrainer *trainerEntry;
    s32 i;
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;

    trainerEntry = &table[tableId];
    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        if (trainerEntry->trainerIds[i] == 0) // previous entry was this trainer's last one
            return trainerEntry->trainerIds[i - 1];
        if (!HasTrainerBeenFought(trainerEntry->trainerIds[i]))
            return trainerEntry->trainerIds[i];
    }

    return trainerEntry->trainerIds[REMATCHES_COUNT - 1]; // already beaten at max stage
}

static u16 GetLastBeatenRematchTrainerIdFromTable(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    const struct RematchTrainer *trainerEntry;
    s32 i;
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;

    trainerEntry = &table[tableId];
    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        if (trainerEntry->trainerIds[i] == 0) // previous entry was this trainer's last one
            return trainerEntry->trainerIds[i - 1];
        if (!HasTrainerBeenFought(trainerEntry->trainerIds[i]))
            return trainerEntry->trainerIds[i - 1];
    }

    return trainerEntry->trainerIds[REMATCHES_COUNT - 1]; // already beaten at max stage
}

static void ClearTrainerWantRematchState(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
#if FREE_MATCH_CALL == FALSE
    s32 tableId = TrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId != -1)
        gSaveBlock1Ptr->trainerRematches[tableId] = 0;
#endif //FREE_MATCH_CALL
}

void ClearCurrentTrainerWantRematchVsSeeker(void)
{
#if FREE_MATCH_CALL == FALSE
    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER) && FlagGet(I_VS_SEEKER_CHARGING) && (I_VS_SEEKER_CHARGING != 0))
    {
        for (u32 i = 0; i < REMATCH_TABLE_ENTRIES; i++)
        {
            if (gSaveBlock1Ptr->trainerRematches[i] == TRAINER_BATTLE_PARAM.opponentA)
                gSaveBlock1Ptr->trainerRematches[i] = 0;
        }
    }
#endif //FREE_MATCH_CALL
}

static u32 GetTrainerMatchCallFlag(u32 trainerId)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (gRematchTable[i].trainerIds[0] == trainerId)
            return TRAINER_REGISTERED_FLAGS_START + i;
    }

    return 0xFFFF;
}

static void RegisterTrainerInMatchCall(void)
{
    if (FlagGet(FLAG_HAS_MATCH_CALL))
    {
        u32 matchCallFlagId = GetTrainerMatchCallFlag(TRAINER_BATTLE_PARAM.opponentA);
        if (matchCallFlagId != 0xFFFF)
            FlagSet(matchCallFlagId);
    }
}

static bool8 WasSecondRematchWon(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;
    if (!HasTrainerBeenFought(table[tableId].trainerIds[1]))
        return FALSE;
#if FREE_MATCH_CALL == FALSE
    if (I_VS_SEEKER_CHARGING)
    {
        if (gSaveBlock1Ptr->trainerRematches[tableId] == 0)
            return FALSE;
    }
#endif
    return TRUE;
}

#if FREE_MATCH_CALL == FALSE
static bool32 HasEnoughBadgesForRematch(void)
{
    s32 i, count;

    for (count = 0, i = 0; i < ARRAY_COUNT(gBadgeFlags); i++)
    {
        if (FlagGet(gBadgeFlags[i]) == TRUE)
        {
            if (++count >= OW_REMATCH_BADGE_COUNT)
                return TRUE;
        }
    }

    return FALSE;
}
#endif //FREE_MATCH_CALL

#define STEP_COUNTER_MAX 255

void IncrementRematchStepCounter(void)
{
#if FREE_MATCH_CALL == FALSE
    if (!HasEnoughBadgesForRematch())
        return;

    if (IsVsSeekerEnabled())
        return;

    if (gSaveBlock1Ptr->trainerRematchStepCounter >= STEP_COUNTER_MAX)
        gSaveBlock1Ptr->trainerRematchStepCounter = STEP_COUNTER_MAX;
    else
        gSaveBlock1Ptr->trainerRematchStepCounter++;
#endif //FREE_MATCH_CALL
}

#if FREE_MATCH_CALL == FALSE
static bool32 IsRematchStepCounterMaxed(void)
{
    if (HasEnoughBadgesForRematch() && gSaveBlock1Ptr->trainerRematchStepCounter >= STEP_COUNTER_MAX)
        return TRUE;
    else
        return FALSE;
}

void TryUpdateRandomTrainerRematches(u16 mapGroup, u16 mapNum)
{
    if (IsRematchStepCounterMaxed() && UpdateRandomTrainerRematches(gRematchTable, mapGroup, mapNum) == TRUE)
        gSaveBlock1Ptr->trainerRematchStepCounter = 0;
}
#endif //FREE_MATCH_CALL

bool32 DoesSomeoneWantRematchIn(u16 mapGroup, u16 mapNum)
{
    return DoesSomeoneWantRematchIn_(gRematchTable, mapGroup, mapNum);
}

bool32 IsRematchTrainerIn(u16 mapGroup, u16 mapNum)
{
    return IsRematchTrainerIn_(gRematchTable, mapGroup, mapNum);
}

#if FREE_MATCH_CALL == FALSE
static u16 GetRematchTrainerId(u16 trainerId)
{
    if (FlagGet(I_VS_SEEKER_CHARGING) && (I_VS_SEEKER_CHARGING != 0))
        return GetRematchTrainerIdVSSeeker(trainerId);
    else
        return GetRematchTrainerIdFromTable(gRematchTable, trainerId);
}
#endif //FREE_MATCH_CALL

u16 GetLastBeatenRematchTrainerId(u16 trainerId)
{
    return GetLastBeatenRematchTrainerIdFromTable(gRematchTable, trainerId);
}

bool8 ShouldTryRematchBattle(void)
{
    return ShouldTryRematchBattleForTrainerId(TRAINER_BATTLE_PARAM.opponentA);
}

bool8 ShouldTryRematchBattleForTrainerId(u16 trainerId)
{
    if (IsFirstTrainerIdReadyForRematch(gRematchTable, trainerId))
        return TRUE;

    return WasSecondRematchWon(gRematchTable, trainerId);
}

bool8 IsTrainerReadyForRematch(void)
{
    return IsTrainerReadyForRematch_(gRematchTable, TRAINER_BATTLE_PARAM.opponentA);
}

static void HandleRematchVarsOnBattleEnd(void)
{
    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER) && (I_VS_SEEKER_CHARGING != 0))
        ClearRematchMovementByTrainerId();

    ClearTrainerWantRematchState(gRematchTable, TRAINER_BATTLE_PARAM.opponentA);
    SetBattledTrainersFlags();
}

void ShouldTryGetTrainerScript(void)
{
    if (sNoOfPossibleTrainerRetScripts > 1)
    {
        sNoOfPossibleTrainerRetScripts = 0;
        sShouldCheckTrainerBScript = TRUE;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        sShouldCheckTrainerBScript = FALSE;
        gSpecialVar_Result = FALSE;
    }
}

u16 CountMaxPossibleRematch(u16 trainerId)
{
    for (u32 i = 1; i < REMATCHES_COUNT; i++)
    {
        if (gRematchTable[trainerId].trainerIds[i] == 0)
            return i;
    }
    return REMATCHES_COUNT - 1;
}

u16 CountBattledRematchTeams(u16 trainerId)
{
    if (HasTrainerBeenFought(gRematchTable[trainerId].trainerIds[0]) != TRUE)
        return 0;

    for (u32 i = 1; i < REMATCHES_COUNT; i++)
    {
        if (gRematchTable[trainerId].trainerIds[i] == 0)
            return i;
        if (!HasTrainerBeenFought(gRematchTable[trainerId].trainerIds[i]))
            return i;
    }

    return REMATCHES_COUNT - 1;
}

void SetMultiTrainerBattle(struct ScriptContext *ctx)
{
    InitTrainerBattleParameter();

    TRAINER_BATTLE_PARAM.opponentA = ScriptReadHalfword(ctx);
    TRAINER_BATTLE_PARAM.defeatTextA = (u8*)ScriptReadWord(ctx);
    TRAINER_BATTLE_PARAM.opponentB = ScriptReadHalfword(ctx);
    TRAINER_BATTLE_PARAM.defeatTextB = (u8*)ScriptReadWord(ctx);
    gPartnerTrainerId = TRAINER_PARTNER(ScriptReadHalfword(ctx));
};
