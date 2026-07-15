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
	goto LarvestaWakeUp
	return


LarvestaWakeUp::
# 12 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	createfieldmugshot MUGSHOT_LARVESTA, MUGSHOT_EMOTE_PAIN
# 13 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox LarvestaWakeUp_Text_0, MSGBOX_SIGN
# 14 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	delay 40
# 15 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	createfieldmugshot MUGSHOT_LARVESTA, MUGSHOT_EMOTE_SAD
# 16 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox LarvestaWakeUp_Text_1, MSGBOX_SIGN
	return


DocksShouldHeadInLand::
# 20 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	special SpawnCameraObject
# 21 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_CAMERA, CameraPanOverDocks
# 22 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 23 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox DocksShouldHeadInLand_Text_0, MSGBOX_SIGN
# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 25 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_CAMERA, CameraPanFromDocks
# 26 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 27 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	special RemoveCameraObject
	return


# 30 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
CameraPanOverDocks:
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
CameraPanFromDocks:
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

LarvestaWakeUp_Text_0:
# 13 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(.{PAUSE 20}.{PAUSE 20}.)$"

LarvestaWakeUp_Text_1:
# 16 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(.{PAUSE 10}.{PAUSE 10}.)\p(Where am I?)\p(I should probably make my way in land.)$"

DocksShouldHeadInLand_Text_0:
# 23 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(What a nice view, but... {PAUSE 40}Where am I?)$"
