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
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_1
# 245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_BASTIODON
# 246 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PUZZLE_COMPLETE
	goto_if_ne JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_5
JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_4:
# 250 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject VAR_LAST_TALKED
# 251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_2
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_4


JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt::
# 257 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_NO_GENERATORS
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2
# 263 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3
# 269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 271 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2:
# 259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0
# 260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3:
# 265 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED
# 266 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy::
# 281 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 283 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2
# 290 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5
# 298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 301 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2:
# 285 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5:
# 292 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 293 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Archen::
# 314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0, localId = LOCALID_ARCHEN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa::
# 324 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 325 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
# 326 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 327 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 45, 27
# 329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 46, 27
# 330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 333 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 334 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 336 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 337 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_JIGGLYPUFF_FOREST
# 342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 349 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 350 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 5
# 353 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 354 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 355 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1:
# 360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4:
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5
# 366 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 367 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 46, 18
# 368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 47, 17
# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 45, 17
# 372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7
# 373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 380 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 381 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 382 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 387 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 390 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 400 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 407 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 13
# 408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 13
# 409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 413 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadedefaultbgm
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2:
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3
# 358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5:
# 362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4
# 363 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth::
# 419 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 421 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 422 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest::
# 429 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 430 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 431 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 433 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa::
# 439 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 440 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CUTSCENE_MYSTERIOUS
# 441 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 442 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_TEMP_1
# 444 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 31, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3
# 447 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 32, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4
# 450 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 33, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5
# 452 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 34, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6
# 455 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 35, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1:
# 459 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3
# 460 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 461 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 462 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 463 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 464 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 465 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 466 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 467 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6, , localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 468 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 469 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 470 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 471 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8
# 472 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 473 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 476 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 478 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 479 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 480 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 481 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 482 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 483 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 484 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 485 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 486 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 487 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 489 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 490 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_FOREST
# 491 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 492 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 493 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5
# 495 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 496 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 497 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 498 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 499 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 502 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 503 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 504 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 505 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 506 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 507 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 509 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 510 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 511 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 512 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 513 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_22, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 514 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 515 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 516 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 517 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 518 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_MET_DRAMPA
# 519 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
	return

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3:
# 445 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0
# 446 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4:
# 448 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1
# 449 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5:
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6:
# 453 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 454 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7:
# 456 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2
# 457 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down::
# 524 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 525 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 526 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 529 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Up::
# 535 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 536 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 537 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 538 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 539 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 540 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Sign::
# 548 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 549 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0, MSGBOX_SIGN
# 550 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa::
# 556 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 557 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 558 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 559 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 560 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 561 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1
# 564 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_DRAMPA_FOREST
# 565 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 566 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 572 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 573 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 574 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setfollowernpc LOCALID_PHANPY_FOREST, FOLLOWER_NPC_FLAG_ALL_LAND
# 575 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
# 576 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim::
# 582 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 583 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 584 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 585 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 586 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 587 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth::
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 598 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWaySouth::
# 604 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 605 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 606 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 607 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 608 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 609 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_TyrantrumScene::
# 615 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 616 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 617 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 618 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 619 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 620 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 621 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 622 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 623 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 624 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 625 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 626 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 627 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 628 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 629 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 630 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 631 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 632 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 633 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 634 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 635 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 636 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 637 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 638 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 639 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 640 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 641 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 642 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 643 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 644 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 645 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 646 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 647 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 648 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 649 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 650 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 651 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 652 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 653 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 654 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 655 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6
# 661 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_PLAYER
# 662 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 663 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
# 664 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_FOREST
# 665 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_CENTRE
# 666 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_FOREST
# 667 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_CENTRE
# 668 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 669 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_TYRANTRUM_FOREST
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_ARCHEN_FOREST
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_CENTRE
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DINOS_WILDS
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 675 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain::
# 681 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_MOUNTAIN_COMPLETE, 2
# 682 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 684 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_2
# 686 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_3
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_2:
# 685 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMountain_3:
# 687 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon::
# 697 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 698 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 699 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 700 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 701 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 702 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 703 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 704 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 705 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 706 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert::
# 713 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_DESERT_COMPLETE, 2
# 714 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 716 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_2
# 718 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_3
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_2:
# 717 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorDesert_3:
# 719 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy::
# 726 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 727 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 728 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 729 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 730 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 731 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 732 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 733 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 734 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 735 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene::
# 743 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 745 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_3
# 760 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_4
# 775 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_5
JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1:
# 795 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 796 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_POST_ONE_GENERATOR
	end

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_3:
# 746 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 747 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1, localId = LOCALID_PLAYER
# 748 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_2, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 749 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 750 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_4, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 751 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 752 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 753 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 754 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_CENTRE
# 755 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 756 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 757 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 758 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_5, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_4:
# 761 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_6, localId = LOCALID_PHANPY_FOREST
# 762 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1, localId = LOCALID_PLAYER
# 763 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_7, localId = LOCALID_PHANPY_FOREST
# 764 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_8, localId = LOCALID_PLAYER
# 765 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 766 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 767 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 768 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 769 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_CENTRE
# 770 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 771 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 772 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 773 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_10, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_5:
# 776 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 777 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_12, localId = LOCALID_PLAYER
# 778 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 779 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_14, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 780 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 781 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_16, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 782 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_17, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 783 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_18, localId = LOCALID_PLAYER
# 784 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_19, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 785 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 786 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 787 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 788 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 789 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 790 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 791 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 792 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_20, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1


JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh::
# 803 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_MARSH_COMPLETE, 2
# 803 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 805 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_ONE_GENERATOR, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_2
# 807 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS, JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_3
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_2:
# 806 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_GeneratorMarsh_3:
# 808 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly::
# 815 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 816 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 817 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST
# 818 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 819 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 820 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 821 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 822 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 823 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 824 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly::
# 831 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 832 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 833 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 834 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 835 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 836 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 837 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 838 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 839 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 841 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_3
# 843 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_4
JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_1:
# 847 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 848 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 849 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS_CUTSCENE
# 850 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 851 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 12, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_3:
# 842 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_1

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_4:
# 844 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_1


JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon::
# 858 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 859 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 860 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 861 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 862 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 863 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 864 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 865 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 866 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 867 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 868 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 869 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS_CUTSCENE
# 870 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 871 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 12, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy::
# 877 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 878 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 879 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 880 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 881 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 882 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 883 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 884 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 885 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 886 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 887 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 888 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS_CUTSCENE
# 889 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 890 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 12, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene
	end


JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene::
# 899 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 900 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 901 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_0
# 902 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 903 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 904 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 905 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_1
# 906 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_1
# 907 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 908 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 909 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 911 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_3
# 913 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_4
# 915 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_5
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1:
# 918 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 919 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 920 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_2
# 921 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 922 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 924 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_8
# 926 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_9
# 928 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_10
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6:
# 931 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 932 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 933 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_6, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 935 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 936 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_VS_BOSS_POWERFUL, TRUE
# 937 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 938 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 939 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 940 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 941 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 942 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 943 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 944 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 945 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 946 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 947 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 948 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 949 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 950 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 951 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 952 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 953 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 954 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 955 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 956 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 957 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 958 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 959 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 960 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 961 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 962 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_7, localId = LOCALID_TYRANTRUM_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 963 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 965 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_13
# 967 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_14
# 969 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_15
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11:
# 972 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 973 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_3
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_4
# 976 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 977 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_11, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 978 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 979 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 980 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 982 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_18
# 984 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_19
# 986 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_20
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16:
# 990 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 991 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 992 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_7, localId = LOCALID_TYRANTRUM_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 993 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 994 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_TYRANTRUM_LOSE
# 995 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 996 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_15, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 997 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 999 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_23
# 1001 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_24
# 1003 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_25
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21:
# 1006 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1007 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1009 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_28
# 1011 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_29
# 1013 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_30
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26:
# 1016 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
# 1017 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 31, 8
# 1018 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_SECOND, MOVEMENT_TYPE_FACE_DOWN
# 1019 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 1020 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 1021 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 1022 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1024 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_33
# 1026 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_34
# 1028 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_35
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31:
# 1031 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1032 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 1033 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0
# 1034 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1035 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1037 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_38
# 1045 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_39
# 1053 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_40
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36:
# 1062 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_5
# 1063 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1064 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 1065 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 1066 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_6
# 1067 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement VAR_LOCALID_CUTSCENE_SECOND
# 1068 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 1070 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_RAZOR_WIND
# 1071 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 1072 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_7
# 1073 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_8
# 1074 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1075 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 1076 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
# 1077 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_SECOND
# 1078 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_SECOND, MOVEMENT_TYPE_SLEEP
# 1079 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 32, 12
# 1080 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 1081 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 16
# 1082 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 1083 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 128
# 1084 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1086 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_43
# 1089 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_44
# 1097 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_45
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41:
# 1106 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6
# 1107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_33, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1108 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRUNT_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_9
# 1110 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1111 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_34, localId = LOCALID_TYRANTRUM_FOREST
# 1112 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_10
# 1114 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_TYRANTRUM_FOREST
# 1116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_TYRUNT_FOREST
# 1117 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 1118 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1120 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_57
# 1122 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_58
# 1124 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_59
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55:
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_38, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1128 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 64
# 1129 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_FOREST
# 1130 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 1131 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_FOREST
# 1132 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 1133 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 1134 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1135 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_VISITOR_CENTRE, 18, 6, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor
	end

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_3:
# 912 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_4:
# 914 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_5:
# 916 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_2, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_8:
# 925 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_3, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_9:
# 927 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_4, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_10:
# 929 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_5, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_6

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_13:
# 966 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_8, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_14:
# 968 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_9, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_15:
# 970 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_10, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_11

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_18:
# 983 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_12, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_19:
# 985 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_13, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_20:
# 987 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_14, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_16

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_23:
# 1000 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_16, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_24:
# 1002 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_17, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_25:
# 1004 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_18, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_21

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_28:
# 1010 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_FOREST
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_29:
# 1012 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_FOREST
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_30:
# 1014 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_FOREST
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_26

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_33:
# 1025 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_19, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_34:
# 1027 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_20, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_35:
# 1029 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_21, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_31

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_38:
# 1038 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1040 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_47
# 1042 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_48
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_39:
# 1046 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1048 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_50
# 1050 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_51
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_40:
# 1054 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1056 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_53
# 1058 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_54
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_43:
# 1087 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_28, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_44:
# 1090 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1092 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_61
# 1094 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_62
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_45:
# 1098 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1100 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_64
# 1102 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_65
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_47:
# 1041 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_22, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_48:
# 1043 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_23, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_50:
# 1049 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_24, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_51:
# 1051 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_25, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_53:
# 1057 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_26, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_54:
# 1059 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_27, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_36

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_57:
# 1121 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_35, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_58:
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_36, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_59:
# 1125 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_37, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_55

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_61:
# 1093 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_29, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_62:
# 1095 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_30, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_64:
# 1101 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_31, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_65:
# 1103 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_32, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_41


