JurassicPark_Road_To_Visitor_Centre_MapScripts::
# 2 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 68 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_FOREST_ROAD
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_GOING_AFTER_DRAMPA
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 23 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 44 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_NO_GENERATORS
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 50 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 7 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 42, 36
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 13
# 12 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 13
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 17 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_DRAMPA_FOREST
# 18 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 8
# 19 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_DRAMPA_FOREST, 35, 16
# 20 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_DRAMPA_FOREST, MOVEMENT_TYPE_FACE_RIGHT
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 26 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 27 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 51, 17
# 28 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 51, 17
# 29 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_LEFT
# 30 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 31 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 46, 16
# 33 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 46, 16
# 34 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_JIGGLYPUFF_FOREST, MOVEMENT_TYPE_FACE_LEFT
# 35 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 36 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 37 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_BAGON_FOREST, 45, 16
# 38 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_BAGON_FOREST, 45, 16
# 39 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_BAGON_FOREST, MOVEMENT_TYPE_FACE_RIGHT
# 40 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_BAGON_FOREST
# 41 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_TYRANTRUM_FOREST
# 42 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_TYRANTRUM_FOREST
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 46 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_SLEEP
# 47 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_SLEEP
# 48 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_SLEEP
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 52 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 54 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
# 57 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
# 60 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 55 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_BAGON_FOREST, 31, 10
# 56 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_BAGON_FOREST, MOVEMENT_TYPE_FACE_RIGHT
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 58 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 31, 10
# 59 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_FOREST, MOVEMENT_TYPE_FACE_RIGHT
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 61 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 10
# 62 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_JIGGLYPUFF_FOREST, MOVEMENT_TYPE_FACE_RIGHT
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 69 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_CENTRE_GOING_AFTER_DRAMPA, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 72 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
# 75 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2
	.2byte 0

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 70 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 73 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_TyrantrumScene
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2:
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest::
# 83 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 84 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 85 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_FOREST_ROAD
# 86 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 87 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 88 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 89 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 90 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 91 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 92 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 93 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 94 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_JURASSIC_PARK_MAIN_THEME, TRUE
# 95 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0
# 97 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 98 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	teleportcamera VAR_TEMP_1, VAR_TEMP_2
# 101 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 102 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 103 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 104 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 105 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_FOREST_FIELD, TRUE
# 106 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 108 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 110 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 111 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 112 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 114 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 117 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 118 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 119 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 120 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 121 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 122 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 124 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 42, 36
# 125 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 126 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 42, 36
# 127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 128 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_BAGON_FOREST
# 129 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end


# 135 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Movement_PlayerWalkToForest:
# 136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial::
# 140 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 141 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 143 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 144 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_TUTORIAL
# 145 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 147 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0
# 148 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 149 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff::
# 155 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 159 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 160 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 161 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 162 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 163 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 164 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 165 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 166 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 167 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon::
# 173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_2
# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 182 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_1
# 183 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	puzzlebattle BP_BASTIODON
# 184 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 185 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PUZZLE_COMPLETE
	goto_if_ne JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_5
JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_4:
# 188 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject VAR_LAST_TALKED
# 189 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_2:
# 176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0, localId = VAR_LAST_TALKED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_5:
# 186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_2
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_4


JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt::
# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_NO_GENERATORS
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2
# 201 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3
# 207 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 212 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2:
# 197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0
# 198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3:
# 203 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED
# 204 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy::
# 219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 221 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2
# 228 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5
# 236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 237 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 239 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 240 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 241 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 242 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 243 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 246 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2:
# 223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 224 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5:
# 230 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 231 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Archen::
# 252 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 253 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 254 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0, localId = LOCALID_ARCHEN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 255 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 256 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa::
# 262 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 263 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
# 264 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 265 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 266 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 45, 27
# 267 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 46, 27
# 268 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 271 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 275 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 276 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 278 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 279 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_JIGGLYPUFF_FOREST
# 280 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 281 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 283 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 285 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 288 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 289 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 290 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 5
# 291 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 292 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 293 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1:
# 298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4:
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5
# 304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 46, 18
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 47, 17
# 308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 45, 17
# 310 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7
# 311 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 312 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 313 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 321 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 323 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 324 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 325 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 326 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 327 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 333 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 334 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 336 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 337 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 13
# 346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 13
# 347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 348 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 349 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 350 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadedefaultbgm
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2:
# 295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3
# 296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5:
# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4
# 301 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth::
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest::
# 367 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 370 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa::
# 377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CUTSCENE_MYSTERIOUS
# 379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 380 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_TEMP_1
# 382 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 31, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3
# 385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 32, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4
# 388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 33, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5
# 390 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 34, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6
# 393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 35, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1:
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3
# 398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 400 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6, , localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 407 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4
# 413 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 414 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 415 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 416 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 417 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 418 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 419 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 421 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 422 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 424 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 425 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 426 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 427 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 428 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_FOREST
# 429 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 430 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 431 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5
# 433 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 434 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 435 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 436 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 437 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 438 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 439 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 440 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 441 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 442 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 443 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 444 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 445 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 446 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 447 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 448 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 449 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 450 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 451 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_22, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 452 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 453 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 454 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 455 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 456 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_MET_DRAMPA
# 457 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
	return

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3:
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0
# 384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4:
# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1
# 387 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5:
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6:
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7:
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2
# 395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down::
# 462 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 463 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 464 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 465 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 466 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 467 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Up::
# 473 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 476 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 478 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Sign::
# 486 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 487 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0, MSGBOX_SIGN
# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa::
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 495 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 496 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 497 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 498 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 499 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1
# 502 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_DRAMPA_FOREST
# 503 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 504 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 505 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 506 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 507 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 509 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 510 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 511 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 512 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setfollowernpc LOCALID_PHANPY_FOREST, FOLLOWER_NPC_FLAG_ALL_LAND
# 513 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
# 514 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim::
# 520 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 521 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 522 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 523 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 524 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 525 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth::
# 531 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 532 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 533 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 534 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 535 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 536 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWaySouth::
# 542 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 543 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 544 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 545 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 546 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 547 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_TyrantrumScene::
# 553 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 554 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 555 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 556 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 557 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 558 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 559 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 560 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 561 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 564 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 565 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 566 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 572 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 573 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 574 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 575 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 576 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 578 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 579 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 580 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 581 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 582 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 583 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 584 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 585 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 586 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 587 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 588 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 589 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 590 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 591 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 592 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6
# 598 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_PLAYER
# 599 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 600 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
# 601 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_FOREST
# 602 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_CENTRE
# 603 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_FOREST
# 604 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_CENTRE
# 605 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 606 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 607 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_TYRANTRUM_FOREST
# 608 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_ARCHEN_FOREST
# 609 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_CENTRE
# 610 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DINOS_WILDS
# 611 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 612 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon::
# 618 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 619 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 620 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 621 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 622 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 623 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 624 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 625 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 626 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 627 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy::
# 635 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 636 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 637 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 638 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 639 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 640 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 641 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 642 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 643 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 644 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene::
# 652 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 654 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_3
# 669 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_4
# 684 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_5
JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1:
# 704 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 705 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_POST_ONE_GENERATOR
	end

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_3:
# 655 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1, localId = LOCALID_PLAYER
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_2, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_3, localId = LOCALID_PLAYER
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_4, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 661 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 662 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 663 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_CENTRE
# 664 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 665 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 666 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 667 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_5, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_4:
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_6, localId = LOCALID_PHANPY_FOREST
# 671 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1, localId = LOCALID_PLAYER
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_7, localId = LOCALID_PHANPY_FOREST
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_8, localId = LOCALID_PLAYER
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 675 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 676 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 677 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 678 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_CENTRE
# 679 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 680 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 681 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 682 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_10, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_5:
# 685 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 686 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_12, localId = LOCALID_PLAYER
# 687 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 688 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_14, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_16, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_17, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_18, localId = LOCALID_PLAYER
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_19, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 694 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0
# 695 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 696 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 697 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 698 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 699 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 700 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 701 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_20, localId = LOCALID_PLAYER
	goto JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_1


JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly::
# 712 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 713 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 714 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST
# 715 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 716 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 717 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 718 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 719 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR_CUTSCENE
# 720 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 32, 10
# 721 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	end


# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0:
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
	step_end

# 108 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1:
# 108 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 119 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2:
# 119 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 119 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 119 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 119 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 163 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0:
# 163 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0:
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 276 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1:
# 276 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2:
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3:
# 295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
# 295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4:
# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5:
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6:
# 308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_left
	step_end

# 310 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7:
# 310 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_right
	step_end

# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8:
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0:
# 369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0:
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1:
# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2:
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3:
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4:
# 412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5:
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 432 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0:
# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 500 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1:
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 501 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 509 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2:
# 509 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 509 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 554 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0:
# 554 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 554 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 554 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 554 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 554 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1:
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
	step_end

# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2:
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 593 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3:
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 594 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4:
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 595 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
	step_end

# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5:
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 596 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
	step_end

# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6:
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 597 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Movement_0:
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 660 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0:
# 90 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, guys!\n"
	.string "What's-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1:
# 91 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Shh!\n"
	.string "Look!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2:
# 92 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look at w…\n"
	.string "Oh!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3:
# 106 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's…\n"
	.string "It's…\l"
	.string "It's beautiful!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4:
# 107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It really is.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5:
# 111 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And would you look at that.\n"
	.string "There ARE other Pokémon here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6:
# 112 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "They look weird, though.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7:
# 113 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, that's a bit rude!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8:
# 114 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, it's true.\n"
	.string "Never seen any Pokémon that look like\l"
	.string "this, that's for sure.\p"
	.string "Hopefully they're not a cannibal tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9:
# 115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "C-cannibals?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10:
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11:
# 117 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Gee, sensitive much?\n"
	.string "It'll be fine.\p"
	.string "C'mon, let's go talk to them.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0:
# 147 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You're a very interesting Pokémon,\nwho are you?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1:
# 149 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvesta? What a funny name...\nWell it's a pleasure to meet you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0:
# 156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO?\n"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1:
# 159 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Get a load of these guys, Larvy.\p"
	.string "I'm trying to ask them something, and\n"
	.string "they're ignoring me!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2:
# 160 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe it's because they can't\n"
	.string "understand us?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3:
# 161 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, it's because we're outsiders, isn't\n"
	.string "it?\p"
	.string "This isn't an island of cannibals.\n"
	.string "It's an island of racists!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4:
# 162 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I'm not sure that's it, Jiggly.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5:
# 165 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0:
# 176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Guoh!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_1:
# 182 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "PLACEHOLDER: Bastiodon fight intro dialogue here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_2:
# 186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "PLACEHOLDER\nBastiodon battle other outcomes here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0:
# 197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No response.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1:
# 203 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2:
# 208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, hello?\n"
	.string "Sir?\l"
	.string "Or madam?\p"
	.string "Can I ask you something?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3:
# 210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hmm…\n"
	.string "No response.\p"
	.string "Maybe they can't hear me because their\n"
	.string "neck is too long.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4:
# 211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I wonder…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0:
# 223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quick, after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1:
# 236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, Larvy, there's something strange\n"
	.string "going on.\p"
	.string "Do you see that?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2:
# 237 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Looks like a flying-type Pokémon to me.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3:
# 238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, probably, but…\p"
	.string "Have you ever seen a Pokémon that\n"
	.string "looks like this?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4:
# 239 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, but…\p"
	.string "There's a lot of different Pokémon in\n"
	.string "the world.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5:
# 240 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fair enough.\n"
	.string "But I HAVE seen a Pokémon like this.\l"
	.string "In a book.\p"
	.string "It was a book about…\n"
	.string "Prehistoric Pokémon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6:
# 241 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Pre-\n"
	.string "Huh?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7:
# 242 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not completely sure.\n"
	.string "But…\p"
	.string "If I am correct, this Pokémon here…\n"
	.string "Should be extinct.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8:
# 243 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What does that mean…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9:
# 244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not… Sure what to make of this,\n"
	.string "exactly.\p"
	.string "And I don't remember seeing the\n"
	.string "long-necked ones in the book.\p"
	.string "I think we should try and find out more.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0:
# 254 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Squawk?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0:
# 280 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Erm…\nSo what do you guys think…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1:
# 281 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I think that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2:
# 282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!\n"
	.string "Wait!\p"
	.string "We need to get into proper position\n"
	.string "first!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3:
# 283 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, we talked about this.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4:
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No!!!\p"
	.string "According to the Manual of the\n"
	.string "Impeccable Explorer…\p"
	.string "Important team briefings should be\n"
	.string "delivered standing in formation!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5:
# 285 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "In the interest of time, I will skip the\n"
	.string "arguing.\p"
	.string "Let's just do that.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6:
# 286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Thank you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7:
# 314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "As I was saying…\p"
	.string "I think we're dealing with an\n"
	.string "uncontacted tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8:
