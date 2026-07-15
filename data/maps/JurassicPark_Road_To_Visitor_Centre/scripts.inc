JurassicPark_Road_To_Visitor_Centre_MapScripts::
# 2 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_WOKEN_UP, JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_FOREST_ROAD
# 5 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerWalkToForest
# 6 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	waitmovement 0
# 7 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_SIGN
	return


# 12 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
PlayerWalkToForest:
# 13 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 13 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 13 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 13 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
# 13 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	walk_up
	step_end

DrampaStartTutorial::
# 17 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	callnative DrampaStartSleeping
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


JurassicPark_Road_To_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 7 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "(Woah...)\p(This forest is huge!\nHopefully I don't get lost...)$"

DrampaStartTutorial_Text_0:
# 25 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "You're a very interesting Pokémon,\nwho are you?$"

DrampaStartTutorial_Text_1:
# 27 "data/maps/JurassicPark_Road_To_Visitor_Centre/scripts.pory"
	.string "Larvesta? What a funny name...\nWell it's a pleasure to meet you.$"