JurassicPark_Dino_Enclosure_EventScript_WhereAreYouGoing::
# 1141 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Dino_Enclosure_EventScript_WhereAreYouGoing_Text_0
# 1142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1143 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 1144 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1145 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators::
# 1152 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 1153 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1155 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_3
# 1157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_4
# 1159 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_5
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1:
# 1162 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 1163 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 31, 8
# 1164 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_DOWN
# 1165 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 1166 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 1167 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 1168 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1171 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_8
# 1174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_9
# 1177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_10
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6:
# 1181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1183 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_13
# 1185 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_14
# 1187 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_15
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11:
# 1190 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1192 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_18
# 1194 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_19
# 1196 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_20
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16:
# 1199 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1201 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_23
# 1203 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_24
# 1205 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_25
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21:
# 1208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_28
# 1212 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_29
# 1214 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_30
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26:
# 1217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_18, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 1219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 1220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	doweather
# 1221 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 128
# 1222 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_19, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1224 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_33
# 1228 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_34
# 1230 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_35
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31:
# 1233 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1235 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_38
# 1237 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_39
# 1239 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_40
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36:
# 1242 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_43
# 1246 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_44
# 1248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_45
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41:
# 1251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1253 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_48
# 1255 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_49
# 1257 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_50
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46:
# 1260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1262 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_53
# 1264 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_54
# 1266 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_55
JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51:
# 1269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_NO_OW_MUSIC
# 1270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_ALWAYS_RAINING
# 1271 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_THREE_GENERATORS_CUTSCENE
# 1272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 1274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpcontinuescript MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 36, 11, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene
	return

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_3:
# 1156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_4:
# 1158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_5:
# 1160 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_1

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_8:
# 1172 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_9:
# 1175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_3, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_10:
# 1178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 1179 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_5, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_6

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_13:
# 1184 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_14:
# 1186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_7, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_15:
# 1188 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_11

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_18:
# 1193 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_9, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_19:
# 1195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_10, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_20:
# 1197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_11, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_16

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_23:
# 1202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_12, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_24:
# 1204 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_13, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_25:
# 1206 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_14, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_21

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_28:
# 1211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_15, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_29:
# 1213 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_16, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_30:
# 1215 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_17, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_26

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_33:
# 1227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_20, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_34:
# 1229 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_21, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_35:
# 1231 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_22, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_31

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_38:
# 1236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_23, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_39:
# 1238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_24, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_40:
# 1240 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_36

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_43:
# 1245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_26, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_44:
# 1247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_27, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_45:
# 1249 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_28, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_41

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_48:
# 1254 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_29, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_49:
# 1256 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_30, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_50:
# 1258 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_31, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_46

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_53:
# 1263 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_32, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_54:
# 1265 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_33, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_55:
# 1267 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_34, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_51


JurassicPark_Road_To_Visitor_Centre_EventScript_DrawGrave::
# 1281 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 34, 9, METATILE_Forest_Primary_DirtTopLeft, FALSE
# 1282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 35, 9, METATILE_Forest_Primary_DirtTop, FALSE
# 1283 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 36, 9, METATILE_Forest_Primary_DirtTopRight, FALSE
# 1284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 34, 10, METATILE_Forest_Primary_DirtLeft, FALSE
# 1285 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 35, 10, METATILE_Forest_Primary_Dirt, FALSE
# 1286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 36, 10, METATILE_Forest_Primary_DirtRight, FALSE
# 1287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 34, 11, METATILE_Forest_Primary_DirtBottomLeft, FALSE
# 1288 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 35, 11, METATILE_Forest_Primary_DirtBottom, FALSE
# 1289 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setmetatile 36, 11, METATILE_Forest_Primary_DirtBottomRight, FALSE
# 1290 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special DrawWholeMapView
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene::
# 1295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	call JurassicPark_Road_To_Visitor_Centre_EventScript_DrawGrave
# 1296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 1297 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 1299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 1301 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 1303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_3
# 1321 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_4
# 1338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_5
JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1:
# 1355 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_37, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1356 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 1358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_8
# 1367 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_9
# 1374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_10
JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6:
# 1382 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_THIRD_SAVED
# 1384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_13
# 1386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_14
# 1388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_15
JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11:
# 1391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_NO_OW_MUSIC
# 1393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_DETERMINATION
# 1394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_DETERMINATION
# 1395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_POST_THREE_GENERATORS
# 1396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 1398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 1399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 1400 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE
# 1401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 16
# 1402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_3:
# 1304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_0, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 1305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_1, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_3, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_4, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_5, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1310 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_6, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1311 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_7, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1312 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_8, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1313 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_9, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_10, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_12, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 1319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_14, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_4:
# 1322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1323 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1324 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_16, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1325 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_17, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1326 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_18, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1327 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 1328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 64
# 1329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_19, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_20, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_21, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_22, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1333 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1334 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_23, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1336 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_24, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1337 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_5:
# 1339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_26, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_27, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_28, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_29, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 1344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_30, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_31, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 1346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_32, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 1347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_33, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_34, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1349 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1350 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_17, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 1352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_35, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 1353 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_36, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_1

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_8:
# 1359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_38, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_40, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_41, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1363 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_42, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_43, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_44, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_9:
# 1368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_45, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_46, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 1371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_47, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_48, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_10:
# 1375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_49, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 1376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 1377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_50, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 1378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_51, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 1379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_52, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_6

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_13:
# 1385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_53, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_14:
# 1387 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_54, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_15:
# 1389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_55, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_11


JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack::
# 1409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 1410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack_Text_0, localId = LOCALID_PLAYER
# 1411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 1412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1413 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Mountain_WalkBack::
# 1419 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 1420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack_Text_0, localId = LOCALID_PLAYER
# 1421 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1
# 1422 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 1423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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

# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0:
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1:
# 338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2:
# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3:
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4:
# 362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5:
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6:
# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_left
	step_end

# 372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7:
# 372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_right
	step_end

# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8:
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 431 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0:
# 431 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 445 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0:
# 445 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 445 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 448 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1:
# 448 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 456 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2:
# 456 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 456 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 459 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3:
# 459 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 459 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 459 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 459 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4:
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5:
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0:
# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1:
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2:
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 616 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0:
# 616 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 616 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 616 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 616 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 616 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 639 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1:
# 639 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 639 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 639 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
	step_end

# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2:
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3:
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4:
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
	step_end

# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5:
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
	step_end

# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6:
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 751 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0:
# 751 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 751 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 835 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Movement_0:
# 835 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	emote_exclamation_mark
# 835 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
	step_end

# 901 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_0:
# 901 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 901 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 901 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 901 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 901 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_down
# 901 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 905 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_1:
# 905 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 905 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 905 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 905 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 905 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 905 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
	step_end

# 920 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_2:
# 920 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	emote_exclamation_mark
# 920 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 920 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_3:
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 974 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_4:
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock_facing_direction
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 975 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	unlock_facing_direction
	step_end

# 1062 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_5:
# 1062 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 1062 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 1062 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
	step_end

# 1066 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_6:
# 1066 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 1066 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_right
	step_end

# 1072 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_7:
# 1072 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock_facing_direction
# 1072 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 1072 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	unlock_facing_direction
	step_end

# 1073 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_8:
# 1073 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_9:
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Movement_10:
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 1113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
	.string "PLACEHOLDER: Bastiodon fight intro dialogue here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_2:
# 248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "PLACEHOLDER\nBastiodon battle other outcomes here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0:
# 259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No response.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1:
# 265 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2:
# 270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, hello?\n"
	.string "Sir?\l"
	.string "Or madam?\p"
	.string "Can I ask you something?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3:
# 272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hmm…\n"
	.string "No response.\p"
	.string "Maybe they can't hear me because their\n"
	.string "neck is too long.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4:
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I wonder…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0:
# 285 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quick, after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1:
# 298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, Larvy, there's something strange\n"
	.string "going on.\p"
	.string "Do you see that?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2:
# 299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Looks like a flying-type Pokémon to me.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3:
# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, probably, but…\p"
	.string "Have you ever seen a Pokémon that\n"
	.string "looks like this?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4:
# 301 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, but…\p"
	.string "There's a lot of different Pokémon in\n"
	.string "the world.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5:
# 302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fair enough.\n"
	.string "But I HAVE seen a Pokémon like this.\l"
	.string "In a book.\p"
	.string "It was a book about…\n"
	.string "Prehistoric Pokémon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6:
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Pre-\n"
	.string "Huh?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7:
# 304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not completely sure.\n"
	.string "But…\p"
	.string "If I am correct, this Pokémon here…\n"
	.string "Should be extinct.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8:
# 305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What does that mean…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9:
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not… Sure what to make of this,\n"
	.string "exactly.\p"
	.string "And I don't remember seeing the\n"
	.string "long-necked ones in the book.\p"
	.string "I think we should try and find out more.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0:
# 316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Squawk?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0:
# 342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Erm…\nSo what do you guys think…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1:
# 343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I think that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2:
# 344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!\n"
	.string "Wait!\p"
	.string "We need to get into proper position\n"
	.string "first!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3:
# 345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, we talked about this.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4:
# 346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No!!!\p"
	.string "According to the Manual of the\n"
	.string "Impeccable Explorer…\p"
	.string "Important team briefings should be\n"
	.string "delivered standing in formation!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5:
# 347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "In the interest of time, I will skip the\n"
	.string "arguing.\p"
	.string "Let's just do that.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6:
# 348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Thank you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7:
# 376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "As I was saying…\p"
	.string "I think we're dealing with an\n"
	.string "uncontacted tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8:
# 377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uncontacted tribe?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9:
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, y'know.\n"
	.string "Cannibals and the such.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10:
# 379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Enough with that joke!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11:
# 380 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quit it, Jiggly.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12:
# 381 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(He's right, though.\n"
	.string "Not about the cannibals, but…)\p"
	.string "(These Pokémon ARE very strange.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13:
# 382 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "There's something that bothers me,\n"
	.string "though.\p"
	.string "I'm pretty sure that at least some of\n"
	.string "these Pokémon are from the prehistoric\l"
	.string "era.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14:
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And how would that be possible, smarty\n"
	.string "pants?\p"
	.string "They just…\n"
	.string "Hid here and survived going extinct?\p"
	.string "And if so, who built the stairs?\n"
	.string "The pier?\l"
	.string "That strange… Cardboard house?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15:
