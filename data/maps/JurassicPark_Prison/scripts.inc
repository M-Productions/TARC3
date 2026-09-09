JurassicPark_Prison_MapScripts::
# 2 "data/maps/JurassicPark_Prison/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 26 "data/maps/JurassicPark_Prison/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_THIRD_SAVED
# 6 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 8 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 10 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_SECOND_SAVED
# 15 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 17 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 19 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 22 "data/maps/JurassicPark_Prison/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 5, 3
# 23 "data/maps/JurassicPark_Prison/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 5, 3
# 24 "data/maps/JurassicPark_Prison/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
	return

JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 7 "data/maps/JurassicPark_Prison/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_SCREAM_TAIL_JAIL
	goto JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/JurassicPark_Prison/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_GREAT_TUSK_JAIL
	goto JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/JurassicPark_Prison/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_ROARING_MOON_JAIL
	goto JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/JurassicPark_Prison/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_JAIL
	goto JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 18 "data/maps/JurassicPark_Prison/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_JAIL
	goto JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 20 "data/maps/JurassicPark_Prison/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_JAIL
	goto JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/JurassicPark_Prison/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_AFTER_DRAMPA, JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

JurassicPark_Prison_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 30 "data/maps/JurassicPark_Prison/scripts.pory"
	goto JurassicPark_EventScript_Prison_FinalCutscene
	return


JurassicPark_EventScript_Prison_FinalCutscene::
# 38 "data/maps/JurassicPark_Prison/scripts.pory"
	delay 200
# 39 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_CHANSEY_JAIL, JurassicPark_EventScript_Prison_FinalCutscene_Movement_0
# 40 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_EventScript_Prison_FinalCutscene_Movement_0
# 41 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 42 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_CHANSEY_JAIL, JurassicPark_EventScript_Prison_FinalCutscene_Movement_1
# 43 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_KLEFKI_JAIL, JurassicPark_EventScript_Prison_FinalCutscene_Movement_2
# 44 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement LOCALID_CHANSEY_JAIL
# 45 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_KLEFKI_JAIL, JurassicPark_EventScript_Prison_FinalCutscene_Movement_3
# 46 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement LOCALID_KLEFKI_JAIL
# 47 "data/maps/JurassicPark_Prison/scripts.pory"
	setmetatile 4, 6, METATILE_Final_Lab_Interior_Primary_FloorShadow, FALSE
# 48 "data/maps/JurassicPark_Prison/scripts.pory"
	setmetatile 4, 5, METATILE_Final_Lab_Interior_Primary_FloorNoShadow, FALSE
# 49 "data/maps/JurassicPark_Prison/scripts.pory"
	setmetatile 5, 6, METATILE_Final_Lab_Interior_Primary_FloorNoShadow, FALSE
# 50 "data/maps/JurassicPark_Prison/scripts.pory"
	setmetatile 5, 5, METATILE_Final_Lab_Interior_Primary_FloorNoShadow, FALSE
# 51 "data/maps/JurassicPark_Prison/scripts.pory"
	special DrawWholeMapView
# 52 "data/maps/JurassicPark_Prison/scripts.pory"
	playse SE_UNLOCK
# 53 "data/maps/JurassicPark_Prison/scripts.pory"
	waitse
# 54 "data/maps/JurassicPark_Prison/scripts.pory"
	playse SE_PIN
# 55 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_SLITHER_WING_JAIL, JurassicPark_EventScript_Prison_FinalCutscene_Movement_4
# 56 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_EventScript_Prison_FinalCutscene_Movement_4
# 57 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 58 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_KLEFKI_JAIL, JurassicPark_EventScript_Prison_FinalCutscene_Movement_5
# 59 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_CHANSEY_JAIL, JurassicPark_EventScript_Prison_FinalCutscene_Movement_6
# 60 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_EventScript_Prison_FinalCutscene_Movement_7
# 61 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement LOCALID_CHANSEY_JAIL
# 62 "data/maps/JurassicPark_Prison/scripts.pory"
	playse SE_M_ABSORB
# 63 "data/maps/JurassicPark_Prison/scripts.pory"
	waitse
# 64 "data/maps/JurassicPark_Prison/scripts.pory"
	delay 60
# 65 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_0, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 66 "data/maps/JurassicPark_Prison/scripts.pory"
	closemessage
