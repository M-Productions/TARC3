JurassicPark_Desert_Main_MapScripts::
# 14 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_LOAD
# 2 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_LOAD:
# 16 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	compare VAR_DESERT_STATE, 4
	goto_if_ge JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 18 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	call JurassicPark_Desert_Main_RemoveHouse
# 19 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setobjectxyperm LOCALID_RAMPARDOS, 45, 7
# 20 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setobjectmovementtype LOCALID_RAMPARDOS, MOVEMENT_TYPE_FACE_UP
	return

JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	map_script_2 VAR_DESERT_STATE, 0, JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 5 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	lock
# 6 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, localId = LOCALID_PLAYER
# 7 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 8 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 9 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitmovement 0
# 10 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_DESERT_STATE, 1
# 11 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	release
	return


JurassicPark_Desert_Main_EventScript_WarpToLastPosition::
# 28 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	playse SE_DOWNPOUR
# 29 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8004, 1
# 30 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8005, 1
# 31 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8006, 20
# 32 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8007, 5
# 33 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	special ShakeCamera
# 34 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitstate
# 35 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 36 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	callnative CreateCradilyToGetYa
# 37 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	callnative DoOWESpawnAnim_Cradily
# 38 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	facetogether LOCALID_PLAYER, LOCALID_CRADILY
# 39 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_WarpToLastPosition_Text_0, localId = LOCALID_CRADILY
# 40 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_DESERT_MAIN, VAR_NON_QUICKSAND_X, VAR_NON_QUICKSAND_Y
# 41 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitstate
	return


JurassicPark_Desert_Main_EventScript_CantLeave::
# 46 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_CantLeave_Text_0, localId = LOCALID_PLAYER
# 47 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 48 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Desert_Main_EventScript_CantLeave_Movement_0
# 49 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitmovement 0
	end


JurassicPark_Desert_Main_EventScript_PhanpyJoins::
# 55 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	lockall
# 56 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	playse SE_PIN
# 57 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_PHANPY_DESERT, JurassicPark_Desert_Main_EventScript_PhanpyJoins_Movement_0
# 58 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitmovement 0
# 59 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Desert_Main_EventScript_PhanpyJoins_Movement_1
# 60 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitmovement 0
# 61 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_0, localId = LOCALID_PHANPY_DESERT, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 62 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	switch VAR_GAME_STATE
# 64 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	case GS_NO_GENERATORS, JurassicPark_Desert_Main_EventScript_PhanpyJoins_3
# 68 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Desert_Main_EventScript_PhanpyJoins_4
# 81 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Desert_Main_EventScript_PhanpyJoins_5
JurassicPark_Desert_Main_EventScript_PhanpyJoins_1:
# 86 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_10, localId = LOCALID_PHANPY_DESERT, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 87 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_11, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 88 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_12, localId = LOCALID_PHANPY_DESERT
# 89 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 90 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	destroyfollowernpc
# 91 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setfollowernpc LOCALID_PHANPY_DESERT, FOLLOWER_NPC_FLAG_ALL
# 92 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_DESERT_STATE, 2
# 93 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	releaseall
	end

JurassicPark_Desert_Main_EventScript_PhanpyJoins_3:
# 65 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 66 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_2, localId = LOCALID_PHANPY_DESERT, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 67 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Desert_Main_EventScript_PhanpyJoins_1

JurassicPark_Desert_Main_EventScript_PhanpyJoins_4:
# 69 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	switch VAR_FIRST_SAVED
# 71 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Desert_Main_EventScript_PhanpyJoins_7
# 76 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	case CHAR_BAGON, JurassicPark_Desert_Main_EventScript_PhanpyJoins_8
	goto JurassicPark_Desert_Main_EventScript_PhanpyJoins_1

JurassicPark_Desert_Main_EventScript_PhanpyJoins_5:
# 82 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 83 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_9, localId = LOCALID_PHANPY_DESERT, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Desert_Main_EventScript_PhanpyJoins_1

JurassicPark_Desert_Main_EventScript_PhanpyJoins_7:
# 72 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 73 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_5, localId = LOCALID_PHANPY_DESERT, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 74 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Desert_Main_EventScript_PhanpyJoins_1

JurassicPark_Desert_Main_EventScript_PhanpyJoins_8:
# 77 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_6, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 78 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_7, localId = LOCALID_PHANPY_DESERT, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 79 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Desert_Main_EventScript_PhanpyJoins_1