# 384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…What's pants?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16:
# 385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's something Machoke have.\n"
	.string "Don't ask, it's kinda gross.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17:
# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, I don't know!\n"
	.string "But…\p"
	.string "There has to be an explanation!\n"
	.string "There has to be something here that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18:
# 390 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "H{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}NK{PAUSE 10} MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19:
# 393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did you guys hear that?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20:
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Just sounds like someone snoring.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21:
# 395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We should check it out!\n"
	.string "It could be someone we can talk to!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0:
# 420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I have to see what's going on over\n"
	.string "there first.)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0:
# 461 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not a prehistoric Pokémon!\n"
	.string "That's a Drampa!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1:
# 462 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe they would know something about\n"
	.string "what's going on.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2:
# 463 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You know what they say: sleeping\n"
	.string "Pokémon tell no tales.\p"
	.string "I'm going to try and wake them up.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3:
# 464 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Don't you think someone else should do\n"
	.string "it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4:
# 465 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's because I'm a Jigglypuff, isn't it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5:
# 466 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You'd just make them sleep harder!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6:
# 467 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fine, fine.\n"
	.string "Larvy, figure it out.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7:
# 468 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(If we get them to talk to us, we might\n"
	.string "learn something about this mysterious\l"
	.string "island.)\p"
	.string "(Well, here goes nothing!)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8:
# 471 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Insert battle here$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9:
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Who are you?!\n"
	.string "How did you get here?!\l"
	.string "Are you with the tax office?!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10:
# 476 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, no.\n"
	.string "We're treasure hunters.\p"
	.string "We kind of…\n"
	.string "Wrecked our boat.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11:
# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah!\n"
	.string "Treasure hunters!\l"
	.string "What a relief!\p"
	.string "Oh, but you came early!\n"
	.string "The park is not finished yet!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12:
# 478 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ohh, a park?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13:
# 479 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And you are…?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14:
# 480 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah, how rude!\p"
	.string "Dr. John Drampa, at your service.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15:
# 481 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, Dr. Drampa…$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16:
# 482 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. John Drampa.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17:
# 483 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, John.\p"
	.string "What's going on here?\n"
	.string "Wasn't this a deserted island?\p"
	.string "What are all these Pokémon doing here?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18:
# 484 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But of course!\n"
	.string "It's only natural that you would be\l"
	.string "confused.\p"
	.string "Follow me, I will explain everything.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19:
# 492 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…I really don't like this guy.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20:
# 499 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I've never met a doctor before.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21:
# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm very curious what this is all about.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_22:
# 513 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose I should go check this out,\n"
	.string "too.)$"

JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0:
# 525 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. Drampa said wandering around could\n"
	.string "be dangerous.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0:
# 549 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "{UP_ARROW} Ancient Desert\n"
	.string "{DOWN_ARROW} Primordial Beach\l"
	.string "{LEFT_ARROW} Lost Mountains\l"
	.string "{RIGHT_ARROW}Observation Platform, Forgotten\l"
	.string "Swamp, Laboratory$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0:
# 557 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1:
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Let's go after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0:
# 583 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, we have to go after the Doctor!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0:
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not the way he went, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0:
# 624 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What are you guys doing out here?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1:
# 625 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We're going to repair the generators!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2:
# 626 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, I figured out where the\n"
	.string "generators are.\p"
	.string "Turns out, there's a bridge to the lab,\n"
	.string "but it retracts when the generators\l"
	.string "are out as a security measure.\p"
	.string "And the only way to take 'em back up is\n"
	.string "manually.$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3:
# 627 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Forget about it!\n"
	.string "The cage is broken!\p"
	.string "We need to hide, now!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4:
# 628 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5:
# 636 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "N-no way…$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6:
# 654 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "Run.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_0:
# 697 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We almost made it back!\n"
	.string "And no scary Pokémon to be found.\p"
	.string "Hopefully it stays that way!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_1:
# 698 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I do wonder were it went, though.)\p"
	.string "(It couldn't have left the island, but…\n"
	.string "Maybe it really won't bother us again.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_2:
# 699 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Let's go back to the centre.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_0:
# 726 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Whew!\n"
	.string "Finally, no more sand.\p"
	.string "Reminds me of that time we went to the\n"
	.string "desert to look for treasure…\p"
	.string "And we fell in a pit, and Jiggly got sand\n"
	.string "up his nose!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_1:
# 727 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I didn't even know he had a nose.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_2:
# 728 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "After this is over, let's go on vacation\n"
	.string "somewhere… calmer.\p"
	.string "But first, let's go back to the centre.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_0:
# 746 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy…\p"
	.string "Would it be…\n"
	.string "Okay, if I stayed here while you look\l"
	.string "for the others…?$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1:
# 747 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Sure, I guess so, but…\n"
	.string "Why's that?)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_2:
# 748 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I… I wish I could do more, but…\n"
	.string "I think… I may need a rest.\p"
	.string "I'm sorry, I…\n"
	.string "I know I'm not too useful, and, and…\l"
	.string "I'm not as strong as you guys, and…$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_3:
# 749 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Bagon, it's okay.\n"
	.string "You're too tired to keep going.)\p"
	.string "(Taking breaks to avoid injuries is\n"
	.string "important.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_4:
