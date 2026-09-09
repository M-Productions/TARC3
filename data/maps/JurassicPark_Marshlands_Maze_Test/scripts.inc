JurassicPark_Marshlands_Maze_Test_MapScripts::
# 2 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JurassicPark_Marshlands_Maze_Test_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

JurassicPark_Marshlands_Maze_Test_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	callnative RestoreMarshPuzzleBarriers
	return


JurassicPark_Marshlands_Maze_Armaldo::
# 10 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	lock
# 11 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	mnmbox JurassicPark_Marshlands_Maze_Armaldo_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 12 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	closemessage
# 13 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	puzzlebattle BP_SING
# 14 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	waitstate
# 15 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	release
	return


JurassicPark_Marshlands_Generator::
# 21 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	compare VAR_MARSH_STATE, 3
	goto_if_le JurassicPark_Marshlands_Generator_2
JurassicPark_Marshlands_Generator_1:
	end

JurassicPark_Marshlands_Generator_2:
# 23 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	mnmbox JurassicPark_Marshlands_Generator_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 24 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	closemessage
# 25 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	playse SE_M_STRENGTH
# 26 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8004, 1
# 27 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8005, 1
# 28 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8006, 20
# 29 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8007, 5
# 30 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	special ShakeCamera
# 31 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	waitstate
# 32 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	clearflag FLAG_HIDE_ARMALDO_1
# 33 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	clearflag FLAG_HIDE_ARMALDO_2
# 34 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	clearflag FLAG_HIDE_ARMALDO_3
# 35 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	clearflag FLAG_HIDE_ARMALDO_4
# 36 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	clearflag FLAG_HIDE_ARMALDO_5
# 37 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	mnmbox JurassicPark_Marshlands_Generator_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 38 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	closemessage
# 39 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	switch VAR_GAME_STATE
# 41 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	case GS_NO_GENERATORS, JurassicPark_Marshlands_Generator_6
# 44 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Marshlands_Generator_7
# 47 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Marshlands_Generator_8
JurassicPark_Marshlands_Generator_4:
# 51 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_MARSH_STATE, 4
# 52 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_MARSH_COMPLETE, 1
	goto JurassicPark_Marshlands_Generator_1

JurassicPark_Marshlands_Generator_6:
# 42 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR
# 43 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_FIRST_SAVED, CHAR_JIGGLYPUFF
	goto JurassicPark_Marshlands_Generator_4

JurassicPark_Marshlands_Generator_7:
# 45 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS
# 46 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_SECOND_SAVED, CHAR_JIGGLYPUFF
	goto JurassicPark_Marshlands_Generator_4

JurassicPark_Marshlands_Generator_8:
# 48 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_GAME_STATE, GS_THREE_GENERATORS
# 49 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_THIRD_SAVED, CHAR_JIGGLYPUFF
	goto JurassicPark_Marshlands_Generator_4


JurassicPark_Marshlands_EventScript_ArmaldoFinal::
# 59 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	playmoncry SPECIES_ARMALDO, CRY_MODE_NORMAL
# 60 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	waitmoncry
# 61 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setflag FLAG_HIDE_ARMALDO
	return


JurassicPark_Marshlands_Maze_Armaldo_Text_0:
# 11 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	.string "(Maybe Jiggly can lull it to sleep.)p(I\n"
	.string "just need to make sure it looks at me\l"
	.string "instead.)$"

JurassicPark_Marshlands_Generator_Text_0:
# 23 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	.string "Splendid.\n"
	.string "We found a generator.\p"
	.string "Should be easy enough to restart.\n"
	.string "Just press the button, aaaand-$"

JurassicPark_Marshlands_Generator_Text_1:
# 37 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	.string "Uh, what was that…?\p"
	.string "…Let's get out of here as quickly as we\n"
	.string "can.$"
