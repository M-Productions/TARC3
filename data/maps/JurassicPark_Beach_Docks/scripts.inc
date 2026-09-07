JurassicPark_Beach_Docks_MapScripts::
# 2 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Beach_Docks_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Beach_Docks_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_INTRO, JurassicPark_Beach_Docks_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

JurassicPark_Beach_Docks_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	setvar VAR_GAME_STATE, GS_WOKEN_UP
# 5 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp
	return


JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp::
# 11 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	checkplayergender
# 12 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_2
JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_1:
# 16 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 17 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 18 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	playse SE_PIN
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Movement_0
# 20 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitse
# 21 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 22 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 23 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Movement_1
# 25 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 26 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 27 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 28 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	releaseall
	end

JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_2:
# 14 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	playse SE_SHINY
	goto JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_1


# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_Movement_CameraPanOverDocks:
# 34 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 34 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 34 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 34 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
	step_end

# 37 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_Movement_CameraPanFromDocks:
# 38 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 38 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 38 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 38 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 38 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
	step_end

General_EventScript_Cutout::
# 43 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lock
# 44 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto_if_set FLAG_TEMP_1, General_EventScript_Cutout_2
# 52 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox General_EventScript_Cutout_Text_1
# 57 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	setflag FLAG_TEMP_1
General_EventScript_Cutout_1:
# 59 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end

General_EventScript_Cutout_2:
# 46 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox General_EventScript_Cutout_Text_0
	goto General_EventScript_Cutout_1


JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Walk::
# 65 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lockall
# 66 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	playse SE_PIN
# 67 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_BAGON_BEACH, JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Walk_Movement_0
# 68 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
	return


JurassicPark_Beach_Docks_EventScript_Meet_Bagon_WalkLeft::
# 73 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_BAGON_BEACH, JurassicPark_Beach_Docks_EventScript_Meet_Bagon_WalkLeft_Movement_0
# 74 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
	return


JurassicPark_Beach_Docks_EventScript_Meet_Bagon_WalkRight::
# 79 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_BAGON_BEACH, JurassicPark_Beach_Docks_EventScript_Meet_Bagon_WalkRight_Movement_0
# 80 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
	return


JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Left::
# 85 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	call JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Walk
# 86 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	call JurassicPark_Beach_Docks_EventScript_Meet_Bagon_WalkLeft
# 87 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	call JurassicPark_Beach_Docks_EventScript_Meet_Bagon
	return


JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Middle::
# 92 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	call JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Walk
# 93 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	call JurassicPark_Beach_Docks_EventScript_Meet_Bagon
	return


JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Right::
# 98 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	call JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Walk
# 99 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	call JurassicPark_Beach_Docks_EventScript_Meet_Bagon_WalkRight
# 100 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	call JurassicPark_Beach_Docks_EventScript_Meet_Bagon
	return


JurassicPark_Beach_Docks_EventScript_Meet_Bagon::
# 105 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_0, localId = LOCALID_BAGON_BEACH, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 106 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 107 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_2, localId = LOCALID_BAGON_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 114 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	addvar VAR_BEACH_CHARACTERS_MET, 1
# 115 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	setfollowernpc LOCALID_BAGON_BEACH, FOLLOWER_NPC_FLAG_ALL_LAND
# 116 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	releaseall
	end


JurassicPark_Beach_Docks_EventScript_Bagon::
# 123 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lockall
# 124 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	faceplayer
# 125 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	compare VAR_GAME_STATE, GS_FOREST_ROAD
	goto_if_eq JurassicPark_Beach_Docks_EventScript_Bagon_2
# 131 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Bagon_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
JurassicPark_Beach_Docks_EventScript_Bagon_1:
# 134 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 135 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end

JurassicPark_Beach_Docks_EventScript_Bagon_2:
# 127 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Bagon_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Beach_Docks_EventScript_Bagon_1


JurassicPark_Beach_EventScript_MetEveryone::
# 141 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_EventScript_MetEveryone_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 142 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	setvar VAR_GAME_STATE, GS_MET_EVERYONE
# 143 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end


JurassicPark_Beach_Docks_EventScript_Jigglypuff::
# 150 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lockall
# 151 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	faceplayer
# 152 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 153 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 154 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 155 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_3, localId = LOCALID_JIGGLYPUFF_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 165 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 166 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_RESULT
# 167 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq JurassicPark_Beach_Docks_EventScript_Jigglypuff_2
JurassicPark_Beach_Docks_EventScript_Jigglypuff_1:
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_BEACH, JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_1
# 174 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 175 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_BEACH
# 176 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	addvar VAR_BEACH_CHARACTERS_MET, 1
# 177 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto_if_eq VAR_BEACH_CHARACTERS_MET, 3, JurassicPark_Beach_EventScript_MetEveryone
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	releaseall
	end

JurassicPark_Beach_Docks_EventScript_Jigglypuff_2:
# 169 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_0
# 170 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_0
# 171 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
	goto JurassicPark_Beach_Docks_EventScript_Jigglypuff_1


JurassicPark_Beach_EventScript_GoBack::
# 184 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lock
# 185 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox JurassicPark_Beach_EventScript_GoBack_Text_0
# 186 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 187 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_EventScript_GoBack_Movement_0
# 188 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Beach_EventScript_GoBack_Movement_0
# 189 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 190 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end


