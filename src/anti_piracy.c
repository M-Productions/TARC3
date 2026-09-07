#include "gba/defines.h"
#include "gba/isagbprint.h"
#include "global.h"
#include "main.h"
#include "bg.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "menu_helpers.h"
#include "menu.h"
#include "palette.h"
#include "scanline_effect.h"
#include "text.h"
#include "window.h"
#include "constants/characters.h"
#include "constants/flags.h"
#include "constants/rgb.h"

#define ANTI_PIRACY_SCREEN_ENABLED TRUE

#define tPrintState data[0]
#define tDelayTimer data[1]

#define WIN_TEXT    0

enum {
    ANTI_PIRACY_INITIALIZE = 202, // +1 Highest gMain.state value used in Emerald or FRLG Copyright Sequence
    ANTI_PIRACY_RESET,
    ANTI_PIRACY_LOAD_BACKGROUND,
    ANTI_PIRACY_LOAD_PALETTE,
    ANTI_PIRACY_LOAD_WINDOW,
    ANTI_PIRACY_START_TASK,
    ANTI_PIRACY_START_FADE,
    ANTI_PIRACY_CHECK_COMPLETE
};

static bool32 AntiPiracy_ShouldRun(void);
static bool32 IsAntiPiracyScreenActive(void);
static bool32 Task_AntiPiracyTimer(u8 taskId);
static void Task_AntiPiracyWaitFadeAndDraw(u8 taskId);
static void Task_AntiPiracyWaitFadeAndEnd(u8 taskId);
static void VBlankCB_AntiPiracy(void);

static const struct BgTemplate sAntiPiracyBgTemplate =
{
    .bg = 0,
    .charBaseIndex = 0,
    .mapBaseIndex = 31,
    .priority = 1
};

static const struct WindowTemplate sAntiPiracyWindowTemplates[] =
{
    [WIN_TEXT] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 30,
        .height = 17,
        .paletteNum = 0,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};

#define RGB_HM_ORANGE           RGB2GBA(248, 136, 32)
#define RGB_HM_BLUE             RGB2GBA(56,  96,  152)
#define RGB_HM_NAVY             RGB2GBA(40,  64,  80)

#define RGB_HEX(hex)     (((hex >> 19) & 0x1F) | (((hex >> 11) & 0x1F) << 5) | (((hex >> 3) & 0x1F) << 10))
#define RGB_SELENIC_PINK        RGB_HEX(0xde9eda)
#define RGB_SELENIC_PURPLE      RGB_HEX(0x572e70)
#define RGB_SELENIC_GOLD        RGB_HEX(0xdec06a)
#define RGB_SELENIC_LILAC       RGB_HEX(0xeef0ff)
#define RGB_SELENIC_NAVY        RGB_HEX(0x626791)

static const u16 sAntiPiracyTextPalette[] =
{
    [TEXT_COLOR_TRANSPARENT]    = RGB_BLACK,
    [TEXT_COLOR_WHITE]          = RGB_WHITE,
    [TEXT_DYNAMIC_COLOR_1]      = RGB_HM_ORANGE,
    [TEXT_DYNAMIC_COLOR_2]      = RGB_HM_BLUE,
    [TEXT_DYNAMIC_COLOR_3]      = RGB_SELENIC_PINK,
    [TEXT_DYNAMIC_COLOR_4]      = RGB_SELENIC_PURPLE,
    [TEXT_DYNAMIC_COLOR_5]      = RGB_SELENIC_GOLD,
    [TEXT_DYNAMIC_COLOR_6]      = RGB_SELENIC_NAVY,
};

static const u8 sText_AntiPiracy[] = _(
    "Welcome to {SHADOW DYNAMIC_COLOR2}Jurassic PokéPark{SHADOW DYNAMIC_COLOR1}!\n"
    "\n"
    "{PAUSE 60}"
    "It is a {SHADOW DYNAMIC_COLOR5}free{SHADOW DYNAMIC_COLOR1}, fan-made {SHADOW DYNAMIC_COLOR6}ROM Hack{SHADOW DYNAMIC_COLOR1},\n"
    "so it should {SHADOW DYNAMIC_COLOR5}NEVER{SHADOW DYNAMIC_COLOR1} be {SHADOW DYNAMIC_COLOR5}sold{SHADOW DYNAMIC_COLOR1} or {SHADOW DYNAMIC_COLOR5}paid{SHADOW DYNAMIC_COLOR1} for.\n"
    "\n"
    "{PAUSE 60}"
    "{COLOR DYNAMIC_COLOR3}{SHADOW DYNAMIC_COLOR4}Inspired{COLOR WHITE}{SHADOW DYNAMIC_COLOR1} by {SHADOW DYNAMIC_COLOR2}Bivurnum{SHADOW DYNAMIC_COLOR1},\n"
    "{PAUSE 60}"
    "{COLOR DYNAMIC_COLOR3}{SHADOW DYNAMIC_COLOR4}Made with love{COLOR WHITE}{SHADOW DYNAMIC_COLOR1} by {SHADOW DYNAMIC_COLOR2}Marky{SHADOW DYNAMIC_COLOR1} & {SHADOW DYNAMIC_COLOR2}Nico{SHADOW DYNAMIC_COLOR1},\n"
    "\n"
    "{PAUSE 60}"
    "{SHADOW DYNAMIC_COLOR2}Happy TARC!"

    // Keeps message on screen until button press.
    "{PAUSE 60}{PAUSE_UNTIL_PRESS}"
);

