JurassicPark_Visitor_Centre_Red_MapScripts::
# 2 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Visitor_Centre_Red_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Visitor_Centre_Red_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_CENTRE_SECOND_VISIT, JurassicPark_Visitor_Centre_Red_DrampaRunsOut
	.2byte 0


JurassicPark_Visitor_Centre_Red_DrampaRunsOut::
# 10 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_0
# 11 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	closemessage
# 12 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_1, localId = LOCALID_JIGGLYPUFF_RED, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 13 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 14 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_3, localId = LOCALID_PHANPY_RED, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 15 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	closemessage
# 16 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	special SpawnCameraObject
# 17 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_0
# 18 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	waitmovement 0
# 19 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	applymovement LOCALID_BAGON, JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_1
# 20 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_0
# 21 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	applymovement LOCALID_DRAMPA_RED, JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_2
# 22 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	waitmovement LOCALID_DRAMPA_RED
# 23 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	applymovement LOCALID_DRAMPA_RED, JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_3
# 24 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	waitmovement 0
# 25 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	applymovement LOCALID_BAGON_RED, JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_4
# 26 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	waitmovement 0
# 27 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_4, localId = LOCALID_BAGON_RED, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 28 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	closemessage
# 29 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	delay 16
# 30 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	applymovement LOCALID_DRAMPA_RED, JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_5
# 31 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	waitmovement 0
# 32 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_5, localId = LOCALID_DRAMPA_RED, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 33 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	closemessage
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	applymovement LOCALID_DRAMPA_RED, JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_6
# 35 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	waitmovement 0
# 36 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	waitse
# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_7
# 39 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	waitmovement 0
# 40 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_6, localId = LOCALID_PHANPY_RED, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 41 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_7, localId = LOCALID_JIGGLYPUFF_RED, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 42 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_8, localId = LOCALID_PHANPY_RED, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 43 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_9, localId = LOCALID_JIGGLYPUFF_RED, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 44 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_10, localId = LOCALID_PHANPY_RED, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 45 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_11, localId = LOCALID_JIGGLYPUFF_RED, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 46 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_12, localId = LOCALID_PHANPY_RED, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 47 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_13, localId = LOCALID_JIGGLYPUFF_RED, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 48 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_14, localId = LOCALID_PHANPY_RED, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 49 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	closemessage
# 50 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	setflag FLAG_NO_OW_MUSIC
# 51 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	setflag FLAG_ALWAYS_RAINING
# 52 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	setvar VAR_GAME_STATE, GS_CENTRE_GOING_AFTER_DRAMPA
# 53 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	warp MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 0
# 54 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	waitstate
	end


# 17 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_0:
# 17 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_right
# 17 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_right
# 17 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_right
# 17 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_right
	step_end

# 19 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_1:
# 19 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	face_right
	step_end

# 21 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_2:
# 21 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_fast_down
# 21 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_fast_down
	step_end

# 23 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_3:
# 23 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_fast_down
# 23 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_fast_down
# 23 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_fast_left
# 23 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_fast_left
# 23 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_fast_left
# 23 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_fast_left
# 23 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_fast_left
	step_end

# 25 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_4:
# 25 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	face_down
	step_end

# 30 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_5:
# 30 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_in_place_up
	step_end

# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_6:
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_faster_down
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_faster_down
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_faster_down
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_faster_down
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_faster_down
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_faster_down
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_faster_down
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_faster_down
# 34 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_faster_down
	step_end

# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Movement_7:
# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_left
# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_left
# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_left
# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_left
# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_left
# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_left
# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_left
# 38 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	walk_left
	step_end

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_0:
# 10 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "Blackout detected.\nEmergency lights activated.$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_1:
# 12 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "Great, you jinxed it.$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_2:
# 13 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "(But if the power's out…)$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_3:
# 14 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "The cages!$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_4:
# 27 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "Hey, where are you going?$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_5:
# 32 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "…$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_6:
# 40 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "He left?!$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_7:
# 41 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "I knew we shouldn't have trusted him.\n"
	.string "This is bad.$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_8:
# 42 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "Can you bring the power back somehow?!$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_9:
# 43 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "I-I don't know?\n"
	.string "Maybe?$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_10:
# 44 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "“Maybe”?!$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_11:
# 45 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "I'll look into it, okay?\p"
	.string "But someone should go after the\n"
	.string "Doctor!$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_12:
# 46 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "Larvy, let's go!\p"
	.string "Jiggly, can you look after Bagon?$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_13:
# 47 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "Will do.$"

JurassicPark_Visitor_Centre_Red_DrampaRunsOut_Text_14:
# 48 "data/maps/JurassicPark_Visitor_Centre_Red/scripts.pory"
	.string "We need to find the Doctor and get him\n"
	.string "to fix this!$"