# 750 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll make up for it, I swear!\p"
	.string "Once I've rested, I'm gonna back to\n"
	.string "kicking some prehistoric butts!\p"
	.string "One day, Larvy, one day I will become a\n"
	.string "Salamence, and…\l"
	.string "I'll never be tired and scared again!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_5:
# 758 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 761 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, can I ask you something…?\p"
	.string "Would you mind if I stayed here at the\n"
	.string "centre, for now?$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_7:
# 763 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I just thought…\n"
	.string "We've been encountering dangerous\l"
	.string "Pokémon we've never seen before.\p"
	.string "I figure, maybe there's some\n"
	.string "information in the centre that that\l"
	.string "could be useful.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_8:
# 764 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I see.\n"
	.string "That does make sense.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_9:
# 765 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 773 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 776 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I hate to say this, but…\p"
	.string "I may tap out for a bit.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_12:
# 777 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Uh, sure, I guess, but…\n"
	.string "Why's that?)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_13:
# 778 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I hurt my floatation sack.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_14:
# 779 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(That wasn't a joke?!)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_15:
# 780 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why would I joke about something like\n"
	.string "that?!\p"
	.string "I'm a very serious person, I'll let you\n"
	.string "know!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_16:
# 781 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose…)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_17:
# 782 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 783 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Of course.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_19:
# 784 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I know I can rely on you, Larvy.\p"
	.string "I'll be back in no time, and these brutes\n"
	.string "will know the wrath of Jigglypuff!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_20:
# 792 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 815 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And here we are, safe and sound.\n"
	.string "Obviously.\p"
	.string "You did fairly good, Larvy.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_1:
# 816 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Uh, thanks…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_2:
# 817 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yes, anyway.\p"
	.string "Let's not linger here too much.\n"
	.string "I don't want to see that ugly brute\l"
	.string "show up again.\p"
	.string "Let's go to the visitor centre, yeah?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_0:
# 838 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What was that?!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenJiggly_Text_1:
# 842 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Now, I might be mistaken, but that does\n"
	.string "not sound like Phanpy at all.\p"
	.string "I think we should probably hurry.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenBagon_Text_0:
# 866 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did we take too long?!\p"
	.string "Let's go back, quick!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_SecondGenPhanpy_Text_0:
# 885 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "A roar?\n"
	.string "No, it can't be…\p"
	.string "Larvy, we have to go, now!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_0:
# 912 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Too slow, buddy.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_1:
# 914 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Stay away from our friend!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_2:
# 916 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Stop right there!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_3:
# 925 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Heh, it's a small fry.\p"
	.string "We can take on this guy easily.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_4:
# 927 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…A Tyrunt.\p"
	.string "Well, maybe we can just shoo him away.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_5:
# 929 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy, it's a baby one!\p"
	.string "This is gonna be easy.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_6:
# 934 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(No…\n"
	.string "It's back…!)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_7:
# 962 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "GROAAAAAR!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_8:
# 966 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…We're in trouble.\p"
	.string "Let's hide inside, quick!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_9:
# 968 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No way…\n"
	.string "He's here…\l"
	.string "Again…\p"
	.string "Larvy, we need to go back inside!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_10:
# 970 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We can take it, Larvy, can't we…?\p"
	.string "… … …\n"
	.string "No, let's run inside!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_11:
# 977 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I…\n"
	.string "I can't…)\p"
	.string "(It's blocking me!)\p"
	.string "(But…\n"
	.string "We can't beat this Pokémon!)\p"
	.string "(We just can't!)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_12:
# 983 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, what are you doing?!\p"
	.string "It's going to attack!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_13:
# 985 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Any chance we could…\n"
	.string "Talk it out…?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_14:
# 987 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Larvy!\l"
	.string "Help!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_15:
# 996 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What…\n"
	.string "Is happening to me…)\p"
	.string "(My legs…\n"
	.string "Aren't moving…?)\p"
	.string "(I'm…\n"
	.string "I'm too scared…)\p"
	.string "(Is this it…?\n"
	.string "No…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_16:
# 1000 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No! No! No!\n"
	.string "Please!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_17:
# 1002 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Not…\n"
	.string "Like this…!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_18:
# 1004 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Waaaaaaa!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_19:
# 1025 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What's all this no-$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_20:
# 1027 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, what's happening out he-$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_21:
# 1029 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ohh, are you back, La-$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_22:
# 1041 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Phanpy!\p"
	.string "Get out of there, you idiots!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_23:
# 1043 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Bagon!\p"
	.string "Get out of there, you idiots!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_24:
# 1049 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, no!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_25:
# 1051 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, no!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_26:
# 1057 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll save you, Jiggly!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_27:
# 1059 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll save you, Phanpy!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_28:
# 1087 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…Uh, what happene-\p"
	.string "No!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_29:
# 1093 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Jiggly!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_30:
# 1095 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Bagon!!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_31:
# 1101 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Um, am I dead…?\p"
	.string "Wait, Jiggly…?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_32:
# 1103 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Um, am I dead…?\p"
	.string "Wait, Phanpy…?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_33:
# 1107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(No…\n"
	.string "How could I have let it happen…!)\p"
	.string "(I couldn't move, and, and…!)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_34:
# 1111 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…Grarg.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_35:
# 1121 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We have to hurry inside, now!\p"
	.string "We need to look for medical supplies!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_36:
# 1123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy! Larvy!\n"
	.string "This is terrible!\p"
	.string "We need to find some medicine!$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_37:
# 1125 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "This can't be happening…\p"
	.string "Larvy, we need to find a first aid kit, or\n"
	.string "something…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutscene_Text_38:
# 1127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(This is a nightmare…)$"

JurassicPark_Dino_Enclosure_EventScript_WhereAreYouGoing_Text_0:
# 1141 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy, where are you going?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_0:
# 1172 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(P-Phanpy?!\n"
	.string "Where's…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_1:
# 1173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I-I tried…\n"
	.string "I tried…\l"
	.string "I…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_2:
# 1175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(B-Bagon?!\n"
	.string "Where's…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_3:
# 1176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, something…\n"
	.string "Something bad happened…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_4:
# 1178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(J-Jiggly?!\n"
	.string "Where's…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_5:
# 1179 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\p"
	.string "I…\p"
	.string "… … …$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_6:
# 1184 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…Guys?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_7:
# 1186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Is everything…\n"
	.string "Okay?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_8:
# 1188 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Is there something I'm missing?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_9:
# 1193 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You didn't say…\n"
	.string "What… Happened, did you…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_10:
# 1195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Oh…\n"
	.string "You don't…\l"
	.string "You don't know, haha.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_11:
# 1197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Oh, I see.\p"
	.string "I'm going to…\n"
	.string "Have to be the one to break the news.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_12:
# 1202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "This is a…\n"
	.string "Joke, right?\p"
	.string "Guys?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_13:
# 1204 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I don't…\n"
	.string "Understand?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_14:
# 1206 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…\n"
	.string "Larvy, what in the world…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_15:
# 1211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_16:
# 1213 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_17:
# 1215 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_18:
# 1217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did not make it.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_19:
# 1222 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(No.)\p"
	.string "(This is not happening.)\p"
	.string "(This is NOT happening!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_20:
# 1227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "W-what…\n"
	.string "When\l"
	.string "Why…?\p"
	.string "I…\n"
	.string "Wha…\p"
	.string "WHAT?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_21:
# 1229 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "… … … …\p"
	.string "… … …\n"
	.string "… … …$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_22:
# 1231 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why…\n"
	.string "Why didn't you…\l"
	.string "Say anything?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_23:
# 1236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm sorry.\n"
	.string "I'm sorry.\p"
	.string "I tried.\n"
	.string "But there was no medice, and, and…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_24:
# 1238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's my fault, Larvy, it's my fault, I…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_25:
# 1240 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_26:
# 1245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But, maybe with the Doctor's machine, we\n"
	.string "could…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_27:
# 1247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But, if we use the machine, can't we…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_28:
# 1249 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That Doctor's machine can bring things\n"
	.string "back to life, right…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_29:
# 1254 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I-I don't think that would work…\p"
	.string "It's not resurrecting, it's…\n"
	.string "Cloning…\p"
	.string "It wouldn't…\n"
	.string "Be the same.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_30:
# 1256 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I think…\n"
	.string "I heard that the machine…\p"
	.string "Can only, copy, things…\n"
	.string "And not… Bring them back.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_31:
# 1258 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "G-get real…\n"
	.string "It's not a resurrection device, it's…\p"
	.string "It's a fancy photocopier.\p"
	.string "We-\n"
	.string "We can't.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_32:
# 1263 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, no…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_33:
# 1265 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, no…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Cutscene_Three_Generators_Text_34:
# 1267 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, no…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_0:
# 1304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "I suppose we should say something.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_1:
# 1305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy was…\n"
	.string "Phanpy was…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_2:
# 1306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "An idiot.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_3:
# 1307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, w-what…\n"
	.string "How could you say that?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_4:
# 1308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "She was an idiot who did nothing but\n"
	.string "charge headfirst into adventure.\p"
	.string "Honestly, I'm surprised she didn't get\n"
	.string "killed before now.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_5:
# 1309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, please, stop!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_6:
# 1310 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why?\n"
	.string "It's the truth.\p"
	.string "Always pushing her luck, never happy to\n"
	.string "call it quits.\p"
	.string "Always, always…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_7:
# 1311 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Always…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_8:
# 1312 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_9:
# 1313 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I-\n"
	.string "I knew it was going to end like this.\p"
	.string "I could have avoided it…\n"
	.string "If only I-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_10:
# 1314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly, you…\p"
	.string "Sometimes it doesn't seem like you care\n"
	.string "much…\n"
	.string "But you cared a lot, didn't you…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_11:
# 1315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Cared?\n"
	.string "I…\n"
	.string "I…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_12:
# 1317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Oh, Jiggly…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_13:
# 1318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…It doesn't matter.\n"
	.string "It's too late, now.\p"
	.string "We're left to pick up the pieces.\p"
	.string "Drampa…\n"
	.string "Must pay.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_14:
# 1319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Do you think it's the Doctor's fault\n"
	.string "that…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_15:
# 1320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I don't care.\p"
	.string "He built this island, and he will answer\n"
	.string "for it.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_16:
# 1324 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's hard to…\n"
	.string "Come up with something to say, isn't it?\p"
	.string "Haha…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_17:
# 1325 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly was…\n"
	.string "A bit of a difficult Pokémon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_18:
# 1326 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You can say that again…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_19:
# 1329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, I don't think Jiggly liked me\n"
	.string "very much.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_20:
# 1330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, that's not it at all!\p"
	.string "I know he was…\n"
	.string "Snarky, and rude sometimes, but…\p"
	.string "He just wanted to make sure you were\n"
	.string "okay.\p"
	.string "I think…\n"
	.string "I think I'm the one he didn't like.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_21:
