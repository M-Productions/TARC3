JurassicPark_Road_To_Visitor_Centre_MapScripts::
# 2 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 51 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
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
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
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

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 46 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_SLEEP
# 47 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_SLEEP
# 48 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_SLEEP
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 52 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_CENTRE_GOING_AFTER_DRAMPA, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 55 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 53 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 56 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_TyrantrumScene
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest::
# 63 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 64 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 65 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_FOREST_ROAD
# 66 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 67 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 68 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 69 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 70 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 71 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 72 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 73 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 74 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_JURASSIC_PARK_MAIN_THEME, TRUE
# 75 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0
# 77 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 78 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 79 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	teleportcamera VAR_TEMP_1, VAR_TEMP_2
# 81 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 82 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 83 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 84 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 85 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_FOREST_FIELD, TRUE
# 86 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 87 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 88 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 89 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 90 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 91 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 92 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 93 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 94 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 95 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 97 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 98 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 100 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 101 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 102 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 103 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 104 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 42, 36
# 105 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 106 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 42, 36
# 107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_FOREST
# 108 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_BAGON_FOREST
# 109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end


# 115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Movement_PlayerWalkToForest:
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial::
# 120 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 121 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 122 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 123 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 124 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	callnative StartPuzzleTutorialBattle
# 125 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 126 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0
# 128 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 129 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff::
# 135 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 137 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 138 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 139 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 140 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 141 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 143 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 144 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 145 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 147 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon::
# 153 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 154 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 155 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_2
# 161 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_1
# 162 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject VAR_LAST_TALKED
# 163 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_2:
# 156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0, localId = VAR_LAST_TALKED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt::
# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_NO_GENERATORS
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2
# 175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
	goto_if_ge JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3
# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 182 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 183 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 184 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 185 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 186 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_2:
# 171 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0
# 172 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_3:
# 177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = VAR_LAST_TALKED
# 178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy::
# 193 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 194 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2
# 202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5
# 210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 212 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 213 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 214 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 215 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 216 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_2:
# 197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_5:
# 204 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 205 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Archen::
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 228 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0, localId = LOCALID_ARCHEN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 229 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 230 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa::
# 236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 237 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
# 238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 239 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 240 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 45, 27
# 241 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 46, 27
# 242 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 243 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 244 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 245 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 246 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 249 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 250 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 252 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 253 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_JIGGLYPUFF_FOREST
# 254 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 255 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 256 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 257 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 258 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 261 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 262 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 263 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 264 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 5
# 265 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 266 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 267 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1:
# 272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4:
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5
# 278 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 279 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 46, 18
# 280 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 281 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 47, 17
# 282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6
# 283 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 45, 17
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7
# 285 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 286 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 288 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 289 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 290 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 291 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 292 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 293 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 294 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 297 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 301 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 310 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 311 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 312 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 313 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 13
# 320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 13
# 321 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 323 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 324 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 325 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadedefaultbgm
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2:
# 269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3
# 270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5:
# 274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4
# 275 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth::
# 331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 333 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 334 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest::
# 341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa::
# 351 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 352 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CUTSCENE_MYSTERIOUS
# 353 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 354 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_TEMP_1
# 356 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 31, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3
# 359 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 32, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4
# 362 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 33, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5
# 364 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 34, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6
# 367 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 35, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1:
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3
# 372 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6, , localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 380 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 381 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 382 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8
# 384 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 385 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4
# 387 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 390 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 397 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 398 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 399 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 400 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 401 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 402 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_FOREST
# 403 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 405 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5
# 407 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 408 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 409 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 410 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 413 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 414 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 415 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 416 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 417 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 418 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 419 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 420 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 421 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 422 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 423 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 424 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 425 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_22, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 426 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 427 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 428 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 429 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 430 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_MET_DRAMPA
# 431 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
	return

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3:
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0
# 358 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4:
# 360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1
# 361 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5:
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6:
# 365 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 366 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7:
# 368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2
# 369 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down::
# 436 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 437 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 438 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 439 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 440 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 441 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Up::
# 447 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 448 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 449 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 450 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 451 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 452 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Sign::
# 460 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 461 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0, MSGBOX_SIGN
# 462 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa::
# 468 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 469 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 470 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 471 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 472 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 473 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1
# 476 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_DRAMPA_FOREST
# 477 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 478 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 479 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 480 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 481 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 482 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 483 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 484 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2
# 485 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 486 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setfollowernpc LOCALID_PHANPY_FOREST, FOLLOWER_NPC_FLAG_ALL_LAND
# 487 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
# 488 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim::
# 494 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 495 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 496 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 497 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 498 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 499 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth::
# 505 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 506 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 507 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 508 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 509 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 510 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWaySouth::
# 516 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 517 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 518 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 519 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 520 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 521 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_TyrantrumScene::
# 527 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 529 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0
# 530 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 531 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 532 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 533 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 534 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 535 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 536 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 537 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 538 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 539 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 540 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 541 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 542 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 543 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 544 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 545 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 546 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 547 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmoncry
# 548 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 549 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 550 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 551 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 552 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 553 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 554 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 555 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 556 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 557 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 558 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 559 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 560 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 561 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 562 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_STRENGTH
# 563 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1
# 564 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 565 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 566 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_TYRANTRUM_FOREST, JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6
# 572 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_PLAYER
# 573 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 574 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
# 575 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_FOREST
# 576 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_BAGON_CENTRE
# 577 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_FOREST
# 578 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_PHANPY_CENTRE
# 579 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 580 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 581 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_TYRANTRUM_FOREST
# 582 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_ARCHEN_FOREST
# 583 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_CENTRE
# 584 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 585 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
	return


# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0:
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
	step_end

# 88 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1:
# 88 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2:
# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 143 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0:
# 143 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0:
# 247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 250 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1:
# 250 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2:
# 251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3:
# 269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
# 269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4:
# 274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5:
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6:
# 282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_left
	step_end

# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7:
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_right
	step_end

# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8:
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0:
# 343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0:
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 357 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1:
# 360 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2:
# 368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 368 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3:
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 371 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4:
# 386 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5:
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 406 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_0:
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 474 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_1:
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 475 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 483 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Movement_2:
# 483 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
# 483 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_0:
# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 528 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 551 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_1:
# 551 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 551 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
# 551 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay_16
	step_end

# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_2:
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
# 567 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_right
	step_end

# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_3:
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 568 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
	step_end

# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_4:
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
# 569 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_down
	step_end

# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_5:
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
# 570 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_up
	step_end

# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Movement_6:
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_fast_left
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 571 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0:
# 70 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, guys!\n"
	.string "What's-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1:
# 71 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Shh!\n"
	.string "Look!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2:
# 72 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look at w…\n"
	.string "Oh!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3:
# 86 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's…\n"
	.string "It's…\l"
	.string "It's beautiful!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4:
# 87 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It really is.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5:
# 91 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And would you look at that.\n"
	.string "There ARE other Pokémon here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6:
# 92 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "They look weird, though.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7:
# 93 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, that's a bit rude!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8:
# 94 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, it's true.\n"
	.string "Never seen any Pokémon that look like\l"
	.string "this, that's for sure.\p"
	.string "Hopefully they're not a cannibal tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9:
# 95 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "C-cannibals?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10:
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11:
# 97 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Gee, sensitive much?\n"
	.string "It'll be fine.\p"
	.string "C'mon, let's go talk to them.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0:
# 127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You're a very interesting Pokémon,\nwho are you?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1:
# 129 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvesta? What a funny name...\nWell it's a pleasure to meet you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0:
# 136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO?\n"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1:
# 139 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Get a load of these guys, Larvy.\p"
	.string "I'm trying to ask them something, and\n"
	.string "they're ignoring me!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2:
# 140 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe it's because they can't\n"
	.string "understand us?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3:
# 141 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, it's because we're outsiders, isn't\n"
	.string "it?\p"
	.string "This isn't an island of cannibals.\n"
	.string "It's an island of racists!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4:
# 142 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I'm not sure that's it, Jiggly.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5:
# 145 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0:
# 156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Guoh!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_1:
# 161 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "PLACEHOLDER: skipping battle.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0:
# 171 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No response.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1:
# 177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2:
# 182 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, hello?\n"
	.string "Sir?\l"
	.string "Or madam?\p"
	.string "Can I ask you something?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3:
# 184 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hmm…\n"
	.string "No response.\p"
	.string "Maybe they can't hear me because their\n"
	.string "neck is too long.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_4:
# 185 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I wonder…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0:
# 197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quick, after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1:
# 210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, Larvy, there's something strange\n"
	.string "going on.\p"
	.string "Do you see that?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2:
# 211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Looks like a flying-type Pokémon to me.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3:
# 212 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, probably, but…\p"
	.string "Have you ever seen a Pokémon that\n"
	.string "looks like this?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4:
# 213 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, but…\p"
	.string "There's a lot of different Pokémon in\n"
	.string "the world.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5:
# 214 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fair enough.\n"
	.string "But I HAVE seen a Pokémon like this.\l"
	.string "In a book.\p"
	.string "It was a book about…\n"
	.string "Prehistoric Pokémon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6:
# 215 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Pre-\n"
	.string "Huh?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7:
# 216 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not completely sure.\n"
	.string "But…\p"
	.string "If I am correct, this Pokémon here…\n"
	.string "Should be extinct.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8:
# 217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What does that mean…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_9:
# 218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not… Sure what to make of this,\n"
	.string "exactly.\p"
	.string "And I don't remember seeing the\n"
	.string "long-necked ones in the book.\p"
	.string "I think we should try and find out more.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0:
# 228 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Squawk?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0:
# 254 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Erm…\nSo what do you guys think…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1:
# 255 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I think that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2:
# 256 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!\n"
	.string "Wait!\p"
	.string "We need to get into proper position\n"
	.string "first!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3:
# 257 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, we talked about this.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4:
# 258 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No!!!\p"
	.string "According to the Manual of the\n"
	.string "Impeccable Explorer…\p"
	.string "Important team briefings should be\n"
	.string "delivered standing in formation!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5:
# 259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "In the interest of time, I will skip the\n"
	.string "arguing.\p"
	.string "Let's just do that.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6:
# 260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Thank you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7:
# 288 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "As I was saying…\p"
	.string "I think we're dealing with an\n"
	.string "uncontacted tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8:
# 289 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uncontacted tribe?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9:
# 290 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, y'know.\n"
	.string "Cannibals and the such.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10:
# 291 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Enough with that joke!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11:
# 292 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quit it, Jiggly.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12:
# 293 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(He's right, though.\n"
	.string "Not about the cannibals, but…)\p"
	.string "(These Pokémon ARE very strange.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13:
# 294 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "There's something that bothers me,\n"
	.string "though.\p"
	.string "I'm pretty sure that at least some of\n"
	.string "these Pokémon are from the prehistoric\l"
	.string "era.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14:
# 295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And how would that be possible, smarty\n"
	.string "pants?\p"
	.string "They just…\n"
	.string "Hid here and survived going extinct?\p"
	.string "And if so, who built the stairs?\n"
	.string "The pier?\l"
	.string "That strange… Cardboard house?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15:
# 296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…What's pants?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16:
# 297 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's something Machoke have.\n"
	.string "Don't ask, it's kinda gross.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17:
# 298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, I don't know!\n"
	.string "But…\p"
	.string "There has to be an explanation!\n"
	.string "There has to be something here that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18:
# 302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "H{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}NK{PAUSE 10} MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19:
# 305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did you guys hear that?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20:
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Just sounds like someone snoring.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21:
# 307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We should check it out!\n"
	.string "It could be someone we can talk to!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0:
# 332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I have to see what's going on over\n"
	.string "there first.)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0:
# 373 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not a prehistoric Pokémon!\n"
	.string "That's a Drampa!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1:
# 374 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe they would know something about\n"
	.string "what's going on.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2:
# 375 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You know what they say: sleeping\n"
	.string "Pokémon tell no tales.\p"
	.string "I'm going to try and wake them up.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3:
# 376 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Don't you think someone else should do\n"
	.string "it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4:
# 377 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's because I'm a Jigglypuff, isn't it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5:
# 378 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You'd just make them sleep harder!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6:
# 379 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fine, fine.\n"
	.string "Larvy, figure it out.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7:
# 380 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(If we get them to talk to us, we might\n"
	.string "learn something about this mysterious\l"
	.string "island.)\p"
	.string "(Well, here goes nothing!)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8:
# 383 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Insert battle here$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9:
# 387 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Who are you?!\n"
	.string "How did you get here?!\l"
	.string "Are you with the tax office?!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10:
# 388 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, no.\n"
	.string "We're treasure hunters.\p"
	.string "We kind of…\n"
	.string "Wrecked our boat.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11:
# 389 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah!\n"
	.string "Treasure hunters!\l"
	.string "What a relief!\p"
	.string "Oh, but you came early!\n"
	.string "The park is not finished yet!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12:
# 390 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ohh, a park?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13:
# 391 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And you are…?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14:
# 392 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah, how rude!\p"
	.string "Dr. John Drampa, at your service.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15:
# 393 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, Dr. Drampa…$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16:
# 394 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. John Drampa.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17:
# 395 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, John.\p"
	.string "What's going on here?\n"
	.string "Wasn't this a deserted island?\p"
	.string "What are all these Pokémon doing here?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18:
# 396 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But of course!\n"
	.string "It's only natural that you would be\l"
	.string "confused.\p"
	.string "Follow me, I will explain everything.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19:
# 404 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…I really don't like this guy.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20:
# 411 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I've never met a doctor before.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21:
# 412 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm very curious what this is all about.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_22:
# 425 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose I should go check this out,\n"
	.string "too.)$"

JurassicPark_Road_To_Visitor_Centre_Too_Dangerous_Down_Text_0:
# 437 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. Drampa said wandering around could\n"
	.string "be dangerous.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Sign_Text_0:
# 461 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "{UP_ARROW} Ancient Desert\n"
	.string "{DOWN_ARROW} Primordial Beach\l"
	.string "{LEFT_ARROW} Lost Mountains\l"
	.string "{RIGHT_ARROW}Observation Platform, Forgotten\l"
	.string "Swamp, Laboratory$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_0:
# 469 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_GoingAfterDrampa_Text_1:
# 481 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Let's go after him!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoAfterHim_Text_0:
# 495 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvy, we have to go after the Doctor!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_NotThisWayNorth_Text_0:
# 506 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not the way he went, Larvy!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_0:
# 536 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What are you guys doing out here?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_1:
# 537 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We're going to repair the generators!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_2:
# 538 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, I figured out where the\n"
	.string "generators are.\p"
	.string "Turns out, there's a bridge to the lab,\n"
	.string "but it retracts when the generators\l"
	.string "are out as a security measure.\p"
	.string "And the only way to take 'em back up is\n"
	.string "manually.$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_3:
# 539 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Forget about it!\n"
	.string "The cage is broken!\p"
	.string "We need to hide, now!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_4:
# 540 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What?!$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_5:
# 548 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "N-no way…$"

JurassicPark_Visitor_Centre_EventScript_TyrantrumScene_Text_6:
# 565 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "… … …\n"
	.string "Run.$"
