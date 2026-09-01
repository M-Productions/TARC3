JurassicPark_Marshlands_Maze_Test_MapScripts::
	.byte 0


JurassicPark_Marshlands_Maze_Armaldo::
# 6 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	msgbox JurassicPark_Marshlands_Maze_Armaldo_Text_0
# 7 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	closemessage
	return


JurassicPark_Marshlands_Generator::
# 12 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	compare VAR_MARSH_STATE, 3
	goto_if_le JurassicPark_Marshlands_Generator_2
JurassicPark_Marshlands_Generator_1:
	end

JurassicPark_Marshlands_Generator_2:
# 14 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	mnmbox JurassicPark_Marshlands_Generator_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 15 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	closemessage
# 16 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	playse SE_M_STRENGTH
# 17 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8004, 1
# 18 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8005, 1
# 19 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8006, 20
# 20 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8007, 5
# 21 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	special ShakeCamera
# 22 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	waitstate
# 23 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	clearflag FLAG_HIDE_ARMALDO
# 24 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	mnmbox JurassicPark_Marshlands_Generator_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 25 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	closemessage
# 26 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	switch VAR_GAME_STATE
# 28 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	case GS_NO_GENERATORS, JurassicPark_Marshlands_Generator_6
# 31 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Marshlands_Generator_7
# 34 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Marshlands_Generator_8
JurassicPark_Marshlands_Generator_4:
# 38 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_MARSH_STATE, 4
# 39 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_MARSH_COMPLETE, 1
	goto JurassicPark_Marshlands_Generator_1

JurassicPark_Marshlands_Generator_6:
# 29 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR
# 30 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_FIRST_SAVED, CHAR_JIGGLYPUFF
	goto JurassicPark_Marshlands_Generator_4

JurassicPark_Marshlands_Generator_7:
# 32 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS
# 33 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_SECOND_SAVED, CHAR_JIGGLYPUFF
	goto JurassicPark_Marshlands_Generator_4

JurassicPark_Marshlands_Generator_8:
# 35 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_GAME_STATE, GS_THREE_GENERATORS
# 36 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_THIRD_SAVED, CHAR_JIGGLYPUFF
	goto JurassicPark_Marshlands_Generator_4


JurassicPark_Marshlands_EventScript_ArmaldoFinal::
# 46 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	playmoncry SPECIES_ARMALDO, CRY_MODE_NORMAL
# 47 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	waitmoncry
# 48 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setflag FLAG_HIDE_ARMALDO
	return


JurassicPark_Marshlands_Maze_Armaldo_Text_0:
# 6 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	.string "PLACEHOLDER\p"
	.string "Battle in which you need to make the\n"
	.string "Armaldo fall asleep.$"

JurassicPark_Marshlands_Generator_Text_0:
# 14 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	.string "Splendid.\n"
	.string "We found a generator.\p"
	.string "Should be easy enough to restart.\n"
	.string "Just press the button, aaaand-$"

JurassicPark_Marshlands_Generator_Text_1:
# 24 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	.string "Uh, what was that…?\p"
	.string "…Let's get out of here as quickly as we\n"
	.string "can.$"
