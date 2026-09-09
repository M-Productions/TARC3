JurassicPark_Mountain_Base_MapScripts::
# 17 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_MOUNTAIN_STATE, 7
	goto_if_eq JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	clearflag FLAG_HIDE_ARCHEOPS_BASE
# 21 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	addobject 15
	return

JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	map_script_2 VAR_MOUNTAIN_STATE, 0, JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 6 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	lock
# 7 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, localId = LOCALID_PLAYER
# 8 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
# 9 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 10 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
# 11 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setvar VAR_MOUNTAIN_STATE, 1
# 12 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	destroyfollowernpc
# 13 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	release
	end


JurassicPark_Mountain_Base_GoLeft::
# 28 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_GoLeft_Text_0
# 29 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_GoLeft_Movement_0
# 30 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	return


JurassicPark_Mountain_Base_EventScript_Archen_1::
# 35 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	faceplayer
# 36 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_MOUNTAIN_STATE, 1
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_1_2
JurassicPark_Mountain_Base_EventScript_Archen_1_1:
# 45 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	lockall
# 46 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 47 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8004, 17
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_1_5
# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_2
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_3
# 59 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 60 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 17, 56
# 61 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_LEFT
JurassicPark_Mountain_Base_EventScript_Archen_1_4:
# 63 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_1_2:
# 38 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	nonpuzzlebattle SPECIES_ARCHEN
# 39 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_EventScript_Archen_1_Text_0, localId = LOCALID_PLAYER
# 40 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_EventScript_Archen_1_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 41 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_EventScript_Archen_1_Text_2, localId = LOCALID_PLAYER
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setvar VAR_MOUNTAIN_STATE, 2
	goto JurassicPark_Mountain_Base_EventScript_Archen_1_1

JurassicPark_Mountain_Base_EventScript_Archen_1_5:
# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_0
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_1
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 52 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 24, 56
# 53 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_RIGHT
	goto JurassicPark_Mountain_Base_EventScript_Archen_1_4


JurassicPark_Mountain_Base_EventScript_Archen_2::
# 69 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	lockall
# 70 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 71 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8005, 47
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_2_2
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_2
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_3
# 83 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 84 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 29, 47
# 85 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_DOWN
JurassicPark_Mountain_Base_EventScript_Archen_2_1:
# 87 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_2_2:
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_0
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_1
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 76 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 29, 32
# 77 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_LEFT
	goto JurassicPark_Mountain_Base_EventScript_Archen_2_1


JurassicPark_Mountain_Base_EventScript_Archen_3::
# 94 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	lockall
# 95 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 96 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8004, 25
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_3_2
# 106 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_2
# 107 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_3
# 108 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 109 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 25, 38
# 110 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_RIGHT
JurassicPark_Mountain_Base_EventScript_Archen_3_1:
# 112 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_3_2:
# 98 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_0
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_1
# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 101 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 20, 38
# 102 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_DOWN
	goto JurassicPark_Mountain_Base_EventScript_Archen_3_1


JurassicPark_Mountain_Base_EventScript_Archen_4::
# 119 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 120 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8004, 31
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_4_2
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_2
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_3
# 132 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 133 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 31, 39
# 134 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_LEFT
JurassicPark_Mountain_Base_EventScript_Archen_4_1:
# 136 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_4_2:
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_0
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_1
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 125 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 47, 39
# 126 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_DOWN
	goto JurassicPark_Mountain_Base_EventScript_Archen_4_1


JurassicPark_Mountain_Base_EventScript_Archen_5::
# 143 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	lockall
# 144 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 145 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8005, 32
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_5_2
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_2
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_3
# 157 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 158 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 54, 32
# 159 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_DOWN
JurassicPark_Mountain_Base_EventScript_Archen_5_1:
# 161 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_5_2:
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_0
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_1
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 150 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 54, 8
# 151 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_LEFT
	goto JurassicPark_Mountain_Base_EventScript_Archen_5_1


JurassicPark_Mountain_Base_EventScript_ArchenSetup::
# 169 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	hidefollowernpc
# 170 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	switch VAR_FACING
# 172 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case DIR_NORTH, JurassicPark_Mountain_Base_EventScript_ArchenSetup_3
# 175 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case DIR_EAST, JurassicPark_Mountain_Base_EventScript_ArchenSetup_4
# 178 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case DIR_WEST, JurassicPark_Mountain_Base_EventScript_ArchenSetup_5
# 181 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case DIR_SOUTH, JurassicPark_Mountain_Base_EventScript_ArchenSetup_6
JurassicPark_Mountain_Base_EventScript_ArchenSetup_1:
# 185 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
	return

