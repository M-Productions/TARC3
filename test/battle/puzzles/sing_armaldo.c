#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_SING) == EFFECT_SING_ARMALDO);
}

SINGLE_BATTLE_TEST("Sing puts the target to sleep on the second turn if uninterrupted")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SING); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SING, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SING, player);
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sing is interrupted if the user takes damage during the first turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SING); MOVE(opponent, MOVE_SCRATCH); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SING, player);
        HP_BAR(player);
        MESSAGE("Wobbuffet lost its place in the song!");
    } THEN {
        EXPECT_EQ(opponent->status1 & STATUS1_SLEEP, 0);
    }
}
