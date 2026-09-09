JurassicPark_Bridge_And_Lab_MapScripts::
# 2 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD
# 83 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 117 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
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
# 87 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	compare VAR_GAME_STATE, GS_TYRANTRUM_DEFEATED
	goto_if_eq JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 89 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 8, 25
# 90 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_FIRST_SAVED
# 93 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 97 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 101 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 106 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 107 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 108 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 109 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 110 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_UP
# 111 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 112 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 94 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_BRIDGE
# 95 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 98 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 99 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 102 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_BRIDGE
# 103 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 118 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_AFTER_DRAMPA, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 120 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_PHANPY_BRIDGE
# 121 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_BAGON_BRIDGE
# 122 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_BRIDGE
# 123 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_SECOND_SAVED
# 125 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 127 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4
# 129 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 132 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_THIRD_SAVED
# 134 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_8
# 136 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_9
# 138 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_10
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6:
# 141 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay 16
# 142 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_DRAMPA_BRIDGE, 48, 15
# 143 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype LOCALID_DRAMPA_BRIDGE, MOVEMENT_TYPE_FACE_DOWN
# 144 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 145 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_DRAMPA_BRIDGE
# 146 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 147 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 148 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 48, 15
# 149 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_SECOND, MOVEMENT_TYPE_FACE_DOWN
# 150 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 151 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 152 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 153 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 154 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 155 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_SLITHER_WING_BRIDGE, 48, 15
# 156 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype LOCALID_SLITHER_WING_BRIDGE, MOVEMENT_TYPE_FACE_DOWN
# 157 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 158 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_SLITHER_WING_BRIDGE
# 159 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 160 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 161 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 162 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 163 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 48, 15
# 164 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_DOWN
# 165 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 166 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 167 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 168 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 169 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 170 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 171 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement LOCALID_SLITHER_WING_BRIDGE
# 172 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN
# 173 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, localId = LOCALID_SLITHER_WING_BRIDGE
# 174 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 175 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 176 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmoncry
# 177 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_PIN
# 178 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 179 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 180 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 181 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 182 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_TYRANTRUM_BRIDGE
# 183 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 47, 22
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_TYRANTRUM_BRIDGE
# 185 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playbgm MUS_VS_BOSS_POWERFUL, 0
# 186 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 187 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 188 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 189 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 190 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 191 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 192 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 193 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 194 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 195 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special SpawnCameraObject
# 196 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 197 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 198 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 199 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 200 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, localId = LOCALID_SLITHER_WING_BRIDGE
# 201 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 202 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, localId = LOCALID_SLITHER_WING_BRIDGE
# 203 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 204 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8, localId = LOCALID_SLITHER_WING_BRIDGE
# 205 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, localId = LOCALID_DRAMPA_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 207 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse MUS_LEVEL_UP
# 208 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitse
# 209 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	puzzlebattle BP_DRAMPA
# 210 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitstate
# 211 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playbgm MUS_DUMMY, 0
# 212 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10, localId = LOCALID_DRAMPA_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 213 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9
# 215 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 216 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_DRAMPA_BRIDGE
# 217 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10
# 219 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 220 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_TYRANTRUM_BRIDGE
# 221 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playbgm MUS_CALM_CUTSCENE, 0
# 222 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 223 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11
# 224 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_12
# 225 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 226 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13, localId = VAR_LOCALID_CUTSCENE_MAIN
# 227 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14, localId = LOCALID_SLITHER_WING_BRIDGE
# 228 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15, localId = VAR_LOCALID_CUTSCENE_MAIN
# 229 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 230 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
# 231 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_14
# 232 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_SLITHER_WING_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_14
# 233 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement VAR_LOCALID_CUTSCENE_SECOND
# 234 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 235 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17, localId = LOCALID_SLITHER_WING_BRIDGE
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 237 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay 64
# 238 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 239 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 240 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 241 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_DETERMINATION
# 242 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_NO_OW_MUSIC
# 243 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 244 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	fadenewbgm MUS_DUMMY
# 245 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay 120
# 246 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	msgbox JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19
# 247 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 248 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_PRISON, 4, 4
	return

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 126 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4:
# 128 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5:
# 130 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_8:
# 135 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_GREAT_TUSK_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_9:
# 137 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_ROARING_MOON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_10:
# 139 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_SCREAM_TAIL_BRIDGE
	goto JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6


JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa::
# 260 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lockall
# 261 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 262 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 263 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_PIN
# 264 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_0
# 265 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 266 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_1, localId = LOCALID_DRAMPA_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 267 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 268 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 269 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 270 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_2
# 271 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement LOCALID_DRAMPA_BRIDGE
# 272 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special SpawnCameraObject
# 273 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3
# 274 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3
# 275 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 277 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 14, METATILE_Forest_Primary_TopRightCornerRock, FALSE
# 278 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 15, METATILE_Forest_Primary_FloorRock, FALSE
# 279 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 16, METATILE_Forest_Primary_FloorRock, FALSE
# 280 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 17, METATILE_Forest_Primary_FloorRock, FALSE
# 282 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 14, METATILE_Secret_Lab_Secondary_TopRightRockWater, TRUE
# 283 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 15, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 284 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 16, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 285 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 17, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 287 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 288 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 289 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 290 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 292 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 293 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 294 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 295 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 298 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 299 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 302 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 303 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 305 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 306 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 307 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 308 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 310 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 311 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 312 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 313 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 315 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 316 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 317 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 318 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 320 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 321 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 322 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 323 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 325 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 326 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 328 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 329 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 330 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 332 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 333 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 334 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 335 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 338 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 339 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 340 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 341 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 343 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 344 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 345 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 346 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 17, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 348 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 349 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 350 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 16, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 351 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 353 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 354 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_5
# 357 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 359 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 360 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 15, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 361 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 362 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 364 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 14, METATILE_Forest_Primary_LeftRock, TRUE
# 365 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 15, METATILE_Forest_Primary_LeftRock, TRUE
# 366 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 367 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 369 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 14, METATILE_Forest_Primary_FloorRock, TRUE
# 370 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 15, METATILE_Forest_Primary_FloorRock, TRUE
# 371 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 16, METATILE_Forest_Primary_FloorRock, TRUE
# 372 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 17, METATILE_Forest_Primary_FloorRock, TRUE
# 374 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 375 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 377 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_BRIDGE
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_6
# 379 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 380 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 381 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 382 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special RemoveCameraObject
# 383 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_DRAMPA_BRIDGE
# 384 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_TYRANTRUM_PLATFORM
# 385 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
# 386 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_HIDE_DINOS_WILDS
# 387 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_TYRUNT_1
# 388 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_TYRUNT_2
# 389 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_DINOS_PLATFORM
# 390 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	releaseall
	end


JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum::
# 399 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 400 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	compare VAR_GAME_STATE, GS_POST_THREE_GENERATORS
	goto_if_eq JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_2
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_1:
# 429 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay 64
# 430 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 431 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lockall
# 432 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 433 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 10, VAR_0x8005
# 434 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy LOCALID_TYRANTRUM_BRIDGE, 10, VAR_0x8005
# 435 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_TYRANTRUM_BRIDGE
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 437 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 438 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 439 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 440 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 441 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 442 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
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
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_1
# 449 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 450 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 451 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 452 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 453 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_2
# 455 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 456 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 457 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 458 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 459 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 460 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0
# 461 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 462 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_PIN
# 463 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_3
# 464 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitse
# 465 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_1, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 466 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 468 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	puzzlebattle BP_TYRANTRUM
# 469 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitstate
# 470 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_2, localId = LOCALID_TYRANTRUM_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 471 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 472 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	compare VAR_0x8005, 9
	goto_if_eq JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_5
# 477 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_4:
# 479 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_4
# 481 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 482 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_TYRANTRUM_BRIDGE
# 483 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 485 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_15
# 488 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_PHANPY_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_16
# 490 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_BAGON_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_17
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13:
# 493 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_5
# 495 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 496 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_MAIN
# 497 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 499 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_20
# 502 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_PHANPY_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_21
# 504 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_BAGON_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_22
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18:
# 507 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_6
# 509 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 510 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_SECOND
# 511 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_BRIDGE, 8, 25
# 512 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPCS
# 513 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_FIRST_SAVED
# 516 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_25
# 520 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_26
# 524 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_27
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_23:
# 529 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 530 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 531 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 48, 16
# 532 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_SECOND, 47, 16
# 533 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_UP
# 534 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 535 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 536 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_TYRANTRUM_DEFEATED
# 537 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	forcesave
# 538 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	release
	end

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_2:
# 402 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPCS
# 403 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_BAGON_BRIDGE
# 404 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_BRIDGE
# 405 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject LOCALID_PHANPY_BRIDGE
# 406 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_FIRST_SAVED
# 409 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_10
# 413 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_11
# 417 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_12
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8:
# 422 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 4, 7
# 423 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 6, 10
# 424 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 4, 7
# 425 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_SECOND, 6, 10
# 426 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 427 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_1

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_5:
# 473 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_TYRANTRUM_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_4

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_10:
# 410 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_BRIDGE
# 411 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_11:
# 414 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 415 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_12:
# 418 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_BRIDGE
# 419 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_8

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_15:
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_3, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 487 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_4, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_16:
# 489 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_5, localId = LOCALID_PHANPY_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_17:
# 491 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_6, localId = LOCALID_BAGON_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_13

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_20:
# 500 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_3, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 501 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_4, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_21:
# 503 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_5, localId = LOCALID_PHANPY_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_22:
# 505 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_6, localId = LOCALID_BAGON_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_18

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_25:
# 517 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_BRIDGE
# 518 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_23

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_26:
# 521 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_BRIDGE
# 522 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_23

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_27:
# 525 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_BRIDGE
# 526 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_BRIDGE
	goto JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_23


