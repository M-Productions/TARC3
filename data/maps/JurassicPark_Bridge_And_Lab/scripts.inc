JurassicPark_Bridge_And_Lab_MapScripts::
# 2 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD
# 83 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 142 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
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

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 143 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_AFTER_DRAMPA, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 145 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_PHANPY_BRIDGE
# 146 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_BAGON_BRIDGE
# 147 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_BRIDGE
# 148 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_SECOND_SAVED
# 150 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 152 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4
# 154 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 157 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_THIRD_SAVED
# 159 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_8
# 161 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_9
# 163 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_10
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6:
# 166 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay 16
# 167 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_DRAMPA_BRIDGE, 48, 15
# 168 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype LOCALID_DRAMPA_BRIDGE, MOVEMENT_TYPE_FACE_DOWN
# 169 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 170 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_DRAMPA_BRIDGE
# 171 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 172 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 173 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 48, 15
# 174 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_SECOND, MOVEMENT_TYPE_FACE_DOWN
# 175 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 176 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 177 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 178 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 179 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 180 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_SLITHER_WING_BRIDGE, 48, 15
# 181 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype LOCALID_SLITHER_WING_BRIDGE, MOVEMENT_TYPE_FACE_DOWN
# 182 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 183 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_SLITHER_WING_BRIDGE
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 185 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 186 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 187 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 188 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 48, 15
# 189 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_DOWN
# 190 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 191 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 192 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 193 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 194 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 195 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 196 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement LOCALID_SLITHER_WING_BRIDGE
# 197 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN
# 198 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, localId = LOCALID_SLITHER_WING_BRIDGE
# 199 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 200 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 201 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmoncry
# 202 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_PIN
# 203 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 204 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 205 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 207 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_TYRANTRUM_BRIDGE
# 208 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 47, 22
# 209 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_TYRANTRUM_BRIDGE
# 210 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playbgm MUS_VS_BOSS_POWERFUL, 0
# 211 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 212 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 213 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 215 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 216 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 217 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 219 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 220 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special SpawnCameraObject
# 221 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 222 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 223 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 224 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 225 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, localId = LOCALID_SLITHER_WING_BRIDGE
# 226 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 227 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, localId = LOCALID_SLITHER_WING_BRIDGE
# 228 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 229 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8, localId = LOCALID_SLITHER_WING_BRIDGE
# 230 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, localId = LOCALID_DRAMPA_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 231 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 232 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	msgbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10
# 233 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playbgm MUS_DUMMY, 0
# 234 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11, localId = LOCALID_DRAMPA_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 235 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9
# 237 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 238 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_DRAMPA_BRIDGE
# 239 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10
# 241 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 242 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_TYRANTRUM_BRIDGE
# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playbgm MUS_CALM_CUTSCENE, 0
# 244 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 245 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11
# 246 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_12
# 247 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 248 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14, localId = VAR_LOCALID_CUTSCENE_MAIN
# 249 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15, localId = LOCALID_SLITHER_WING_BRIDGE
# 250 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16, localId = VAR_LOCALID_CUTSCENE_MAIN
# 251 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 252 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
# 253 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_14
# 254 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_14
# 255 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement VAR_LOCALID_CUTSCENE_SECOND
# 256 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 257 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18, localId = LOCALID_SLITHER_WING_BRIDGE
# 258 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 259 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay 64
# 260 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 261 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 262 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 263 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_DETERMINATION
# 264 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_NO_OW_MUSIC
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 266 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	fadenewbgm MUS_DUMMY
# 267 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay 120
# 268 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	msgbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_20
# 269 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 270 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_PRISON, 4, 4
	return

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 151 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4:
# 153 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5:
# 155 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_8:
# 160 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_GREAT_TUSK_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_9:
# 162 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_ROARING_MOON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_10:
# 164 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_SCREAM_TAIL_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6


JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa::
# 282 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lockall
# 283 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 284 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 285 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_PIN
# 286 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_0
# 287 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 288 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_1, localId = LOCALID_DRAMPA_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 289 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 290 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 291 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_2
# 293 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement LOCALID_DRAMPA_BRIDGE
# 294 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special SpawnCameraObject
# 295 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3
# 296 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3
# 297 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 299 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 14, METATILE_Forest_Primary_TopRightCornerRock, FALSE
# 300 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 15, METATILE_Forest_Primary_FloorRock, FALSE
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 16, METATILE_Forest_Primary_FloorRock, FALSE
# 302 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 17, METATILE_Forest_Primary_FloorRock, FALSE
# 304 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 14, METATILE_Secret_Lab_Secondary_TopRightRockWater, TRUE
# 305 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 15, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 306 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 16, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 17, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 309 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 310 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 311 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 312 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 314 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 315 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 316 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 317 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 320 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 321 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 323 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 324 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 325 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 327 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 328 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 329 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 330 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 333 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 334 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 335 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 337 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 338 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 339 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 340 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 342 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 343 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 344 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 345 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 347 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 348 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 350 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 351 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 352 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 354 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 355 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 357 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 361 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 362 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 363 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 365 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 366 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 367 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 368 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 17, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 370 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 371 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 372 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 16, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 373 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 375 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 376 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_5
# 379 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 381 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 382 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 15, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 383 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 384 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 386 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 14, METATILE_Forest_Primary_LeftRock, TRUE
# 387 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 15, METATILE_Forest_Primary_LeftRock, TRUE
# 388 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 389 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 391 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 14, METATILE_Forest_Primary_FloorRock, TRUE
# 392 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 15, METATILE_Forest_Primary_FloorRock, TRUE
# 393 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 16, METATILE_Forest_Primary_FloorRock, TRUE
# 394 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 17, METATILE_Forest_Primary_FloorRock, TRUE
# 396 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 397 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 399 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_BRIDGE
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_6
# 401 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 402 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 403 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 404 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special RemoveCameraObject
# 405 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_DRAMPA_BRIDGE
# 406 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_TYRANTRUM_PLATFORM
# 407 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
# 408 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_HIDE_DINOS_WILDS
# 409 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_DINOS_PLATFORM
# 410 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	releaseall
	end


JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum::
# 419 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lockall
# 420 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 421 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 10, VAR_0x8005
# 422 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy LOCALID_TYRANTRUM_BRIDGE, 10, VAR_0x8005
# 423 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_TYRANTRUM_BRIDGE
# 424 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 425 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 426 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 427 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 428 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 429 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 430 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 431 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 432 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 433 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 434 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 435 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_1
# 437 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 438 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 439 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 440 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 441 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_2
# 443 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 444 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 445 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 446 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 447 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 449 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 450 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_PIN
# 451 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_3
# 452 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitse
# 453 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_1, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 456 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	puzzlebattle BP_TYRANTRUM
# 457 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitstate
# 458 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PUZZLE_COMPLETE
	goto_if_ne JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_2
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_1:
# 462 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_3, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 463 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 464 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	compare VAR_0x8005, 9
	goto_if_eq JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_5
# 469 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_4:
# 471 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_4
# 473 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 474 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_TYRANTRUM_BRIDGE
# 475 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 477 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_10
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_PHANPY_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_11
# 482 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_BAGON_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_12
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8:
# 485 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_5
# 487 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 488 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_MAIN
# 489 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 491 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_15
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_PHANPY_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_16
# 496 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_BAGON_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_17
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13:
# 499 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_6
# 501 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 502 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_SECOND
# 503 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 8, 25
# 504 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPCS
# 505 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_FIRST_SAVED
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_20
# 512 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_21
# 516 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_22
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18:
# 521 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 522 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 523 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 524 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 525 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_UP
# 526 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 527 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 528 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_TYRANTRUM_DEFEATED
# 529 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	release
	end

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_2:
# 460 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	msgbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_2
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_1

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_5:
# 465 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_4

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_10:
# 478 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_4, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 479 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_5, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_11:
# 481 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_6, localId = LOCALID_PHANPY_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_12:
# 483 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_7, localId = LOCALID_BAGON_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_15:
# 492 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_4, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 493 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_5, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_16:
# 495 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_6, localId = LOCALID_PHANPY_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_17:
# 497 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_7, localId = LOCALID_BAGON_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_20:
# 509 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_BRIDGE
# 510 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_21:
# 513 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 514 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_22:
# 517 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 518 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18


JurassicPark_Bridge_And_Lab_EventScript_EnterLab::
# 536 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lock
# 537 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 539 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_BAGON_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_EnterLab_3
# 541 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_PHANPY_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_EnterLab_4
# 543 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_EnterLab_5
JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1:
# 546 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 547 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
# 548 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 549 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 550 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 551 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_MAIN
# 552 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
# 553 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 554 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 555 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_SECOND
# 556 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_ENTERING_LAB
# 557 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	release
	end

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_3:
# 540 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_0, localId = LOCALID_BAGON_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_4:
# 542 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_1, localId = LOCALID_PHANPY_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_5:
# 544 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_2, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1


