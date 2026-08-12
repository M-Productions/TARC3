JurassicPark_Road_To_Visitor_Centre_MapScripts::
# 2 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_FOREST_ROAD
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 7 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 42, 36
	goto JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 13
# 12 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 13
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest::
# 19 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 20 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 21 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_FOREST_ROAD
# 22 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 23 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 24 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 25 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 26 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 27 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 28 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 29 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 30 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_JURASSIC_PARK_MAIN_THEME, TRUE
# 31 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0
# 33 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 34 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 32
# 35 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	teleportcamera VAR_TEMP_1, VAR_TEMP_2
# 37 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 38 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 10
# 39 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 41 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playbgm MUS_FOREST_FIELD, TRUE
# 42 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 43 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 44 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 45 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 46 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 47 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 48 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 49 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 50 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 51 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 52 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 53 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 54 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 55 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 56 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 57 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 58 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 59 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 60 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 42, 36
# 61 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 21, 34
# 62 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 42, 36
# 63 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	releaseall
	end


# 69 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Movement_PlayerWalkToForest:
# 70 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 70 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 70 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 70 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 70 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial::
# 74 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 75 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 76 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 77 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 78 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	callnative StartPuzzleTutorialBattle
# 79 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 80 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 81 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0
# 82 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 83 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff::
# 89 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 90 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 91 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 92 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 93 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 94 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 95 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 97 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 98 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 100 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 101 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon::
# 107 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 108 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 109 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	return


JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt::
# 114 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 117 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 118 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 119 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy::
# 126 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 127 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 128 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 129 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 130 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 131 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 132 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 133 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 134 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 135 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 137 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 138 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_Archen::
# 144 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 145 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	faceplayer
# 146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0, localId = LOCALID_ARCHEN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 147 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 148 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa::
# 154 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lockall
# 155 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_PRE_MEETING_DRAMPA
# 156 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 157 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 158 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 45, 27
# 159 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 46, 27
# 160 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 161 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 162 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 163 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1
# 164 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 165 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 166 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 167 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special SpawnCameraObject
# 168 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1
# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 170 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 171 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement LOCALID_JIGGLYPUFF_FOREST
# 172 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 179 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 180 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 181 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 182 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 5
# 183 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	special RemoveCameraObject
# 184 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 185 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1:
# 190 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4:
# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5
# 196 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 197 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 46, 18
# 198 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0
# 199 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_FOREST, 47, 17
# 200 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6
# 201 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_FOREST, 45, 17
# 202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7
# 203 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 204 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 205 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 206 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 207 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 212 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 213 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 214 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 215 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 216 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 217 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 218 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 220 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playmoncry SPECIES_DRAMPA, CRY_MODE_NORMAL
# 221 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18
# 222 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 224 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 225 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 227 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 228 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8
# 229 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 230 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_9
# 231 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 232 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	destroyfollowernpc
# 233 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 234 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 235 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_FOREST, 31, 13
# 236 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_FOREST, 32, 13
# 237 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_FOREST
# 238 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_FOREST
# 239 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_JIGGLYPUFF_FOREST
# 240 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	addobject LOCALID_PHANPY_FOREST
# 241 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadedefaultbgm
	end

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_2:
# 187 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3
# 188 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_1

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_5:
# 192 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4
# 193 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_4


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth::
# 247 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 249 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 250 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 251 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest::
# 257 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 258 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 260 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 261 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa::
# 267 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	lock
# 268 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CUTSCENE_MYSTERIOUS
# 269 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 270 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	switch VAR_TEMP_1
# 272 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 31, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3
# 275 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 32, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4
# 278 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 33, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5
# 280 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 34, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6
# 283 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	case 35, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1:
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3
# 288 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 289 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 290 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 291 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 292 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 293 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 294 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6, , localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 297 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 298 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmboxdelay
# 299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8
# 300 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 301 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 310 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 311 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 312 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18, localId = LOCALID_DRAMPA_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 313 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 314 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2
# 315 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 316 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 317 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_FOREST
# 318 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setflag FLAG_HIDE_DRAMPA_FOREST
# 319 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19, localId = LOCALID_JIGGLYPUFF_FOREST, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 321 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_FOREST, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5
# 323 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 324 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 325 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_FOREST
# 326 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitse
# 327 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20, localId = LOCALID_BAGON_FOREST, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21, localId = LOCALID_PHANPY_FOREST, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 329 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 330 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 331 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 332 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 333 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 334 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 335 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 336 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_FOREST
# 337 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_FOREST, JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0
# 338 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 339 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 340 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_FOREST
# 341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_22, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 342 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	closemessage
# 343 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2
# 344 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 345 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 346 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_MET_DRAMPA
# 347 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 10, 19
	return

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_3:
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0
# 274 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_4:
# 276 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1
# 277 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_5:
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_6:
# 281 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0
# 282 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_7:
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2
# 285 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_1


# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_0:
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northeast
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_up
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
# 32 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_slow_diag_northwest
	step_end

# 44 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_1:
# 44 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 55 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Movement_2:
# 55 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 55 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 55 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 55 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Movement_0:
# 97 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 165 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_0:
# 165 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 168 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_1:
# 168 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_2:
# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 169 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 187 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_3:
# 187 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
# 187 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 192 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_4:
# 192 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_right
	step_end

# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_5:
# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
# 195 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 200 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_6:
# 200 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_left
	step_end

# 202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_7:
# 202 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_right
	step_end

# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_8:
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 226 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 230 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Movement_9:
# 230 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_faster_up
	step_end

# 259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkWest_Movement_0:
# 259 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_0:
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 273 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 276 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_1:
# 276 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
	step_end

# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_2:
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 284 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
	step_end

# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_3:
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 287 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_4:
# 302 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Movement_5:
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_left
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_right
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 322 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_0:
# 26 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, guys!\n"
	.string "What's-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_1:
# 27 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Shh!\n"
	.string "Look!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_2:
# 28 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look at w…\n"
	.string "Oh!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_3:
# 42 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's…\n"
	.string "It's…\l"
	.string "It's beautiful!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_4:
# 43 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It really is.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_5:
# 47 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And would you look at that.\n"
	.string "There ARE other Pokémon here.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_6:
# 48 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "They look weird, though.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_7:
# 49 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hey, that's a bit rude!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_8:
# 50 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, it's true.\n"
	.string "Never seen any Pokémon that look like\l"
	.string "this, that's for sure.\p"
	.string "Hopefully they're not a cannibal tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_9:
# 51 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "C-cannibals?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_10:
# 52 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest_Text_11:
# 53 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Gee, sensitive much?\n"
	.string "It'll be fine.\p"
	.string "C'mon, let's go talk to them.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_0:
# 81 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You're a very interesting Pokémon,\nwho are you?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial_Text_1:
# 83 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvesta? What a funny name...\nWell it's a pleasure to meet you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_0:
# 90 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO?\n"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_1:
# 93 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Get a load of these guys, Larvy.\p"
	.string "I'm trying to ask them something, and\n"
	.string "they're ignoring me!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_2:
# 94 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe it's because they can't\n"
	.string "understand us?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_3:
# 95 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, it's because we're outsiders, isn't\n"
	.string "it?\p"
	.string "This isn't an island of cannibals.\n"
	.string "It's an island of racists!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_4:
# 96 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I'm not sure that's it, Jiggly.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Jigglypuff_Text_5:
# 99 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "HELLO{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}O{PAUSE 20}?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Bastiodon_Text_0:
# 108 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Guoh?\pTHIS MUGSHOT IS A PLACEHOLDER$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_0:
# 115 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, hello?\n"
	.string "Sir?\l"
	.string "Or madam?\p"
	.string "Can I ask you something?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_1:
# 116 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…\pTHIS MUGSHOT IS A PLACEHOLDER$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_2:
# 117 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Hmm…\n"
	.string "No response.\p"
	.string "Maybe they can't hear me because their\n"
	.string "neck is too long.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Raging_Bolt_Text_3:
# 118 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I wonder…)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_0:
# 128 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Bagon, Larvy, there's something strange\n"
	.string "going on.\p"
	.string "Do you see that?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_1:
# 129 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Looks like a flying-type Pokémon to me.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_2:
# 130 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, probably, but…\p"
	.string "Have you ever seen a Pokémon that\n"
	.string "looks like this?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_3:
# 131 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No, but…\p"
	.string "There's a lot of different Pokémon in\n"
	.string "the world.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_4:
# 132 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fair enough.\n"
	.string "But I HAVE seen a Pokémon like this.\l"
	.string "In a book.\p"
	.string "It was a book about…\n"
	.string "Prehistoric Pokémon.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_5:
# 133 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Pre-\n"
	.string "Huh?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_6:
# 134 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not completely sure.\n"
	.string "But…\p"
	.string "If I am correct, this Pokémon here…\n"
	.string "Should be extinct.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_7:
# 135 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(What does that mean…?)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Phanpy_Text_8:
# 136 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm not… Sure what to make of this,\n"
	.string "exactly.\p"
	.string "And I don't remember seeing the\n"
	.string "long-necked ones in the book.\p"
	.string "I think we should try and find out more.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_Archen_Text_0:
# 146 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Squawk?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_0:
# 172 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Erm…\nSo what do you guys think…?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_1:
# 173 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Well, I think that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_2:
# 174 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Jiggly!\n"
	.string "Wait!\p"
	.string "We need to get into proper position\n"
	.string "first!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_3:
# 175 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Phanpy, we talked about this.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_4:
# 176 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "No!!!\p"
	.string "According to the Manual of the\n"
	.string "Impeccable Explorer…\p"
	.string "Important team briefings should be\n"
	.string "delivered standing in formation!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_5:
# 177 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "In the interest of time, I will skip the\n"
	.string "arguing.\p"
	.string "Let's just do that.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_6:
# 178 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Thank you.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_7:
# 205 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "As I was saying…\p"
	.string "I think we're dealing with an\n"
	.string "uncontacted tribe.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_8:
# 206 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uncontacted tribe?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_9:
# 207 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Yeah, y'know.\n"
	.string "Cannibals and the such.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_10:
# 208 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Enough with that joke!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_11:
# 209 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Quit it, Jiggly.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_12:
# 210 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(He's right, though.\n"
	.string "Not about the cannibals, but…)\p"
	.string "(These Pokémon ARE very strange.)$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_13:
# 211 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "There's something that bothers me,\n"
	.string "though.\p"
	.string "I'm pretty sure that at least some of\n"
	.string "these Pokémon are from the prehistoric\l"
	.string "era.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_14:
# 212 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And how would that be possible, smarty\n"
	.string "pants?\p"
	.string "They just…\n"
	.string "Hid here and survived going extinct?\p"
	.string "And if so, who built the stairs?\n"
	.string "The pier?\l"
	.string "That strange… Cardboard house?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_15:
# 213 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…What's pants?$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_16:
# 214 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's something Machoke have.\n"
	.string "Don't ask, it's kinda gross.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_17:
# 215 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Look, I don't know!\n"
	.string "But…\p"
	.string "There has to be an explanation!\n"
	.string "There has to be something here that-$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_18:
# 219 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "H{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}O{PAUSE 10}NK{PAUSE 10} MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI{PAUSE 5}MI.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_19:
# 222 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Did you guys hear that?!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_20:
# 223 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Just sounds like someone snoring.$"

JurassicPark_Road_To_Visitor_Centre_EventScript_MeetDrampa_Text_21:
# 224 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "We should check it out!\n"
	.string "It could be someone we can talk to!$"

JurassicPark_Road_To_Visitor_Centre_EventScript_GoBackToMeetDrampaWalkNorth_Text_0:
# 248 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I have to see what's going on over\n"
	.string "there first.)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_0:
# 289 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "That's not a prehistoric Pokémon!\n"
	.string "That's a Drampa!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_1:
# 290 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Maybe they would know something about\n"
	.string "what's going on.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_2:
# 291 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You know what they say: sleeping\n"
	.string "Pokémon tell no tales.\p"
	.string "I'm going to try and wake them up.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_3:
# 292 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Don't you think someone else should do\n"
	.string "it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_4:
# 293 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "It's because I'm a Jigglypuff, isn't it?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_5:
# 294 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You'd just make them sleep harder!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_6:
# 295 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Fine, fine.\n"
	.string "Larvy, figure it out.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_7:
# 296 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(If we get them to talk to us, we might\n"
	.string "learn something about this mysterious\l"
	.string "island.)\p"
	.string "(Well, here goes nothing!)$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_8:
# 299 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Insert battle here$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_9:
# 303 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "What the…\p"
	.string "Who are you?!\n"
	.string "How did you get here?!\l"
	.string "Are you with the tax office?!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_10:
# 304 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Uhm, no.\n"
	.string "We're treasure hunters.\p"
	.string "We kind of…\n"
	.string "Wrecked our boat.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_11:
# 305 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah!\n"
	.string "Treasure hunters!\l"
	.string "What a relief!\p"
	.string "Oh, but you came early!\n"
	.string "The park is not finished yet!$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_12:
# 306 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ohh, a park?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_13:
# 307 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "And you are…?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_14:
# 308 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Ah, how rude!\p"
	.string "Dr. John Drampa, at your service.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_15:
# 309 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, Dr. Drampa…$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_16:
# 310 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Dr. John Drampa.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_17:
# 311 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Listen, John.\p"
	.string "What's going on here?\n"
	.string "Wasn't this a deserted island?\p"
	.string "What are all these Pokémon doing here?$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_18:
# 312 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "But of course!\n"
	.string "It's only natural that you would be\l"
	.string "confused.\p"
	.string "Follow me, I will explain everything.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_19:
# 320 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "…I really don't like this guy.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_20:
# 327 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I've never met a doctor before.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_21:
# 328 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "I'm very curious what this is all about.$"

JurassicPark_Road_To_Visitor_Centre_Snoring_Drampa_Text_22:
# 341 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(I suppose I should go check this out,\n"
	.string "too.)$"