JurassicPark_Desert_Main_EventScript_Phanpy::
# 99 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_Phanpy_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 100 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
	end


JurassicPark_Desert_Main_EventScript_House::
# 106 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	compare VAR_DESERT_STATE, 2
	goto_if_eq JurassicPark_Desert_Main_EventScript_House_1
# 126 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	goto General_EventScript_Cutout
	return

JurassicPark_Desert_Main_EventScript_House_1:
# 108 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_House_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 109 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 110 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	special SpawnCameraObject
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Desert_Main_EventScript_House_Movement_0
# 112 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitmovement 0
# 113 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	special RemoveCameraObject
# 114 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_House_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 115 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_House_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 116 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_House_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 117 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_House_Text_4, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 118 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_House_Text_5, localId = LOCALID_PLAYER
# 119 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_House_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 120 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 121 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_DESERT_STATE, 3
	end


JurassicPark_Desert_Main_EventsScript_GoLeft::
# 133 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_GoLeft_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 134 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 135 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Desert_Main_EventsScript_GoLeft_Movement_0
# 136 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Desert_Main_EventsScript_GoLeft_Movement_0
# 137 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitmovement 0
	end


JurassicPark_Desert_Main_EventsScript_RampardosFight::
# 143 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 144 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 145 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 146 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_3, localId = LOCALID_PLAYER
# 147 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_4, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 148 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_5, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 149 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_6, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 150 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_7, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 151 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_8, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 152 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 153 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	msgbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_9
# 154 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_10, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 155 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	lockall
# 156 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Desert_Main_EventsScript_RampardosFight_Movement_0
# 159 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Desert_Main_EventsScript_RampardosFight_Movement_0
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_RAMPARDOS, JurassicPark_Desert_Main_EventsScript_RampardosFight_Movement_1
# 161 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitmovement LOCALID_RAMPARDOS
# 162 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	playse SE_UNLOCK
# 163 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	call JurassicPark_Desert_Main_RemoveHouse
# 164 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitse
# 165 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	delay 16
# 166 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_11, localId = LOCALID_RAMPARDOS, mugshotEmotion = MUGSHOT_EMOTE_DIZZY
# 167 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 168 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_RAMPARDOS, JurassicPark_Desert_Main_EventsScript_RampardosFight_Movement_2
# 169 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitmovement 0
# 170 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setobjectxyperm LOCALID_RAMPARDOS, 45, 7
# 171 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setobjectmovementtype LOCALID_RAMPARDOS, MOVEMENT_TYPE_FACE_UP
# 172 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	removeobject LOCALID_RAMPARDOS
# 173 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	clearflag FLAG_HIDE_RAMPARDOS
# 174 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	addobject LOCALID_RAMPARDOS
# 175 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_12, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 176 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_13, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 177 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_14, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 178 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_15, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 179 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_16, localId = LOCALID_PLAYER
# 180 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_17, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 181 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	compare VAR_GAME_STATE, GS_POST_TWO_GENERATORS
	goto_if_eq JurassicPark_Desert_Main_EventsScript_RampardosFight_2
# 186 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_19, localId = LOCALID_PLAYER
JurassicPark_Desert_Main_EventsScript_RampardosFight_1:
# 188 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_20, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 189 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_DESERT_STATE, 4
# 190 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	releaseall
	end

JurassicPark_Desert_Main_EventsScript_RampardosFight_2:
# 183 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_18, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Desert_Main_EventsScript_RampardosFight_1


JurassicPark_Desert_Main_RemoveHouse::
# 196 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 39, 10 METATILE_Desert_Primary_Sand, FALSE
# 197 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 40, 10 METATILE_Desert_Primary_Sand, FALSE
# 198 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 41, 10 METATILE_Desert_Primary_Sand, FALSE
# 199 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 42, 10 METATILE_Desert_Primary_Sand, FALSE
# 200 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 39, 9 METATILE_Desert_Primary_Sand, FALSE
# 201 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 40, 9 METATILE_Desert_Primary_Sand, FALSE
# 202 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 41, 9 METATILE_Desert_Primary_Sand, FALSE
# 203 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 42, 9 METATILE_Desert_Primary_Sand, FALSE
# 204 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 39, 8 METATILE_Desert_Primary_Sand, FALSE
# 205 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 40, 8 METATILE_Desert_Primary_Sand, FALSE
# 206 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 41, 8 METATILE_Desert_Primary_Sand, FALSE
# 207 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 42, 8 METATILE_Desert_Primary_Sand, FALSE
# 208 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 39, 7 METATILE_Desert_Primary_Sand, FALSE
# 209 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 40, 7 METATILE_Desert_Primary_Sand, FALSE
# 210 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 41, 7 METATILE_Desert_Primary_Sand, FALSE
# 211 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setmetatile 42, 7 METATILE_Desert_Primary_Sand, FALSE
# 212 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	special DrawWholeMapView
	return