# 171 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 171 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
	step_end

# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
	step_end

# 192 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 192 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 192 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 193 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 193 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 193 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_up
	step_end

# 194 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 194 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 194 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_right
	step_end

# 195 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 195 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 195 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_left
	step_end

# 203 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6:
# 203 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 203 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 203 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_down
	step_end

# 204 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7:
# 204 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 204 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 204 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 212 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8:
# 212 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
# 212 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 212 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9:
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_invisible
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_visible
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_invisible
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_visible
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_invisible
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_visible
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10:
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
	step_end

# 245 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11:
# 245 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_right
	step_end

# 246 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_12:
# 246 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_left
	step_end

# 252 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13:
# 252 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
	step_end

# 253 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_14:
# 253 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_down
	step_end

# 286 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_0:
# 286 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 286 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 286 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 290 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1:
# 290 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_2:
# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 295 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3:
# 295 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 295 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 295 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 323 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4:
# 323 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 323 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 323 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 323 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_5:
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_6:
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
	step_end

# 427 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0:
# 427 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 427 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 427 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_1:
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_down
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_2:
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_up
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 451 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_3:
# 451 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 451 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_4:
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
	step_end

# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_5:
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_6:
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 197 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Larvy…)\p"
	.string "({COLOR RED}KILL. KILL. KILL.{COLOR DARK_GRAY})$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 198 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(You have to…\n"
	.string "Resist…)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 223 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "GRAAAAAH!$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 224 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "({COLOR RED}I… See… You!{COLOR DARK_GRAY})$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 225 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(…I can understand?!)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 226 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "{COLOR RED}(Away…\n"
	.string "Away!)\p"
	.string "(My land…\n"
	.string "My people…)\p"
	.string "(Leave them!){COLOR DARK_GRAY}$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 227 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(…We will.\n"
	.string "We… will leave.)\p"
	.string "(But, you have to help.)\p"
	.string "(That Pokémon…\n"
	.string "Is responsible.\l"
	.string "We must…)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 228 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "({COLOR RED}KILL.{COLOR DARK_GRAY})$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 229 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(… … …)\p"
	.string "({COLOR RED}YES.{COLOR DARK_GRAY})$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 230 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…!$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
# 232 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "PLACEHOLDER.$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
# 234 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "!!!$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
# 239 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "{COLOR RED}(Gone.\n"
	.string "Leave, now.)\p"
	.string "(Leave!){COLOR DARK_GRAY}$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
# 244 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…!!!$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
# 248 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Now…\n"
	.string "What…?)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
# 249 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Don't know…\n"
	.string "But…)\p"
	.string "(We leave…\n"
	.string "Together.)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
# 250 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Yes…\n"
	.string "Together.)\p"
	.string "(Will be ok.)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17:
# 256 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …?$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18:
# 257 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Sorry…\n"
	.string "Can't…\l"
	.string "Understand…)\p"
	.string "(I'm…\n"
	.string "Sorry…)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19:
# 258 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_20:
# 268 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Many months later…$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_0:
# 283 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Doctor, where are you going?!$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_1:
# 288 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…I'm sorry.\n"
	.string "There's no more time.$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_2:
# 402 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "The bridge…\n"
	.string "Retracted?\p"
	.string "W-What…\p"
	.string "Larvy, we…\n"
	.string "The Doctor…\l"
	.string "What is happening…\p"
	.string "We need to check on the others…$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_0:
# 424 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Larvy, stop!!!$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_1:
# 453 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Groargh?$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_2:
# 460 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "PLACEHOLDER\n"
	.string "Tyrantrum battle other outcomes here.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_3:
# 462 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Graaaaaah?!$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_4:
# 478 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Well I'll be damned.\n"
	.string "It really worked.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_5:
# 479 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…Now let's kick Drampa's ass.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_6:
# 481 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …\p"
	.string "Can we really blame this Tyrantrum for\n"
	.string "what happened…?\p"
	.string "Let's go and find the Doctor.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_7:
# 483 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "That was terrifying!\p"
	.string "I'm glad you're ok, Larvy.\n"
	.string "We're close to the end, now.$"

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_0:
# 540 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
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
# 542 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
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
# 544 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …\p"
	.string "Drampa's boat is right there.\p"
	.string "No key, of course.\n"
	.string "We'll have to get it from him.\p"
	.string "In better circumstances, I would have\n"
	.string "loved to do a little speech.\p"
	.string "…I'm not in the mood.\n"
	.string "Let's just go.$"
