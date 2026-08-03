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
	mnmbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 13 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmboxdelay
# 14 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	mnmbox JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
	return


JurassicPark_Beach_Docks_EventScript_ShouldHeadInLand::
# 18 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	special SpawnCameraObject
# 19 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Beach_Docks_Movement_CameraPanOverDocks
# 20 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 21 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox JurassicPark_Beach_Docks_EventScript_ShouldHeadInLand_Text_0, MSGBOX_SIGN
# 22 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 23 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Beach_Docks_Movement_CameraPanFromDocks
# 24 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	waitmovement 0
# 25 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	special RemoveCameraObject
	return


# 28 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_Movement_CameraPanOverDocks:
# 29 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 29 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 29 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
# 29 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_down
	step_end

# 32 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
JurassicPark_Beach_Docks_Movement_CameraPanFromDocks:
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
# 33 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	walk_up
	step_end

General_EventScript_Cutout::
# 38 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	lock
# 39 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	goto_if_set FLAG_TEMP_1, General_EventScript_Cutout_2
# 47 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox General_EventScript_Cutout_Text_1
# 52 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	setflag FLAG_TEMP_1
General_EventScript_Cutout_1:
# 54 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	release
	end

General_EventScript_Cutout_2:
# 41 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	msgbox General_EventScript_Cutout_Text_0
	goto General_EventScript_Cutout_1


JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_0:
# 12 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(.{PAUSE 20}.{PAUSE 20}.)$"

JurassicPark_Beach_Docks_EventScript_LarvestaWakeUp_Text_1:
# 14 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(.{PAUSE 10}.{PAUSE 10}.)\p(Where am I?)\p(I should probably make my way in land.)$"

JurassicPark_Beach_Docks_EventScript_ShouldHeadInLand_Text_0:
# 21 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "(What a nice view, but... {PAUSE 40}Where am I?)$"

General_EventScript_Cutout_Text_0:
# 42 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "Yep, still cardboard.$"

General_EventScript_Cutout_Text_1:
# 48 "data/maps/JurassicPark_Beach_Docks/scripts.pory"
	.string "As you approach the hut,\n"
	.string "you start to notice…\p"
	.string "That this is just a cardboard cutout.$"