JurassicPark_Mountain_Base_EventScript_ArchenSetup_3:
# 173 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_0
# 174 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	goto JurassicPark_Mountain_Base_EventScript_ArchenSetup_1

JurassicPark_Mountain_Base_EventScript_ArchenSetup_4:
# 176 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_1
# 177 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	goto JurassicPark_Mountain_Base_EventScript_ArchenSetup_1

JurassicPark_Mountain_Base_EventScript_ArchenSetup_5:
# 179 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_2
# 180 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	goto JurassicPark_Mountain_Base_EventScript_ArchenSetup_1

JurassicPark_Mountain_Base_EventScript_ArchenSetup_6:
# 182 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_3
# 183 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	goto JurassicPark_Mountain_Base_EventScript_ArchenSetup_1


JurassicPark_Mountain_Base_BruteBonnet::
# 191 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_MOUNTAIN_STATE, 3
	goto_if_lt JurassicPark_Mountain_Base_BruteBonnet_2
# 197 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	faceplayer
# 198 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_BruteBonnet_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 199 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
# 200 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	puzzlebattle BP_BRUTE_BONNET
# 201 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitstate
# 202 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
# 203 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	removeobject LOCALID_BRUTE_BONNET
# 204 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	forcesave
# 205 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	release
	end

JurassicPark_Mountain_Base_BruteBonnet_2:
# 193 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_BruteBonnet_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 194 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
	end


JurassicPark_Mountain_Base_Bagon::
# 211 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_MOUNTAIN_STATE, 2
	goto_if_eq JurassicPark_Mountain_Base_Bagon_2
# 246 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_13, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 247 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
	end

JurassicPark_Mountain_Base_Bagon_2:
# 213 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	faceplayer
# 214 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_0, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 215 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 216 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_2, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 217 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_3, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 218 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	switch VAR_GAME_STATE
# 220 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case GS_NO_GENERATORS, JurassicPark_Mountain_Base_Bagon_7
# 223 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Mountain_Base_Bagon_8
JurassicPark_Mountain_Base_Bagon_5:
# 238 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_12, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 239 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
# 240 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setfollowernpc LOCALID_BAGON_MOUNTAIN, FOLLOWER_NPC_FLAG_ALL
# 241 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setvar VAR_MOUNTAIN_STATE, 3
	end

JurassicPark_Mountain_Base_Bagon_7:
# 221 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 222 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_5, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Mountain_Base_Bagon_5

JurassicPark_Mountain_Base_Bagon_8:
# 224 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	switch VAR_FIRST_SAVED
# 226 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Mountain_Base_Bagon_10
# 229 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Mountain_Base_Bagon_11
# 232 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Mountain_Base_Bagon_12
	goto JurassicPark_Mountain_Base_Bagon_5

JurassicPark_Mountain_Base_Bagon_10:
# 227 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_6, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 228 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_7, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Mountain_Base_Bagon_5

JurassicPark_Mountain_Base_Bagon_11:
# 230 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 231 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_9, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Mountain_Base_Bagon_5

JurassicPark_Mountain_Base_Bagon_12:
# 233 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_10, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 234 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_11, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Mountain_Base_Bagon_5


# 9 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 9 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 9 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 29 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_GoLeft_Movement_0:
# 29 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_0:
# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 49 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_right
	step_end

# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_1:
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
	step_end

# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_2:
# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 57 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_left
	step_end

# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_3:
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 58 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_0:
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 73 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_left
	step_end

# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_1:
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_2:
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 81 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_down
	step_end

# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_3:
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 82 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
	step_end

# 98 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_0:
# 98 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 98 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 98 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 98 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 98 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 98 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_down
	step_end

# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_1:
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
	step_end

# 106 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_2:
# 106 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 106 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 106 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 106 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 106 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 106 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_right
	step_end

# 107 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_3:
# 107 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 107 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 107 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 107 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 107 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 107 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 107 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
	step_end

# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_0:
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 122 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_down
	step_end

# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_1:
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
	step_end

# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_2:
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 130 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_left
	step_end

# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_3:
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 131 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_0:
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 147 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_left
	step_end

# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_1:
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_2:
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 155 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_down
	step_end

# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_3:
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 156 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
	step_end

# 173 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_0:
# 173 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_invisible
	step_end

# 176 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_1:
# 176 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 176 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_invisible
	step_end

# 179 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_2:
# 179 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 179 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_invisible
	step_end

# 182 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_3:
# 182 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 182 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_invisible
	step_end

JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 7 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(…Snow?\n"
	.string "The climate on this island really is\l"
	.string "strange.)\p"
	.string "(I wonder if it was the Doctor's doing.)\p"
	.string "(Either way, I need to find Bagon.)$"

JurassicPark_Mountain_Base_GoLeft_Text_0:
# 28 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I still have things to do here.)$"

JurassicPark_Mountain_Base_EventScript_Archen_1_Text_0:
# 39 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(This Pokémon…\n"
	.string "It wants me to ride it?)$"

JurassicPark_Mountain_Base_EventScript_Archen_1_Text_1:
# 40 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(Wait, I mean-\n"
	.string "Nevermind.)$"

JurassicPark_Mountain_Base_EventScript_Archen_1_Text_2:
# 41 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(…Ahem.\n"
	.string "Regardless, I should try giving it a\l"
	.string "shot.)$"

JurassicPark_Mountain_Base_BruteBonnet_Text_0:
# 193 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(Something's growing over there…)\p"
	.string "(Wait… Not just growing… It's moving…)$"

JurassicPark_Mountain_Base_BruteBonnet_Text_1:
# 198 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(It keeps eyeing Bagon… I need to keep\n"
	.string "an eye on him…)$"

JurassicPark_Mountain_Base_Bagon_Text_0:
# 214 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Laaaaaaarvy!\p"
	.string "Larvy Larvy Larvy Larvy Larvy!$"

JurassicPark_Mountain_Base_Bagon_Text_1:
# 215 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(…Yes, Bagon?)$"

JurassicPark_Mountain_Base_Bagon_Text_2:
# 216 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "I flew, Larvy!\n"
	.string "I flew on the back of those birds!\p"
	.string "This place is amazing!$"

JurassicPark_Mountain_Base_Bagon_Text_3:
# 217 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "…Wait, where's the others?$"

JurassicPark_Mountain_Base_Bagon_Text_4:
# 221 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I haven't seen anyone else yet…)$"

JurassicPark_Mountain_Base_Bagon_Text_5:
# 222 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Oh, okay.\n"
	.string "Hey, don't worry, Larvy, I'm sure they\l"
	.string "found a cozy spot to hide in!\p"
	.string "I can't wait to see them and tell them\n"
	.string "about this place.$"

JurassicPark_Mountain_Base_Bagon_Text_6:
# 227 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I only managed to find Jiggly so far…)$"

JurassicPark_Mountain_Base_Bagon_Text_7:
# 228 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Oh, Phanpy's still missing?\p"
	.string "When we find her, I bet Jiggly is gonna\n"
	.string "yell at her for making him worry, hehe.$"

JurassicPark_Mountain_Base_Bagon_Text_8:
# 230 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I only managed to find Phanpy so far…)$"

JurassicPark_Mountain_Base_Bagon_Text_9:
# 231 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Oh, Jiggly's still missing?\p"
	.string "When we find him, I bet he's gonna yell\n"
	.string "at us for taking too long, hehe.$"

JurassicPark_Mountain_Base_Bagon_Text_10:
# 233 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I can't…\n"
	.string "Bring myself to say it…)$"

JurassicPark_Mountain_Base_Bagon_Text_11:
# 234 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "…What's wrong Larvy?\n"
	.string "Worried about something?\p"
	.string "…Whatever it it, it'll be okay.\p"
	.string "I wish I had wings like these Pokémon,\n"
	.string "so I could fly around and save\l"
	.string "everyone.\p"
	.string "One day, I will!\n"
	.string "But for now, we have to do what wew can.$"

JurassicPark_Mountain_Base_Bagon_Text_12:
# 238 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Anyway, earlier Jiggly told me that\n"
	.string "there should be a generator on top of\l"
	.string "this mountain.\p"
	.string "Let's go find it, so we can go home!$"

JurassicPark_Mountain_Base_Bagon_Text_13:
# 246 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Let's go, Larvy!$"