# 67 "data/maps/JurassicPark_Prison/scripts.pory"
	delay 32
# 68 "data/maps/JurassicPark_Prison/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_MAIN
# 69 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_THIRD_SAVED
# 71 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_3
# 73 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_4
# 75 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_5
JurassicPark_EventScript_Prison_FinalCutscene_1:
# 78 "data/maps/JurassicPark_Prison/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 5, 3
# 79 "data/maps/JurassicPark_Prison/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 5, 3
# 80 "data/maps/JurassicPark_Prison/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_DOWN
# 81 "data/maps/JurassicPark_Prison/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 82 "data/maps/JurassicPark_Prison/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 83 "data/maps/JurassicPark_Prison/scripts.pory"
	waitfanfare
# 84 "data/maps/JurassicPark_Prison/scripts.pory"
	delay 16
# 85 "data/maps/JurassicPark_Prison/scripts.pory"
	playse SE_PIN
# 86 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_EventScript_Prison_FinalCutscene_Movement_8
# 87 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 88 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_EventScript_Prison_FinalCutscene_Movement_9
# 89 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 90 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 91 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_1, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 92 "data/maps/JurassicPark_Prison/scripts.pory"
	closemessage
# 93 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_CHANSEY_JAIL, JurassicPark_EventScript_Prison_FinalCutscene_Movement_10
# 94 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 95 "data/maps/JurassicPark_Prison/scripts.pory"
	playse SE_M_ABSORB
# 96 "data/maps/JurassicPark_Prison/scripts.pory"
	waitse
# 97 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_EventScript_Prison_FinalCutscene_Movement_9
# 98 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_EventScript_Prison_FinalCutscene_Movement_9
# 99 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 100 "data/maps/JurassicPark_Prison/scripts.pory"
	delay 32
# 101 "data/maps/JurassicPark_Prison/scripts.pory"
	special SpawnCameraObject
# 102 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_EventScript_Prison_FinalCutscene_Movement_11
# 103 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 104 "data/maps/JurassicPark_Prison/scripts.pory"
	removeobject LOCALID_SLITHER_WING_JAIL
# 105 "data/maps/JurassicPark_Prison/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 106 "data/maps/JurassicPark_Prison/scripts.pory"
	waitfanfare
# 107 "data/maps/JurassicPark_Prison/scripts.pory"
	playbgm MUS_CALM_CUTSCENE, 0
# 108 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 109 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_SECOND_SAVED
# 111 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_8
# 113 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_9
# 115 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_10
JurassicPark_EventScript_Prison_FinalCutscene_6:
# 118 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_EventScript_Prison_FinalCutscene_Movement_2
# 119 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 120 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_THIRD_SAVED
# 122 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_13
# 124 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_14
# 126 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_15
JurassicPark_EventScript_Prison_FinalCutscene_11:
# 129 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_9, localId = LOCALID_CHANSEY_JAIL
# 130 "data/maps/JurassicPark_Prison/scripts.pory"
	closemessage
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_CHANSEY_JAIL, JurassicPark_EventScript_Prison_FinalCutscene_Movement_12
# 132 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 133 "data/maps/JurassicPark_Prison/scripts.pory"
	removeobject LOCALID_CHANSEY_JAIL
# 134 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_10, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 135 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_SECOND_SAVED
# 137 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_18
# 139 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_19
# 141 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_20
JurassicPark_EventScript_Prison_FinalCutscene_16:
# 144 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_14, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 145 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_SECOND_SAVED
# 147 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_23
# 149 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_24
# 151 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_25
JurassicPark_EventScript_Prison_FinalCutscene_21:
# 154 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_THIRD_SAVED
# 156 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_28
# 158 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_29
# 160 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_30
JurassicPark_EventScript_Prison_FinalCutscene_26:
# 163 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_21, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 165 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_SECOND_SAVED
# 167 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_33
# 169 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_34
# 171 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_35
JurassicPark_EventScript_Prison_FinalCutscene_31:
# 174 "data/maps/JurassicPark_Prison/scripts.pory"
	closemessage
# 175 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_EventScript_Prison_FinalCutscene_Movement_13
# 176 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 178 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_SECOND_SAVED
# 180 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_38
# 182 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_39
# 184 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_40
JurassicPark_EventScript_Prison_FinalCutscene_36:
# 187 "data/maps/JurassicPark_Prison/scripts.pory"
	playse SE_PIN