JurassicPark_Desert_Main_EventScript_Rampardos::
# 218 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_11, localId = LOCALID_RAMPARDOS, mugshotEmotion = MUGSHOT_EMOTE_DIZZY
# 219 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
	end


JurassicPark_Desert_Main_EventScript_Cradily::
# 225 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	playse SE_PIN
# 226 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	applymovement LOCALID_CRADILY_STATIC, JurassicPark_Desert_Main_EventScript_Cradily_Movement_0
# 227 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitmovement 0
# 228 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	msgbox JurassicPark_Desert_Main_EventScript_Cradily_Text_0
# 229 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 230 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	removeobject LOCALID_CRADILY_STATIC
# 231 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_Cradily_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 232 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 233 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	msgbox JurassicPark_Desert_Main_EventScript_Cradily_Text_2
# 234 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 235 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_DESERT_STATE, 5
# 236 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	warp MAP_JURASSIC_PARK_DESERT_MAIN, 1
# 237 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitstate
	end


JurassicPark_Desert_Main_EventScript_Generator::
# 243 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	compare VAR_DESERT_STATE, 5
	goto_if_eq JurassicPark_Desert_Main_EventScript_Generator_2
JurassicPark_Desert_Main_EventScript_Generator_1:
	end

JurassicPark_Desert_Main_EventScript_Generator_2:
# 245 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_Generator_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 246 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 247 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	playse SE_M_STRENGTH
# 248 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8004, 1
# 249 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8005, 1
# 250 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8006, 20
# 251 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_0x8007, 5
# 252 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	special ShakeCamera
# 253 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitstate
# 254 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_Generator_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 255 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_Generator_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 256 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	mnmbox JurassicPark_Desert_Main_EventScript_Generator_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 257 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	closemessage
# 258 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	switch VAR_GAME_STATE
# 260 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	case GS_NO_GENERATORS, JurassicPark_Desert_Main_EventScript_Generator_6
# 263 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Desert_Main_EventScript_Generator_7
# 266 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Desert_Main_EventScript_Generator_8
JurassicPark_Desert_Main_EventScript_Generator_4:
# 270 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_DESERT_STATE, 6
# 271 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_DESERT_COMPLETE, 1
	goto JurassicPark_Desert_Main_EventScript_Generator_1

JurassicPark_Desert_Main_EventScript_Generator_6:
# 261 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR
# 262 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_FIRST_SAVED, CHAR_PHANPY
	goto JurassicPark_Desert_Main_EventScript_Generator_4

JurassicPark_Desert_Main_EventScript_Generator_7:
# 264 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS
# 265 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_SECOND_SAVED, CHAR_PHANPY
	goto JurassicPark_Desert_Main_EventScript_Generator_4

JurassicPark_Desert_Main_EventScript_Generator_8:
# 267 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_GAME_STATE, GS_THREE_GENERATORS
# 268 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	setvar VAR_THIRD_SAVED, CHAR_PHANPY
	goto JurassicPark_Desert_Main_EventScript_Generator_4


# 8 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 8 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
# 8 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_EventScript_CantLeave_Movement_0:
# 48 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
	step_end

# 57 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_EventScript_PhanpyJoins_Movement_0:
# 57 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	emote_exclamation_mark
# 57 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	delay_16
# 57 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_right
	step_end

# 59 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_EventScript_PhanpyJoins_Movement_1:
# 59 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	face_left
	step_end

# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_EventScript_House_Movement_0:
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	delay_16
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	delay_16
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	delay_16
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_down
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_down
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_down
# 111 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_down
	step_end

# 135 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_EventsScript_GoLeft_Movement_0:
# 135 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_left
	step_end

# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_EventsScript_RampardosFight_Movement_0:
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 158 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	face_right
	step_end

# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_EventsScript_RampardosFight_Movement_1:
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	unlock_facing_direction
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_left
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
# 160 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_fast_up
	step_end

