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
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_FOREST_ROAD
# 147 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 148 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 149 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 150 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 151 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 152 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 153 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 154 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 155 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_JURASSIC_PARK_MAIN_THEME, TRUE
# 156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 159 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 160 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	teleportcamera VAR_TEMP_1, VAR_TEMP_2
# 162 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 163 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 164 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 165 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 166 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_FOREST_FIELD, TRUE
# 167 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 168 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 170 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 171 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 172 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 179 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 180 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 182 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 183 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 184 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 185 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 42, 36
# 186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 187 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 42, 36
# 188 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 189 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_BAGON_FOREST
	end


# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Movement_PlayerWalkToForest:
# 196 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 196 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 196 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 196 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 196 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial::
# 200 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 201 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 203 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 204 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_TUTORIAL
# 205 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 206 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 207 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0
# 208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff::
# 215 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 216 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 221 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 222 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 224 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 225 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon::
# 233 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 234 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 235 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0, localId = VAR_LAST_TALKED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 237 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_MOUNTAIN_COMPLETE, 1
	goto_if_lt JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_2
# 243 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_5
# 258 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_4:
# 260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 261 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_BASTIODON
# 262 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 263 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject VAR_LAST_TALKED
# 264 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	forcesave
# 265 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_2:
# 240 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_5:
# 245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 246 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_2, MSGBOX_YESNO
# 249 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_8
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_4

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_8:
# 251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 252 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt::
# 271 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_NO_GENERATORS
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3
# 283 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 285 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 288 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2:
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0
# 274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3:
# 279 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED
# 280 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy::
# 295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 297 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2
# 304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5
# 312 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 313 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 321 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2:
# 299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5:
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Archen::
# 328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0, localId = LOCALID_ARCHEN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum::
# 338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum_Text_0, localId = LOCALID_TYRANTRUM_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa::
# 350 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
# 352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 353 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 354 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 45, 27
# 355 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 46, 27
# 356 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 363 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 366 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 367 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_JIGGLYPUFF_FOREST
# 368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 5
# 379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 380 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 381 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1:
# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4:
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5
# 392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 46, 18
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 47, 17
# 396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 45, 17
# 398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7
# 399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 400 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 407 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 413 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 414 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 415 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 416 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 417 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 418 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 419 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 421 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 422 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 424 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 425 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 426 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 427 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 428 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 429 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 430 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 431 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 433 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 13
# 434 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 13
# 435 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 436 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 437 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 438 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 439 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_DRAMPA_FOREST, MOVEMENT_TYPE_SLEEP
# 440 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadedefaultbgm
# 441 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
# 442 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 443 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_DRAMPA_FOREST, MOVEMENT_TYPE_SLEEP
# 444 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_DRAMPA_FOREST
# 445 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_DRAMPA_FOREST
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2:
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3
# 384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5:
# 388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4
# 389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth::
# 452 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 453 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 454 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 455 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 456 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest::
# 462 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 463 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 464 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 465 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 466 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa::
# 472 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CUTSCENE_MYSTERIOUS
# 473 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_TEMP_1
# 476 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 31, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3
# 479 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 32, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4
# 482 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 33, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5
# 484 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 34, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6
# 487 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 35, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1:
# 491 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3
# 492 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 493 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 495 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 496 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 497 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 498 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 499 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6, , localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 502 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 503 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_TUTORIAL
# 504 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 505 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 506 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 507 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 509 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 510 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 511 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 512 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 513 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 514 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 515 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 516 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 517 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 518 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 519 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 520 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 521 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 522 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 523 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_FOREST
# 524 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 525 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 526 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5
# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 529 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 530 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 531 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 532 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 533 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 534 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 535 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 536 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 537 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 538 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 539 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 540 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 541 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 542 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 543 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 544 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 545 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 546 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 547 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 548 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 549 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 550 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 551 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_MET_DRAMPA
# 552 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
	return

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3:
# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0
# 478 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4:
# 480 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1
# 481 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5:
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6:
# 485 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 486 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7:
# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2
# 489 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down::
# 557 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 558 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 559 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 560 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 561 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Up::
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 572 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 573 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Sign::
# 581 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 582 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0, MSGBOX_SIGN
# 583 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa::
# 589 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 590 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 591 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 592 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_DRAMPA_FOREST
# 598 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 599 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 600 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 601 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 602 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 603 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 604 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 605 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 606 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 607 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setfollowernpc LOCALID_PHANPY_FOREST, FOLLOWER_NPC_FLAG_ALL_LAND
# 608 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
# 609 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim::
# 615 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 616 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 617 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 618 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 619 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 620 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth::
# 626 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 627 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 628 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 629 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 630 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 631 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWaySouth::
# 637 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 638 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 639 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 640 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 641 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 642 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_TyrantrumScene::
# 648 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 649 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 650 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 651 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 652 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 653 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 654 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 655 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 661 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 662 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 663 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 664 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 665 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 666 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 667 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 668 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 669 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 675 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 676 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 677 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 678 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 679 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 680 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 681 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 682 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 683 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 684 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 685 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 686 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 687 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 688 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6
# 694 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_PLAYER
# 695 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 696 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
# 697 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_FOREST
# 698 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_CENTRE
# 699 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_FOREST
# 700 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_CENTRE
# 701 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 702 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 703 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_TYRANTRUM_FOREST
# 704 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_ARCHEN_FOREST
# 705 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_CENTRE
# 706 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DINOS_WILDS
# 707 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 708 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain::
# 714 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_MOUNTAIN_COMPLETE, 2
# 715 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 717 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_2
# 719 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_3
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_2:
# 718 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_3:
# 720 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon::
# 730 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 731 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 732 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 733 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 734 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 735 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 736 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 737 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 738 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 739 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert::
# 746 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_DESERT_COMPLETE, 2
# 747 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 749 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_2
# 751 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_3
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_2:
# 750 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_3:
# 752 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy::
# 759 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 760 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 761 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 762 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 763 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 764 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 765 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 766 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 767 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 768 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene::
# 776 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 778 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_3
# 793 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_4
# 808 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_5
JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1:
# 828 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 829 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_POST_ONE_GENERATOR
	end

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_3:
# 779 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 780 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1, localId = LOCALID_PLAYER
# 781 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_2, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 782 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 783 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_4, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 784 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 785 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 786 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 787 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_CENTRE
# 788 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 789 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 790 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 791 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_5, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_4:
# 794 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_6, localId = LOCALID_PHANPY_FOREST
# 795 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1, localId = LOCALID_PLAYER
# 796 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_7, localId = LOCALID_PHANPY_FOREST
# 797 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_8, localId = LOCALID_PLAYER
# 798 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 799 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 800 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 801 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 802 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_CENTRE
# 803 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 804 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 805 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 806 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_10, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_5:
# 809 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 810 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_12, localId = LOCALID_PLAYER
# 811 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 812 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_14, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 813 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 814 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_16, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 815 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_17, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 816 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_18, localId = LOCALID_PLAYER
# 817 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_19, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 818 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 819 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 820 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 821 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 822 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 823 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 824 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 825 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_20, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1


JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh::
# 836 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_MARSH_COMPLETE, 2
# 836 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 838 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_2
# 840 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_3
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_2:
# 839 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_3:
# 841 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly::
# 848 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 849 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 850 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST
# 851 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 852 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 853 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 854 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 855 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 856 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 857 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly::
# 864 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 865 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 866 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 867 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 868 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 869 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 870 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 871 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 872 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 874 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_3
# 876 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_4
JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_1:
# 880 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 881 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 882 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS_CUTSCENE
# 883 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 884 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 12, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_3:
# 875 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_1

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_4:
# 877 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_1


JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon::
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
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
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


JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy::
# 910 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 911 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 912 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 913 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 914 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 916 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 917 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 918 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 920 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 921 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS_CUTSCENE
# 922 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 923 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 12, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene
	end


JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene::
# 932 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 933 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_0
# 935 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 936 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 937 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_1
# 939 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_1
# 940 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 941 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 942 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 944 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_3
# 946 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_4
# 948 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_5
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1:
# 951 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 952 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 953 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_2
# 954 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 955 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 957 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_8
# 959 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_9
# 961 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_10
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6:
# 964 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 965 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 966 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 967 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_6, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 968 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 969 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_VS_BOSS_POWERFUL, TRUE
# 970 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 971 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 972 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 973 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 976 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 977 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 978 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 979 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 980 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 981 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 982 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 983 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 984 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 985 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 986 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 987 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 988 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 989 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 990 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 991 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 992 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 993 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 994 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 995 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_7, localId = LOCALID_TYRANTRUM_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 996 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 998 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_13
# 1000 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_14
# 1002 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_15
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11:
# 1005 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1006 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_3
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_4
# 1009 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1010 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_11, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1011 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 1012 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1013 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1015 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_18
# 1017 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_19
# 1019 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_20
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16:
# 1023 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 1024 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1025 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_7, localId = LOCALID_TYRANTRUM_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 1026 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1027 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_TYRANTRUM_LOSE
# 1028 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 1029 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_15, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1030 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1032 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_23
# 1034 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_24
# 1036 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_25
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21:
# 1039 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1040 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1042 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_28
# 1044 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_29
# 1046 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_30
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26:
# 1049 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
# 1050 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 31, 8
# 1051 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_SECOND, MOVEMENT_TYPE_FACE_DOWN
# 1052 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 1053 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 1054 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 1055 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1057 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_33
# 1059 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_34
# 1061 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_35
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31:
# 1064 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1065 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 1066 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 1067 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1068 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1070 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_38
# 1078 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_39
# 1086 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_40
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36:
# 1095 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_5
# 1096 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1097 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 1098 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 1099 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_6
# 1100 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement VAR_LOCALID_CUTSCENE_SECOND
# 1101 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 1103 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_RAZOR_WIND
# 1104 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 1105 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_7
# 1106 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_8
# 1107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1108 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
# 1110 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_SECOND
# 1111 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_SECOND, MOVEMENT_TYPE_SLEEP
# 1112 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 32, 12
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 1114 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 16
# 1115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 1116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 128
# 1117 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1119 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_43
# 1122 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_44
# 1130 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_45
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41:
# 1139 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6
# 1140 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_33, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1141 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_9
# 1143 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1144 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_34, localId = LOCALID_TYRANTRUM_FOREST
# 1145 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_10
# 1147 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1148 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_TYRANTRUM_FOREST
# 1149 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_TYRUNT_FOREST
# 1150 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 1151 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1153 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_57
# 1155 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_58
# 1157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_59
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55:
# 1160 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_38, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1161 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 64
# 1162 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_FOREST
# 1163 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 1164 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_FOREST
# 1165 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 1166 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 1167 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1168 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_VISITOR_CENTRE, 18, 6, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor
# 1169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_3:
# 945 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_4:
# 947 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_5:
# 949 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_2, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_8:
# 958 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_3, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_9:
# 960 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_4, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_10:
# 962 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_5, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_13:
# 999 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_8, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_14:
# 1001 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_9, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_15:
# 1003 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_10, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_18:
# 1016 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_12, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_19:
# 1018 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_13, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_20:
# 1020 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_14, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_23:
# 1033 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_16, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_24:
# 1035 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_17, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_25:
# 1037 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_18, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_28:
# 1043 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_FOREST
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_29:
# 1045 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_FOREST
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_30:
# 1047 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_FOREST
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_33:
# 1058 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_19, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_34:
# 1060 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_20, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_35:
# 1062 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_21, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_38:
# 1071 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1073 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_47
# 1075 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_48
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_39:
# 1079 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1081 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_50
# 1083 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_51
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_40:
# 1087 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1089 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_53
# 1091 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_54
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_43:
# 1120 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_28, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_44:
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1125 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_61
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_62
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_45:
# 1131 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1133 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_64
# 1135 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_65
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_47:
# 1074 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_22, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_48:
# 1076 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_23, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_50:
# 1082 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_24, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_51:
# 1084 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_25, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_53:
# 1090 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_26, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_54:
# 1092 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_27, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_57:
# 1154 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_35, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_58:
# 1156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_36, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_59:
# 1158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_37, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_61:
# 1126 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_29, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_62:
# 1128 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_30, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_64:
# 1134 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_31, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_65:
# 1136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_32, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41


