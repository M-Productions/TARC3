JurassicPark_Marshlands_Main_MapScripts::
# 44 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 45 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	compare VAR_MARSH_STATE, 3
	goto_if_ge JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 50 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	compare VAR_MARSH_STATE, 4
	goto_if_eq JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 47 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setobjectmovementtype LOCALID_ANORITH_1, MOVEMENT_TYPE_FLEE_PLAYER_OWE
# 48 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setobjectmovementtype LOCALID_ANORITH_2, MOVEMENT_TYPE_FLEE_PLAYER_OWE
	goto JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 52 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	destroyfollowernpc
# 53 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_MARSH
# 54 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	getplayerxy VAR_TEMP_A, VAR_TEMP_B
# 55 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	compare VAR_TEMP_A, 20
	goto_if_eq JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 62 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_MARSH, 20, 37
# 63 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_MARSH, 20, 37
	return

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 57 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_MARSH, 21, 37
# 58 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_MARSH, 21, 37
	return

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	map_script_2 VAR_MARSH_STATE, 0, JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 14 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	map_script_2 VAR_MARSH_STATE, 4, JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 5 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 6 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	closemessage
# 7 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 8 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	waitmovement 0
# 9 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setvar VAR_MARSH_STATE, 1
# 10 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	release
# 11 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setflag FLAG_HIDE_ARMALDO
	end

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 16 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	lockall
# 17 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	playse SE_PIN
# 18 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	applymovement LOCALID_ARMALDO, JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0
# 19 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	waitmovement 0
# 20 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	msgbox JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
# 21 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	closemessage
# 22 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	removeobject LOCALID_ARMALDO
# 23 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setvar VAR_MARSH_STATE, 5
# 24 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 25 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_MARSH, JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 26 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	waitmovement 0
# 27 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	faceplayer
# 28 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1, localId = LOCALID_JIGGLYPUFF_MARSH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 29 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	compare VAR_GAME_STATE, GS_THREE_GENERATORS
	goto_if_eq JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_2
# 35 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_1:
# 37 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setfollowernpc LOCALID_JIGGLYPUFF_MARSH, FOLLOWER_NPC_FLAG_ALL
# 38 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	closemessage
# 39 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	release
	end

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_2:
# 31 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_1


JurassicPark_Marshlands_Main_EventScript_GoBack::
# 71 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_Main_EventScript_GoBack_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 72 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	closemessage
# 73 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Marshlands_Main_EventScript_GoBack_Movement_0
# 74 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	waitmovement 0
# 75 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	release
	end


JurassicPark_Marshlands_EventScript_Jigglypuff::
# 82 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	lockall
# 83 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	compare VAR_MARSH_STATE, 1
	goto_if_eq JurassicPark_Marshlands_EventScript_Jigglypuff_2
# 119 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	faceplayer
# 120 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_13, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 121 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	closemessage
# 122 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	release
	end

JurassicPark_Marshlands_EventScript_Jigglypuff_2:
# 85 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	faceplayer
# 86 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_MARSH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 87 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	switch VAR_GAME_STATE
# 89 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	case GS_NO_GENERATORS, JurassicPark_Marshlands_EventScript_Jigglypuff_6
# 92 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Marshlands_EventScript_Jigglypuff_7
# 103 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Marshlands_EventScript_Jigglypuff_8
JurassicPark_Marshlands_EventScript_Jigglypuff_4:
# 108 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_9, localId = LOCALID_JIGGLYPUFF_MARSH, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 109 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_10, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 110 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_11, localId = LOCALID_JIGGLYPUFF_MARSH, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 111 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_12, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 112 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	closemessage
# 113 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setvar VAR_MARSH_STATE, 2
# 114 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	destroyfollowernpc
# 115 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setfollowernpc LOCALID_JIGGLYPUFF_MARSH, FOLLOWER_NPC_FLAG_ALL
# 116 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	releaseall
	end

JurassicPark_Marshlands_EventScript_Jigglypuff_6:
# 90 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 91 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_2, localId = LOCALID_JIGGLYPUFF_MARSH, mugshotEmotion = MUGSHOT_EMOTE_SIGH
	goto JurassicPark_Marshlands_EventScript_Jigglypuff_4

JurassicPark_Marshlands_EventScript_Jigglypuff_7:
# 93 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	switch VAR_FIRST_SAVED
# 95 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Marshlands_EventScript_Jigglypuff_10
# 99 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	case CHAR_BAGON, JurassicPark_Marshlands_EventScript_Jigglypuff_11
	goto JurassicPark_Marshlands_EventScript_Jigglypuff_4

JurassicPark_Marshlands_EventScript_Jigglypuff_8:
# 104 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_7, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 105 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_8, localId = LOCALID_JIGGLYPUFF_MARSH, mugshotEmotion = MUGSHOT_EMOTE_SIGH
	goto JurassicPark_Marshlands_EventScript_Jigglypuff_4

JurassicPark_Marshlands_EventScript_Jigglypuff_10:
# 96 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 97 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_4, localId = LOCALID_JIGGLYPUFF_MARSH, mugshotEmotion = MUGSHOT_EMOTE_SIGH
	goto JurassicPark_Marshlands_EventScript_Jigglypuff_4

JurassicPark_Marshlands_EventScript_Jigglypuff_11:
# 100 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_5, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 101 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Jigglypuff_Text_6, localId = LOCALID_JIGGLYPUFF_MARSH, mugshotEmotion = MUGSHOT_EMOTE_SIGH
	goto JurassicPark_Marshlands_EventScript_Jigglypuff_4


JurassicPark_Marshlands_EventScript_Anorith::
# 129 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	compare VAR_MARSH_STATE, 2
	goto_if_eq JurassicPark_Marshlands_EventScript_Anorith_2