# 188 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_EventScript_Prison_FinalCutscene_Movement_14
# 189 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_EventScript_Prison_FinalCutscene_Movement_14
# 190 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 191 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_28, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 192 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_THIRD_SAVED
# 194 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_43
# 196 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_44
# 198 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_45
JurassicPark_EventScript_Prison_FinalCutscene_41:
# 201 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_32, localId = LOCALID_PLAYER
# 202 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_SECOND_SAVED
# 204 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_48
# 224 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_49
# 245 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_50
JurassicPark_EventScript_Prison_FinalCutscene_46:
# 268 "data/maps/JurassicPark_Prison/scripts.pory"
	closemessage
# 269 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_EventScript_Prison_FinalCutscene_Movement_15
# 270 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 271 "data/maps/JurassicPark_Prison/scripts.pory"
	playse SE_EXIT
# 272 "data/maps/JurassicPark_Prison/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_MAIN
# 273 "data/maps/JurassicPark_Prison/scripts.pory"
	waitse
# 274 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_61, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 275 "data/maps/JurassicPark_Prison/scripts.pory"
	closemessage
# 276 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_EventScript_Prison_FinalCutscene_Movement_16
# 277 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 278 "data/maps/JurassicPark_Prison/scripts.pory"
	playse SE_EXIT
# 279 "data/maps/JurassicPark_Prison/scripts.pory"
	removeobject VAR_LOCALID_CUTSCENE_SECOND
# 280 "data/maps/JurassicPark_Prison/scripts.pory"
	waitse
# 281 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_EventScript_Prison_FinalCutscene_Movement_17
# 282 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 283 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_62, localId = LOCALID_PLAYER
# 284 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_FIRST_SAVED
# 286 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_53
# 288 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_54
# 290 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_55
JurassicPark_EventScript_Prison_FinalCutscene_51:
# 293 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_66, localId = LOCALID_PLAYER
# 294 "data/maps/JurassicPark_Prison/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_EventScript_Prison_FinalCutscene_Movement_18
# 295 "data/maps/JurassicPark_Prison/scripts.pory"
	waitmovement 0
# 296 "data/maps/JurassicPark_Prison/scripts.pory"
	playse SE_EXIT
# 297 "data/maps/JurassicPark_Prison/scripts.pory"
	waitse
# 298 "data/maps/JurassicPark_Prison/scripts.pory"
	delay 100
# 299 "data/maps/JurassicPark_Prison/scripts.pory"
	fadescreen FADE_TO_BLACK
# 300 "data/maps/JurassicPark_Prison/scripts.pory"
	playbgm MUS_RG_SS_ANNE, 0
# 301 "data/maps/JurassicPark_Prison/scripts.pory"
	msgbox JurassicPark_EventScript_Prison_FinalCutscene_Text_67
# 302 "data/maps/JurassicPark_Prison/scripts.pory"
	fadescreen FADE_TO_WHITE
# 303 "data/maps/JurassicPark_Prison/scripts.pory"
	special DoSoftReset
	end

JurassicPark_EventScript_Prison_FinalCutscene_3:
# 72 "data/maps/JurassicPark_Prison/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_JAIL
	goto JurassicPark_EventScript_Prison_FinalCutscene_1

JurassicPark_EventScript_Prison_FinalCutscene_4:
# 74 "data/maps/JurassicPark_Prison/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_JAIL
	goto JurassicPark_EventScript_Prison_FinalCutscene_1

JurassicPark_EventScript_Prison_FinalCutscene_5:
# 76 "data/maps/JurassicPark_Prison/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_JAIL
	goto JurassicPark_EventScript_Prison_FinalCutscene_1

JurassicPark_EventScript_Prison_FinalCutscene_8:
# 112 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_3, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_EventScript_Prison_FinalCutscene_6

JurassicPark_EventScript_Prison_FinalCutscene_9:
# 114 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_4, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
	goto JurassicPark_EventScript_Prison_FinalCutscene_6

JurassicPark_EventScript_Prison_FinalCutscene_10:
# 116 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_5, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_6

JurassicPark_EventScript_Prison_FinalCutscene_13:
# 123 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_6, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
	goto JurassicPark_EventScript_Prison_FinalCutscene_11

