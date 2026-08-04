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
	clearflag FLAG_SPAWN_NORTH
# 6 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp
	return


JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp::
# 12 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	createfieldmugshot MUGSHOT_LARVESTA, MUGSHOT_EMOTE_PAIN
# 13 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_0, MSGBOX_SIGN
# 14 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay 40
# 15 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	createfieldmugshot MUGSHOT_LARVESTA, MUGSHOT_EMOTE_ANGRY
# 16 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_1, MSGBOX_SIGN
	return


JurassicPark_Beach_Docks_EventScript_ShouldHeadInLand::
# 20 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	special SpawnCameraObject
# 21 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Beach_Docks_Movement_CameraPanOverDocks
# 22 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 23 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox JurassicPark_Beach_Docks_EventScript_ShouldHeadInLand_Text_0, MSGBOX_SIGN
# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 25 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Beach_Docks_Movement_CameraPanFromDocks
# 26 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 27 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	special RemoveCameraObject
	return


# 30 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_Movement_CameraPanOverDocks:
# 31 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 31 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 31 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 31 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_Movement_CameraPanFromDocks:
# 35 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 35 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 35 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 35 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 35 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
	step_end

General_EventScript_Cutout::
# 40 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lock
# 41 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto_if_set FLAG_TEMP_1, General_EventScript_Cutout_2
# 49 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox General_EventScript_Cutout_Text_1
# 54 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	setflag FLAG_TEMP_1
General_EventScript_Cutout_1:
# 56 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end

General_EventScript_Cutout_2:
# 43 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox General_EventScript_Cutout_Text_0
	goto General_EventScript_Cutout_1


JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_0:
# 13 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(.{PAUSE 20}.{PAUSE 20}.)$"

JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_1:
# 16 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(.{PAUSE 10}.{PAUSE 10}.)\p(Where am I?)\p(I should probably make my way in land.)$"

JurassicPark_Beach_Docks_EventScript_ShouldHeadInLand_Text_0:
# 23 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(What a nice view, but... {PAUSE 40}Where am I?)$"

General_EventScript_Cutout_Text_0:
# 44 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Yep, still cardboard.$"

General_EventScript_Cutout_Text_1:
# 50 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "As you approach the hut,\n"
	.string "you start to notice…\p"
	.string "That this is just a cardboard cutout.$"
