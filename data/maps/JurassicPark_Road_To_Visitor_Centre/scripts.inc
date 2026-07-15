JurassicPark_Road_To_Visitor_Centre_MapScripts::
	.byte 0


JurassicPark_Road_To_Visitor_Centre_EventScript_PlayerObserveForest::
# 4 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_FOREST_ROAD
# 5 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 6 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_PIN
# 7 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 20
# 8 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Road_To_Visitor_Centre_Movement_PlayerWalkToForest
# 9 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 10 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox PlayerObserveForest_Text_0, MSGBOX_SIGN
	return


# 13 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
JurassicPark_Road_To_Visitor_Centre_Movement_PlayerWalkToForest:
# 14 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 14 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 14 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 14 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 14 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Road_To_Visitor_Centre_EventScript_DrampaStartTutorial::
# 18 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 19 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 40
# 20 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	playse SE_M_SNORE
# 21 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 40
# 22 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	callnative StartPuzzleTutorialBattle
# 23 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitstate
# 24 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	helpwindow HELP_BATTLE_TUTORIAL
# 25 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox DrampaStartTutorial_Text_0, MSGBOX_SIGN
# 26 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	delay 30
# 27 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox DrampaStartTutorial_Text_1, MSGBOX_SIGN
	return


PlayerObserveForest_Text_0:
# 10 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Woah...)\p(This forest is huge!\nHopefully I don't get lost...)$"

DrampaStartTutorial_Text_0:
# 25 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You're a very interesting Pokémon,\nwho are you?$"

DrampaStartTutorial_Text_1:
# 27 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvesta? What a funny name...\nWell it's a pleasure to meet you.$"