JurassicPark_EventScript_Prison_FinalCutscene_14:
# 125 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_7, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DIZZY
	goto JurassicPark_EventScript_Prison_FinalCutscene_11

JurassicPark_EventScript_Prison_FinalCutscene_15:
# 127 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_8, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_EventScript_Prison_FinalCutscene_11

JurassicPark_EventScript_Prison_FinalCutscene_18:
# 138 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_11, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_16

JurassicPark_EventScript_Prison_FinalCutscene_19:
# 140 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_12, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_16

JurassicPark_EventScript_Prison_FinalCutscene_20:
# 142 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_13, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_16

JurassicPark_EventScript_Prison_FinalCutscene_23:
# 148 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_15, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_EventScript_Prison_FinalCutscene_21

JurassicPark_EventScript_Prison_FinalCutscene_24:
# 150 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_16, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_EventScript_Prison_FinalCutscene_21

JurassicPark_EventScript_Prison_FinalCutscene_25:
# 152 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_17, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_EventScript_Prison_FinalCutscene_21

JurassicPark_EventScript_Prison_FinalCutscene_28:
# 157 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_18, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
	goto JurassicPark_EventScript_Prison_FinalCutscene_26

JurassicPark_EventScript_Prison_FinalCutscene_29:
# 159 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_19, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_EventScript_Prison_FinalCutscene_26

JurassicPark_EventScript_Prison_FinalCutscene_30:
# 161 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_20, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SIGH
	goto JurassicPark_EventScript_Prison_FinalCutscene_26

JurassicPark_EventScript_Prison_FinalCutscene_33:
# 168 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_22, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_31

JurassicPark_EventScript_Prison_FinalCutscene_34:
# 170 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_23, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_31

JurassicPark_EventScript_Prison_FinalCutscene_35:
# 172 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_24, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_31

JurassicPark_EventScript_Prison_FinalCutscene_38:
# 181 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_25, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_36

JurassicPark_EventScript_Prison_FinalCutscene_39:
# 183 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_26, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_36

JurassicPark_EventScript_Prison_FinalCutscene_40:
# 185 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_27, localId = VAR_LOCALID_CUTSCENE_SECOND
	goto JurassicPark_EventScript_Prison_FinalCutscene_36

JurassicPark_EventScript_Prison_FinalCutscene_43:
# 195 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_29, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
	goto JurassicPark_EventScript_Prison_FinalCutscene_41

JurassicPark_EventScript_Prison_FinalCutscene_44:
# 197 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_30, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_EventScript_Prison_FinalCutscene_41

JurassicPark_EventScript_Prison_FinalCutscene_45:
# 199 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_31, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_EventScript_Prison_FinalCutscene_41

JurassicPark_EventScript_Prison_FinalCutscene_48:
# 205 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_33, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 206 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_THIRD_SAVED
# 209 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_57
# 215 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_58
	goto JurassicPark_EventScript_Prison_FinalCutscene_46

JurassicPark_EventScript_Prison_FinalCutscene_49:
# 225 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_43, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 226 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_THIRD_SAVED
# 228 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_60
# 235 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_EventScript_Prison_FinalCutscene_61
	goto JurassicPark_EventScript_Prison_FinalCutscene_46

JurassicPark_EventScript_Prison_FinalCutscene_50:
# 246 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_52, localId = VAR_LOCALID_CUTSCENE_SECOND
# 247 "data/maps/JurassicPark_Prison/scripts.pory"
	switch VAR_THIRD_SAVED
# 249 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_BAGON, JurassicPark_EventScript_Prison_FinalCutscene_63
# 258 "data/maps/JurassicPark_Prison/scripts.pory"
	case CHAR_PHANPY, JurassicPark_EventScript_Prison_FinalCutscene_64
	goto JurassicPark_EventScript_Prison_FinalCutscene_46

JurassicPark_EventScript_Prison_FinalCutscene_53:
# 287 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_63, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
	goto JurassicPark_EventScript_Prison_FinalCutscene_51

JurassicPark_EventScript_Prison_FinalCutscene_54:
# 289 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_64, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
	goto JurassicPark_EventScript_Prison_FinalCutscene_51

JurassicPark_EventScript_Prison_FinalCutscene_55:
# 291 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_65, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
	goto JurassicPark_EventScript_Prison_FinalCutscene_51