# 168 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_EventsScript_RampardosFight_Movement_2:
# 168 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_right
# 168 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_right
# 168 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_right
# 168 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
# 168 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
# 168 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
# 168 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	walk_up
	step_end

# 226 "data/maps/JurassicPark_Desert_Main/scripts.pory"
JurassicPark_Desert_Main_EventScript_Cradily_Movement_0:
# 226 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	emote_exclamation_mark
# 226 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	delay_16
# 226 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	face_up
	step_end

JurassicPark_Desert_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 6 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(A desert…\n"
	.string "The sand is making my face tickle.)\p"
	.string "(I need to find Phanpy.)$"

JurassicPark_Desert_Main_EventScript_WarpToLastPosition_Text_0:
# 39 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Grogogaaargh!$"

JurassicPark_Desert_Main_EventScript_CantLeave_Text_0:
# 46 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(I still have things to do here.)$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_0:
# 61 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Larvy!\n"
	.string "I'm so glad to see you!\p"
	.string "How are the others doing?$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_1:
# 65 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(I haven't seen anyone else yet…)$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_2:
# 66 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Oh, I'm the first one you found?\n"
	.string "…Hmm.\p"
	.string "Jiggly will be fine.\n"
	.string "But Bagon…\p"
	.string "We should hurry up here.$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_3:
# 67 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(What are we doing here, exactly…?)$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_4:
# 72 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(I only managed to find Jiggly so far…)$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_5:
# 73 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "…Hmm.\n"
	.string "I'm a bit worried about Bagon.\p"
	.string "She's always had her head in the clouds.\p"
	.string "I think we should hurry up here.$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_6:
# 77 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(I only managed to find Bagon so far…)$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_7:
# 78 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "…Hmm.\n"
	.string "I know Jiggly can hold his own.\p"
	.string "But…\n"
	.string "I can't help but worry about him.\p"
	.string "If something happened to him, I…\p"
	.string "Let's just hurry up here.$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_8:
# 82 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(I can't…\n"
	.string "Bring myself to say it…)$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_9:
# 83 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "…Are you ok, Larvy?\p"
	.string "I know we've been through a lot, but we\n"
	.string "need to hurry.$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_10:
# 86 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "There's a generator close by.\p"
	.string "The sooner we restart it, the quicker\n"
	.string "this nightmare is over.\p"
	.string "The problem is, remember Cradily?\n"
	.string "That plant skeleton we saw earlier in\l"
	.string "the visitor centre.\p"
	.string "There are a few lurking in these\n"
	.string "quicksand pits.\p"
	.string "I think they may be attracted by the\n"
	.string "water in the sand.\p"
	.string "This is REALLY not the right\n"
	.string "environment for them…\l"
	.string "They must be so agitated.$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_11:
# 87 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(Guess the Doctor hasn't put much\n"
	.string "thought into these habitats…)$"

JurassicPark_Desert_Main_EventScript_PhanpyJoins_Text_12:
# 88 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "If we want to cross that quicksand, we\n"
	.string "have to be quick.\p"
	.string "I guess that's why they call it\n"
	.string "quicksand, heh.\p"
	.string "Let's go, Larvy.$"

JurassicPark_Desert_Main_EventScript_Phanpy_Text_0:
# 99 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Let's go, Larvy$"

JurassicPark_Desert_Main_EventScript_House_Text_0:
# 108 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Look, Larvy!\n"
	.string "There's stairs there!$"

JurassicPark_Desert_Main_EventScript_House_Text_1:
# 114 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "But this house is in the way…$"

JurassicPark_Desert_Main_EventScript_House_Text_2:
# 115 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(Wait, she hasn't noticed yet…?)$"

JurassicPark_Desert_Main_EventScript_House_Text_3:
# 116 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "… … …\p"
	.string "Hey, wait a minute.\n"
	.string "There's something… Off.$"

JurassicPark_Desert_Main_EventScript_House_Text_4:
# 117 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Wait!\n"
	.string "This house…\l"
	.string "Is not a house at all!\p"
	.string "It's made of cardboard!$"

JurassicPark_Desert_Main_EventScript_House_Text_5:
# 118 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(There we go.)$"

JurassicPark_Desert_Main_EventScript_House_Text_6:
# 119 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Which means, we just need to find a way\n"
	.string "to knock it down.\p"
	.string "Let's look around!$"

JurassicPark_Desert_Main_EventsScript_GoLeft_Text_0:
# 133 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Woah!\n"
	.string "This must be a Rampardos.\p"
	.string "Fascinating!\n"
	.string "But dangerous.\p"
	.string "Let's keep clear, Larvy.$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_0:
# 143 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Wait, Larvy, do you think that…\p"
	.string "We could get this Rampardos to knock\n"
	.string "the house down?$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_1:
# 144 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(It seems a bit overkill…\n"
	.string "But it might be worth a shot.)$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_2:
# 145 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "It looks scary, but it hasn't been\n"
	.string "attacking us.\l"
	.string "So maybe…$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_3:
# 146 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(If we found a way to communicate…)$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_4:
# 147 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "If we got it really really mad…$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_5:
# 148 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(That's not what I was thinking at all!)$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_6:
# 149 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Oh, do you think it's a bad idea…?$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_7:
# 150 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(Well…\n"
	.string "It could work.)\p"
	.string "(We get it mad at us, and then lure it to\n"
	.string "the house.)$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_8:
# 151 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Hehe.\p"
	.string "Let's go, team!$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_9:
# 153 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "PLACEHOLDER\n"
	.string "Insert Rampardos battle here.$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_10:
# 154 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Run, Larvy, run!$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_11:
# 166 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Graaaargh…$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_12:
# 175 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "We did it!$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_13:
# 176 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "…Ah!\n"
	.string "Did I overdo it?\l"
	.string "Is the Rampardos ok?\p"
	.string "I didn't give it brain damage, did I?$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_14:
# 177 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(I'm…\n"
	.string "Sure it will be fine…)\p"
	.string "(But, uh, wasn't that really risky…?)$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_15:
# 178 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "I-I'm sorry, I got a bit carried away.\p"
	.string "I thought it was a good idea, and, and-$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_16:
# 179 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(We did free the way to the stairs.)$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_17:
# 180 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "I don't want to see these Pokémon just\n"
	.string "as…\l"
	.string "Obstacles in our path.\p"
	.string "We may not be able to talk to them, but\n"
	.string "they're still Pokémon.\p"
	.string "When we get out of this mess, we should\n"
	.string "try and convince Doctor Drampa to\l"
	.string "change his mind on the park idea.\p"
	.string "I bet these Pokémon are so agitated\n"
	.string "because they just want to…\l"
	.string "Live free.$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_18:
# 183 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "… … …$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_19:
# 186 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "(Agreed.)$"

JurassicPark_Desert_Main_EventsScript_RampardosFight_Text_20:
# 188 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Now let's go, Larvy!$"

JurassicPark_Desert_Main_EventScript_Cradily_Text_0:
# 228 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "PLACEHOLDER\p"
	.string "The puzzle here is getting Cradily to\n"
	.string "dig, and using Bulldoze with Phanpy.$"

JurassicPark_Desert_Main_EventScript_Cradily_Text_1:
# 231 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Wait…\n"
	.string "I get it!\p"
	.string "Cradily are attracted by vibration, so\n"
	.string "if I use Bulldoze…\p"
	.string "It's going to confuse them, and get\n"
	.string "them off our tail!\p"
	.string "…I'm sorry, Cradily.\n"
	.string "But we have a generator to restart.$"

JurassicPark_Desert_Main_EventScript_Cradily_Text_2:
# 233 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Phanpy can now use Bulldoze!\p"
	.string "…But it's not implemented yet, so get\n"
	.string "teleported instead.$"

JurassicPark_Desert_Main_EventScript_Generator_Text_0:
# 245 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Look!\n"
	.string "We did it!\l"
	.string "We really did it!\p"
	.string "I think we have to press this button\n"
	.string "here, and…$"

JurassicPark_Desert_Main_EventScript_Generator_Text_1:
# 254 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "Yes!\n"
	.string "And what an adventure it was!\p"
	.string "This totally makes up for my wrecked\n"
	.string "boat.$"

JurassicPark_Desert_Main_EventScript_Generator_Text_2:
# 255 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "… … …\n"
	.string "My boat…\l"
	.string "Sniff.$"

JurassicPark_Desert_Main_EventScript_Generator_Text_3:
# 256 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	.string "No! I have to be strong!\n"
	.string "We can get a new boat after this!\p"
	.string "C'mon Larvy, let's go back to the visitor\n"
	.string "centre.$"
