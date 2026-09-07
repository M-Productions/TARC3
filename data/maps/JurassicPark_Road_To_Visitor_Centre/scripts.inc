JurassicPark_Road_To_Visitor_Centre_MapScripts::
# 2 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 130 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_THREE_GENERATORS_CUTSCENE
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	call JurassicPark_Road_To_Visitor_Centre_EventScript_DrawGrave
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 13 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_FOREST_ROAD, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 17 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_PRE_MEETING_DRAMPA, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 21 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_CENTRE_GOING_AFTER_DRAMPA, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 29 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_CENTRE_AFTER_BRIDGE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 48 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR_CUTSCENE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 61 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 66 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS_CUTSCENE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 86 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_THREE_GENERATORS_CUTSCENE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 122 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_NO_GENERATORS
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 14 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 15 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 42, 36
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 13
# 19 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 13
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 22 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 23 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_DRAMPA_FOREST
# 24 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 8
# 25 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_DRAMPA_FOREST, 35, 16
# 26 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_DOWN
# 27 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_DRAMPA_FOREST, MOVEMENT_TYPE_FACE_RIGHT
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 30 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 31 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 51, 17
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 51, 17
# 33 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_LEFT
# 34 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 35 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 36 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 46, 16
# 37 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 46, 16
# 38 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_JIGGLYPUFF_FOREST, MOVEMENT_TYPE_FACE_LEFT
# 39 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 40 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 41 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_BAGON_FOREST, 45, 16
# 42 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_BAGON_FOREST, 45, 16
# 43 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_BAGON_FOREST, MOVEMENT_TYPE_FACE_RIGHT
# 44 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_BAGON_FOREST
# 45 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_TYRANTRUM_FOREST
# 46 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_TYRANTRUM_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 49 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 51 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 54 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 57 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 62 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_ALWAYS_RAINING
# 63 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 64 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	doweather
# 65 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_NO_OW_MUSIC
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 67 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 69 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
# 72 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
# 75 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 79 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 32, 18
# 80 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 81 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_TYRANTRUM_FOREST
# 82 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_TYRUNT_FOREST, 32, 12
# 83 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_TYRUNT_FOREST, MOVEMENT_TYPE_FACE_UP
# 84 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_TYRUNT_FOREST
# 85 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_FOREST, 32, 20
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 87 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 89 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
# 109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 124 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_SLEEP
# 125 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_SLEEP
# 126 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_SLEEP
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 52 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_BAGON_FOREST, 31, 10
# 53 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_BAGON_FOREST, MOVEMENT_TYPE_FACE_RIGHT
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 55 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 31, 10
# 56 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_RIGHT
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 58 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 10
# 59 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_JIGGLYPUFF_FOREST, MOVEMENT_TYPE_FACE_RIGHT
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 70 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_FOREST
# 71 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 73 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_FOREST
# 74 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_FOREST
# 77 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 90 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 91 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 92 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_BAGON_FOREST, 34, 11
# 93 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_BAGON_FOREST, MOVEMENT_TYPE_FACE_UP
# 94 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 35, 11
# 95 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_JIGGLYPUFF_FOREST, MOVEMENT_TYPE_FACE_UP
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 97 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_BAGON_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 100 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 101 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 102 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_BAGON_FOREST, 34, 11
# 103 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_UP
# 104 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_BAGON_FOREST, 35, 11
# 105 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_UP
# 106 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_BAGON_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 110 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 111 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 112 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 34, 11
# 113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_UP
# 114 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 35, 11
# 115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_UP
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 117 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 131 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_CENTRE_GOING_AFTER_DRAMPA, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 134 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
# 137 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2
	.2byte 0

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 132 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 135 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_TyrantrumScene
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2:
# 138 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest::
# 145 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 147 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_FOREST_ROAD
# 148 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 149 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 150 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 151 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 152 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 153 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 154 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 155 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_JURASSIC_PARK_MAIN_THEME, TRUE
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0
# 159 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 160 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 161 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 162 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	teleportcamera VAR_TEMP_1, VAR_TEMP_2
# 163 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 164 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 165 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 166 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 167 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_FOREST_FIELD, TRUE
# 168 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 170 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 171 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 172 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 179 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 180 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 182 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 183 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 184 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 185 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 42, 36
# 187 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 188 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 42, 36
# 189 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 190 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_BAGON_FOREST
# 191 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end


# 197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Movement_PlayerWalkToForest:
# 198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial::
# 202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 203 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 204 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 205 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 206 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_TUTORIAL
# 207 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0
# 210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff::
# 217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 221 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 222 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 224 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 225 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 228 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 229 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon::
# 235 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 237 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_2
# 243 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 246 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_BASTIODON
# 247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PUZZLE_COMPLETE
	goto_if_ne JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_5
JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_4:
# 251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject VAR_LAST_TALKED
# 252 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_2:
# 238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0, localId = VAR_LAST_TALKED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 239 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 240 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_5:
# 249 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_2
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_4


JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt::
# 258 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_NO_GENERATORS
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2
# 264 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3
# 270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 271 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 275 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2:
# 260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0
# 261 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3:
# 266 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED
# 267 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy::
# 282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 283 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2
# 291 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5
# 299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 301 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2:
# 286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5:
# 293 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 294 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Archen::
# 315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0, localId = LOCALID_ARCHEN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum::
# 325 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 326 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum_Text_0, localId = LOCALID_TYRANTRUM_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 327 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa::
# 337 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 45, 27
# 342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 46, 27
# 343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 349 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 350 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 353 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 354 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_JIGGLYPUFF_FOREST
# 355 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 356 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 363 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 5
# 366 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 367 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1:
# 373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4:
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5
# 379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 380 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 46, 18
# 381 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 382 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 47, 17
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6
# 384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 45, 17
# 385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7
# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 387 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 390 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 400 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 407 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 413 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 414 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 415 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 416 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 417 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 418 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 419 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 13
# 421 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 13
# 422 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 424 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 425 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 426 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadedefaultbgm
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2:
# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5:
# 375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4
# 376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth::
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 433 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 434 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 435 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 436 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest::
# 442 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 443 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 444 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 445 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 446 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa::
# 452 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 453 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CUTSCENE_MYSTERIOUS
# 454 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 455 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_TEMP_1
# 457 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 31, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3
# 460 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 32, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4
# 463 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 33, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5
# 465 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 34, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6
# 468 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 35, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1:
# 472 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3
# 473 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 476 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 478 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 479 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 480 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6, , localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 481 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 482 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 483 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 484 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_TUTORIAL
# 485 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 486 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 487 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4
# 489 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 490 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 491 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 492 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 493 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 495 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 496 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 497 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 498 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 499 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 502 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 503 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 504 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_FOREST
# 505 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 506 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 507 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5
# 509 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 510 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 511 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 512 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 513 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 514 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 515 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 516 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 517 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 518 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 519 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 520 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 521 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 522 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 523 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 524 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 525 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 526 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 529 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 530 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 531 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 532 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_MET_DRAMPA
# 533 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
	return

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3:
# 458 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0
# 459 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4:
# 461 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1
# 462 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5:
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6:
# 466 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 467 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7:
# 469 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2
# 470 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down::
# 538 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 539 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 540 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 541 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 542 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 543 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Up::
# 549 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 550 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 551 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 552 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 553 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 554 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Sign::
# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0, MSGBOX_SIGN
# 564 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa::
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 572 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 573 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 574 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 575 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 576 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1
# 578 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_DRAMPA_FOREST
# 579 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 580 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 581 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 582 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 583 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 584 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 585 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 586 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 587 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 588 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setfollowernpc LOCALID_PHANPY_FOREST, FOLLOWER_NPC_FLAG_ALL_LAND
# 589 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
# 590 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim::
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 598 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 599 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 600 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 601 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth::
# 607 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 608 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 609 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 610 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 611 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 612 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWaySouth::
# 618 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 619 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 620 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 621 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 622 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 623 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_TyrantrumScene::
# 629 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 630 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 631 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 632 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 633 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 634 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 635 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 636 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 637 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 638 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 639 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 640 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 641 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 642 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 643 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 644 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 645 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 646 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 647 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 648 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 649 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 650 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 651 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 652 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 653 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 654 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 655 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 661 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 662 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 663 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 664 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 665 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 666 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 667 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 668 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 669 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6
# 675 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_PLAYER
# 676 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 677 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
# 678 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_FOREST
# 679 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_CENTRE
# 680 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_FOREST
# 681 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_CENTRE
# 682 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 683 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 684 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_TYRANTRUM_FOREST
# 685 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_ARCHEN_FOREST
# 686 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_CENTRE
# 687 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DINOS_WILDS
# 688 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain::
# 695 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_MOUNTAIN_COMPLETE, 2
# 696 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 698 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_2
# 700 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_3
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_2:
# 699 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_3:
# 701 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon::
# 711 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 712 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 713 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 714 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 715 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 716 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 717 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 718 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 719 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 720 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert::
# 727 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_DESERT_COMPLETE, 2
# 728 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 730 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_2
# 732 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_3
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_2:
# 731 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_3:
# 733 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy::
# 740 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 741 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 742 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 743 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 744 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 745 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 746 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 747 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 748 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 749 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene::
# 757 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 759 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_3
# 774 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_4
# 789 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_5
JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1:
# 809 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 810 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_POST_ONE_GENERATOR
	end

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_3:
# 760 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 761 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1, localId = LOCALID_PLAYER
# 762 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_2, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 763 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 764 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_4, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 765 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 766 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 767 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 768 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_CENTRE
# 769 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 770 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 771 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 772 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_5, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_4:
# 775 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_6, localId = LOCALID_PHANPY_FOREST
# 776 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1, localId = LOCALID_PLAYER
# 777 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_7, localId = LOCALID_PHANPY_FOREST
# 778 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_8, localId = LOCALID_PLAYER
# 779 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 780 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 781 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 782 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 783 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_CENTRE
# 784 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 785 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 786 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 787 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_10, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_5:
# 790 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 791 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_12, localId = LOCALID_PLAYER
# 792 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 793 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_14, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 794 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 795 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_16, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 796 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_17, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 797 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_18, localId = LOCALID_PLAYER
# 798 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_19, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 799 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 800 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 801 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 802 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 803 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 804 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 805 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 806 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_20, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1


JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh::
# 817 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_MARSH_COMPLETE, 2
# 817 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 819 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_2
# 821 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_3
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_2:
# 820 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_3:
# 822 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly::
# 829 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 830 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 831 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST
# 832 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 833 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 834 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 835 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 836 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 837 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 838 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly::
# 845 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 846 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 847 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 848 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 849 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 850 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 851 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 852 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 853 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 855 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_3
# 857 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_4
JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_1:
# 861 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 862 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 863 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS_CUTSCENE
# 864 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 865 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 12, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_3:
# 856 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_1

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_4:
# 858 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_1


JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon::
# 872 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 873 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 874 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 875 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 876 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 877 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 878 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 879 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 880 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 881 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 882 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 883 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS_CUTSCENE
# 884 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 885 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 12, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy::
# 891 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 892 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 893 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 894 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 895 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 896 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 897 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 898 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 899 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 900 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 901 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 902 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS_CUTSCENE
# 903 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 904 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 12, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene
	end


JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene::
# 913 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 914 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_0
# 916 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 917 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 918 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_1
# 920 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_1
# 921 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 922 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 923 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 925 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_3
# 927 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_4
# 929 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_5
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1:
# 932 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 933 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_2
# 935 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 936 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_8
# 940 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_9
# 942 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_10
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6:
# 945 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 946 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 947 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 948 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_6, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 949 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 950 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_VS_BOSS_POWERFUL, TRUE
# 951 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 952 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 953 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 954 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 955 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 956 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 957 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 958 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 959 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 960 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 961 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 962 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 963 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 964 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 965 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 966 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 967 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 968 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 969 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 970 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 971 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 972 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 973 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 976 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_7, localId = LOCALID_TYRANTRUM_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 977 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 979 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_13
# 981 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_14
# 983 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_15
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11:
# 986 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 987 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_3
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_4
# 990 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 991 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_11, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 992 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 993 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 994 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 996 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_18
# 998 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_19
# 1000 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_20
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16:
# 1004 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 1005 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1006 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_7, localId = LOCALID_TYRANTRUM_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_TYRANTRUM_LOSE
# 1009 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 1010 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_15, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1011 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1013 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_23
# 1015 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_24
# 1017 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_25
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21:
# 1020 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1021 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1023 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_28
# 1025 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_29
# 1027 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_30
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26:
# 1030 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
# 1031 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 31, 8
# 1032 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_SECOND, MOVEMENT_TYPE_FACE_DOWN
# 1033 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 1034 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 1035 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 1036 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1038 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_33
# 1040 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_34
# 1042 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_35
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31:
# 1045 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1046 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 1047 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 1048 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1049 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1051 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_38
# 1059 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_39
# 1067 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_40
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36:
# 1076 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_5
# 1077 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1078 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 1079 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 1080 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_6
# 1081 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement VAR_LOCALID_CUTSCENE_SECOND
# 1082 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 1084 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_RAZOR_WIND
# 1085 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 1086 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_7
# 1087 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_8
# 1088 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1089 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 1090 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
# 1091 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_SECOND
# 1092 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_SECOND, MOVEMENT_TYPE_SLEEP
# 1093 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 32, 12
# 1094 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 1095 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 16
# 1096 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 1097 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 128
# 1098 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1100 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_43
# 1103 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_44
# 1111 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_45
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41:
# 1120 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6
# 1121 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_33, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1122 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_9
# 1124 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1125 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_34, localId = LOCALID_TYRANTRUM_FOREST
# 1126 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_10
# 1128 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1129 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_TYRANTRUM_FOREST
# 1130 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_TYRUNT_FOREST
# 1131 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 1132 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1134 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_57
# 1136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_58
# 1138 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_59
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55:
# 1141 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_38, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 64
# 1143 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_FOREST
# 1144 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 1145 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_FOREST
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 1147 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 1148 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1149 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_VISITOR_CENTRE, 18, 6, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor
	end

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_3:
# 926 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_4:
# 928 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_5:
# 930 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_2, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_8:
# 939 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_3, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_9:
# 941 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_4, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_10:
# 943 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_5, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_13:
# 980 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_8, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_14:
# 982 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_9, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_15:
# 984 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_10, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_18:
# 997 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_12, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_19:
# 999 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_13, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_20:
# 1001 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_14, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_23:
# 1014 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_16, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_24:
# 1016 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_17, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_25:
# 1018 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_18, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_28:
# 1024 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_FOREST
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_29:
# 1026 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_FOREST
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_30:
# 1028 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_FOREST
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_33:
# 1039 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_19, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_34:
# 1041 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_20, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_35:
# 1043 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_21, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_38:
# 1052 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1054 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_47
# 1056 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_48
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_39:
# 1060 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1062 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_50
# 1064 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_51
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_40:
# 1068 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1070 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_53
# 1072 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_54
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_43:
# 1101 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_28, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_44:
# 1104 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1106 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_61
# 1108 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_62
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_45:
# 1112 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1114 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_64
# 1116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_65
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_47:
# 1055 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_22, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_48:
# 1057 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_23, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_50:
# 1063 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_24, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_51:
# 1065 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_25, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_53:
# 1071 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_26, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_54:
# 1073 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_27, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_57:
# 1135 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_35, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_58:
# 1137 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_36, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_59:
# 1139 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_37, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_61:
# 1107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_29, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_62:
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_30, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_64:
# 1115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_31, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_65:
# 1117 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_32, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41


JurassicPark_Dino_Enclosure_EventScript_WhereAreYouGoing::
# 1155 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Dino_Enclosure_EventScript_WhereAreYouGoing_Text_0
# 1156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 1158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1159 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators::
# 1166 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 1167 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_3
# 1171 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_4
# 1173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_5
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1:
# 1176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 1177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 31, 8
# 1178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_DOWN
# 1179 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 1180 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 1181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 1182 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1183 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1185 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_8
# 1188 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_9
# 1191 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_10
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6:
# 1195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_13
# 1199 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_14
# 1201 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_15
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11:
# 1204 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1206 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_18
# 1208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_19
# 1210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_20
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16:
# 1213 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1215 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_23
# 1217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_24
# 1219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_25
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21:
# 1222 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1224 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_28
# 1226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_29
# 1228 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_30
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26:
# 1231 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_18, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1232 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 1233 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 1234 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	doweather
# 1235 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 128
# 1236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_19, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1240 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_33
# 1242 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_34
# 1244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_35
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31:
# 1247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1249 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_38
# 1251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_39
# 1253 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_40
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36:
# 1256 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1258 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_43
# 1260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_44
# 1262 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_45
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41:
# 1265 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1267 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_48
# 1269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_49
# 1271 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_50
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46:
# 1274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1276 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_53
# 1278 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_54
# 1280 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_55
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51:
# 1283 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_NO_OW_MUSIC
# 1284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_ALWAYS_RAINING
# 1285 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_THREE_GENERATORS_CUTSCENE
# 1286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 1288 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 36, 11, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_3:
# 1170 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_4:
# 1172 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_5:
# 1174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_8:
# 1186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1187 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_9:
# 1189 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1190 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_3, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_10:
# 1192 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1193 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_5, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_13:
# 1198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_14:
# 1200 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_7, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_15:
# 1202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_18:
# 1207 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_9, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_19:
# 1209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_10, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_20:
# 1211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_11, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_23:
# 1216 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_12, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_24:
# 1218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_13, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_25:
# 1220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_14, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_28:
# 1225 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_15, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_29:
# 1227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_16, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_30:
# 1229 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_17, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_33:
# 1241 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_20, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_34:
# 1243 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_21, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_35:
# 1245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_22, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_38:
# 1250 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_23, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_39:
# 1252 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_24, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_40:
# 1254 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_43:
# 1259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_26, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_44:
# 1261 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_27, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_45:
# 1263 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_28, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_48:
# 1268 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_29, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_49:
# 1270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_30, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_50:
# 1272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_31, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_53:
# 1277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_32, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_54:
# 1279 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_33, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_55:
# 1281 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_34, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51


