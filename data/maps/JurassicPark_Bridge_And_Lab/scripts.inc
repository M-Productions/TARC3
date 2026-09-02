JurassicPark_Bridge_And_Lab_MapScripts::
# 2 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD
# 83 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	goto_if_set FLAG_HIDE_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 14, METATILE_Forest_Primary_TopRightCornerRock, FALSE
# 5 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 15, METATILE_Forest_Primary_FloorRock, FALSE
# 6 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 16, METATILE_Forest_Primary_FloorRock, FALSE
# 7 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 17, METATILE_Forest_Primary_FloorRock, FALSE
# 9 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 14, METATILE_Secret_Lab_Secondary_TopRightRockWater, TRUE
# 10 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 15, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 11 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 16, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 12 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 17, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 14 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 15 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 16 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 17 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 19 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 20 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 21 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 22 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 24 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 25 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 26 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 27 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 29 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 30 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 31 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 32 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 34 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 35 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 36 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 37 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 39 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 40 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 41 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 42 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 44 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 45 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 46 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 47 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 50 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 51 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 52 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 53 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 55 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 56 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 57 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 58 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 17, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 60 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 61 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 62 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 16, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 63 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 65 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 66 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 15, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 67 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 68 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 70 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 14, METATILE_Forest_Primary_LeftRock, TRUE
# 71 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 15, METATILE_Forest_Primary_LeftRock, TRUE
# 72 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 73 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 75 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 14, METATILE_Forest_Primary_FloorRock, TRUE
# 76 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 15, METATILE_Forest_Primary_FloorRock, TRUE
# 77 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 16, METATILE_Forest_Primary_FloorRock, TRUE
# 78 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 17, METATILE_Forest_Primary_FloorRock, TRUE
# 79 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
	return

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 85 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	compare VAR_GAME_STATE, GS_POST_THREE_GENERATORS
	goto_if_eq JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 112 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	compare VAR_GAME_STATE, GS_TYRANTRUM_DEFEATED
	goto_if_eq JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 87 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPCS
# 88 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_FIRST_SAVED
# 91 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 95 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 99 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 104 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 4, 7
# 105 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 6, 10
# 106 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 4, 7
# 107 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_SECOND, 6, 10
# 108 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 109 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 114 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 8, 25
# 115 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_FIRST_SAVED
# 118 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 122 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 126 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 131 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 132 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 133 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 134 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 135 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_UP
# 136 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 137 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 92 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_BRIDGE
# 93 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 96 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 97 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 100 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 101 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 119 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_BRIDGE
# 120 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 123 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 124 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 127 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 128 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_12


JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa::
# 147 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lockall
# 148 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 149 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 150 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_PIN
# 151 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_0
# 152 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 153 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_1, localId = LOCALID_DRAMPA_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 154 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 155 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 156 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 157 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_2
# 158 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement LOCALID_DRAMPA_BRIDGE
# 159 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special SpawnCameraObject
# 160 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3
# 161 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3
# 162 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 164 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 14, METATILE_Forest_Primary_TopRightCornerRock, FALSE
# 165 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 15, METATILE_Forest_Primary_FloorRock, FALSE
# 166 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 16, METATILE_Forest_Primary_FloorRock, FALSE
# 167 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 17, METATILE_Forest_Primary_FloorRock, FALSE
# 169 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 14, METATILE_Secret_Lab_Secondary_TopRightRockWater, TRUE
# 170 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 15, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 171 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 16, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 172 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 17, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 174 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 175 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 176 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 177 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 179 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 180 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 181 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 182 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 185 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 186 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 188 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 189 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 190 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 192 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 193 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 194 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 195 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 197 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 198 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 199 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 200 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 202 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 203 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 204 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 205 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 207 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 208 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 209 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 210 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 212 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 213 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 215 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 216 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 217 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 219 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 220 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 221 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 222 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 225 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 226 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 227 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 228 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 230 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 231 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 232 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 233 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 17, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 235 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 237 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 16, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 238 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 241 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_5
# 244 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 246 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 247 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 15, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 248 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 249 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 251 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 14, METATILE_Forest_Primary_LeftRock, TRUE
# 252 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 15, METATILE_Forest_Primary_LeftRock, TRUE
# 253 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 254 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 256 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 14, METATILE_Forest_Primary_FloorRock, TRUE
# 257 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 15, METATILE_Forest_Primary_FloorRock, TRUE
# 258 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 16, METATILE_Forest_Primary_FloorRock, TRUE
# 259 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 17, METATILE_Forest_Primary_FloorRock, TRUE
# 261 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 262 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 264 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_BRIDGE
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_6
# 266 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 267 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 268 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 269 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special RemoveCameraObject
# 270 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_DRAMPA_BRIDGE
# 271 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_TYRANTRUM_PLATFORM
# 272 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
# 273 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_HIDE_DINOS_WILDS
# 274 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_DINOS_PLATFORM
# 275 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	releaseall
	end


JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum::
# 284 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lockall
# 285 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 286 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 10, VAR_0x8005
# 287 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy LOCALID_TYRANTRUM_BRIDGE, 10, VAR_0x8005
# 288 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_TYRANTRUM_BRIDGE
# 289 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 290 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 291 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 293 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 294 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 295 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 296 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 297 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 298 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 299 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 300 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_1
# 302 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 303 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 304 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 305 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 306 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_2
# 308 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 309 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 310 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 311 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 312 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 313 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 314 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 315 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_PIN
# 316 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_3
# 317 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitse
# 318 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_1, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 319 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 320 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	msgbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_2
# 321 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 322 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_3, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 323 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 324 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	compare VAR_0x8005, 9
	goto_if_eq JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_2