JurassicPark_Marshlands_EventScript_Anorith_1:
	end

JurassicPark_Marshlands_EventScript_Anorith_2:
# 131 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	lockall
# 132 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	msgbox JurassicPark_Marshlands_EventScript_Anorith_Text_0
# 133 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_Anorith_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 134 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	closemessage
# 135 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	removeobject LOCALID_ANORITH_1
# 136 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setobjectmovementtype LOCALID_ANORITH_1, MOVEMENT_TYPE_FLEE_PLAYER_OWE
# 137 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	clearflag FLAG_TEMP_3
# 138 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	addobject LOCALID_ANORITH_1
# 139 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	removeobject LOCALID_ANORITH_2
# 140 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setobjectmovementtype LOCALID_ANORITH_2, MOVEMENT_TYPE_FLEE_PLAYER_OWE
# 141 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	clearflag FLAG_TEMP_1
# 142 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	addobject LOCALID_ANORITH_2
# 143 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	setvar VAR_MARSH_STATE, 3
# 144 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	releaseall
	goto JurassicPark_Marshlands_EventScript_Anorith_1


JurassicPark_Marshlands_EventScript_NotGoingThere::
# 151 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	mnmbox JurassicPark_Marshlands_EventScript_NotGoingThere_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 152 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	closemessage
# 153 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Marshlands_Main_EventScript_GoBack_Movement_0
	end


# 7 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 7 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	walk_down
# 7 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	walk_down
	step_end

# 18 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0:
# 18 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	emote_exclamation_mark
# 18 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	delay_16
	step_end

# 73 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
JurassicPark_Marshlands_Main_EventScript_GoBack_Movement_0:
# 73 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	walk_down
	step_end

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 5 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(…A marsh, huh.\n"
	.string "I think Jiggly went this way.)\p"
	.string "(I need to find him, quickly.)$"

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 20 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "PLACEHOLDER\p"
	.string "You shouldn't be able to escape here\n"
	.string "since Armaldo is in front of you.$"

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1:
# 28 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "Hah\n"
	.string "We make a pretty good team, after all!\p"
	.string "We REALLY should be hanging out\n"
	.string "together more often outside of our\l"
	.string "treasure hunts.\l"
	.string "Just the two of us, yeah?\p"
	.string "We can make Phanpy a little jealous, as\n"
	.string "a joke.\l"
	.string "C'mon, it'd be funny.$"

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2:
# 31 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "… … …$"

JurassicPark_Marshlands_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3:
# 35 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(Making Phanpy…\n"
	.string "Jealous…?)$"

JurassicPark_Marshlands_Main_EventScript_GoBack_Text_0:
# 71 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(There's no time to waste.)$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_0:
# 86 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "Hey, look who just showed up.\n"
	.string "I was worried you'd be a goner by now.\p"
	.string "How's the others?$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_1:
# 90 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(I haven't found anyone else yet…)$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_2:
# 91 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "Still missing in action, eh?\n"
	.string "Hopefully they will be fine.$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_3:
# 96 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(I only managed to find Phanpy so far…)$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_4:
# 97 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "Bagon is still missing, eh?\n"
	.string "That's a bit worrying.\p"
	.string "She always was a bit clueless.\p"
	.string "But I'm sure it'll be fine, as always.$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_5:
# 100 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(I only managed to find Bagon so far…)$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_6:
# 101 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "Phanpy is still missing, eh?\n"
	.string "Meh, I wouldn't worry too much.\p"
	.string "She's probably off somewhere exploring.$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_7:
# 104 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(I can't…\n"
	.string "Bring myself to say it…)$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_8:
# 105 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "What, Meowth got your tongue?\p"
	.string "You're even quieter than usual.$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_9:
# 108 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "Anyway, as you can see, I survived.\p"
	.string "I figure that brute won't be able to\n"
	.string "come in here.\p"
	.string "As a matter of fact, there should be a\n"
	.string "generator around here, but the place is\l"
	.string "full of barriers.\p"
	.string "Now, I COULD flutter over them, but…\n"
	.string "I, uh…\p"
	.string "Hurt my floatation organ.\n"
	.string "While running away.$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_10:
# 109 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(Is that even a thing?)$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_11:
# 110 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "I was thinking that maybe, somehow get\n"
	.string "some of these Pokémon with\l"
	.string "sharp-looking claws to cut them down\l"
	.string "for us.\p"
	.string "The problem is, they're in what I would\n"
	.string "describe as a…\l"
	.string "Vegetative state.\p"
	.string "But hey, you're the smart one, right?\p"
	.string "No talk, no brawns, all brains?\p"
	.string "Maybe you can figure out how to goad\n"
	.string "them into doing our work for us?$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_12:
# 111 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(I'll see what I can do…)$"

JurassicPark_Marshlands_EventScript_Jigglypuff_Text_13:
# 120 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "Let's go, Larvy.$"

JurassicPark_Marshlands_EventScript_Anorith_Text_0:
# 132 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "PLACEHOLDER\p"
	.string "In this battle the puzzle is that you\n"
	.string "have to perform an action on Jiggly,\l"
	.string "making him do a funny face and scaring\l"
	.string "the Anorith.$"

JurassicPark_Marshlands_EventScript_Anorith_Text_1:
# 133 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "…Now, that's funny.\p"
	.string "Whatever, as long as it works.\n"
	.string "Let's just go.$"

JurassicPark_Marshlands_EventScript_NotGoingThere_Text_0:
# 151 "data/maps/JurassicPark_Marshlands_Main/scripts.pory"
	.string "(I'm DEFINITELY not going back in\n"
	.string "there.)$"
