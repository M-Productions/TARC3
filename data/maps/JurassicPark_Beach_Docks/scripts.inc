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
	mnmbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 12 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 13 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	playse SE_PIN
# 14 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Movement_0
# 15 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitse
# 16 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 17 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 18 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Movement_1
# 20 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 21 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 22 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 23 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	releaseall
	end


# 28 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_Movement_CameraPanOverDocks:
# 29 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 29 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 29 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 29 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
	step_end

# 32 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_Movement_CameraPanFromDocks:
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
	step_end

General_EventScript_Cutout::
# 38 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lock
# 39 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto_if_set FLAG_TEMP_1, General_EventScript_Cutout_2
# 47 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox General_EventScript_Cutout_Text_1
# 52 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	setflag FLAG_TEMP_1
General_EventScript_Cutout_1:
# 54 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end

General_EventScript_Cutout_2:
# 41 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox General_EventScript_Cutout_Text_0
	goto General_EventScript_Cutout_1


JurassicPark_Beach_Docks_EventScript_Meet_Bagon::
# 60 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lockall
# 61 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	playse SE_PIN
# 62 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_BAGON_BEACH, JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Movement_0
# 63 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 64 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_0, localId = LOCALID_BAGON_BEACH, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 65 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 66 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_2, localId = LOCALID_BAGON_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 73 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	addvar VAR_BEACH_CHARACTERS_MET, 1
# 74 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	setfollowernpc LOCALID_BAGON_BEACH, FOLLOWER_NPC_FLAG_ALL_LAND
# 75 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	releaseall
	end


JurassicPark_Beach_Docks_EventScript_Bagon::
# 82 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lockall
# 83 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	faceplayer
# 84 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	compare VAR_GAME_STATE, GS_FOREST_ROAD
	goto_if_eq JurassicPark_Beach_Docks_EventScript_Bagon_2
# 90 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Bagon_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
JurassicPark_Beach_Docks_EventScript_Bagon_1:
# 93 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 94 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end

JurassicPark_Beach_Docks_EventScript_Bagon_2:
# 86 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Bagon_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
	goto JurassicPark_Beach_Docks_EventScript_Bagon_1


JurassicPark_Beach_EventScript_MetEveryone::
# 100 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_EventScript_MetEveryone_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 101 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	setvar VAR_GAME_STATE, GS_MET_EVERYONE
# 102 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end


JurassicPark_Beach_Docks_EventScript_Jigglypuff::
# 109 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lockall
# 110 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	faceplayer
# 111 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 112 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 113 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 114 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_3, localId = LOCALID_JIGGLYPUFF_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 124 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 125 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_RESULT
# 126 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq JurassicPark_Beach_Docks_EventScript_Jigglypuff_2
JurassicPark_Beach_Docks_EventScript_Jigglypuff_1:
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_BEACH, JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_1
# 133 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 134 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_BEACH
# 135 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	addvar VAR_BEACH_CHARACTERS_MET, 1
# 136 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto_if_eq VAR_BEACH_CHARACTERS_MET, 3, JurassicPark_Beach_EventScript_MetEveryone
# 137 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	releaseall
	end

JurassicPark_Beach_Docks_EventScript_Jigglypuff_2:
# 128 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_0
# 129 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_0
# 130 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
	goto JurassicPark_Beach_Docks_EventScript_Jigglypuff_1


JurassicPark_Beach_EventScript_GoBack::
# 143 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lock
# 144 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox JurassicPark_Beach_EventScript_GoBack_Text_0
# 145 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 146 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_EventScript_GoBack_Movement_0
# 147 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Beach_EventScript_GoBack_Movement_0
# 148 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 149 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end


JurassicPark_Beach_Docks_EventScript_Phanpy::
# 155 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lockall
# 156 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_0, localId = LOCALID_PHANPY_BEACH, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 157 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 158 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 159 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_3, localId = LOCALID_PHANPY_BEACH, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 160 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_4, localId = LOCALID_PHANPY_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 168 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_5, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 169 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_Phanpy_Text_6, localId = LOCALID_PHANPY_BEACH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 170 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	closemessage
# 171 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_RESULT
# 172 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq JurassicPark_Beach_Docks_EventScript_Phanpy_2
JurassicPark_Beach_Docks_EventScript_Phanpy_1:
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PHANPY_BEACH, JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_1
# 179 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 180 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	removeobject LOCALID_PHANPY_BEACH
# 181 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	addvar VAR_BEACH_CHARACTERS_MET, 1
# 182 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto_if_eq VAR_BEACH_CHARACTERS_MET, 3, JurassicPark_Beach_EventScript_MetEveryone
# 183 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	releaseall
	end