# 329 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_5
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_1:
# 331 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_6
# 333 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 334 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_TYRANTRUM_BRIDGE
# 335 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 337 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_7
# 340 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_PHANPY_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8
# 342 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_BAGON_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_9
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_5:
# 345 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_7
# 347 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 348 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_MAIN
# 349 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 351 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_12
# 354 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_PHANPY_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13
# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_BAGON_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_14
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_10:
# 359 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_8
# 361 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 362 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_SECOND
# 363 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 8, 25
# 364 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPCS
# 365 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_FIRST_SAVED
# 368 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_17
# 372 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18
# 376 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_19
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_15:
# 381 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 382 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 383 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 384 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 385 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_UP
# 386 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 387 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 388 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_TYRANTRUM_DEFEATED
# 389 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	release
	end

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_2:
# 325 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_4
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_1

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_7:
# 338 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_4, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 339 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_5, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_5

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8:
# 341 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_6, localId = LOCALID_PHANPY_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_5

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_9:
# 343 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_7, localId = LOCALID_BAGON_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_5

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_12:
# 352 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_4, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 353 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_5, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_10

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13:
# 355 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_6, localId = LOCALID_PHANPY_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_10

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_14:
# 357 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_7, localId = LOCALID_BAGON_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_10

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_17:
# 369 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_BRIDGE
# 370 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_15

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18:
# 373 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 374 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_15

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_19:
# 377 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_15


JurassicPark_Bridge_And_Lab_EventScript_EnterLab::
# 396 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lock
# 397 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 399 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_BAGON_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_EnterLab_3
# 401 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_PHANPY_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_EnterLab_4
# 403 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_EnterLab_5
JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1:
# 406 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 407 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_4
# 408 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 409 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 410 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 411 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_MAIN
# 412 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_4
# 413 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 414 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 415 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_ENTERING_LAB
# 416 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	release
	end

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_3:
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_0, localId = LOCALID_BAGON_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_4:
# 402 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_1, localId = LOCALID_PHANPY_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_5:
# 404 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_2, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1


# 151 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_0:
# 151 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 151 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 151 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 155 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1:
# 155 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

# 157 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_2:
# 157 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 157 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 160 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3:
# 160 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 160 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 160 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 188 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4:
# 188 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 188 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 188 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 188 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_5:
# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_6:
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
	step_end

# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0:
# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_1:
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_down
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_2:
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_up
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 316 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_3:
# 316 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 316 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 325 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_4:
# 325 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
	step_end

# 329 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_5:
# 329 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
	step_end

# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_6:
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
	step_end

# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_7:
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_8:
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_0:
# 148 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Doctor, where are you going?!$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_1:
# 153 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…I'm sorry.\n"
	.string "There's no more time.$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_2:
# 267 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "The bridge…\n"
	.string "Retracted?\p"
	.string "W-What…\p"
	.string "Larvy, we…\n"
	.string "The Doctor…\l"
	.string "What is happening…\p"
	.string "We need to check on the others…$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_0:
# 289 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Larvy, stop!!!$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_1:
# 318 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Groargh?$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_2:
# 320 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "PLACEHOLDER:\p"
	.string "Some battle in which you win by\n"
	.string "standing still idk$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_3:
# 322 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Graaaaaah?!$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_4:
# 338 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Well I'll be damned.\n"
	.string "It really worked.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_5:
# 339 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…Now let's kick Drampa's ass.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_6:
# 341 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …\p"
	.string "Can we really blame this Tyrantrum for\n"
	.string "what happened…?\p"
	.string "Let's go and find the Doctor.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_7:
# 343 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "That was terrifying!\p"
	.string "I'm glad you're ok, Larvy.\n"
	.string "We're close to the end, now.$"

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_0:
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …\n"
	.string "This is it.\p"
	.string "The Doctor's boat is there, but…\p"
	.string "There's no key inside.\p"
	.string "We have to talk to him.\p"
	.string "There's a part of me that still hopes\n"
	.string "that…\n"
	.string "He didn't…\l"
	.string "Intend for all this.\p"
	.string "Maybe we can…\n"
	.string "I don't know.\p"
	.string "I just want to go back.\p"
	.string "I just want to go back home, but…\n"
	.string "It won't be the same without…\p"
	.string "… … …\p"
	.string "Let's end this, Larvy.$"

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_1:
# 402 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …\p"
	.string "The doctor's boat is docked there.\p"
	.string "There's no key inside\n"
	.string "And the only place he could be is inside.\p"
	.string "…I won't forgive him.\n"
	.string "I'll never forgive him.\p"
	.string "I don't think I…\n"
	.string "I don't think it's set in properly, yet.\p"
	.string "…We'll have time to grieve later.\p"
	.string "But we need to finish this, now.$"

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_2:
# 404 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …\p"
	.string "Drampa's boat is right there.\p"
	.string "No key, of course.\n"
	.string "We'll have to get it from him.\p"
	.string "In better circumstances, I would have\n"
	.string "loved to do a little speech.\p"
	.string "…I'm not in the mood.\n"
	.string "Let's just go.$"
