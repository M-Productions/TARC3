JurassicPark_Mountain_Top_MapScripts::
	.byte 0


JurassicPark_Mountain_Top_EventScript_Volcano::
# 5 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	mnmbox JurassicPark_Mountain_Top_EventScript_Volcano_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 6 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	closemessage
# 7 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	special SpawnCameraObject
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Mountain_Top_EventScript_Volcano_Movement_0
# 9 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	waitmovement 0
# 10 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	special RemoveCameraObject
# 11 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	mnmbox JurassicPark_Mountain_Top_EventScript_Volcano_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 12 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	mnmbox JurassicPark_Mountain_Top_EventScript_Volcano_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 13 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	mnmbox JurassicPark_Mountain_Top_EventScript_Volcano_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 14 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	closemessage
# 15 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_MOUNTAIN_STATE, 4
# 16 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	release
	end


JurassicPark_Mountain_Top_EventScript_Archeops::
# 22 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	msgbox JurassicPark_Mountain_Top_EventScript_Archeops_Text_0
# 23 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	closemessage
# 24 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	msgbox JurassicPark_Mountain_Top_EventScript_Archeops_Text_1
# 25 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	closemessage
# 26 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	lock
# 27 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	removeobject LOCALID_ARCHEOPS
# 28 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	release
	end


JurassicPark_Mountain_Top_EventScript_Aerodactyl::
# 34 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	playse SE_PIN
# 35 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	applymovement LOCALID_AERODACTYL, JurassicPark_Mountain_Top_EventScript_Aerodactyl_Movement_0
# 36 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	waitmovement 0
# 37 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	msgbox JurassicPark_Mountain_Top_EventScript_Aerodactyl_Text_0
# 38 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	closemessage
# 39 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	removeobject LOCALID_AERODACTYL
# 40 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	mnmbox JurassicPark_Mountain_Top_EventScript_Aerodactyl_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 41 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	mnmbox JurassicPark_Mountain_Top_EventScript_Aerodactyl_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 42 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	mnmbox JurassicPark_Mountain_Top_EventScript_Aerodactyl_Text_3, localId = OBJ_EVENT_ID_NPC_FOLLOWER
# 43 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	closemessage
# 44 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_MOUNTAIN_STATE, 5
	end


JurassicPark_Mountain_Top_EventScript_Generator::
# 51 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	compare VAR_MOUNTAIN_STATE, 5
	goto_if_eq JurassicPark_Mountain_Top_EventScript_Generator_2
JurassicPark_Mountain_Top_EventScript_Generator_1:
	end

JurassicPark_Mountain_Top_EventScript_Generator_2:
# 53 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	playse SE_M_STRENGTH
# 54 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_0x8004, 1
# 55 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_0x8005, 1
# 56 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_0x8006, 20
# 57 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_0x8007, 5
# 58 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	special ShakeCamera
# 59 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	waitstate
# 60 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	switch VAR_GAME_STATE
# 62 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	case GS_NO_GENERATORS, JurassicPark_Mountain_Top_EventScript_Generator_6
# 65 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Mountain_Top_EventScript_Generator_7
# 68 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Mountain_Top_EventScript_Generator_8
JurassicPark_Mountain_Top_EventScript_Generator_4:
# 72 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_MOUNTAIN_STATE, 7
# 73 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_MOUNTAIN_COMPLETE, 1
# 74 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	mnmbox JurassicPark_Mountain_Top_EventScript_Generator_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 75 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	compare VAR_GAME_STATE, GS_THREE_GENERATORS
	goto_if_eq JurassicPark_Mountain_Top_EventScript_Generator_10
JurassicPark_Mountain_Top_EventScript_Generator_9:
# 79 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	closemessage
# 80 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	clearflag FLAG_HIDE_ARCHEOPS_BASE
	goto JurassicPark_Mountain_Top_EventScript_Generator_1

JurassicPark_Mountain_Top_EventScript_Generator_6:
# 63 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR
# 64 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_FIRST_SAVED, CHAR_BAGON
	goto JurassicPark_Mountain_Top_EventScript_Generator_4

JurassicPark_Mountain_Top_EventScript_Generator_7:
# 66 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS
# 67 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_SECOND_SAVED, CHAR_BAGON
	goto JurassicPark_Mountain_Top_EventScript_Generator_4

JurassicPark_Mountain_Top_EventScript_Generator_8:
# 69 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_GAME_STATE, GS_THREE_GENERATORS
# 70 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	setvar VAR_THIRD_SAVED, CHAR_BAGON
	goto JurassicPark_Mountain_Top_EventScript_Generator_4

