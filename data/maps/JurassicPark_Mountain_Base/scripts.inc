JurassicPark_Mountain_Base_MapScripts::
# 2 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

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
	release
	end


JurassicPark_Mountain_Base_GoLeft::
# 20 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_GoLeft_Text_0
# 21 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_GoLeft_Movement_0
# 22 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	return


JurassicPark_Mountain_Base_EventScript_Archen_1::
# 27 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	faceplayer
# 28 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_MOUNTAIN_STATE, 1
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_1_2
JurassicPark_Mountain_Base_EventScript_Archen_1_1:
# 38 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	lockall
# 39 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 40 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8004, 17
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_1_5
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_2
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_3
# 52 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 53 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 17, 56
# 54 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_LEFT
JurassicPark_Mountain_Base_EventScript_Archen_1_4:
# 56 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_1_2:
# 30 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	msgbox JurassicPark_Mountain_Base_EventScript_Archen_1_Text_0
# 31 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
# 32 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_EventScript_Archen_1_Text_1, localId = LOCALID_PLAYER
# 33 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_EventScript_Archen_1_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 34 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_EventScript_Archen_1_Text_3, localId = LOCALID_PLAYER
# 35 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
# 36 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setvar VAR_MOUNTAIN_STATE, 2
	goto JurassicPark_Mountain_Base_EventScript_Archen_1_1

JurassicPark_Mountain_Base_EventScript_Archen_1_5:
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_0
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_1
# 44 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 45 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 24, 56
# 46 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_RIGHT
	goto JurassicPark_Mountain_Base_EventScript_Archen_1_4


JurassicPark_Mountain_Base_EventScript_Archen_2::
# 62 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	lockall
# 63 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 64 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8005, 47
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_2_2
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_2
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_3
# 76 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 77 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 29, 47
# 78 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_DOWN
JurassicPark_Mountain_Base_EventScript_Archen_2_1:
# 80 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_2_2:
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_0
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_1
# 68 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 69 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 29, 32
# 70 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_LEFT
	goto JurassicPark_Mountain_Base_EventScript_Archen_2_1


JurassicPark_Mountain_Base_EventScript_Archen_3::
# 87 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	lockall
# 88 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 89 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8004, 25
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_3_2
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_2
# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_3
# 101 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 102 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 25, 38
# 103 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_RIGHT
JurassicPark_Mountain_Base_EventScript_Archen_3_1:
# 105 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_3_2:
# 91 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_0
# 92 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_1
# 93 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 94 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 20, 38
# 95 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_DOWN
	goto JurassicPark_Mountain_Base_EventScript_Archen_3_1


JurassicPark_Mountain_Base_EventScript_Archen_4::
# 112 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 113 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8004, 31
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_4_2
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_2
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_3
# 125 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 126 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 31, 39
# 127 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_LEFT
JurassicPark_Mountain_Base_EventScript_Archen_4_1:
# 129 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_4_2:
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_0
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_1
# 117 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 118 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 47, 39
# 119 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_DOWN
	goto JurassicPark_Mountain_Base_EventScript_Archen_4_1


JurassicPark_Mountain_Base_EventScript_Archen_5::
# 136 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	lockall
# 137 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	call JurassicPark_Mountain_Base_EventScript_ArchenSetup
# 138 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_0x8005, 32
	goto_if_eq JurassicPark_Mountain_Base_EventScript_Archen_5_2
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_2
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_3
# 150 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 151 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 54, 32
# 152 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_DOWN
JurassicPark_Mountain_Base_EventScript_Archen_5_1:
# 154 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	releaseall
	end

JurassicPark_Mountain_Base_EventScript_Archen_5_2:
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement VAR_LAST_TALKED, JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_0
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_1
# 142 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement LOCALID_PLAYER
# 143 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 54, 8
# 144 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setobjectmovementtype VAR_LAST_TALKED, MOVEMENT_TYPE_FACE_LEFT
	goto JurassicPark_Mountain_Base_EventScript_Archen_5_1