JurassicPark_EventScript_Prison_FinalCutscene_57:
# 210 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_34, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 211 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_35, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 212 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_36, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 213 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_37, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 214 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_38, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
	goto JurassicPark_EventScript_Prison_FinalCutscene_46

JurassicPark_EventScript_Prison_FinalCutscene_58:
# 216 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_39, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 217 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_40, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 218 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_41, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 219 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 220 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_42, localId = VAR_LOCALID_CUTSCENE_MAIN
	goto JurassicPark_EventScript_Prison_FinalCutscene_46

JurassicPark_EventScript_Prison_FinalCutscene_60:
# 229 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_44, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 230 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_36, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 231 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_37, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 232 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_45, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 233 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_46, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
	goto JurassicPark_EventScript_Prison_FinalCutscene_46

JurassicPark_EventScript_Prison_FinalCutscene_61:
# 236 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_47, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 237 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_48, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 238 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_49, localId = VAR_LOCALID_CUTSCENE_MAIN
# 239 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_50, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 240 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_51, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_EventScript_Prison_FinalCutscene_46

JurassicPark_EventScript_Prison_FinalCutscene_63:
# 250 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_53, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 251 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_54, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 252 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_55, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 253 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_41, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 254 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 255 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_56, localId = VAR_LOCALID_CUTSCENE_MAIN
# 256 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_57, localId = VAR_LOCALID_CUTSCENE_MAIN
	goto JurassicPark_EventScript_Prison_FinalCutscene_46

JurassicPark_EventScript_Prison_FinalCutscene_64:
# 259 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_58, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 260 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_47, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 261 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_48, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 262 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_49, localId = VAR_LOCALID_CUTSCENE_MAIN
# 263 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_50, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 264 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_59, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 265 "data/maps/JurassicPark_Prison/scripts.pory"
	mnmbox JurassicPark_EventScript_Prison_FinalCutscene_Text_60, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_EventScript_Prison_FinalCutscene_46


# 39 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_0:
# 39 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 39 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 39 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
	step_end

# 42 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_1:
# 42 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 42 "data/maps/JurassicPark_Prison/scripts.pory"
	face_left
# 42 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 42 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_in_place_left
	step_end

# 43 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_2:
# 43 "data/maps/JurassicPark_Prison/scripts.pory"
	face_right
	step_end

# 45 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_3:
# 45 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_right
# 45 "data/maps/JurassicPark_Prison/scripts.pory"
	face_up
# 45 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 45 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_in_place_up
	step_end

# 55 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_4:
# 55 "data/maps/JurassicPark_Prison/scripts.pory"
	emote_exclamation_mark
# 55 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 55 "data/maps/JurassicPark_Prison/scripts.pory"
	face_down
	step_end

# 58 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_5:
# 58 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 58 "data/maps/JurassicPark_Prison/scripts.pory"
	face_down
	step_end

# 59 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_6:
# 59 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 59 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 59 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 59 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 59 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 59 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_in_place_up
	step_end

# 60 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_7:
# 60 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 60 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 60 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 60 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 60 "data/maps/JurassicPark_Prison/scripts.pory"
	face_up
	step_end

# 86 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_8:
# 86 "data/maps/JurassicPark_Prison/scripts.pory"
	emote_exclamation_mark
# 86 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 86 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_fast_up
# 86 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_fast_up
# 86 "data/maps/JurassicPark_Prison/scripts.pory"
	face_right
	step_end

# 88 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_9:
# 88 "data/maps/JurassicPark_Prison/scripts.pory"
	face_left
	step_end

# 93 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_10:
# 93 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 93 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 93 "data/maps/JurassicPark_Prison/scripts.pory"
	face_up
# 93 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 93 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_in_place_up
	step_end

# 102 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_11:
# 102 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_fast_left
# 102 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_fast_up
# 102 "data/maps/JurassicPark_Prison/scripts.pory"
	face_down
# 102 "data/maps/JurassicPark_Prison/scripts.pory"
	set_visible
	step_end

# 131 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_12:
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_right
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_down
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_down
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_down
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_down
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_down
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_down
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_down
# 131 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_down
	step_end

# 175 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_13:
# 175 "data/maps/JurassicPark_Prison/scripts.pory"
	face_up
	step_end

# 188 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_14:
# 188 "data/maps/JurassicPark_Prison/scripts.pory"
	emote_exclamation_mark
# 188 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 188 "data/maps/JurassicPark_Prison/scripts.pory"
	face_up
	step_end