JurassicPark_Beach_Docks_EventScript_Phanpy_2:
# 174 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_0
# 175 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_0
# 176 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
	goto JurassicPark_Beach_Docks_EventScript_Phanpy_1


# 14 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Movement_0:
# 14 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	emote_exclamation_mark
# 14 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay_16
	step_end

# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Movement_1:
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_right
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay_16
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_left
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay_16
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_down
	step_end

# 62 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Movement_0:
# 62 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	emote_exclamation_mark
# 62 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay_16
# 62 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 62 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
	step_end

# 128 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_0:
# 128 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 128 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_up
	step_end

# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Jigglypuff_Movement_1:
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_left
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_left
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 132 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
	step_end

# 146 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_EventScript_GoBack_Movement_0:
# 146 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
	step_end

# 174 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_0:
# 174 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_right
# 174 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	face_left
	step_end

# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_EventScript_Phanpy_Movement_1:
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 178 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
	step_end

JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_0:
# 11 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(.{PAUSE 20}.{PAUSE 20}.)\p…W-what-$"

JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_1:
# 17 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(I- I'm alive!)$"

JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_2:
# 21 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(But…\n"
	.string "Where am I…?)\p"
	.string "(I better go look for the others.)$"

General_EventScript_Cutout_Text_0:
# 42 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(Yep, still cardboard.)$"

General_EventScript_Cutout_Text_1:
# 48 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(As you approach the hut,\n"
	.string "you start to notice…)\p"
	.string "(That this is just a cardboard cutout.)$"

JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_0:
# 64 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Larvy!\n"
	.string "You're okay!$"

JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_1:
# 65 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(I'm glad to see you too, Bagon.)$"

JurassicPark_Beach_Docks_EventScript_Meet_Bagon_Text_2:
# 66 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "That was quite the storm, wasn't it?\n"
	.string "We all made it out, but the ship's…\p"
	.string "Well, what's done is done.\n"
	.string "What matters is that we're all safe!\p"
	.string "Listen, the others have gone ahead.\p"
	.string "Let's go meet up with them!$"

JurassicPark_Beach_Docks_EventScript_Bagon_Text_0:
# 86 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Let's look around a bit more, Larvy.$"

JurassicPark_Beach_Docks_EventScript_Bagon_Text_1:
# 90 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Let's meet up with the others, Larvy.$"

JurassicPark_Beach_EventScript_MetEveryone_Text_0:
# 100 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(Okay, I've talked to everyone.)\p"
	.string "(I should also go and check what's\n"
	.string "ahead.)$"

JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_0:
# 111 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Well, well, well.\p"
	.string "If it isn't the consequences of our\n"
	.string "hubris.\p"
	.string "I hate to tell you that I told you so,\n"
	.string "but…$"

JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_1:
# 112 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Do… You?$"

JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_2:
# 113 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(Somehow, I doubt it…)$"

JurassicPark_Beach_Docks_EventScript_Jigglypuff_Text_3:
# 115 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
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
# 144 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(I should meet up with everyone else\n"
	.string "first.)$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_0:
# 156 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Larvy, my ship…\n"
	.string "It's completely wrecked…$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_1:
# 157 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(It's, uh…\n"
	.string "Good to see you too, Phanpy…)$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_2:
# 158 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Phanpy, it'll be ok!\p"
	.string "If we find treasure, we can buy you a\n"
	.string "new one!$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_3:
# 159 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Sniffle…\n"
	.string "You're right.$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_4:
# 161 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
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
# 168 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(That someone got here before us…)$"

JurassicPark_Beach_Docks_EventScript_Phanpy_Text_6:
# 169 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Whatever the case, we need to find how\n"
	.string "to get back home.\p"
	.string "I'll be scouting what's ahead.$"