# 315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uncontacted tribe?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9:
# 316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, y'know.\n"
	.string "Cannibals and the such.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10:
# 317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Enough with that joke!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11:
# 318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quit it, Jiggly.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12:
# 319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(He's right, though.\n"
	.string "Not about the cannibals, but…)\p"
	.string "(These Pokémon ARE very strange.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13:
# 320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "There's something that bothers me,\n"
	.string "though.\p"
	.string "I'm pretty sure that at least some of\n"
	.string "these Pokémon are from the prehistoric\l"
	.string "era.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14:
# 321 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And how would that be possible, smarty\n"
	.string "pants?\p"
	.string "They just…\n"
	.string "Hid here and survived going extinct?\p"
	.string "And if so, who built the stairs?\n"
	.string "The pier?\l"
	.string "That strange… Cardboard house?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15:
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…What's pants?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16:
# 323 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's something Machoke have.\n"
	.string "Don't ask, it's kinda gross.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17:
# 324 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, I don't know!\n"
	.string "But…\p"
	.string "There has to be an explanation!\n"
	.string "There has to be something here that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18:
# 328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "H{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}NK{PAUSE 10} MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19:
# 331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did you guys hear that?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20:
# 332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Just sounds like someone snoring.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21:
# 333 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We should check it out!\n"
	.string "It could be someone we can talk to!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0:
# 358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I have to see what's going on over\n"
	.string "there first.)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0:
# 399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not a prehistoric Pokémon!\n"
	.string "That's a Drampa!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1:
# 400 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe they would know something about\n"
	.string "what's going on.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2:
# 401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You know what they say: sleeping\n"
	.string "Pokémon tell no tales.\p"
	.string "I'm going to try and wake them up.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3:
# 402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Don't you think someone else should do\n"
	.string "it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4:
# 403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's because I'm a Jigglypuff, isn't it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5:
# 404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You'd just make them sleep harder!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6:
# 405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fine, fine.\n"
	.string "Larvy, figure it out.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7:
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(If we get them to talk to us, we might\n"
	.string "learn something about this mysterious\l"
	.string "island.)\p"
	.string "(Well, here goes nothing!)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8:
# 409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Insert battle here$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9:
# 413 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Who are you?!\n"
	.string "How did you get here?!\l"
	.string "Are you with the tax office?!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10:
# 414 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, no.\n"
	.string "We're treasure hunters.\p"
	.string "We kind of…\n"
	.string "Wrecked our boat.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11:
# 415 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah!\n"
	.string "Treasure hunters!\l"
	.string "What a relief!\p"
	.string "Oh, but you came early!\n"
	.string "The park is not finished yet!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12:
# 416 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ohh, a park?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13:
# 417 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And you are…?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14:
# 418 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah, how rude!\p"
	.string "Dr. John Drampa, at your service.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15:
# 419 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, Dr. Drampa…$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16:
# 420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. John Drampa.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17:
# 421 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, John.\p"
	.string "What's going on here?\n"
	.string "Wasn't this a deserted island?\p"
	.string "What are all these Pokémon doing here?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18:
# 422 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But of course!\n"
	.string "It's only natural that you would be\l"
	.string "confused.\p"
	.string "Follow me, I will explain everything.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19:
# 430 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…I really don't like this guy.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20:
# 437 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I've never met a doctor before.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21:
# 438 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm very curious what this is all about.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_22:
# 451 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose I should go check this out,\n"
	.string "too.)$"

JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0:
# 463 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. Drampa said wandering around could\n"
	.string "be dangerous.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0:
# 487 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "{UP_ARROW} Ancient Desert\n"
	.string "{DOWN_ARROW} Primordial Beach\l"
	.string "{LEFT_ARROW} Lost Mountains\l"
	.string "{RIGHT_ARROW}Observation Platform, Forgotten\l"
	.string "Swamp, Laboratory$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0:
# 495 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1:
# 507 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Let's go after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0:
# 521 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, we have to go after the Doctor!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0:
# 532 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not the way he went, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0:
# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What are you guys doing out here?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1:
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We're going to repair the generators!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2:
# 564 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, I figured out where the\n"
	.string "generators are.\p"
	.string "Turns out, there's a bridge to the lab,\n"
	.string "but it retracts when the generators\l"
	.string "are out as a security measure.\p"
	.string "And the only way to take 'em back up is\n"
	.string "manually.$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3:
# 565 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Forget about it!\n"
	.string "The cage is broken!\p"
	.string "We need to hide, now!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4:
# 566 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5:
# 574 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "N-no way…$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6:
# 591 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "Run.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_0:
# 618 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We almost made it back!\n"
	.string "And no scary Pokémon to be found.\p"
	.string "Hopefully it stays that way!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_1:
# 619 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I do wonder were it went, though.)\p"
	.string "(It couldn't have left the island, but…\n"
	.string "Maybe it really won't bother us again.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenBagon_Text_2:
# 620 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Let's go back to the centre.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_0:
# 635 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Whew!\n"
	.string "Finally, no more sand.\p"
	.string "Reminds me of that time we went to the\n"
	.string "desert to look for treasure…\l"
	.string "And we fell in a pit, and Jiggly got sand\l"
	.string "up his nose!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_1:
# 636 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I didn't even know he had a nose.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenPhanpy_Text_2:
# 637 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "After this is over, let's go on vacation\n"
	.string "somewhere… calmer.\p"
	.string "But first, let's go back to the centre.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_0:
# 655 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy…\p"
	.string "Would it be…\n"
	.string "Okay, if I stayed here while you look\l"
	.string "for the others…?$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_1:
# 656 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Sure, I guess so, but…\n"
	.string "Why's that?)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_2:
# 657 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I… I wish I could do more, but…\n"
	.string "I think… I may need a rest.\p"
	.string "I'm sorry, I…\n"
	.string "I know I'm not too useful, and, and…\l"
	.string "I'm not as strong as you guys, and…$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_3:
# 658 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Bagon, it's okay.\n"
	.string "You're too tired to keep going.)\p"
	.string "(Taking breaks to avoid injuries is\n"
	.string "important.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_4:
# 659 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'll make up for it, I swear!\p"
	.string "Once I've rested, I'm gonna back to\n"
	.string "kicking some prehistoric butts!\p"
	.string "One day, Larvy, one day I will become a\n"
	.string "Salamence, and…\l"
	.string "I'll never be tired and scared again!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_5:
# 667 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 670 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, can I ask you something…?\p"
	.string "Would you mind if I stayed here at the\n"
	.string "centre FOR NOW?$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_7:
# 672 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I just thought…\n"
	.string "We've been encountering dangerous\l"
	.string "Pokémon we've never seen before.\p"
	.string "I figure, maybe there's some\n"
	.string "information in the centre that that\l"
	.string "could be useful.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_8:
# 673 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I see.\n"
	.string "That does make sense.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_9:
# 674 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 682 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I've known Phanpy longer than anyone\n"
	.string "else.)\p"
	.string "(It wouldn't be wrong to say that she's\n"
	.string "been the driving force of our\l"
	.string "adventures.)\p"
	.string "(She wants to know everything there is\n"
	.string "to know about the world…)\p"
	.string "(Maybe too much, sometimes.)\p"
	.string "(While she's looking for more\n"
	.string "information, I should go and see if I\l"
	.string "can find the others.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_11:
# 685 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I hate to say this, but…\p"
	.string "I may tap out for a bit.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_12:
# 686 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Uh, sure, I guess, but…\n"
	.string "Why's that?)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_13:
# 687 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I hurt my floatation sack.$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_14:
# 688 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(That wasn't a joke?!)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_15:
# 689 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Why would I joke about something like\n"
	.string "that?!\p"
	.string "I'm a very serious person, I'll let you\n"
	.string "know!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_16:
# 690 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose…)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_17:
# 691 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 692 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Of course.)$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_19:
# 693 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I know I can rely on you, Larvy.\p"
	.string "I'll be back in no time, and these brutes\n"
	.string "will know the wrath of Jigglypuff!$"

JurassicPark_Visitor_Centre_EventScript_OneGeneratorCutscene_Text_20:
# 701 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
# 712 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And here we are, safe and sound.\n"
	.string "Obviously.\p"
	.string "You did fairly good, Larvy.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_1:
# 713 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Uh, thanks…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_FirstGenJiggly_Text_2:
# 714 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yes, anyway.\p"
	.string "Let's not linger here too much.\n"
	.string "I don't want to see that ugly brute\l"
	.string "show up again.\p"
	.string "Let's go to the visitor centre, yeah?$"