bool32 AntiPiracyScreen(void)
{
    u32 taskId;

    if (!AntiPiracy_ShouldRun())
        return FALSE;

    switch (gMain.state)
    {
    case ANTI_PIRACY_INITIALIZE:
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        SetGpuReg(REG_OFFSET_BG3CNT, 0);
        SetGpuReg(REG_OFFSET_BG2CNT, 0);
        SetGpuReg(REG_OFFSET_BG1CNT, 0);
        SetGpuReg(REG_OFFSET_BG0CNT, 0);
        ChangeBgX(0, 0, BG_COORD_SET);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgX(1, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        ChangeBgX(2, 0, BG_COORD_SET);
        ChangeBgY(2, 0, BG_COORD_SET);
        ChangeBgX(3, 0, BG_COORD_SET);
        ChangeBgY(3, 0, BG_COORD_SET);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WIN1H, 0);
        SetGpuReg(REG_OFFSET_WIN1V, 0);
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        CpuFill16(0, (void *)VRAM, VRAM_SIZE);
        CpuFill32(0, (void *)OAM, OAM_SIZE);
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case ANTI_PIRACY_RESET:
        ScanlineEffect_Stop();
        ResetPaletteFade();
        ResetTasks();
        gMain.state++;
        break;
    case ANTI_PIRACY_LOAD_BACKGROUND:
        ResetAllBgsCoordinates();
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgFromTemplate(&sAntiPiracyBgTemplate);
        ShowBg(0);
        gMain.state++;
        break;
    case ANTI_PIRACY_LOAD_PALETTE:
        LoadPalette(sAntiPiracyTextPalette, BG_PLTT_ID(0), sizeof(sAntiPiracyTextPalette));
        BlendPalettes(PALETTES_ALL, 16, RGB_WHITE);
        SetVBlankCallback(VBlankCB_AntiPiracy);
        gMain.state++;
        break;
    case ANTI_PIRACY_LOAD_WINDOW:
        InitWindows(sAntiPiracyWindowTemplates);
        DeactivateAllTextPrinters();
        ScheduleBgCopyTilemapToVram(0);
        FillWindowPixelBuffer(WIN_TEXT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
        PutWindowTilemap(WIN_TEXT);
        CopyWindowToVram(WIN_TEXT, COPYWIN_FULL);
        gMain.state++;
        break;
    case ANTI_PIRACY_START_TASK:
        taskId = CreateTask(Task_AntiPiracyWaitFadeAndDraw, 0);
        gTasks[taskId].tPrintState = 0;
        gTasks[taskId].tDelayTimer = 30;
        gMain.state++;
        break;
    case ANTI_PIRACY_START_FADE:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_WHITEALPHA);
        gMain.state++;
        break;
    case ANTI_PIRACY_CHECK_COMPLETE:
        RunTasks();
        UpdatePaletteFade();
        DoScheduledBgTilemapCopiesToVram();
        if (!IsAntiPiracyScreenActive())
            return FALSE;
        break;
    }

    return TRUE;
}

static bool32 AntiPiracy_ShouldRun(void)
{
    if (!ANTI_PIRACY_SCREEN_ENABLED)
        return FALSE;

    if (gMain.state == 0)
    {
        gMain.state = ANTI_PIRACY_INITIALIZE;
        return TRUE;
    }

    if (gMain.state < ANTI_PIRACY_INITIALIZE)
        return FALSE;

    return TRUE;
}

static bool32 IsAntiPiracyScreenActive(void)
{
    if (FuncIsActiveTask(Task_AntiPiracyWaitFadeAndDraw))
        return TRUE;

    if (FuncIsActiveTask(Task_AntiPiracyWaitFadeAndEnd))
        return TRUE;

    return FALSE;
}

static bool32 Task_AntiPiracyTimer(u8 taskId)
{
    if (gTasks[taskId].tDelayTimer)
    {
        gTasks[taskId].tDelayTimer--;
        return FALSE;
    }

    return TRUE;
}

static void Task_AntiPiracyWaitFadeAndDraw(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    if (!Task_AntiPiracyTimer(taskId))
        return;

    if (JOY_NEW(A_BUTTON))
        FlagSet(FLAG_ANTI_PIRACY_INSTANT_TEXT);

    u8 color[3] = {
        TEXT_COLOR_TRANSPARENT,
        TEXT_COLOR_WHITE,
        TEXT_DYNAMIC_COLOR_1
    };

    switch (gTasks[taskId].tPrintState)
    {
    case 0:
        AddTextPrinterParameterized4(WIN_TEXT, FONT_SHORT, 10, 5, 1, 0, color, 1, sText_AntiPiracy);
        gTextFlags.canABSpeedUpPrint = FALSE;
        gTasks[taskId].tPrintState = 1;
        break;
    case 1:
        RunTextPrinters();
        CopyWindowToVram(WIN_TEXT, COPYWIN_GFX);
        if (!IsTextPrinterActiveOnWindow(WIN_TEXT))
        {
            FlagClear(FLAG_ANTI_PIRACY_INSTANT_TEXT);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_WHITE);
            gTasks[taskId].tPrintState = 0;
            gTasks[taskId].tDelayTimer = 30;
            gTasks[taskId].func = Task_AntiPiracyWaitFadeAndEnd;
            return;
        }
        break;
    }
}

static void Task_AntiPiracyWaitFadeAndEnd(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    if (!Task_AntiPiracyTimer(taskId))
        return;

    gMain.state = 0;
    ClearWindowTilemap(WIN_TEXT);
    CopyWindowToVram(WIN_TEXT, COPYWIN_MAP);
    RemoveWindow(WIN_TEXT);
    FreeAllWindowBuffers();
    DestroyTask(taskId);
}

#undef tPrintState
#undef tDelayTimer

static void VBlankCB_AntiPiracy(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

#undef WIN_TEXT