JurassicPark_Beach_Docks_EventScript_Phanpy::
# 196 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lockall
# 197 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_0, localId = LOCALID_PHANPY_BEACH, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 198 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 199 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 200 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_3, localId = LOCALID_PHANPY_BEACH, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 201 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_4, localId = LOCALID_PHANPY_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 209 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_5, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 210 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_6, localId = LOCALID_PHANPY_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 211 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 212 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_RESULT
# 213 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq JurassicPark_Beach_Docks_EventScript_Phanpy_2
JurassicPark_Beach_Docks_EventScript_Phanpy_1:
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PHANPY_BEACH, JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_1
# 220 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 221 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	removeobject LOCALID_PHANPY_BEACH
# 222 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	addvar VAR_BEACH_CHARACTERS_MET, 1
# 223 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto_if_eq VAR_BEACH_CHARACTERS_MET, 3, JurassicPark_Beach_EventScript_MetEveryone
# 224 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	releaseall
	end

JurassicPark_Beach_Docks_EventScript_Phanpy_2:
# 215 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_0
# 216 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_0
# 217 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
	goto JurassicPark_Beach_Docks_EventScript_Phanpy_1


# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Movement_0:
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	emote_exclamation_mark
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay_16
	step_end

# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Movement_1:
# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_right
# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay_16
# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_left
# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay_16
# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_down
	step_end

# 67 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Walk_Movement_0:
# 67 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	emote_exclamation_mark
# 67 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay_16
# 67 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 67 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
	step_end

# 73 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Meet_Bagon_WalkLeft_Movement_0:
# 73 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_left
# 73 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_down
	step_end

# 79 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Meet_Bagon_WalkRight_Movement_0:
# 79 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_right
# 79 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_down
	step_end

# 169 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_0:
# 169 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 169 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_up
	step_end

# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_1:
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_left
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_left
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 173 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
	step_end

# 187 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_EventScript_GoBack_Movement_0:
# 187 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
	step_end

# 215 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_0:
# 215 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_right
# 215 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_left
	step_end

# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_1:
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 219 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
	step_end

JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_0:
# 16 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(.{PAUSE 20}.{PAUSE 20}.)\p…W-what-$"

JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_1:
# 22 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(I- I'm alive!)$"

JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_2:
# 26 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(But…\n"
	.string "Where am I…?)\p"
	.string "(I better go look for the others.)$"

General_EventScript_Cutout_Text_0:
# 47 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(Yep, still cardboard.)$"

General_EventScript_Cutout_Text_1:
# 53 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(As you approach the hut,\n"
	.string "you start to notice…)\p"
	.string "(That this is just a cardboard cutout.)$"

JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_0:
# 105 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Larvy!\n"
	.string "You're okay!$"

JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_1:
# 106 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(I'm glad to see you too, Bagon.)$"

JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_2:
# 107 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "That was quite the storm, wasn't it?\n"
	.string "We all made it out, but the ship's…\p"
	.string "Well, what's done is done.\n"
	.string "What matters is that we're all safe!\p"
	.string "Listen, the others have gone ahead.\p"
	.string "Let's go meet up with them!$"

JurassicPark_Beach_Docks_EventScript_Bagon_Text_0:
# 127 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Let's look around a bit more, Larvy.$"

JurassicPark_Beach_Docks_EventScript_Bagon_Text_1:
# 131 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Let's meet up with the others, Larvy.$"

JurassicPark_Beach_EventScript_MetEveryone_Text_0:
# 141 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(Okay, I've talked to everyone.)\p"
	.string "(I should also go and check what's\n"
	.string "ahead.)$"

JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_0:
# 152 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Well, well, well.\p"
	.string "If it isn't the consequences of our\n"
	.string "hubris.\p"
	.string "I hate to tell you that I told you so,\n"
	.string "but…$"

JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_1:
# 153 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Do… You?$"

JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_2:
# 154 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(Somehow, I doubt it…)$"

JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_3:
# 156 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Aaaanyway!\n"
	.string "Quite the island we got here, eh?\p"
	.string "I get a feeling that it's not quite…\n"
	.string "Deserted.\p"
	.string "But that could be a good thing.\p"
	.string "With our vessel destroyed, we might\n"
	.string "have to hitch a ride from someone.\p"
	.string "And hopefully, there'll be souvenirs we\n"
	.string "can take back.\p"
	.string "Would not want to return empty-handed\n"
	.string "after all this trouble.$"

JurassicPark_Beach_EventScript_GoBack_Text_0:
# 185 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(I should meet up with everyone else\n"
	.string "first.)$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_0:
# 197 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Larvy, my ship…\n"
	.string "It's completely wrecked…$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_1:
# 198 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(It's, uh…\n"
	.string "Good to see you too, Phanpy…)$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_2:
# 199 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Phanpy, it'll be ok!\p"
	.string "If we find treasure, we can buy you a\n"
	.string "new one!$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_3:
# 200 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Sniffle…\n"
	.string "You're right.$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_4:
# 202 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Anyway…\n"
	.string "About this island.\p"
	.string "According to the map, it's known as Isla\n"
	.string "Nublar.\p"
	.string "But…\n"
	.string "Something is not quite right.\p"
	.string "Everyone I asked told me that this\n"
	.string "place should be deserted.\p"
	.string "But as you can see, we're standing on a\n"
	.string "pier.\l"
	.string "It's pretty well made, too.\p"
	.string "This could mean that there's an\n"
	.string "undocumented civilization living here,\l"
	.string "or…$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_5:
# 209 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(That someone got here before us…)$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_6:
# 210 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Whatever the case, we need to find how\n"
	.string "to get back home.\p"
	.string "I'll be scouting what's ahead.$"