# 1331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I…\n"
	.string "I don't think that's true, either.\p"
	.string "He talked about you a lot.\n"
	.string "Like, a LOT a lot.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_22:
# 1332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "He had…\n"
	.string "His own way of caring about people,\l"
	.string "didn't he…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_23:
# 1335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I wish I could have…\n"
	.string "Spent…\l"
	.string "Less time arguing…\p"
	.string "I… I…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_24:
# 1336 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I think Jiggly…\n"
	.string "Like arguing…\p"
	.string "So, I think, it's okay, that you argued a\n"
	.string "lot with him.\p"
	.string "I think…\n"
	.string "I think he enjoyed.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_25:
# 1337 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…The Doctor…\p"
	.string "He… He took Jiggly away from us…\p"
	.string "A theme park?\n"
	.string "This is an affront to nature.\p"
	.string "We need to take him to justice.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_26:
# 1340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…We failed Bagon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_27:
# 1341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…We did.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_28:
# 1342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "When she joined our team, I thought she\n"
	.string "wasn't ready.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_29:
# 1343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I know!\n"
	.string "But she was so enthusiastic, and, and…!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_30:
# 1344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah.\n"
	.string "And what did we promise?\p"
	.string "To keep her safe, no matter what.\p"
	.string "No matter what, you understand?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_31:
# 1345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We couldn't possibly have expected…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_32:
# 1346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Couldn't have expected what?\p"
	.string "That a mad science would resurrect\n"
	.string "prehistoric monsters and pit them\l"
	.string "against us?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_33:
# 1347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Not… Really.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_34:
# 1348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Does it matter?\n"
	.string "Does it really matter what we expected?\p"
	.string "Does it matter that we weren't prepared\n"
	.string "for it?\p"
	.string "We should have prepared for anything.\n"
	.string "And we didn't.\p"
	.string "And now, she…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_35:
# 1352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, Larvy, to be clear, I don't blame\n"
	.string "either of you.\p"
	.string "The only one that is to blame…\n"
	.string "Is Drampa.\p"
	.string "We have to take this park down.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_36:
# 1353 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Agreed.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_37:
# 1355 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(…I still can't believe this is real.)\p"
	.string "(If only I didn't freeze up, then\n"
	.string "maybe…!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_38:
# 1359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy?\n"
	.string "I just wanted to say, uhm.\p"
	.string "When we were… Fighting, the big\n"
	.string "prehistoric Pokémon.\p"
	.string "I noticed, that, uhm…\p"
	.string "It was only…\n"
	.string "Attacking me.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_39:
# 1360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I know…\n"
	.string "I know!)\p"
	.string "(I failed everyone!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_40:
# 1361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, Larvy, what I mean is…\p"
	.string "Do you think that maybe…\n"
	.string "There's… Another reason for that…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_41:
# 1362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Another…\n"
	.string "Reason?)\p"
	.string "(Now that you mention it…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_42:
# 1363 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe that Pokémon can…\n"
	.string "Only attack what it sees moving?\p"
	.string "I think…\n"
	.string "I read something about it, at some\l"
	.string "point.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_43:
# 1364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_44:
# 1365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "So, if we ended up encountering it\n"
	.string "again…\p"
	.string "I think, it may be fine, as long as no one\n"
	.string "moves.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_45:
# 1368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy?\n"
	.string "Can i mention something?\p"
	.string "When we were fighting the Tyrantrum,\n"
	.string "um…\p"
	.string "I noticed, it only went after me, didn't\n"
	.string "it…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_46:
# 1370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No…\n"
	.string "That's not what I mean.\p"
	.string "I think there's a reason for it.\p"
	.string "I think that Tyrantrum…\n"
	.string "Might not be able to see you if you\l"
	.string "stand still.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_47:
# 1371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(R-Really?!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_48:
# 1372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's just an hypothesis.\p"
	.string "But I think I read something similar\n"
	.string "once.\p"
	.string "So, if we encounter it again, we should\n"
	.string "try…\n"
	.string "Standing still.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_49:
# 1375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_50:
# 1377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Calm down for a second, will you?\p"
	.string "I noticed something interesting.\p"
	.string "When we were fighting, the monster only\n"
	.string "came after me.\p"
	.string "And before you say anything…\n"
	.string "I think there may be a reason for that.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_51:
# 1378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(A-a reason?!)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_52:
# 1379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yes.\p"
	.string "It was as if…\n"
	.string "It couldn't see you at all.\p"
	.string "So maybe, it can only see moving things.\p"
	.string "Ergo, if we meet it again…\n"
	.string "We should also stand very, very still.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_53:
# 1385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Sounds like we got a plan.\p"
	.string "Since the generator is working, the\n"
	.string "bridge should be extended.\p"
	.string "Let's give him hell.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_54:
# 1387 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We reactivated all the generators, so\n"
	.string "the bridge should be extended.\p"
	.string "Let's finish it, once and for all.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FarewellFriendScene_Text_55:
# 1389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, I know you're scared.\n"
	.string "I'm scared too.\p"
	.string "But, we managed to reactivate the\n"
	.string "genreators.\p"
	.string "The bridge should be back now.\p"
	.string "We need to…\n"
	.string "We need to finish this adventure.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Desert_WalkBack_Text_0:
# 1410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I'm not going back in there.)$"