JurassicPark_Mountain_Base_EventScript_ArchenSetup::
# 162 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	hidefollowernpc
# 163 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	switch VAR_FACING
# 165 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case DIR_NORTH, JurassicPark_Mountain_Base_EventScript_ArchenSetup_3
# 168 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case DIR_EAST, JurassicPark_Mountain_Base_EventScript_ArchenSetup_4
# 171 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case DIR_WEST, JurassicPark_Mountain_Base_EventScript_ArchenSetup_5
# 174 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case DIR_SOUTH, JurassicPark_Mountain_Base_EventScript_ArchenSetup_6
JurassicPark_Mountain_Base_EventScript_ArchenSetup_1:
# 178 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
	return

JurassicPark_Mountain_Base_EventScript_ArchenSetup_3:
# 166 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_0
# 167 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	goto JurassicPark_Mountain_Base_EventScript_ArchenSetup_1

JurassicPark_Mountain_Base_EventScript_ArchenSetup_4:
# 169 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_1
# 170 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	goto JurassicPark_Mountain_Base_EventScript_ArchenSetup_1

JurassicPark_Mountain_Base_EventScript_ArchenSetup_5:
# 172 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_2
# 173 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	goto JurassicPark_Mountain_Base_EventScript_ArchenSetup_1

JurassicPark_Mountain_Base_EventScript_ArchenSetup_6:
# 175 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_3
# 176 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	waitmovement 0
	goto JurassicPark_Mountain_Base_EventScript_ArchenSetup_1


JurassicPark_Mountain_Base_BruteBonnet::
# 184 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	msgbox JurassicPark_Mountain_Base_BruteBonnet_Text_0
# 185 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
# 186 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	removeobject LOCALID_BRUTE_BONNET
	end


JurassicPark_Mountain_Base_Bagon::
# 192 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	compare VAR_MOUNTAIN_STATE, 2
	goto_if_eq JurassicPark_Mountain_Base_Bagon_1
# 227 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_13, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
	return

JurassicPark_Mountain_Base_Bagon_1:
# 194 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	faceplayer
# 195 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_0, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 196 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 197 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_2, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 198 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_3, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 199 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	switch VAR_GAME_STATE
# 201 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case GS_NO_GENERATORS, JurassicPark_Mountain_Base_Bagon_6
# 204 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Mountain_Base_Bagon_7
JurassicPark_Mountain_Base_Bagon_4:
# 219 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_12, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 220 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	closemessage
# 221 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setfollowernpc LOCALID_BAGON_MOUNTAIN, FOLLOWER_NPC_FLAG_ALL
# 222 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	setvar VAR_MOUNTAIN_STATE, 3
	end

JurassicPark_Mountain_Base_Bagon_6:
# 202 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_4, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 203 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_5, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Mountain_Base_Bagon_4

JurassicPark_Mountain_Base_Bagon_7:
# 205 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	switch VAR_FIRST_SAVED
# 207 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Mountain_Base_Bagon_9
# 210 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Mountain_Base_Bagon_10
# 213 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Mountain_Base_Bagon_11
	goto JurassicPark_Mountain_Base_Bagon_4

JurassicPark_Mountain_Base_Bagon_9:
# 208 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_6, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 209 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_7, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Mountain_Base_Bagon_4

JurassicPark_Mountain_Base_Bagon_10:
# 211 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 212 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_9, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Mountain_Base_Bagon_4

JurassicPark_Mountain_Base_Bagon_11:
# 214 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_10, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 215 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	mnmbox JurassicPark_Mountain_Base_Bagon_Text_11, localId = LOCALID_BAGON_MOUNTAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Mountain_Base_Bagon_4


# 9 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 9 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 9 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 21 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_GoLeft_Movement_0:
# 21 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_0:
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 42 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_right
	step_end

# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_1:
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 43 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
	step_end

# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_2:
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 50 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_left
	step_end

# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_1_Movement_3:
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 51 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_0:
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 66 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_left
	step_end

# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_1:
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 67 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_2:
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_down
	step_end

# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_2_Movement_3:
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 75 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
	step_end

# 91 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_0:
# 91 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 91 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 91 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 91 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 91 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 91 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_down
	step_end

# 92 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_1:
# 92 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 92 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 92 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 92 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 92 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 92 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 92 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
	step_end

# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_2:
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 99 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_right
	step_end

# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_3_Movement_3:
# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 100 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
	step_end

# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_0:
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 115 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_down
	step_end

# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_1:
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 116 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
	step_end

# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_2:
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 123 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_left
	step_end

# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_4_Movement_3:
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 124 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_0:
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 140 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_left
	step_end

# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_1:
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 141 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
	step_end

# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_2:
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 148 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_in_place_down
	step_end

# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_Archen_5_Movement_3:
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_visible
# 149 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
	step_end

# 166 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_0:
# 166 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_up
# 166 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_invisible
	step_end

# 169 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_1:
# 169 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_right
# 169 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_invisible
	step_end

# 172 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_2:
# 172 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_left
# 172 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	set_invisible
	step_end

# 175 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
JurassicPark_Mountain_Base_EventScript_ArchenSetup_Movement_3:
# 175 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	walk_down
# 175 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
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
# 20 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I still have things to do here.)$"

JurassicPark_Mountain_Base_EventScript_Archen_1_Text_0:
# 30 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Placeholder battle.$"

JurassicPark_Mountain_Base_EventScript_Archen_1_Text_1:
# 32 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(This Pokémon…\n"
	.string "It wants me to ride it?)$"

JurassicPark_Mountain_Base_EventScript_Archen_1_Text_2:
# 33 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(Wait, I mean-\n"
	.string "Nevermind.)$"

JurassicPark_Mountain_Base_EventScript_Archen_1_Text_3:
# 34 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(…Ahem.\n"
	.string "Regardless, I should try giving it a\l"
	.string "shot.)$"

JurassicPark_Mountain_Base_BruteBonnet_Text_0:
# 184 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "PLACEHOLDER.\p"
	.string "For this battle, Bagon would be\n"
	.string "necessary. PLEASE DONT KEEP GOING\l"
	.string "WITHOUT BAGON OR THINGS WILL BREAK$"

JurassicPark_Mountain_Base_Bagon_Text_0:
# 195 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Laaaaaaarvy!\p"
	.string "Larvy Larvy Larvy Larvy Larvy!$"

JurassicPark_Mountain_Base_Bagon_Text_1:
# 196 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(…Yes, Bagon?)$"

JurassicPark_Mountain_Base_Bagon_Text_2:
# 197 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "I flew, Larvy!\n"
	.string "I flew on the back of those birds!\p"
	.string "This place is amazing!$"

JurassicPark_Mountain_Base_Bagon_Text_3:
# 198 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "…Wait, where's the others?$"

JurassicPark_Mountain_Base_Bagon_Text_4:
# 202 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I haven't seen anyone else yet…)$"

JurassicPark_Mountain_Base_Bagon_Text_5:
# 203 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Oh, okay.\n"
	.string "Hey, don't worry, Larvy, I'm sure they\l"
	.string "found a cozy spot to hide in!\p"
	.string "I can't wait to see them and tell them\n"
	.string "about this place.$"

JurassicPark_Mountain_Base_Bagon_Text_6:
# 208 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I only managed to find Jiggly so far…)$"

JurassicPark_Mountain_Base_Bagon_Text_7:
# 209 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Oh, Phanpy's still missing?\p"
	.string "When we find her, I bet Jiggly is gonna\n"
	.string "yell at her for making him worry, hehe.$"

JurassicPark_Mountain_Base_Bagon_Text_8:
# 211 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I only managed to find Phanpy so far…)$"

JurassicPark_Mountain_Base_Bagon_Text_9:
# 212 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Oh, Jiggly's still missing?\p"
	.string "When we find him, I bet he's gonna yell\n"
	.string "at us for taking too long, hehe.$"

JurassicPark_Mountain_Base_Bagon_Text_10:
# 214 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "(I can't…\n"
	.string "Bring myself to say it…)$"

JurassicPark_Mountain_Base_Bagon_Text_11:
# 215 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "…What's wrong Larvy?\n"
	.string "Worried about something?\p"
	.string "…Whatever it it, it'll be okay.\p"
	.string "I wish I had wings like these Pokémon,\n"
	.string "so I could fly around and save\l"
	.string "everyone.\p"
	.string "One day, I will!\n"
	.string "But for now, we have to do what wew can.$"

JurassicPark_Mountain_Base_Bagon_Text_12:
# 219 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Anyway, earlier Jiggly told me that\n"
	.string "there should be a generator on top of\l"
	.string "this mountain.\p"
	.string "Let's go find it, so we can go home!$"

JurassicPark_Mountain_Base_Bagon_Text_13:
# 227 "data/maps/JurassicPark_Mountain_Base/scripts.pory"
	.string "Let's go, Larvy!$"
