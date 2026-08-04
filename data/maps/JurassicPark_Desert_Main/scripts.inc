JurassicPark_Desert_Main_MapScripts::
	.byte 0


JurassicPark_Desert_Main_EventScript_WarpToLastPosition::
# 4 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	playse SE_DOWNPOUR
# 5 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8004, 1
# 6 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8005, 1
# 7 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8006, 20
# 8 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8007, 5
# 9 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	special ShakeCamera
# 10 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitstate
# 11 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 12 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	callnative CreateCradilyToGetYa
# 13 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	callnative DoOWESpawnAnim_Cradily
# 14 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	facetogether LOCALID_PLAYER, LOCALID_CRADILY
# 15 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_WarpToLastPosition_Text_0, localId = LOCALID_CRADILY
# 16 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_DESERT_MAIN, VAR_NON_QUICKSAND_X, VAR_NON_QUICKSAND_Y
# 17 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitstate
	return


JurassicPark_Desert_Main_EventScript_WarpToLastPosition_Text_0:
# 15 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Who are you?\n{PAUSE 40}Get out of my sandpit!$"
