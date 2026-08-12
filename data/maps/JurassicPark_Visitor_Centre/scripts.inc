JurassicPark_Visitor_Centre_MapScripts::
# 2 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_MET_DRAMPA, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_LookLarvy
	return


JurassicPark_Visitor_Centre_EventScript_LookLarvy::
# 12 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 13 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_LookLarvy_Text_0
# 14 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 15 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_LookLarvy_Movement_0
# 16 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
# 17 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_IN_CENTRE
# 18 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_WalkUp::
# 24 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 25 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_WalkUp_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 26 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 27 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_WalkUp_Movement_0
# 28 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	end


# 15 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_LookLarvy_Movement_0:
# 15 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 15 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 15 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 15 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 15 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_WalkUp_Movement_0:
# 27 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
	step_end

JurassicPark_Visitor_Centre_EventScript_LookLarvy_Text_0:
# 13 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Come here!\p"
	.string "This is incredible!$"

JurassicPark_Visitor_Centre_EventScript_WalkUp_Text_0:
# 25 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(I need to talk to Dr. Drampa first.)$"