JurassicPark_Mountain_Top_EventScript_Generator_10:
# 77 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	mnmbox JurassicPark_Mountain_Top_EventScript_Generator_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Mountain_Top_EventScript_Generator_9


JurassicPark_Mountain_Base_EventScript_ArcheopsBase::
# 87 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	msgbox JurassicPark_Mountain_Base_EventScript_ArcheopsBase_Text_0, MSGBOX_YESNO
# 88 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JurassicPark_Mountain_Base_EventScript_ArcheopsBase_2
JurassicPark_Mountain_Base_EventScript_ArcheopsBase_1:
	end

JurassicPark_Mountain_Base_EventScript_ArcheopsBase_2:
# 90 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	warp MAP_JURASSIC_PARK_MOUNTAIN_BASE, 67, 25
# 91 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	waitstate
	goto JurassicPark_Mountain_Base_EventScript_ArcheopsBase_1


# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
JurassicPark_Mountain_Top_EventScript_Volcano_Movement_0:
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_up
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	delay_16
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	delay_16
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	delay_16
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
# 8 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	walk_fast_down
	step_end

# 35 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
JurassicPark_Mountain_Top_EventScript_Aerodactyl_Movement_0:
# 35 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	emote_exclamation_mark
# 35 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	delay_16
	step_end

JurassicPark_Mountain_Top_EventScript_Volcano_Text_0:
# 5 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "Wow!\n"
	.string "A volcano!\p"
	.string "And, and!\n"
	.string "The generator is right there!$"

JurassicPark_Mountain_Top_EventScript_Volcano_Text_1:
# 11 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "(Looks like it's being guarded by a\n"
	.string "powerful-looking Pokémon…)\p"
	.string "(And it looks like there's some really\n"
	.string "strong air currents.)$"

JurassicPark_Mountain_Top_EventScript_Volcano_Text_2:
# 12 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "Wait, I remember Phanpy telling me\n"
	.string "something about this.\p"
	.string "It was like…\n"
	.string "Hot air goes down…\p"
	.string "No, maybe it goes up?\n"
	.string "And cold air…\p"
	.string "Well, y'know, yeah!\n"
	.string "That!$"

JurassicPark_Mountain_Top_EventScript_Volcano_Text_3:
# 13 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "(… … …)\p"
	.string "(Anyway, physics aside, we need to get\n"
	.string "to the middle of this crater.)\p"
	.string "(Maybe that Pokémon could help us…?)$"

JurassicPark_Mountain_Top_EventScript_Archeops_Text_0:
# 22 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "PLACEHOLDER$"

JurassicPark_Mountain_Top_EventScript_Archeops_Text_1:
# 24 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "Archeops will now help you fly over the\n"
	.string "lava!$"

JurassicPark_Mountain_Top_EventScript_Aerodactyl_Text_0:
# 37 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "PLACEHOLDER\p"
	.string "Battle against Aerodactly.$"

JurassicPark_Mountain_Top_EventScript_Aerodactyl_Text_1:
# 40 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "We…\n"
	.string "Did it?\p"
	.string "We did it!\n"
	.string "Larvy, we did it!\p"
	.string "And I helped!\n"
	.string "I was useful!$"

JurassicPark_Mountain_Top_EventScript_Aerodactyl_Text_2:
# 41 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "(You were.)$"

JurassicPark_Mountain_Top_EventScript_Aerodactyl_Text_3:
# 42 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "If only the others could have seen it…\p"
	.string "Ah!\n"
	.string "Speaking of!\p"
	.string "Let's restart the generator, so we can\n"
	.string "get out of here!$"

JurassicPark_Mountain_Top_EventScript_Generator_Text_0:
# 74 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "Did it work?\p"
	.string "Yes, it did!\p"
	.string "Larvy, I…\n"
	.string "This was the most fun I've ever had on\l"
	.string "an adventure!\p"
	.string "I know I'm not as smart as you…\n"
	.string "Or resourceful like Phanpy…\l"
	.string "Or, uh…\p"
	.string "Okay, I don't really know how to\n"
	.string "describe Jiggly.\p"
	.string "But, but, this time I was useful!\p"
	.string "I can't wait to tell everyone!\p"
	.string "Come on, let's go back!$"

JurassicPark_Mountain_Top_EventScript_Generator_Text_1:
# 77 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "… … …$"

JurassicPark_Mountain_Base_EventScript_ArcheopsBase_Text_0:
# 87 "data/maps/JurassicPark_Mountain_Top/scripts.pory"
	.string "Seems like it wants to take you down\n"
	.string "the mountain.\p"
	.string "Accept the lift?$"