JurassicPark_Dino_Enclosure_EventScript_WhereAreYouGoing::
# 1174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Dino_Enclosure_EventScript_WhereAreYouGoing_Text_0
# 1175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 1177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators::
# 1185 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 1186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1188 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_3
# 1190 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_4
# 1192 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_5
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1:
# 1195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 1196 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 31, 8
# 1197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_DOWN
# 1198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 1199 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 1200 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 1201 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1204 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_8
# 1207 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_9
# 1210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_10
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6:
# 1214 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1216 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_13
# 1218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_14
# 1220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_15
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11:
# 1223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1225 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_18
# 1227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_19
# 1229 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_20
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16:
# 1232 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1234 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_23
# 1236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_24
# 1238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_25
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21:
# 1241 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1243 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_28
# 1245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_29
# 1247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_30
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26:
# 1250 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_18, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 1252 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 1253 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	doweather
# 1254 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 128
# 1255 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_19, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1257 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_33
# 1261 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_34
# 1263 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_35
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31:
# 1266 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1268 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_38
# 1270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_39
# 1272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_40
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36:
# 1275 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_43
# 1279 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_44
# 1281 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_45
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41:
# 1284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_48
# 1288 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_49
# 1290 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_50
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46:
# 1293 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_53
# 1297 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_54
# 1299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_55
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51:
# 1302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_NO_OW_MUSIC
# 1303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_ALWAYS_RAINING
# 1304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_THREE_GENERATORS_CUTSCENE
# 1305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 1307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 36, 11, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_3:
# 1189 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_4:
# 1191 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_5:
# 1193 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_8:
# 1205 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1206 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_9:
# 1208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_3, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_10:
# 1211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1212 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_5, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_13:
# 1217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_14:
# 1219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_7, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_15:
# 1221 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_18:
# 1226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_9, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_19:
# 1228 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_10, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_20:
# 1230 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_11, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_23:
# 1235 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_12, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_24:
# 1237 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_13, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_25:
# 1239 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_14, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_28:
# 1244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_15, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_29:
# 1246 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_16, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_30:
# 1248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_17, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_33:
# 1260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_20, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_34:
# 1262 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_21, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_35:
# 1264 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_22, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_38:
# 1269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_23, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_39:
# 1271 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_24, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_40:
# 1273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_43:
# 1278 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_26, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_44:
# 1280 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_27, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_45:
# 1282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_28, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_48:
# 1287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_29, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_49:
# 1289 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_30, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_50:
# 1291 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_31, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_53:
# 1296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_32, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_54:
# 1298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_33, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_55:
# 1300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_34, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51


JurassicPark_Road_To_Visitor_Centre_EventScript_DrawGrave::
# 1314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 34, 9, METATILE_Forest_Primary_DirtTopLeft, FALSE
# 1315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 35, 9, METATILE_Forest_Primary_DirtTop, FALSE
# 1316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 36, 9, METATILE_Forest_Primary_DirtTopRight, FALSE
# 1317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 34, 10, METATILE_Forest_Primary_DirtLeft, FALSE
# 1318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 35, 10, METATILE_Forest_Primary_Dirt, FALSE
# 1319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 36, 10, METATILE_Forest_Primary_DirtRight, FALSE
# 1320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 34, 11, METATILE_Forest_Primary_DirtBottomLeft, FALSE
# 1321 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 35, 11, METATILE_Forest_Primary_DirtBottom, FALSE
# 1322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 36, 11, METATILE_Forest_Primary_DirtBottomRight, FALSE
# 1323 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special DrawWholeMapView
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene::
# 1328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	call JurassicPark_Road_To_Visitor_Centre_EventScript_DrawGrave
# 1329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 1330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 1332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1333 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 1334 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1336 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_3
# 1354 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_4
# 1371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_5
JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1:
# 1388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_37, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_8
# 1400 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_9
# 1407 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_10
JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6:
# 1415 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1417 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_13
# 1419 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_14
# 1421 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_15
JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11:
# 1424 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1425 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_NO_OW_MUSIC
# 1426 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_DETERMINATION
# 1427 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_DETERMINATION
# 1428 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_POST_THREE_GENERATORS
# 1429 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1430 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 1431 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 1432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 1433 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE
# 1434 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 16
# 1435 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1436 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_3:
# 1337 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_0, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_1, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_3, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_4, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_5, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_6, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_7, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_8, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_9, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_10, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1349 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1350 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_12, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 1352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_14, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1353 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_4:
# 1355 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1356 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_16, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_17, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_18, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 64
# 1362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_19, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1363 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_20, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_21, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_22, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1366 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1367 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_23, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_24, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_5:
# 1372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_26, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_27, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_28, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_29, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 1377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_30, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_31, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_32, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 1380 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_33, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1381 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_34, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1382 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_17, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_35, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 1386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_36, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_8:
# 1392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_38, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_40, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_41, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_42, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_43, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_44, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_9:
# 1401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_45, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_46, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_47, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_48, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_10:
# 1408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_49, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 1409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_50, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 1411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_51, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_52, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_13:
# 1418 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_53, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_14:
# 1420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_54, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_15:
# 1422 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_55, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11


JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack::
# 1442 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 1443 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack_Text_0, localId = LOCALID_PLAYER
# 1444 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 1445 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1446 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Mountain_WalkBack::
# 1452 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 1453 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack_Text_0, localId = LOCALID_PLAYER
# 1454 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1
# 1455 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1456 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0:
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
	step_end

# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1:
# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 180 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2:
# 180 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 180 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 180 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 180 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0:
# 223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0:
# 361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1:
# 364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2:
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3:
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4:
# 388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5:
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6:
# 396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_left
	step_end

# 398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7:
# 398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_right
	step_end

# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8:
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 464 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0:
# 464 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0:
# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 480 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1:
# 480 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2:
# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 491 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3:
# 491 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 491 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 491 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 491 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 507 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4:
# 507 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5:
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0:
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1:
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 604 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2:
# 604 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 604 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 649 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0:
# 649 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 649 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 649 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 649 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 649 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1:
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
	step_end

# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2:
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3:
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4:
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
	step_end

# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5:
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
	step_end

# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6:
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 784 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0:
# 784 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 784 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 868 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0:
# 868 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	emote_exclamation_mark
# 868 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
	step_end

# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_0:
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_1:
# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
	step_end

# 953 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_2:
# 953 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	emote_exclamation_mark
# 953 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 953 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_3:
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_4:
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock_facing_direction
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 1008 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	unlock_facing_direction
	step_end

# 1095 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_5:
# 1095 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 1095 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 1095 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
	step_end

# 1099 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_6:
# 1099 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 1099 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_right
	step_end

# 1105 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_7:
# 1105 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock_facing_direction
# 1105 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 1105 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	unlock_facing_direction
	step_end

# 1106 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_8:
# 1106 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_9:
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_10:
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0:
# 151 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, guys!\n"
	.string "What's-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1:
# 152 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Shh!\n"
	.string "Look!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2:
# 153 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look at w…\n"
	.string "Oh!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3:
# 167 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's…\n"
	.string "It's…\l"
	.string "It's beautiful!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4:
# 168 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It really is.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5:
# 172 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And would you look at that.\n"
	.string "There ARE other Pokémon here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6:
# 173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "They look weird, though.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7:
# 174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, that's a bit rude!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8:
# 175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, it's true.\n"
	.string "Never seen any Pokémon that look like\l"
	.string "this, that's for sure.\p"
	.string "Hopefully they're not a cannibal tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9:
# 176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "C-cannibals?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10:
# 177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11:
# 178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Gee, sensitive much?\n"
	.string "It'll be fine.\p"
	.string "C'mon, let's go talk to them.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0:
# 207 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You're a very interesting Pokémon,\nwho are you?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1:
# 209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvesta? What a funny name...\nWell it's a pleasure to meet you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0:
# 216 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO?\n"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1:
# 219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Get a load of these guys, Larvy.\p"
	.string "I'm trying to ask them something, and\n"
	.string "they're ignoring me!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2:
# 220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe it's because they can't\n"
	.string "understand us?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3:
# 221 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, it's because we're outsiders, isn't\n"
	.string "it?\p"
	.string "This isn't an island of cannibals.\n"
	.string "It's an island of racists!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4:
# 222 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I'm not sure that's it, Jiggly.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5:
# 225 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0:
# 236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Guoh!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_1:
# 245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(It never seems to turn…\n"
	.string "It can certainly see me, for now…)\p"
	.string "(Maybe I can help it out…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_2:
# 248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Approach the Bastiodon?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_3:
# 258 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(It never seems to turn…\n"
	.string "Maybe it doesn't even know I'm here.)\p"
	.string "(Maybe I can help it out…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0:
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No response.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1:
# 279 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2:
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, hello?\n"
	.string "Sir?\l"
	.string "Or madam?\p"
	.string "Can I ask you something?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3:
# 286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hmm…\n"
	.string "No response.\p"
	.string "Maybe they can't hear me because their\n"
	.string "neck is too long.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4:
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I wonder…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0:
# 299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quick, after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1:
# 312 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, Larvy, there's something strange\n"
	.string "going on.\p"
	.string "Do you see that?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2:
# 313 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Looks like a flying-type Pokémon to me.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3:
# 314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, probably, but…\p"
	.string "Have you ever seen a Pokémon that\n"
	.string "looks like this?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4:
# 315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, but…\p"
	.string "There's a lot of different Pokémon in\n"
	.string "the world.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5:
# 316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fair enough.\n"
	.string "But I HAVE seen a Pokémon like this.\l"
	.string "In a book.\p"
	.string "It was a book about…\n"
	.string "Prehistoric Pokémon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6:
# 317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Pre-\n"
	.string "Huh?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7:
# 318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not completely sure.\n"
	.string "But…\p"
	.string "If I am correct, this Pokémon here…\n"
	.string "Should be extinct.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8:
# 319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What does that mean…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9:
# 320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not… Sure what to make of this,\n"
	.string "exactly.\p"
	.string "And I don't remember seeing the\n"
	.string "long-necked ones in the book.\p"
	.string "I think we should try and find out more.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0:
# 330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Squawk?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum_Text_0:
# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Grrrawr!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Tyrantrum_Text_1:
# 342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "C'mon Larvy…\n"
	.string "{PAUSE 40}Let's get out of here…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0:
# 368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Erm…\nSo what do you guys think…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1:
# 369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I think that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2:
# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!\n"
	.string "Wait!\p"
	.string "We need to get into proper position\n"
	.string "first!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3:
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, we talked about this.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4:
# 372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No!!!\p"
	.string "According to the Manual of the\n"
	.string "Impeccable Explorer…\p"
	.string "Important team briefings should be\n"
	.string "delivered standing in formation!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5:
# 373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "In the interest of time, I will skip the\n"
	.string "arguing.\p"
	.string "Let's just do that.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6:
# 374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Thank you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7:
# 402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "As I was saying…\p"
	.string "I think we're dealing with an\n"
	.string "uncontacted tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8:
# 403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uncontacted tribe?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9:
# 404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, y'know.\n"
	.string "Cannibals and the such.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10:
# 405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Enough with that joke!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11:
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quit it, Jiggly.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12:
# 407 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(He's right, though.\n"
	.string "Not about the cannibals, but…)\p"
	.string "(These Pokémon ARE very strange.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13:
# 408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "There's something that bothers me,\n"
	.string "though.\p"
	.string "I'm pretty sure that at least some of\n"
	.string "these Pokémon are from the prehistoric\l"
	.string "era.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14:
# 409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And how would that be possible, smarty\n"
	.string "pants?\p"
	.string "They just…\n"
	.string "Hid here and survived going extinct?\p"
	.string "And if so, who built the stairs?\n"
	.string "The pier?\l"
	.string "That strange… Cardboard house?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15:
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…What's pants?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16:
# 411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's something Machoke have.\n"
	.string "Don't ask, it's kinda gross.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17:
# 412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, I don't know!\n"
	.string "But…\p"
	.string "There has to be an explanation!\n"
	.string "There has to be something here that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18:
# 416 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "H{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}NK{PAUSE 10} MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19:
# 419 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did you guys hear that?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20:
# 420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Just sounds like someone snoring.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21:
# 421 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We should check it out!\n"
	.string "It could be someone we can talk to!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0:
# 453 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I have to see what's going on over\n"
	.string "there first.)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0:
# 493 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not a prehistoric Pokémon!\n"
	.string "That's a Drampa!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1:
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe they would know something about\n"
	.string "what's going on.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2:
# 495 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You know what they say: sleeping\n"
	.string "Pokémon tell no tales.\p"
	.string "I'm going to try and wake them up.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3:
# 496 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Don't you think someone else should do\n"
	.string "it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4:
# 497 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's because I'm a Jigglypuff, isn't it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5:
# 498 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You'd just make them sleep harder!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6:
# 499 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fine, fine.\n"
	.string "Larvy, figure it out.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7:
# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(If we get them to talk to us, we might\n"
	.string "learn something about this mysterious\l"
	.string "island.)\p"
	.string "(Well, here goes nothing!)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8:
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Who are you?!\n"
	.string "How did you get here?!\l"
	.string "Are you with the tax office?!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9:
# 509 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, no.\n"
	.string "We're treasure hunters.\p"
	.string "We kind of…\n"
	.string "Wrecked our boat.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10:
# 510 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah!\n"
	.string "Treasure hunters!\l"
	.string "What a relief!\p"
	.string "Oh, but you came early!\n"
	.string "The park is not finished yet!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11:
# 511 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ohh, a park?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12:
# 512 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And you are…?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13:
# 513 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah, how rude!\p"
	.string "Dr. John Drampa, at your service.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14:
# 514 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, Dr. Drampa…$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15:
# 515 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. John Drampa.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16:
# 516 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, John.\p"
	.string "What's going on here?\n"
	.string "Wasn't this a deserted island?\p"
	.string "What are all these Pokémon doing here?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17:
# 517 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But of course!\n"
	.string "It's only natural that you would be\l"
	.string "confused.\p"
	.string "Follow me, I will explain everything.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18:
# 525 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…I really don't like this guy.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19:
# 532 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I've never met a doctor before.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20:
# 533 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm very curious what this is all about.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21:
# 546 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose I should go check this out,\n"
	.string "too.)$"

JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0:
# 558 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. Drampa said wandering around could\n"
	.string "be dangerous.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0:
# 582 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "{UP_ARROW} Ancient Desert\n"
	.string "{DOWN_ARROW} Primordial Beach\l"
	.string "{LEFT_ARROW} Lost Mountains\l"
	.string "{RIGHT_ARROW}Observation Platform, Forgotten\l"
	.string "Swamp, Laboratory$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0:
# 590 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1:
# 602 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Let's go after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0:
# 616 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, we have to go after the Doctor!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0:
# 627 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not the way he went, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0:
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What are you guys doing out here?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1:
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We're going to repair the generators!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2:
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, I figured out where the\n"
	.string "generators are.\p"
	.string "Turns out, there's a bridge to the lab,\n"
	.string "but it retracts when the generators\l"
	.string "are out as a security measure.\p"
	.string "And the only way to take 'em back up is\n"
	.string "manually.$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3:
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Forget about it!\n"
	.string "The cage is broken!\p"
	.string "We need to hide, now!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4:
# 661 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5:
# 669 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "N-no way…$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6:
# 687 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "Run.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_0:
# 730 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We almost made it back!\n"
	.string "And no scary Pokémon to be found.\p"
	.string "Hopefully it stays that way!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_1:
# 731 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I do wonder were it went, though.)\p"
	.string "(It couldn't have left the island, but…\n"
	.string "Maybe it really won't bother us again.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_2:
# 732 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Let's go back to the centre.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_0:
# 759 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Whew!\n"
	.string "Finally, no more sand.\p"
	.string "Reminds me of that time we went to the\n"
	.string "desert to look for treasure…\p"
	.string "And we fell in a pit, and Jiggly got sand\n"
	.string "up his nose!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_1:
# 760 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I didn't even know he had a nose.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_2:
# 761 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "After this is over, let's go on vacation\n"
	.string "somewhere… calmer.\p"
	.string "But first, let's go back to the centre.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_0:
# 779 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy…\p"
	.string "Would it be…\n"
	.string "Okay, if I stayed here while you look\l"
	.string "for the others…?$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1:
# 780 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Sure, I guess so, but…\n"
	.string "Why's that?)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_2:
# 781 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I… I wish I could do more, but…\n"
	.string "I think… I may need a rest.\p"
	.string "I'm sorry, I…\n"
	.string "I know I'm not too useful, and, and…\l"
	.string "I'm not as strong as you guys, and…$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_3:
# 782 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Bagon, it's okay.\n"
	.string "You're too tired to keep going.)\p"
	.string "(Taking breaks to avoid injuries is\n"
	.string "important.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_4:
# 783 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll make up for it, I swear!\p"
	.string "Once I've rested, I'm gonna back to\n"
	.string "kicking some prehistoric butts!\p"
	.string "One day, Larvy, one day I will become a\n"
	.string "Salamence, and…\l"
	.string "I'll never be tired and scared again!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_5:
# 791 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 794 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, can I ask you something…?\p"
	.string "Would you mind if I stayed here at the\n"
	.string "centre, for now?$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_7:
# 796 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I just thought…\n"
	.string "We've been encountering dangerous\l"
	.string "Pokémon we've never seen before.\p"
	.string "I figure, maybe there's some\n"
	.string "information in the centre that that\l"
	.string "could be useful.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_8:
# 797 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I see.\n"
	.string "That does make sense.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_9:
# 798 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 806 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 809 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I hate to say this, but…\p"
	.string "I may tap out for a bit.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_12:
# 810 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Uh, sure, I guess, but…\n"
	.string "Why's that?)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_13:
# 811 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I hurt my floatation sack.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_14:
# 812 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(That wasn't a joke?!)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_15:
# 813 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why would I joke about something like\n"
	.string "that?!\p"
	.string "I'm a very serious person, I'll let you\n"
	.string "know!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_16:
# 814 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose…)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_17:
# 815 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 816 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Of course.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_19:
# 817 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I know I can rely on you, Larvy.\p"
	.string "I'll be back in no time, and these brutes\n"
	.string "will know the wrath of Jigglypuff!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_20:
# 825 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 848 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And here we are, safe and sound.\n"
	.string "Obviously.\p"
	.string "You did fairly good, Larvy.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_1:
# 849 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Uh, thanks…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_2:
# 850 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yes, anyway.\p"
	.string "Let's not linger here too much.\n"
	.string "I don't want to see that ugly brute\l"
	.string "show up again.\p"
	.string "Let's go to the visitor centre, yeah?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0:
# 871 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What was that?!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_1:
# 875 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Now, I might be mistaken, but that does\n"
	.string "not sound like Phanpy at all.\p"
	.string "I think we should probably hurry.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon_Text_0:
# 899 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did we take too long?!\p"
	.string "Let's go back, quick!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy_Text_0:
# 918 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "A roar?\n"
	.string "No, it can't be…\p"
	.string "Larvy, we have to go, now!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_0:
# 945 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Too slow, buddy.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_1:
# 947 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Stay away from our friend!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_2:
# 949 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Stop right there!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_3:
# 958 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Heh, it's a small fry.\p"
	.string "We can take on this guy easily.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_4:
# 960 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…A Tyrunt.\p"
	.string "Well, maybe we can just shoo him away.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_5:
# 962 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy, it's a baby one!\p"
	.string "This is gonna be easy.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_6:
# 967 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(No…\n"
	.string "It's back…!)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_7:
# 995 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "GROAAAAAR!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_8:
# 999 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…We're in trouble.\p"
	.string "Let's hide inside, quick!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_9:
# 1001 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No way…\n"
	.string "He's here…\l"
	.string "Again…\p"
	.string "Larvy, we need to go back inside!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_10:
# 1003 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We can take it, Larvy, can't we…?\p"
	.string "… … …\n"
	.string "No, let's run inside!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_11:
# 1010 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I…\n"
	.string "I can't…)\p"
	.string "(It's blocking me!)\p"
	.string "(But…\n"
	.string "We can't beat this Pokémon!)\p"
	.string "(We just can't!)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_12:
# 1016 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, what are you doing?!\p"
	.string "It's going to attack!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_13:
# 1018 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Any chance we could…\n"
	.string "Talk it out…?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_14:
# 1020 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Larvy!\l"
	.string "Help!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_15:
# 1029 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What…\n"
	.string "Is happening to me…)\p"
	.string "(My legs…\n"
	.string "Aren't moving…?)\p"
	.string "(I'm…\n"
	.string "I'm too scared…)\p"
	.string "(Is this it…?\n"
	.string "No…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_16:
# 1033 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No! No! No!\n"
	.string "Please!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_17:
# 1035 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Not…\n"
	.string "Like this…!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_18:
# 1037 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Waaaaaaa!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_19:
# 1058 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What's all this no-$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_20:
# 1060 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, what's happening out he-$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_21:
# 1062 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ohh, are you back, La-$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_22:
# 1074 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Phanpy!\p"
	.string "Get out of there, you idiots!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_23:
# 1076 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Bagon!\p"
	.string "Get out of there, you idiots!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_24:
# 1082 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, no!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_25:
# 1084 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, no!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_26:
# 1090 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll save you, Jiggly!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_27:
# 1092 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll save you, Phanpy!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_28:
# 1120 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…Uh, what happene-\p"
	.string "No!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_29:
# 1126 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Jiggly!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_30:
# 1128 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Bagon!!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_31:
# 1134 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Um, am I dead…?\p"
	.string "Wait, Jiggly…?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_32:
# 1136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Um, am I dead…?\p"
	.string "Wait, Phanpy…?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_33:
# 1140 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(No…\n"
	.string "How could I have let it happen…!)\p"
	.string "(I couldn't move, and, and…!)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_34:
# 1144 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…Grarg.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_35:
# 1154 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We have to hurry inside, now!\p"
	.string "We need to look for medical supplies!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_36:
# 1156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy! Larvy!\n"
	.string "This is terrible!\p"
	.string "We need to find some medicine!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_37:
# 1158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "This can't be happening…\p"
	.string "Larvy, we need to find a first aid kit, or\n"
	.string "something…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_38:
# 1160 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(This is a nightmare…)$"

JurassicPark_Dino_Enclosure_EventScript_WhereAreYouGoing_Text_0:
# 1174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy, where are you going?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_0:
# 1205 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(P-Phanpy?!\n"
	.string "Where's…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_1:
# 1206 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I-I tried…\n"
	.string "I tried…\l"
	.string "I…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_2:
# 1208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(B-Bagon?!\n"
	.string "Where's…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_3:
# 1209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, something…\n"
	.string "Something bad happened…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_4:
# 1211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(J-Jiggly?!\n"
	.string "Where's…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_5:
# 1212 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\p"
	.string "I…\p"
	.string "… … …$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_6:
# 1217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…Guys?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_7:
# 1219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Is everything…\n"
	.string "Okay?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_8:
# 1221 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Is there something I'm missing?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_9:
# 1226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You didn't say…\n"
	.string "What… Happened, did you…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_10:
# 1228 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Oh…\n"
	.string "You don't…\l"
	.string "You don't know, haha.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_11:
# 1230 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Oh, I see.\p"
	.string "I'm going to…\n"
	.string "Have to be the one to break the news.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_12:
# 1235 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "This is a…\n"
	.string "Joke, right?\p"
	.string "Guys?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_13:
# 1237 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I don't…\n"
	.string "Understand?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_14:
# 1239 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…\n"
	.string "Larvy, what in the world…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_15:
# 1244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_16:
# 1246 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_17:
# 1248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_18:
# 1250 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did not make it.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_19:
# 1255 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(No.)\p"
	.string "(This is not happening.)\p"
	.string "(This is NOT happening!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_20:
# 1260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "W-what…\n"
	.string "When\l"
	.string "Why…?\p"
	.string "I…\n"
	.string "Wha…\p"
	.string "WHAT?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_21:
# 1262 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "… … … …\p"
	.string "… … …\n"
	.string "… … …$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_22:
# 1264 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why…\n"
	.string "Why didn't you…\l"
	.string "Say anything?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_23:
# 1269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm sorry.\n"
	.string "I'm sorry.\p"
	.string "I tried.\n"
	.string "But there was no medice, and, and…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_24:
# 1271 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's my fault, Larvy, it's my fault, I…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25:
# 1273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_26:
# 1278 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But, maybe with the Doctor's machine, we\n"
	.string "could…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_27:
# 1280 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But, if we use the machine, can't we…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_28:
# 1282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That Doctor's machine can bring things\n"
	.string "back to life, right…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_29:
# 1287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I-I don't think that would work…\p"
	.string "It's not resurrecting, it's…\n"
	.string "Cloning…\p"
	.string "It wouldn't…\n"
	.string "Be the same.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_30:
# 1289 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I think…\n"
	.string "I heard that the machine…\p"
	.string "Can only, copy, things…\n"
	.string "And not… Bring them back.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_31:
# 1291 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "G-get real…\n"
	.string "It's not a resurrection device, it's…\p"
	.string "It's a fancy photocopier.\p"
	.string "We-\n"
	.string "We can't.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_32:
# 1296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, no…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_33:
# 1298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, no…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_34:
# 1300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, no…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_0:
# 1337 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "I suppose we should say something.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_1:
# 1338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy was…\n"
	.string "Phanpy was…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_2:
# 1339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "An idiot.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_3:
# 1340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, w-what…\n"
	.string "How could you say that?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_4:
# 1341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "She was an idiot who did nothing but\n"
	.string "charge headfirst into adventure.\p"
	.string "Honestly, I'm surprised she didn't get\n"
	.string "killed before now.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_5:
# 1342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, please, stop!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_6:
# 1343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why?\n"
	.string "It's the truth.\p"
	.string "Always pushing her luck, never happy to\n"
	.string "call it quits.\p"
	.string "Always, always…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_7:
# 1344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Always…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_8:
# 1345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_9:
# 1346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I-\n"
	.string "I knew it was going to end like this.\p"
	.string "I could have avoided it…\n"
	.string "If only I-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_10:
# 1347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, you…\p"
	.string "Sometimes it doesn't seem like you care\n"
	.string "much…\n"
	.string "But you cared a lot, didn't you…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_11:
# 1348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Cared?\n"
	.string "I…\n"
	.string "I…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_12:
# 1350 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Oh, Jiggly…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_13:
# 1351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…It doesn't matter.\n"
	.string "It's too late, now.\p"
	.string "We're left to pick up the pieces.\p"
	.string "Drampa…\n"
	.string "Must pay.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_14:
# 1352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Do you think it's the Doctor's fault\n"
	.string "that…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_15:
# 1353 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I don't care.\p"
	.string "He built this island, and he will answer\n"
	.string "for it.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_16:
# 1357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's hard to…\n"
	.string "Come up with something to say, isn't it?\p"
	.string "Haha…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_17:
# 1358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly was…\n"
	.string "A bit of a difficult Pokémon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_18:
# 1359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You can say that again…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_19:
# 1362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, I don't think Jiggly liked me\n"
	.string "very much.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_20:
# 1363 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, that's not it at all!\p"
	.string "I know he was…\n"
	.string "Snarky, and rude sometimes, but…\p"
	.string "He just wanted to make sure you were\n"
	.string "okay.\p"
	.string "I think…\n"
	.string "I think I'm the one he didn't like.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_21:
# 1364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I…\n"
	.string "I don't think that's true, either.\p"
	.string "He talked about you a lot.\n"
	.string "Like, a LOT a lot.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_22:
# 1365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "He had…\n"
	.string "His own way of caring about people,\l"
	.string "didn't he…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_23:
# 1368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I wish I could have…\n"
	.string "Spent…\l"
	.string "Less time arguing…\p"
	.string "I… I…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_24:
# 1369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I think Jiggly…\n"
	.string "Like arguing…\p"
	.string "So, I think, it's okay, that you argued a\n"
	.string "lot with him.\p"
	.string "I think…\n"
	.string "I think he enjoyed.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_25:
# 1370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…The Doctor…\p"
	.string "He… He took Jiggly away from us…\p"
	.string "A theme park?\n"
	.string "This is an affront to nature.\p"
	.string "We need to take him to justice.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_26:
# 1373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…We failed Bagon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_27:
# 1374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…We did.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_28:
# 1375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "When she joined our team, I thought she\n"
	.string "wasn't ready.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_29:
# 1376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I know!\n"
	.string "But she was so enthusiastic, and, and…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_30:
# 1377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah.\n"
	.string "And what did we promise?\p"
	.string "To keep her safe, no matter what.\p"
	.string "No matter what, you understand?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_31:
# 1378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We couldn't possibly have expected…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_32:
# 1379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Couldn't have expected what?\p"
	.string "That a mad science would resurrect\n"
	.string "prehistoric monsters and pit them\l"
	.string "against us?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_33:
# 1380 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Not… Really.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_34:
# 1381 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Does it matter?\n"
	.string "Does it really matter what we expected?\p"
	.string "Does it matter that we weren't prepared\n"
	.string "for it?\p"
	.string "We should have prepared for anything.\n"
	.string "And we didn't.\p"
	.string "And now, she…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_35:
# 1385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, Larvy, to be clear, I don't blame\n"
	.string "either of you.\p"
	.string "The only one that is to blame…\n"
	.string "Is Drampa.\p"
	.string "We have to take this park down.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_36:
# 1386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Agreed.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_37:
# 1388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(…I still can't believe this is real.)\p"
	.string "(If only I didn't freeze up, then\n"
	.string "maybe…!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_38:
# 1392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy?\n"
	.string "I just wanted to say, uhm.\p"
	.string "When we were… Fighting, the big\n"
	.string "prehistoric Pokémon.\p"
	.string "I noticed, that, uhm…\p"
	.string "It was only…\n"
	.string "Attacking me.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39:
# 1393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I know…\n"
	.string "I know!)\p"
	.string "(I failed everyone!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_40:
# 1394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, Larvy, what I mean is…\p"
	.string "Do you think that maybe…\n"
	.string "There's… Another reason for that…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_41:
# 1395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Another…\n"
	.string "Reason?)\p"
	.string "(Now that you mention it…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_42:
# 1396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe that Pokémon can…\n"
	.string "Only attack what it sees moving?\p"
	.string "I think…\n"
	.string "I read something about it, at some\l"
	.string "point.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_43:
# 1397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_44:
# 1398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "So, if we ended up encountering it\n"
	.string "again…\p"
	.string "I think, it may be fine, as long as no one\n"
	.string "moves.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_45:
# 1401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy?\n"
	.string "Can i mention something?\p"
	.string "When we were fighting the Tyrantrum,\n"
	.string "um…\p"
	.string "I noticed, it only went after me, didn't\n"
	.string "it…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_46:
# 1403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No…\n"
	.string "That's not what I mean.\p"
	.string "I think there's a reason for it.\p"
	.string "I think that Tyrantrum…\n"
	.string "Might not be able to see you if you\l"
	.string "stand still.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_47:
# 1404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(R-Really?!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_48:
# 1405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's just an hypothesis.\p"
	.string "But I think I read something similar\n"
	.string "once.\p"
	.string "So, if we encounter it again, we should\n"
	.string "try…\n"
	.string "Standing still.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_49:
# 1408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_50:
# 1410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Calm down for a second, will you?\p"
	.string "I noticed something interesting.\p"
	.string "When we were fighting, the monster only\n"
	.string "came after me.\p"
	.string "And before you say anything…\n"
	.string "I think there may be a reason for that.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_51:
# 1411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(A-a reason?!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_52:
# 1412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yes.\p"
	.string "It was as if…\n"
	.string "It couldn't see you at all.\p"
	.string "So maybe, it can only see moving things.\p"
	.string "Ergo, if we meet it again…\n"
	.string "We should also stand very, very still.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_53:
# 1418 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Sounds like we got a plan.\p"
	.string "Since the generator is working, the\n"
	.string "bridge should be extended.\p"
	.string "Let's give him hell.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_54:
# 1420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We reactivated all the generators, so\n"
	.string "the bridge should be extended.\p"
	.string "Let's finish it, once and for all.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_55:
# 1422 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, I know you're scared.\n"
	.string "I'm scared too.\p"
	.string "But, we managed to reactivate the\n"
	.string "genreators.\p"
	.string "The bridge should be back now.\p"
	.string "We need to…\n"
	.string "We need to finish this adventure.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack_Text_0:
# 1443 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I'm not going back in there.)$"