JurassicPark_Road_To_Visitor_Centre_EventScript_DrawGrave::
# 1295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 34, 9, METATILE_Forest_Primary_DirtTopLeft, FALSE
# 1296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 35, 9, METATILE_Forest_Primary_DirtTop, FALSE
# 1297 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 36, 9, METATILE_Forest_Primary_DirtTopRight, FALSE
# 1298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 34, 10, METATILE_Forest_Primary_DirtLeft, FALSE
# 1299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 35, 10, METATILE_Forest_Primary_Dirt, FALSE
# 1300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 36, 10, METATILE_Forest_Primary_DirtRight, FALSE
# 1301 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 34, 11, METATILE_Forest_Primary_DirtBottomLeft, FALSE
# 1302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 35, 11, METATILE_Forest_Primary_DirtBottom, FALSE
# 1303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 36, 11, METATILE_Forest_Primary_DirtBottomRight, FALSE
# 1304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special DrawWholeMapView
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene::
# 1309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	call JurassicPark_Road_To_Visitor_Centre_EventScript_DrawGrave
# 1310 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 1311 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1312 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 1313 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 1315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_3
# 1335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_4
# 1352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_5
JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1:
# 1369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_37, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_8
# 1381 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_9
# 1388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_10
JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6:
# 1396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_13
# 1400 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_14
# 1402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_15
JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11:
# 1405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_NO_OW_MUSIC
# 1407 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_DETERMINATION
# 1408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_DETERMINATION
# 1409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_POST_THREE_GENERATORS
# 1410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 1412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 1413 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 1414 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE
# 1415 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 16
# 1416 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1417 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_3:
# 1318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_0, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_1, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1321 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_3, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_4, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1323 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_5, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1324 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_6, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1325 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_7, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1326 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_8, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1327 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_9, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_10, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_12, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 1333 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_14, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1334 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_4:
# 1336 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1337 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_16, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_17, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_18, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 64
# 1343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_19, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_20, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_21, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_22, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1349 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_23, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1350 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_24, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_5:
# 1353 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1354 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_26, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1355 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_27, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1356 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_28, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_29, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 1358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_30, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_31, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_32, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 1361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_33, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_34, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1363 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_17, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1366 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_35, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 1367 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_36, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_8:
# 1373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_38, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_40, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_41, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_42, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_43, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_44, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_9:
# 1382 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_45, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_46, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_47, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_48, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_10:
# 1389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_49, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 1390 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_50, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 1392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_51, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_52, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_13:
# 1399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_53, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_14:
# 1401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_54, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_15:
# 1403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_55, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11


JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack::
# 1423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 1424 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack_Text_0, localId = LOCALID_PLAYER
# 1425 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 1426 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1427 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Mountain_WalkBack::
# 1433 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 1434 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack_Text_0, localId = LOCALID_PLAYER
# 1435 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1
# 1436 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1437 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0:
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
	step_end

# 170 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1:
# 170 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2:
# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 225 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0:
# 225 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0:
# 348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1:
# 351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2:
# 352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3:
# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4:
# 375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5:
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6:
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_left
	step_end

# 385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7:
# 385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_right
	step_end

# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8:
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 444 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0:
# 444 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 458 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0:
# 458 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 458 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 461 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1:
# 461 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 469 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2:
# 469 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 469 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 472 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3:
# 472 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 472 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 472 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 472 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4:
# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5:
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 576 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0:
# 576 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 576 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 576 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1:
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 585 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2:
# 585 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 585 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 630 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0:
# 630 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 630 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 630 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 630 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 630 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 653 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1:
# 653 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 653 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 653 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
	step_end

# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2:
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3:
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4:
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
	step_end

# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5:
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
	step_end

# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6:
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 765 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0:
# 765 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 765 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 849 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0:
# 849 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	emote_exclamation_mark
# 849 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
	step_end

# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_0:
# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_1:
# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
	step_end

# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_2:
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	emote_exclamation_mark
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_3:
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_4:
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock_facing_direction
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	unlock_facing_direction
	step_end

# 1076 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_5:
# 1076 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 1076 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 1076 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
	step_end

# 1080 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_6:
# 1080 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 1080 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_right
	step_end

# 1086 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_7:
# 1086 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock_facing_direction
# 1086 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 1086 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	unlock_facing_direction
	step_end

# 1087 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_8:
# 1087 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_9:
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_10:
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0:
# 152 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, guys!\n"
	.string "What's-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1:
# 153 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Shh!\n"
	.string "Look!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2:
# 154 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look at w…\n"
	.string "Oh!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3:
# 168 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's…\n"
	.string "It's…\l"
	.string "It's beautiful!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4:
# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It really is.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5:
# 173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And would you look at that.\n"
	.string "There ARE other Pokémon here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6:
# 174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "They look weird, though.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7:
# 175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, that's a bit rude!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8:
# 176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, it's true.\n"
	.string "Never seen any Pokémon that look like\l"
	.string "this, that's for sure.\p"
	.string "Hopefully they're not a cannibal tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9:
# 177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "C-cannibals?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10:
# 178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11:
# 179 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Gee, sensitive much?\n"
	.string "It'll be fine.\p"
	.string "C'mon, let's go talk to them.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0:
# 209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You're a very interesting Pokémon,\nwho are you?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1:
# 211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvesta? What a funny name...\nWell it's a pleasure to meet you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0:
# 218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO?\n"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1:
# 221 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Get a load of these guys, Larvy.\p"
	.string "I'm trying to ask them something, and\n"
	.string "they're ignoring me!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2:
# 222 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe it's because they can't\n"
	.string "understand us?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3:
# 223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, it's because we're outsiders, isn't\n"
	.string "it?\p"
	.string "This isn't an island of cannibals.\n"
	.string "It's an island of racists!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4:
# 224 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I'm not sure that's it, Jiggly.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5:
# 227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0:
# 238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Guoh!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_1:
# 244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Its never seems to turns…)\p"
	.string "(Maybe its back doesn't even know I'm\n"
	.string "here.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_2:
# 249 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "PLACEHOLDER\nBastiodon battle other outcomes here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0:
# 260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No response.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1:
# 266 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2:
# 271 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, hello?\n"
	.string "Sir?\l"
	.string "Or madam?\p"
	.string "Can I ask you something?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3:
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hmm…\n"
	.string "No response.\p"
	.string "Maybe they can't hear me because their\n"
	.string "neck is too long.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4:
# 274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I wonder…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0:
# 286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quick, after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1:
# 299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, Larvy, there's something strange\n"
	.string "going on.\p"
	.string "Do you see that?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2:
# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Looks like a flying-type Pokémon to me.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3:
# 301 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, probably, but…\p"
	.string "Have you ever seen a Pokémon that\n"
	.string "looks like this?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4:
# 302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, but…\p"
	.string "There's a lot of different Pokémon in\n"
	.string "the world.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5:
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fair enough.\n"
	.string "But I HAVE seen a Pokémon like this.\l"
	.string "In a book.\p"
	.string "It was a book about…\n"
	.string "Prehistoric Pokémon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6:
# 304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Pre-\n"
	.string "Huh?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7:
# 305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not completely sure.\n"
	.string "But…\p"
	.string "If I am correct, this Pokémon here…\n"
	.string "Should be extinct.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8:
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What does that mean…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9:
# 307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not… Sure what to make of this,\n"
	.string "exactly.\p"
	.string "And I don't remember seeing the\n"
	.string "long-necked ones in the book.\p"
	.string "I think we should try and find out more.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0:
# 317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Squawk?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum_Text_0:
# 326 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Grrrawr!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum_Text_1:
# 329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "C'mon Larvy…\n"
	.string "{PAUSE 40}Let's get out of here…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0:
# 355 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Erm…\nSo what do you guys think…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1:
# 356 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I think that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2:
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!\n"
	.string "Wait!\p"
	.string "We need to get into proper position\n"
	.string "first!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3:
# 358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, we talked about this.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4:
# 359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No!!!\p"
	.string "According to the Manual of the\n"
	.string "Impeccable Explorer…\p"
	.string "Important team briefings should be\n"
	.string "delivered standing in formation!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5:
# 360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "In the interest of time, I will skip the\n"
	.string "arguing.\p"
	.string "Let's just do that.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6:
# 361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Thank you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7:
# 389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "As I was saying…\p"
	.string "I think we're dealing with an\n"
	.string "uncontacted tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8:
# 390 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uncontacted tribe?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9:
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, y'know.\n"
	.string "Cannibals and the such.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10:
# 392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Enough with that joke!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11:
# 393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quit it, Jiggly.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12:
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(He's right, though.\n"
	.string "Not about the cannibals, but…)\p"
	.string "(These Pokémon ARE very strange.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13:
# 395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "There's something that bothers me,\n"
	.string "though.\p"
	.string "I'm pretty sure that at least some of\n"
	.string "these Pokémon are from the prehistoric\l"
	.string "era.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14:
# 396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And how would that be possible, smarty\n"
	.string "pants?\p"
	.string "They just…\n"
	.string "Hid here and survived going extinct?\p"
	.string "And if so, who built the stairs?\n"
	.string "The pier?\l"
	.string "That strange… Cardboard house?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15:
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…What's pants?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16:
# 398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's something Machoke have.\n"
	.string "Don't ask, it's kinda gross.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17:
# 399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, I don't know!\n"
	.string "But…\p"
	.string "There has to be an explanation!\n"
	.string "There has to be something here that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18:
# 403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "H{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}NK{PAUSE 10} MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19:
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did you guys hear that?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20:
# 407 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Just sounds like someone snoring.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21:
# 408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We should check it out!\n"
	.string "It could be someone we can talk to!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0:
# 433 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I have to see what's going on over\n"
	.string "there first.)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0:
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not a prehistoric Pokémon!\n"
	.string "That's a Drampa!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1:
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe they would know something about\n"
	.string "what's going on.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2:
# 476 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You know what they say: sleeping\n"
	.string "Pokémon tell no tales.\p"
	.string "I'm going to try and wake them up.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3:
# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Don't you think someone else should do\n"
	.string "it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4:
# 478 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's because I'm a Jigglypuff, isn't it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5:
# 479 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You'd just make them sleep harder!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6:
# 480 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fine, fine.\n"
	.string "Larvy, figure it out.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7:
# 481 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(If we get them to talk to us, we might\n"
	.string "learn something about this mysterious\l"
	.string "island.)\p"
	.string "(Well, here goes nothing!)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8:
# 489 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Who are you?!\n"
	.string "How did you get here?!\l"
	.string "Are you with the tax office?!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9:
# 490 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, no.\n"
	.string "We're treasure hunters.\p"
	.string "We kind of…\n"
	.string "Wrecked our boat.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10:
# 491 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah!\n"
	.string "Treasure hunters!\l"
	.string "What a relief!\p"
	.string "Oh, but you came early!\n"
	.string "The park is not finished yet!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11:
# 492 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ohh, a park?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12:
# 493 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And you are…?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13:
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah, how rude!\p"
	.string "Dr. John Drampa, at your service.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14:
# 495 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, Dr. Drampa…$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15:
# 496 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. John Drampa.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16:
# 497 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, John.\p"
	.string "What's going on here?\n"
	.string "Wasn't this a deserted island?\p"
	.string "What are all these Pokémon doing here?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17:
# 498 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But of course!\n"
	.string "It's only natural that you would be\l"
	.string "confused.\p"
	.string "Follow me, I will explain everything.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18:
# 506 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…I really don't like this guy.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19:
# 513 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I've never met a doctor before.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20:
# 514 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm very curious what this is all about.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21:
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose I should go check this out,\n"
	.string "too.)$"

JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0:
# 539 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. Drampa said wandering around could\n"
	.string "be dangerous.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0:
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "{UP_ARROW} Ancient Desert\n"
	.string "{DOWN_ARROW} Primordial Beach\l"
	.string "{LEFT_ARROW} Lost Mountains\l"
	.string "{RIGHT_ARROW}Observation Platform, Forgotten\l"
	.string "Swamp, Laboratory$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0:
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1:
# 583 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Let's go after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0:
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, we have to go after the Doctor!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0:
# 608 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not the way he went, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0:
# 638 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What are you guys doing out here?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1:
# 639 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We're going to repair the generators!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2:
# 640 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, I figured out where the\n"
	.string "generators are.\p"
	.string "Turns out, there's a bridge to the lab,\n"
	.string "but it retracts when the generators\l"
	.string "are out as a security measure.\p"
	.string "And the only way to take 'em back up is\n"
	.string "manually.$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3:
# 641 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Forget about it!\n"
	.string "The cage is broken!\p"
	.string "We need to hide, now!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4:
# 642 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5:
# 650 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "N-no way…$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6:
# 668 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "Run.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_0:
# 711 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We almost made it back!\n"
	.string "And no scary Pokémon to be found.\p"
	.string "Hopefully it stays that way!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_1:
# 712 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I do wonder were it went, though.)\p"
	.string "(It couldn't have left the island, but…\n"
	.string "Maybe it really won't bother us again.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_2:
# 713 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Let's go back to the centre.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_0:
# 740 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Whew!\n"
	.string "Finally, no more sand.\p"
	.string "Reminds me of that time we went to the\n"
	.string "desert to look for treasure…\p"
	.string "And we fell in a pit, and Jiggly got sand\n"
	.string "up his nose!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_1:
# 741 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I didn't even know he had a nose.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_2:
# 742 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "After this is over, let's go on vacation\n"
	.string "somewhere… calmer.\p"
	.string "But first, let's go back to the centre.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_0:
# 760 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy…\p"
	.string "Would it be…\n"
	.string "Okay, if I stayed here while you look\l"
	.string "for the others…?$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1:
# 761 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Sure, I guess so, but…\n"
	.string "Why's that?)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_2:
# 762 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I… I wish I could do more, but…\n"
	.string "I think… I may need a rest.\p"
	.string "I'm sorry, I…\n"
	.string "I know I'm not too useful, and, and…\l"
	.string "I'm not as strong as you guys, and…$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_3:
# 763 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Bagon, it's okay.\n"
	.string "You're too tired to keep going.)\p"
	.string "(Taking breaks to avoid injuries is\n"
	.string "important.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_4:
# 764 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll make up for it, I swear!\p"
	.string "Once I've rested, I'm gonna back to\n"
	.string "kicking some prehistoric butts!\p"
	.string "One day, Larvy, one day I will become a\n"
	.string "Salamence, and…\l"
	.string "I'll never be tired and scared again!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_5:
# 772 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Bagon…\n"
	.string "She's working so hard.)\p"
	.string "(She was the last one to join our group.\n"
	.string "And she's really eager to prove\l"
	.string "herself.)\p"
	.string "(I don't blame her for needing rest.\n"
	.string "But I DO wish there was someone else\l"
	.string "helping me right now.)\p"
	.string "(Speaking of, I should go and find the\n"
	.string "others.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_6:
# 775 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, can I ask you something…?\p"
	.string "Would you mind if I stayed here at the\n"
	.string "centre, for now?$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_7:
# 777 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I just thought…\n"
	.string "We've been encountering dangerous\l"
	.string "Pokémon we've never seen before.\p"
	.string "I figure, maybe there's some\n"
	.string "information in the centre that that\l"
	.string "could be useful.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_8:
# 778 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I see.\n"
	.string "That does make sense.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_9:
# 779 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I don't want to leave you alone for too\n"
	.string "long!\p"
	.string "I just want to make sure we're smart\n"
	.string "about this.\p"
	.string "Maybe these Pokémon don't need to be\n"
	.string "our enemies.\p"
	.string "Maybe, we can find a way to get them to\n"
	.string "understand us.\p"
	.string "I don't like what the Doctor is doing.\p"
	.string "He brought these Pokémon to life, but\n"
	.string "he hasn't been treating them like living\l"
	.string "beings.\p"
	.string "I would…\n"
	.string "I would like to change that.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_10:
# 787 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I've known Phanpy longer than anyone\n"
	.string "else.)\p"
	.string "(It wouldn't be wrong to say that she's\n"
	.string "been the driving force behind our\l"
	.string "adventures.)\p"
	.string "(She wants to know everything there is\n"
	.string "to know about the world…)\p"
	.string "(Maybe too much, sometimes.)\p"
	.string "(While she's looking for more\n"
	.string "information, I should go and see if I\l"
	.string "can find the others.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_11:
# 790 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I hate to say this, but…\p"
	.string "I may tap out for a bit.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_12:
# 791 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Uh, sure, I guess, but…\n"
	.string "Why's that?)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_13:
# 792 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I hurt my floatation sack.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_14:
# 793 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(That wasn't a joke?!)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_15:
# 794 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why would I joke about something like\n"
	.string "that?!\p"
	.string "I'm a very serious person, I'll let you\n"
	.string "know!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_16:
# 795 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose…)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_17:
# 796 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, look, I'll be honest with you.\n"
	.string "It's hurting pretty bad.\n"
	.string "I don't want to make it seem like I'm\l"
	.string "bailing on you.\p"
	.string "I just need…\n"
	.string "I just need to catch my breath for a\l"
	.string "bit, is all.\p"
	.string "I can…\n"
	.string "Count on you finding Phanpy and Bagon,\l"
	.string "can I?$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_18:
# 797 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Of course.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_19:
# 798 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I know I can rely on you, Larvy.\p"
	.string "I'll be back in no time, and these brutes\n"
	.string "will know the wrath of Jigglypuff!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_20:
# 806 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Jiggly…)\p"
	.string "(He was the first one to join the\n"
	.string "adventuring team that Phanpy and I\l"
	.string "founded.)\p"
	.string "(He can be abrasive, and unserious, but…\n"
	.string "He cares a lot about everyone.)\p"
	.string "(He wants to ensure sure that everyone\n"
	.string "is safe…)\p"
	.string "(And overdoes it, sometimes.)\p"
	.string "(But he wants us to succeed, more than\n"
	.string "anyone else.)\p"
	.string "(While he's recovering, I should go look\n"
	.string "for the others.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_0:
# 829 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And here we are, safe and sound.\n"
	.string "Obviously.\p"
	.string "You did fairly good, Larvy.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_1:
# 830 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Uh, thanks…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_2:
# 831 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yes, anyway.\p"
	.string "Let's not linger here too much.\n"
	.string "I don't want to see that ugly brute\l"
	.string "show up again.\p"
	.string "Let's go to the visitor centre, yeah?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0:
# 852 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What was that?!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_1:
# 856 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Now, I might be mistaken, but that does\n"
	.string "not sound like Phanpy at all.\p"
	.string "I think we should probably hurry.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon_Text_0:
# 880 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did we take too long?!\p"
	.string "Let's go back, quick!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy_Text_0:
# 899 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "A roar?\n"
	.string "No, it can't be…\p"
	.string "Larvy, we have to go, now!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_0:
# 926 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Too slow, buddy.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_1:
# 928 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Stay away from our friend!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_2:
# 930 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Stop right there!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_3:
# 939 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Heh, it's a small fry.\p"
	.string "We can take on this guy easily.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_4:
# 941 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…A Tyrunt.\p"
	.string "Well, maybe we can just shoo him away.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_5:
# 943 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy, it's a baby one!\p"
	.string "This is gonna be easy.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_6:
# 948 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(No…\n"
	.string "It's back…!)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_7:
# 976 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "GROAAAAAR!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_8:
# 980 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…We're in trouble.\p"
	.string "Let's hide inside, quick!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_9:
# 982 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No way…\n"
	.string "He's here…\l"
	.string "Again…\p"
	.string "Larvy, we need to go back inside!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_10:
# 984 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We can take it, Larvy, can't we…?\p"
	.string "… … …\n"
	.string "No, let's run inside!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_11:
# 991 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I…\n"
	.string "I can't…)\p"
	.string "(It's blocking me!)\p"
	.string "(But…\n"
	.string "We can't beat this Pokémon!)\p"
	.string "(We just can't!)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_12:
# 997 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, what are you doing?!\p"
	.string "It's going to attack!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_13:
# 999 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Any chance we could…\n"
	.string "Talk it out…?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_14:
# 1001 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Larvy!\l"
	.string "Help!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_15:
# 1010 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What…\n"
	.string "Is happening to me…)\p"
	.string "(My legs…\n"
	.string "Aren't moving…?)\p"
	.string "(I'm…\n"
	.string "I'm too scared…)\p"
	.string "(Is this it…?\n"
	.string "No…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_16:
# 1014 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No! No! No!\n"
	.string "Please!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_17:
# 1016 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Not…\n"
	.string "Like this…!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_18:
# 1018 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Waaaaaaa!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_19:
# 1039 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What's all this no-$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_20:
# 1041 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, what's happening out he-$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_21:
# 1043 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ohh, are you back, La-$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_22:
# 1055 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Phanpy!\p"
	.string "Get out of there, you idiots!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_23:
# 1057 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Bagon!\p"
	.string "Get out of there, you idiots!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_24:
# 1063 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, no!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_25:
# 1065 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, no!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_26:
# 1071 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll save you, Jiggly!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_27:
# 1073 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll save you, Phanpy!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_28:
# 1101 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…Uh, what happene-\p"
	.string "No!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_29:
# 1107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Jiggly!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_30:
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Bagon!!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_31:
# 1115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Um, am I dead…?\p"
	.string "Wait, Jiggly…?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_32:
# 1117 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Um, am I dead…?\p"
	.string "Wait, Phanpy…?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_33:
# 1121 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(No…\n"
	.string "How could I have let it happen…!)\p"
	.string "(I couldn't move, and, and…!)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_34:
# 1125 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…Grarg.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_35:
# 1135 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We have to hurry inside, now!\p"
	.string "We need to look for medical supplies!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_36:
# 1137 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy! Larvy!\n"
	.string "This is terrible!\p"
	.string "We need to find some medicine!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_37:
# 1139 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "This can't be happening…\p"
	.string "Larvy, we need to find a first aid kit, or\n"
	.string "something…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_38:
# 1141 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(This is a nightmare…)$"

JurassicPark_Dino_Enclosure_EventScript_WhereAreYouGoing_Text_0:
# 1155 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy, where are you going?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_0:
# 1186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(P-Phanpy?!\n"
	.string "Where's…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_1:
# 1187 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I-I tried…\n"
	.string "I tried…\l"
	.string "I…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_2:
# 1189 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(B-Bagon?!\n"
	.string "Where's…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_3:
# 1190 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, something…\n"
	.string "Something bad happened…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_4:
# 1192 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(J-Jiggly?!\n"
	.string "Where's…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_5:
# 1193 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\p"
	.string "I…\p"
	.string "… … …$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_6:
# 1198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…Guys?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_7:
# 1200 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Is everything…\n"
	.string "Okay?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_8:
# 1202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Is there something I'm missing?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_9:
# 1207 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You didn't say…\n"
	.string "What… Happened, did you…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_10:
# 1209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Oh…\n"
	.string "You don't…\l"
	.string "You don't know, haha.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_11:
# 1211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Oh, I see.\p"
	.string "I'm going to…\n"
	.string "Have to be the one to break the news.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_12:
# 1216 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "This is a…\n"
	.string "Joke, right?\p"
	.string "Guys?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_13:
# 1218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I don't…\n"
	.string "Understand?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_14:
# 1220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…\n"
	.string "Larvy, what in the world…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_15:
# 1225 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_16:
# 1227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_17:
# 1229 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_18:
# 1231 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did not make it.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_19:
# 1236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(No.)\p"
	.string "(This is not happening.)\p"
	.string "(This is NOT happening!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_20:
# 1241 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "W-what…\n"
	.string "When\l"
	.string "Why…?\p"
	.string "I…\n"
	.string "Wha…\p"
	.string "WHAT?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_21:
# 1243 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "… … … …\p"
	.string "… … …\n"
	.string "… … …$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_22:
# 1245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why…\n"
	.string "Why didn't you…\l"
	.string "Say anything?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_23:
# 1250 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm sorry.\n"
	.string "I'm sorry.\p"
	.string "I tried.\n"
	.string "But there was no medice, and, and…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_24:
# 1252 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's my fault, Larvy, it's my fault, I…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25:
# 1254 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_26:
# 1259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But, maybe with the Doctor's machine, we\n"
	.string "could…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_27:
# 1261 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But, if we use the machine, can't we…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_28:
# 1263 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That Doctor's machine can bring things\n"
	.string "back to life, right…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_29:
# 1268 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I-I don't think that would work…\p"
	.string "It's not resurrecting, it's…\n"
	.string "Cloning…\p"
	.string "It wouldn't…\n"
	.string "Be the same.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_30:
# 1270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I think…\n"
	.string "I heard that the machine…\p"
	.string "Can only, copy, things…\n"
	.string "And not… Bring them back.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_31:
# 1272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "G-get real…\n"
	.string "It's not a resurrection device, it's…\p"
	.string "It's a fancy photocopier.\p"
	.string "We-\n"
	.string "We can't.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_32:
# 1277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, no…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_33:
# 1279 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, no…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_34:
# 1281 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, no…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_0:
# 1318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "I suppose we should say something.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_1:
# 1319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy was…\n"
	.string "Phanpy was…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_2:
# 1320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "An idiot.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_3:
# 1321 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, w-what…\n"
	.string "How could you say that?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_4:
# 1322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "She was an idiot who did nothing but\n"
	.string "charge headfirst into adventure.\p"
	.string "Honestly, I'm surprised she didn't get\n"
	.string "killed before now.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_5:
# 1323 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, please, stop!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_6:
# 1324 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why?\n"
	.string "It's the truth.\p"
	.string "Always pushing her luck, never happy to\n"
	.string "call it quits.\p"
	.string "Always, always…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_7:
# 1325 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Always…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_8:
# 1326 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_9:
# 1327 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I-\n"
	.string "I knew it was going to end like this.\p"
	.string "I could have avoided it…\n"
	.string "If only I-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_10:
# 1328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, you…\p"
	.string "Sometimes it doesn't seem like you care\n"
	.string "much…\n"
	.string "But you cared a lot, didn't you…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_11:
# 1329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Cared?\n"
	.string "I…\n"
	.string "I…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_12:
# 1331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Oh, Jiggly…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_13:
# 1332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…It doesn't matter.\n"
	.string "It's too late, now.\p"
	.string "We're left to pick up the pieces.\p"
	.string "Drampa…\n"
	.string "Must pay.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_14:
# 1333 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Do you think it's the Doctor's fault\n"
	.string "that…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_15:
# 1334 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I don't care.\p"
	.string "He built this island, and he will answer\n"
	.string "for it.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_16:
# 1338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's hard to…\n"
	.string "Come up with something to say, isn't it?\p"
	.string "Haha…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_17:
# 1339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly was…\n"
	.string "A bit of a difficult Pokémon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_18:
# 1340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You can say that again…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_19:
# 1343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, I don't think Jiggly liked me\n"
	.string "very much.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_20:
# 1344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, that's not it at all!\p"
	.string "I know he was…\n"
	.string "Snarky, and rude sometimes, but…\p"
	.string "He just wanted to make sure you were\n"
	.string "okay.\p"
	.string "I think…\n"
	.string "I think I'm the one he didn't like.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_21:
# 1345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I…\n"
	.string "I don't think that's true, either.\p"
	.string "He talked about you a lot.\n"
	.string "Like, a LOT a lot.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_22:
# 1346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "He had…\n"
	.string "His own way of caring about people,\l"
	.string "didn't he…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_23:
# 1349 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I wish I could have…\n"
	.string "Spent…\l"
	.string "Less time arguing…\p"
	.string "I… I…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_24:
# 1350 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I think Jiggly…\n"
	.string "Like arguing…\p"
	.string "So, I think, it's okay, that you argued a\n"
	.string "lot with him.\p"
	.string "I think…\n"
	.string "I think he enjoyed.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_25:
# 1351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…The Doctor…\p"
	.string "He… He took Jiggly away from us…\p"
	.string "A theme park?\n"
	.string "This is an affront to nature.\p"
	.string "We need to take him to justice.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_26:
# 1354 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…We failed Bagon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_27:
# 1355 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…We did.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_28:
# 1356 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "When she joined our team, I thought she\n"
	.string "wasn't ready.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_29:
# 1357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I know!\n"
	.string "But she was so enthusiastic, and, and…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_30:
# 1358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah.\n"
	.string "And what did we promise?\p"
	.string "To keep her safe, no matter what.\p"
	.string "No matter what, you understand?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_31:
# 1359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We couldn't possibly have expected…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_32:
# 1360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Couldn't have expected what?\p"
	.string "That a mad science would resurrect\n"
	.string "prehistoric monsters and pit them\l"
	.string "against us?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_33:
# 1361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Not… Really.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_34:
# 1362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Does it matter?\n"
	.string "Does it really matter what we expected?\p"
	.string "Does it matter that we weren't prepared\n"
	.string "for it?\p"
	.string "We should have prepared for anything.\n"
	.string "And we didn't.\p"
	.string "And now, she…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_35:
# 1366 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, Larvy, to be clear, I don't blame\n"
	.string "either of you.\p"
	.string "The only one that is to blame…\n"
	.string "Is Drampa.\p"
	.string "We have to take this park down.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_36:
# 1367 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Agreed.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_37:
# 1369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(…I still can't believe this is real.)\p"
	.string "(If only I didn't freeze up, then\n"
	.string "maybe…!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_38:
# 1373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy?\n"
	.string "I just wanted to say, uhm.\p"
	.string "When we were… Fighting, the big\n"
	.string "prehistoric Pokémon.\p"
	.string "I noticed, that, uhm…\p"
	.string "It was only…\n"
	.string "Attacking me.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39:
# 1374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I know…\n"
	.string "I know!)\p"
	.string "(I failed everyone!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_40:
# 1375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, Larvy, what I mean is…\p"
	.string "Do you think that maybe…\n"
	.string "There's… Another reason for that…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_41:
# 1376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Another…\n"
	.string "Reason?)\p"
	.string "(Now that you mention it…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_42:
# 1377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe that Pokémon can…\n"
	.string "Only attack what it sees moving?\p"
	.string "I think…\n"
	.string "I read something about it, at some\l"
	.string "point.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_43:
# 1378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_44:
# 1379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "So, if we ended up encountering it\n"
	.string "again…\p"
	.string "I think, it may be fine, as long as no one\n"
	.string "moves.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_45:
# 1382 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy?\n"
	.string "Can i mention something?\p"
	.string "When we were fighting the Tyrantrum,\n"
	.string "um…\p"
	.string "I noticed, it only went after me, didn't\n"
	.string "it…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_46:
# 1384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No…\n"
	.string "That's not what I mean.\p"
	.string "I think there's a reason for it.\p"
	.string "I think that Tyrantrum…\n"
	.string "Might not be able to see you if you\l"
	.string "stand still.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_47:
# 1385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(R-Really?!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_48:
# 1386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's just an hypothesis.\p"
	.string "But I think I read something similar\n"
	.string "once.\p"
	.string "So, if we encounter it again, we should\n"
	.string "try…\n"
	.string "Standing still.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_49:
# 1389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_50:
# 1391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Calm down for a second, will you?\p"
	.string "I noticed something interesting.\p"
	.string "When we were fighting, the monster only\n"
	.string "came after me.\p"
	.string "And before you say anything…\n"
	.string "I think there may be a reason for that.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_51:
# 1392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(A-a reason?!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_52:
# 1393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yes.\p"
	.string "It was as if…\n"
	.string "It couldn't see you at all.\p"
	.string "So maybe, it can only see moving things.\p"
	.string "Ergo, if we meet it again…\n"
	.string "We should also stand very, very still.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_53:
# 1399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Sounds like we got a plan.\p"
	.string "Since the generator is working, the\n"
	.string "bridge should be extended.\p"
	.string "Let's give him hell.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_54:
# 1401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We reactivated all the generators, so\n"
	.string "the bridge should be extended.\p"
	.string "Let's finish it, once and for all.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_55:
# 1403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, I know you're scared.\n"
	.string "I'm scared too.\p"
	.string "But, we managed to reactivate the\n"
	.string "genreators.\p"
	.string "The bridge should be back now.\p"
	.string "We need to…\n"
	.string "We need to finish this adventure.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack_Text_0:
# 1424 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I'm not going back in there.)$"