# 269 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_15:
# 269 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 269 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 269 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 269 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 269 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
	step_end

# 276 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_16:
# 276 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 276 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 276 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 276 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
	step_end

# 281 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_17:
# 281 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 281 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_left
# 281 "data/maps/JurassicPark_Prison/scripts.pory"
	face_up
# 281 "data/maps/JurassicPark_Prison/scripts.pory"
	delay_16
# 281 "data/maps/JurassicPark_Prison/scripts.pory"
	face_down
	step_end

# 294 "data/maps/JurassicPark_Prison/scripts.pory"
JurassicPark_EventScript_Prison_FinalCutscene_Movement_18:
# 294 "data/maps/JurassicPark_Prison/scripts.pory"
	walk_up
# 294 "data/maps/JurassicPark_Prison/scripts.pory"
	set_invisible
	step_end

JurassicPark_EventScript_Prison_FinalCutscene_Text_0:
# 65 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "… … …$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_1:
# 90 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "… … …!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_2:
# 108 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(!!!)\p"
	.string "(I'm…\n"
	.string "Back?!)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_3:
# 112 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "You guys!!!\n"
	.string "You're back!!!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_4:
# 114 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Oh, thank goodness!\n"
	.string "I was scared it wasn't going to work!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_5:
# 116 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Look who's back to normal.\n"
	.string "Took you long enough.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_6:
# 123 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "The voices!\p"
	.string "T-They're finally gone!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_7:
# 125 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "I can finally think straight!\p"
	.string "I-\n"
	.string "Wow.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_8:
# 127 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "That was the MOST unpleasant\n"
	.string "experience of my life.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_9:
# 129 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Hmm!\p"
	.string "The antidote worked.\n"
	.string "Very good.\p"
	.string "…You get some time alone with the\n"
	.string "subjects, but make it quick.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_10:
# 134 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(Subjects…?)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_11:
# 138 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Guys, so much happened!\p"
	.string "After we found the people that were\n"
	.string "willing to take you in…\p"
	.string "They went back to the island and found\n"
	.string "the Doctor's notes.\p"
	.string "They managed to create a vaccine, and\n"
	.string "now you're back to normal!\p"
	.string "But, they said they want to study you\n"
	.string "more…$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_12:
# 140 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Well, after we want back to the\n"
	.string "mainland, and we sorta got…\l"
	.string "Arrested.\p"
	.string "Some scientists went back to the\n"
	.string "island, and raided the whole place.\p"
	.string "They found how to develop a vaccine,\n"
	.string "but not they want to run more tests on\l"
	.string "you.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_13:
# 142 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Sigh.\p"
	.string "These…\n"
	.string "Scientists, if you want to call them\l"
	.string "that.\p"
	.string "After they took you in, they went back\n"
	.string "to the island, and I guess they figured\l"
	.string "out how to develop a vaccine.\p"
	.string "I think they still want to inject you\n"
	.string "with all sorts of stuff, though, just to\l"
	.string "check.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_14:
# 144 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(What happened to the prehistoric\n"
	.string "Pokémon?)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_15:
# 148 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Uhm, I think…\p"
	.string "Lots of people are fighting on what to\n"
	.string "do with them.\p"
	.string "And, what to do with you, and the virus.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_16:
# 150 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "They're okay.\p"
	.string "But a lot of people are arguing over\n"
	.string "what should be done.\p"
	.string "Some want to get rid of them.\n"
	.string "Some want to study them\l"
	.string "There's even those who want to\l"
	.string "reintegrate them into society.\p"
	.string "And the new technology…\p"
	.string "It's all a bit of a mess.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_17:
# 152 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Yeah, so, we kinda became a bit of an\n"
	.string "international incident.\p"
	.string "Lots of people are very opinionated\n"
	.string "about what happened.\p"
	.string "The Pokémon are fine for now, but\n"
	.string "there's all sorts of different ideas on\l"
	.string "what to do with them.\p"
	.string "Not to mention the virus.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_18:
# 157 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Wow…\n"
	.string "I guess that means our adventures are\l"
	.string "famous!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_19:
# 159 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "…I could have never imagined this\n"
	.string "adventure could have turned into\l"
	.string "something like this.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_20:
# 161 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Politics, am I right?$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_21:
# 163 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(So, wait…\n"
	.string "Can we even leave from here…?!)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_22:
# 168 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "I…\n"
	.string "Don't think that they're going to just\l"
	.string "let you leave.\p"
	.string "You're also, uhm, potentially connected\n"
	.string "to the death of several Pokémon.\l"
	.string "But…$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_23:
# 170 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "The scientists want to keep you two\n"
	.string "locked to study you.\p"
	.string "And on top of that, they're still\n"
	.string "investigating the…\l"
	.string "Deaths, of some of the Pokémon of the\l"
	.string "island.\l"
	.string "But…$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_24:
# 172 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Sorry, no can do.\p"
	.string "I wouldn't be surprised if these guys\n"
	.string "wanted to cut you open and look inside\l"
	.string "you.\p"
	.string "Not to mention, Larvy, you did kinda kill\n"
	.string "a guy.\l"
	.string "But…$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_25:
# 181 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "I, uhm, stole the blueprints for this\n"
	.string "building.\p"
	.string "It took me a long time to understand\n"
	.string "them, but…\p"
	.string "That vent over there…$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_26:
# 183 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Would you guys be dissuaded at all if I\n"
	.string "told you that escaping a prison from\l"
	.string "the vents usually doesn't work?$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_27:
# 185 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "That vent looks mightly crawlable,\n"
	.string "doesn't it?$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_28:
# 191 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(How did we manage to miss that?!)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_29:
# 195 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "…To be fair, I don't think we could have\n"
	.string "fit in there before!\p"
	.string "Y'know, in that form, I could fly, but…\n"
	.string "I don't think it was worth it.\p"
	.string "Especially not in here.\p"
	.string "I'm very glad to be back to normal.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_30:
# 197 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Well, in our defense we couldn't have fit\n"
	.string "in there in our prehistoric forms.\p"
	.string "You know, I think the metamorphosis\n"
	.string "gave me some new perspective on things.\p"
	.string "But, I'm glad to be back to normal.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_31:
# 199 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Hey, what the-\n"
	.string "Larvy, I could have fit through there!\p"
	.string "If it wasn't for you and your fat ass…!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_32:
# 201 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(I guess that would make us\n"
	.string "fugitives…?)\p"
	.string "(Maybe the Doctor was right.\n"
	.string "We're no more that common ruffians.)\p"
	.string "(But, is that so bad…?)\p"
	.string "(No, I think that as long as we are\n"
	.string "together…\l"
	.string "It will all be okay.)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_33:
# 205 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "So guys, I…\n"
	.string "I actually have surprise for you.\p"
	.string "Something that we can use to escape\n"
	.string "from here.\p"
	.string "A boat!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_34:
# 210 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Wha-\n"
	.string "Bagon!\p"
	.string "A new boat?!\p"
	.string "That's…\n"
	.string "That's amazing!\p"
	.string "What do we want to call it?!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_35:
# 211 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "I was thinking we could call her…\p"
	.string "The S.S. Jiggly.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_36:
# 212 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "That's the stupidest name I've ever\n"
	.string "heard.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_37:
# 213 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "…!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_38:
# 214 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "…Is what he would have said!\p"
	.string "Bagon, I…\n"
	.string "I don't know what to say.\p"
	.string "I think the only thing we can do now to\n"
	.string "keep his memory is…\l"
	.string "Keep adventuring!\p"
	.string "Come on, let's go!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_39:
# 216 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "A new boat?!\n"
	.string "Phanpy would have loved it.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_40:
# 217 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Yes, about that…\p"
	.string "I was thinking of calling her…\n"
	.string "The S.S. Phanpy.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_41:
# 218 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "That's the corniest sh-$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_42:
# 220 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "You know what?\n"
	.string "I like it.\p"
	.string "I think that idiot would have\n"
	.string "appreciated living on as a boat.\p"
	.string "Come on, what are we waiting for?\p"
	.string "Let's get outta here.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_43:
# 225 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Everyone!\n"
	.string "I have a very important announcement!\p"
	.string "I bought a new boat!\n"
	.string "Bigger and better than the old one!\p"
	.string "With her, we can run away from here and\n"
	.string "sail the seven seas!\p"
	.string "How shall we name my new darling?$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_44:
# 229 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "I think…\n"
	.string "I think we could call her…\p"
	.string "The S.S. Jiggly.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_45:
# 232 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "…Is what he would have said!\p"
	.string "I love the name, Bagon!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_46:
# 233 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "…Right!\p"
	.string "I think, what he would want us to do is…\n"
	.string "Keep being a team.\p"
	.string "Keep exploring the world.\n"
	.string "Keep causing trouble.\p"
	.string "So…\n"
	.string "Let's go, everyone!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_47:
# 236 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Isn't it obvious?\p"
	.string "We should call it…\n"
	.string "The S.S. Jiggly.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_48:
# 237 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "…You really can't stay serious, can you.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_49:
# 238 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "You know she would have laughed.\p"
	.string "And you know exactly what name we're\n"
	.string "going to give this boat, anyway.\p"
	.string "The S.S. Bagon, of course.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_50:
# 239 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "That's more like it.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_51:
# 240 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "I don't think Bagon would have been\n"
	.string "happy if we stopped adventuring.\p"
	.string "I don't think I will ever stop feeling\n"
	.string "awful about it.\p"
	.string "But…\n"
	.string "What's done is done.\p"
	.string "The world is scarier than we thought.\p"
	.string "And if in our adventures we can save\n"
	.string "more people…\n"
	.string "Well, I think it would make up for this,\l"
	.string "even if a little.\p"
	.string "C'mon, folks, we have a boat waiting for\n"
	.string "us.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_52:
# 246 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "So…\p"
	.string "Being a genius, I figured something\n"
	.string "that we needed to escape from here.\p"
	.string "A new boat!\n"
	.string "Which, coincidentally, is parked just\l"
	.string "outside of here.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_53:
# 250 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Phanpy…\n"
	.string "Would have loved a new boat…$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_54:
# 251 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "…I know.\p"
	.string "I still can't-\n"
	.string "I still can't believe that we…\l"
	.string "That I let her…$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_55:
# 252 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "I have an idea!\p"
	.string "We should call her…\n"
	.string "The S.S. Phanpy!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_56:
# 255 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "You know what?\n"
	.string "I like it.\p"
	.string "I think that idiot would have\n"
	.string "appreciated living on as a boat.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_57:
# 256 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Jiggly, what happened was tragic, but…\p"
	.string "She-she would have hated it if we\n"
	.string "stopped adventuring.\p"
	.string "She would come back from the dead and\n"
	.string "kill us!\p"
	.string "And, if we can save other people from\n"
	.string "danger…\p"
	.string "I think, it will be worth it.\p"
	.string "So…\n"
	.string "Let's go, everyone!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_58:
# 259 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Jiggly!\n"
	.string "A new boat!\p"
	.string "That's amazing!\n"
	.string "Did you give her a name?!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_59:
# 264 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Phanpy, we…\n"
	.string "Messed up didn't we…?$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_60:
# 265 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "…We messed up really bad.\p"
	.string "But, Jiggly.\n"
	.string "Bagon wouldn't have wanted us to stop.\p"
	.string "She would have wanted us to keep\n"
	.string "adventuring, and…\l"
	.string "Save people.\p"
	.string "Then, I think…\n"
	.string "We can make up for it.\p"
	.string "Let's go, gang.$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_61:
# 274 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "Hey!\n"
	.string "Wait for me!$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_62:
# 283 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(Things…\n"
	.string "Can never be the same.)\p"
	.string "(I bet that Drampa's technology is\n"
	.string "going to change the world in ways we\l"
	.string "could never imagine.)\p"
	.string "(But, I suppose that's okay.)\p"
	.string "(I think that, if we didn't stumble upon\n"
	.string "the island…)\p"
	.string "(Things would have turned much, much\n"
	.string "worse for the world.)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_63:
# 287 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(So thank you, Phanpy…)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_64:
# 289 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(So thank you, Bagon…)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_65:
# 291 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(So thank you, Jiggly…)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_66:
# 293 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "(And, goodbye.)$"

JurassicPark_EventScript_Prison_FinalCutscene_Text_67:
# 301 "data/maps/JurassicPark_Prison/scripts.pory"
	.string "JURASSIC POKÉPARK.\n"
	.string "A game by Nico and Marky.\p"
	.string "Maps and story by: Nico.Thank you so\n"
	.string "much for playing!\l"
	.string "We hope you enjoyed the experience.\p"
	.string "Full credits are available on the hack's\n"
	.string "download page.\p"
	.string "See you around!$"
