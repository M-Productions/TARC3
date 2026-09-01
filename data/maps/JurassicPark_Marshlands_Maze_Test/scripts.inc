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
	puzzlebattle BP_SING
# 11 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	waitstate
	return


JurassicPark_Marshlands_Generator::
# 16 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	compare VAR_MARSH_STATE, 3
	goto_if_eq JurassicPark_Marshlands_Generator_2
JurassicPark_Marshlands_Generator_1:
	end

JurassicPark_Marshlands_Generator_2:
# 18 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	mnmbox JurassicPark_Marshlands_Generator_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 19 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	closemessage
# 20 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	playse SE_M_STRENGTH
# 21 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8004, 1
# 22 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8005, 1
# 23 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8006, 20
# 24 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_0x8007, 5
# 25 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	special ShakeCamera
# 26 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	waitstate
# 27 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	clearflag FLAG_HIDE_ARMALDO
# 28 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	mnmbox JurassicPark_Marshlands_Generator_Text_1, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 29 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	closemessage
# 30 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	switch VAR_GAME_STATE
# 32 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	case GS_NO_GENERATORS, JurassicPark_Marshlands_Generator_6
# 35 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Marshlands_Generator_7
# 38 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Marshlands_Generator_8
JurassicPark_Marshlands_Generator_4:
# 42 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_MARSH_STATE, 4
# 43 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_MARSH_COMPLETE, 1
	goto JurassicPark_Marshlands_Generator_1

JurassicPark_Marshlands_Generator_6:
# 33 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_GAME_STATE, GS_ONE_GENERATOR
# 34 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_FIRST_SAVED, CHAR_JIGGLYPUFF
	goto JurassicPark_Marshlands_Generator_4

JurassicPark_Marshlands_Generator_7:
# 36 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_GAME_STATE, GS_TWO_GENERATORS
# 37 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_SECOND_SAVED, CHAR_JIGGLYPUFF
	goto JurassicPark_Marshlands_Generator_4

JurassicPark_Marshlands_Generator_8:
# 39 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_GAME_STATE, GS_THREE_GENERATORS
# 40 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setvar VAR_THIRD_SAVED, CHAR_JIGGLYPUFF
	goto JurassicPark_Marshlands_Generator_4


JurassicPark_Marshlands_EventScript_ArmaldoFinal::
# 50 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	playmoncry SPECIES_ARMALDO, CRY_MODE_NORMAL
# 51 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	waitmoncry
# 52 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	setflag FLAG_HIDE_ARMALDO
	return


JurassicPark_Marshlands_Generator_Text_0:
# 18 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	.string "Splendid.\n"
	.string "We found a generator.\p"
	.string "Should be easy enough to restart.\n"
	.string "Just press the button, aaaand-$"

JurassicPark_Marshlands_Generator_Text_1:
# 28 "data/maps/JurassicPark_Marshlands_Maze_Test/scripts.pory"
	.string "Uh, what was that…?\p"
	.string "…Let's get out of here as quickly as we\n"
	.string "can.$"
