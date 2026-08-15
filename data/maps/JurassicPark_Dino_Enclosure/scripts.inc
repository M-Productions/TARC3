JurassicPark_Dino_Enclosure_MapScripts::
# 2 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Dino_Enclosure_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JurassicPark_Dino_Enclosure_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

JurassicPark_Dino_Enclosure_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	compare VAR_GAME_STATE, GS_HEADING_TOWARDS_LAB
	goto_if_eq JurassicPark_Dino_Enclosure_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

JurassicPark_Dino_Enclosure_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setobjectmovementtype LOCALID_TYRANTRUM_PLATFORM, MOVEMENT_TYPE_RAM
# 5 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WATCH_PLAYER_OWE
# 6 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setobjectxyperm LOCALID_TYRANTRUM_PLATFORM, 11, 21
	return

JurassicPark_Dino_Enclosure_MapScripts_MAP_SCRIPT_ON_LOAD:
# 11 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
	goto_if_ge JurassicPark_Dino_Enclosure_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

JurassicPark_Dino_Enclosure_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 13 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 10, 18, METATILE_Dino_Enclosure_Secondary_CageRightTop, FALSE
# 14 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 10, 19, METATILE_Dino_Enclosure_Secondary_CageRightMid, FALSE
# 15 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 10, 20, METATILE_Dino_Enclosure_Secondary_CageRightBottom, FALSE
# 17 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 11, 18, METATILE_Forest_Primary_Grass, FALSE
# 18 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 11, 19, METATILE_Forest_Primary_Grass, FALSE
# 19 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 11, 20, METATILE_Forest_Primary_Grass, FALSE
# 21 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 12, 18, METATILE_Forest_Primary_Grass, FALSE
# 22 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 12, 19, METATILE_Forest_Primary_Grass, FALSE
# 23 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 12, 20, METATILE_Forest_Primary_Grass, FALSE
# 25 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 13, 18, METATILE_Dino_Enclosure_Secondary_CageLeftTop, FALSE
# 26 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 13, 19, METATILE_Dino_Enclosure_Secondary_CageLeftMid, FALSE
# 27 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setmetatile 13, 20, METATILE_Dino_Enclosure_Secondary_CageLeftBottom, FALSE
# 29 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	special DrawWholeMapView
	return


JurassicPark_Dino_Enclosure_EventScript_Kabuto::
# 36 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	lockall
# 37 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	playse SE_PIN
# 38 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_KABUTO_PLATFORM, JurassicPark_Dino_Enclosure_EventScript_Kabuto_Movement_0
# 39 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 40 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	msgbox JurassicPark_Dino_Enclosure_EventScript_Kabuto_Text_0
# 41 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 42 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	removeobject LOCALID_KABUTO_PLATFORM
# 43 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setvar VAR_GAME_STATE, GS_FOUGHT_KABUTO
# 44 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	release
	end


JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer::
# 50 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_0, localId = LOCALID_DRAMPA_PLATFORM
# 51 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 52 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_0
# 53 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 54 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	fadenewbgm MUS_CUTSCENE_MYSTERIOUS
# 55 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_1, localId = LOCALID_BAGON_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 56 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_2, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 57 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 58 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	special SpawnCameraObject
# 59 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_1
# 60 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 61 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_3, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 62 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_4, localId = LOCALID_PHANPY_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 63 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_5, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 64 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_6, localId = LOCALID_PHANPY_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 65 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_7, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 66 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_8, localId = LOCALID_BAGON_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 67 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_9, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 68 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_10, localId = LOCALID_JIGGLYPUFF_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 69 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_11, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 70 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_12, localId = LOCALID_PHANPY_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 71 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_13, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 72 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 73 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	playse SE_PIN
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_TYRANTRUM_PLATFORM, JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_2
# 75 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 76 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	fadescreen FADE_TO_WHITE
# 77 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 78 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitse
# 79 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_TYRANTRUM_PLATFORM, JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_3
# 80 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 81 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 82 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	delay 16
# 83 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_4
# 84 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 85 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	special RemoveCameraObject
# 86 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_14, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 87 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 88 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_PLATFORM, JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_5
# 89 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_PHANPY_PLATFORM, JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_5
# 90 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_BAGON_PLATFORM, JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_5
# 91 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_5
# 92 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 93 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_15, localId = LOCALID_JIGGLYPUFF_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 94 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_16, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 95 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_17, localId = LOCALID_JIGGLYPUFF_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 96 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_18, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 97 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 98 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setweather WEATHER_RAIN
# 99 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	doweather
# 100 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setflag FLAG_MUSIC_RAIN
# 101 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setflag FLAG_HIDE_CHARACTERS_PLATFORM
# 102 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setvar VAR_GAME_STATE, GS_DRAMPA_EXPLAINER
# 103 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	delay 32
# 104 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_19, localId = LOCALID_BAGON_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 105 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_20, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 106 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_21, localId = LOCALID_PHANPY_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 107 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_22, localId = LOCALID_DRAMPA_PLATFORM, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 108 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmboxdelay
# 109 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 110 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	warp MAP_JURASSIC_PARK_VISITOR_CENTRE, 9, 11
	return


JurassicPark_Dino_Enclosure_EventScript_GoBack::
# 115 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	msgbox JurassicPark_Dino_Enclosure_EventScript_GoBack_Text_0, MSGBOX_DEFAULT
# 116 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 117 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Dino_Enclosure_EventScript_GoBack_Movement_0
# 118 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 119 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	release
	end


JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke::
# 125 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	lock
# 126 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	playse SE_PIN
# 127 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Movement_0
# 128 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 129 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitse
# 130 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	fadenewbgm MUS_VS_BOSS_POWERFUL
# 131 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 132 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 133 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Movement_1
# 134 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 135 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 136 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	mnmbox JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 137 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	closemessage
# 138 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	clearflag FLAG_NO_OW_MUSIC
# 139 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setflag FLAG_PANIC_OW_MUSIC
# 140 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	special SpawnCameraObject
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Movement_2
# 142 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Movement_2
# 143 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitmovement 0
# 144 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	fadescreen FADE_TO_BLACK
# 145 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	delay 16
# 146 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	destroyfollowernpc
# 147 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_ROAD_TO_VISITOR_CENTRE, 50, 17
# 148 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	setflag FLAG_SPAWN_WEST
# 149 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	waitstate
	return


# 38 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_Kabuto_Movement_0:
# 38 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	emote_exclamation_mark
# 38 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	delay_16
# 38 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	face_left
	step_end

# 52 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_0:
# 52 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_right
# 52 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
# 52 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
# 52 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
# 52 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
	step_end

# 59 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_1:
# 59 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
# 59 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
# 59 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
# 59 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
	step_end

# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_2:
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	emote_exclamation_mark
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	delay_16
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_in_place_up
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	lock_facing_direction
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	delay_16
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_down
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	delay_16
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_up
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_up
# 74 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_up
	step_end

# 79 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_3:
# 79 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_faster_down
# 79 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_in_place_up
	step_end

# 83 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_4:
# 83 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_up
# 83 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_up
# 83 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_up
# 83 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_up
	step_end

# 88 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Movement_5:
# 88 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	face_up
	step_end

# 117 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_GoBack_Movement_0:
# 117 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_left
	step_end

# 127 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Movement_0:
# 127 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	emote_exclamation_mark
# 127 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	delay_16
# 127 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	face_down
	step_end

# 133 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Movement_1:
# 133 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	face_down
	step_end

# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Movement_2:
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
# 141 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	walk_fast_left
	step_end

JurassicPark_Dino_Enclosure_EventScript_Kabuto_Text_0:
# 40 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "PLACEHOLDER: SKIPPING BATTLE$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_0:
# 50 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Ah!\n"
	.string "Here you are!\p"
	.string "Come, come!$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_1:
# 55 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "What's with the cage?!$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_2:
# 56 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "It's to contain beasts most ferocious.\n"
	.string "Look!$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_3:
# 61 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "The terrifying king of prehistory.\n"
	.string "Tyrantrum!$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_4:
# 62 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Why are you keeping them locked in\n"
	.string "cages?!$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_5:
# 63 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Yes, that's the trouble, isn't it?\p"
	.string "When I revived these ancient Pokémon, I\n"
	.string "was hoping to talk to them.\p"
	.string "Learn their language, if needed.\n"
	.string "But…\p"
	.string "It soon became apparent that\n"
	.string "prehistoric Pokémon…\l"
	.string "Are unable to talk.$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_6:
# 64 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "They can't talk?\n"
	.string "As in, at all?$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_7:
# 65 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Yes.\n"
	.string "Their brains simply have not evolved\l"
	.string "the capacity for language.\p"
	.string "And not only that, but they don't…\n"
	.string "Think.\l"
	.string "Not much, anyways.\p"
	.string "Nothing but mindless creatures.\p"
	.string "A shame, truly.$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_8:
# 66 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Like zombies?!$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_9:
# 67 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "I would not quite say that.\n"
	.string "It's more like…\p"
	.string "Babies.$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_10:
# 68 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "You'd put babies in a cage?$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_11:
# 69 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "I said LIKE babies, not that they're\n"
	.string "literally babies!\p"
	.string "These are dangerous monsters!$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_12:
# 70 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Isn't there a risk of them escaping,\n"
	.string "then?$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_13:
# 71 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Ah, no.\n"
	.string "The cage is electrified, you see.\p"
	.string "Here, let me show you.\p"
	.string "Ahem.\p"
	.string "(Fweeeeee)$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_14:
# 86 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "See?\n"
	.string "Nothing to worry about.$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_15:
# 93 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Suppose the power fails…$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_16:
# 94 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "It won't.\n"
	.string "There's three backup generators.$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_17:
# 95 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Sure, Doc, but if it does…$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_18:
# 96 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "I SAID it won't!\p"
	.string "I'll be!\n"
	.string "Do you entertain yourself by acting\l"
	.string "like a little-$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_19:
# 104 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Oh!\n"
	.string "It's raining!$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_20:
# 105 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "W-well!\n"
	.string "Why don't we head back indoors?\p"
	.string "We can wait out the rain there and\n"
	.string "discuss your…\l"
	.string "Leaving.$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_21:
# 106 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Aw, you want us to leave already?$"

JurassicPark_Dino_Enclosure_EventScript_DrampaExplainer_Text_22:
# 107 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Don't get me wrong, you're quite the\n"
	.string "lively bunch!\l"
	.string "But I got a grand opening to prepare.\p"
	.string "But come, let us talk inside.$"

JurassicPark_Dino_Enclosure_EventScript_GoBack_Text_0:
# 115 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Larvy!\n"
	.string "This way!$"

JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Text_0:
# 131 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "Larvy, look!$"

JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Text_1:
# 135 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "(The cage…\n"
	.string "It's broken!)$"

JurassicPark_Dino_Enclosure_EventScript_EnclosureBroke_Text_2:
# 136 "data/maps/JurassicPark_Dino_Enclosure/scripts.pory"
	.string "No…\n"
	.string "Is it too late?\p"
	.string "We have to go, now!$"