JurassicPark_Bridge_And_Lab_EventScript_EnterLab::
# 545 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lock
# 546 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 548 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_BAGON_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_EnterLab_3
# 550 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_PHANPY_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_EnterLab_4
# 552 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_EnterLab_5
JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1:
# 555 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 556 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
# 557 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 558 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 559 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 560 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_MAIN
# 561 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
# 562 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 563 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_EXIT
# 564 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_SECOND
# 565 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_ENTERING_LAB
# 566 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	release
	end

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_3:
# 549 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_0, localId = LOCALID_BAGON_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_4:
# 551 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_1, localId = LOCALID_PHANPY_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_5:
# 553 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_2, localId = LOCALID_JIGGLYPUFF_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Bridge_And_Lab_EventScript_EnterLab_1


# 146 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 146 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
	step_end

# 159 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 159 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
	step_end

# 167 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 167 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 167 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 168 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 168 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 168 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_up
	step_end

# 169 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 169 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 169 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_right
	step_end

# 170 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 170 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 170 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_left
	step_end

# 178 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6:
# 178 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 178 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 178 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_down
	step_end

# 179 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7:
# 179 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 179 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 179 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 187 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8:
# 187 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
# 187 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 187 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9:
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_invisible
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_visible
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_invisible
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_visible
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_invisible
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	set_visible
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10:
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 218 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
	step_end

# 223 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11:
# 223 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_right
	step_end

# 224 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_12:
# 224 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_left
	step_end

# 230 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13:
# 230 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_up
	step_end

# 231 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_14:
# 231 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	face_down
	step_end

# 264 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_0:
# 264 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 264 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 264 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 268 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1:
# 268 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

# 270 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_2:
# 270 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 270 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 273 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3:
# 273 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 273 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 273 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4:
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 301 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_5:
# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 356 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_6:
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 378 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
	step_end

# 439 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_0:
# 439 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 439 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 439 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_1:
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_down
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 448 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_2:
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_up
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 454 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 463 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_3:
# 463 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 463 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
	step_end

# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_4:
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
# 480 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_left
	step_end

# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_5:
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_down
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 494 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Movement_6:
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
# 508 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 172 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Larvy…)\p"
	.string "({COLOR RED}KILL. KILL. KILL.{COLOR DARK_GRAY})$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 173 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(You have to…\n"
	.string "Resist…)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 198 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "GRAAAAAH!$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 199 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "({COLOR RED}I… See… You!{COLOR DARK_GRAY})$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 200 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(…I can understand?!)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 201 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "{COLOR RED}(Away…\n"
	.string "Away!)\p"
	.string "(My land…\n"
	.string "My people…)\p"
	.string "(Leave them!){COLOR DARK_GRAY}$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 202 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(…We will.\n"
	.string "We… will leave.)\p"
	.string "(But, you have to help.)\p"
	.string "(That Pokémon…\n"
	.string "Is responsible.\l"
	.string "We must…)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 203 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "({COLOR RED}KILL.{COLOR DARK_GRAY})$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 204 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(… … …)\p"
	.string "({COLOR RED}YES.{COLOR DARK_GRAY})$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 205 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…!$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
# 212 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "!!!$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
# 217 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "{COLOR RED}(Gone.\n"
	.string "Leave, now.)\p"
	.string "(Leave!){COLOR DARK_GRAY}$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
# 222 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…!!!$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
# 226 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Now…\n"
	.string "What…?)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
# 227 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Don't know…\n"
	.string "But…)\p"
	.string "(We leave…\n"
	.string "Together.)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
# 228 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Yes…\n"
	.string "Together.)\p"
	.string "(Will be ok.)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
# 234 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …?$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17:
# 235 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "(Sorry…\n"
	.string "Can't…\l"
	.string "Understand…)\p"
	.string "(I'm…\n"
	.string "Sorry…)$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18:
# 236 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …$"

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19:
# 246 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Many months later…$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_0:
# 261 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Doctor, where are you going?!$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_1:
# 266 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…I'm sorry.\n"
	.string "There's no more time.$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_2:
# 380 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "The bridge…\n"
	.string "Retracted?\p"
	.string "W-What…\p"
	.string "Larvy, we…\n"
	.string "The Doctor…\l"
	.string "What is happening…\p"
	.string "We need to check on the others…$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_0:
# 436 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Larvy, stop!!!$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_1:
# 465 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Groargh?$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_2:
# 470 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Graaaaaah?!$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_3:
# 486 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Well I'll be damned.\n"
	.string "It really worked.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_4:
# 487 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…Now let's kick Drampa's ass.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_5:
# 489 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …\p"
	.string "Can we really blame this Tyrantrum for\n"
	.string "what happened…?\p"
	.string "Let's go and find the Doctor.$"

JurassicPark_Bridge_And_Lab_EventScript_Tyrantrum_Text_6:
# 491 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "That was terrifying!\p"
	.string "I'm glad you're ok, Larvy.\n"
	.string "We're close to the end, now.$"

JurassicPark_Bridge_And_Lab_EventScript_EnterLab_Text_0:
# 549 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
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
# 551 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
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
# 553 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "… … …\p"
	.string "Drampa's boat is right there.\p"
	.string "No key, of course.\n"
	.string "We'll have to get it from him.\p"
	.string "In better circumstances, I would have\n"
	.string "loved to do a little speech.\p"
	.string "…I'm not in the mood.\n"
	.string "Let's just go.$"
