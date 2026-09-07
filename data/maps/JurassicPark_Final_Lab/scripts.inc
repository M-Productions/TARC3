JurassicPark_Final_Lab_MapScripts::
# 2 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_THIRD_SAVED
# 6 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 8 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 10 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_SECOND_SAVED
# 15 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case CHAR_BAGON, JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 17 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 19 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 22 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_MAIN, 10, 8
# 23 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 10, 8
# 24 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setobjectxy VAR_LOCALID_CUTSCENE_SECOND, 8, 8
# 25 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 8, 8
# 26 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 27 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 28 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setweather WEATHER_NONE
# 29 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	doweather
	end

JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 7 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_LAB
	goto JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_LAB
	goto JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_LAB
	goto JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_LAB
	goto JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 18 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_LAB
	goto JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 20 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_LAB
	goto JurassicPark_Final_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_6


JurassicPark_Final_Lab_EventScript_Drampa_Scene::
# 36 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	clearflag FLAG_DETERMINATION
# 37 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	fadenewbgm MUS_CUTSCENE_MYSTERIOUS
# 38 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_0
# 39 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 40 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	special SpawnCameraObject
# 41 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 42 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 43 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 45 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_3
# 47 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_4
# 49 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_5
JurassicPark_Final_Lab_EventScript_Drampa_Scene_1:
# 52 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 53 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 54 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 55 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 56 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 57 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 58 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 60 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_8
# 62 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_9
# 64 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_10
JurassicPark_Final_Lab_EventScript_Drampa_Scene_6:
# 67 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_PIN
# 68 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_2
# 69 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 70 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_6, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 71 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_7, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 72 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 73 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_9, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 74 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 75 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 76 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 78 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_13
# 80 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_14
# 82 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_15
JurassicPark_Final_Lab_EventScript_Drampa_Scene_11:
# 85 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_13, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 86 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 87 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_3
# 88 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 89 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_14, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 90 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 92 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_18
# 94 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_19
# 96 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_20
JurassicPark_Final_Lab_EventScript_Drampa_Scene_16:
# 99 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 100 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_4
# 101 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 102 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_18, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 103 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_19, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 104 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_20, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 105 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 106 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_5
# 107 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 108 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_21, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 109 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 110 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_6
# 111 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 112 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_22, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 113 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 115 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_23
# 117 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_24
# 119 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_25
JurassicPark_Final_Lab_EventScript_Drampa_Scene_21:
# 122 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_26, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 123 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 124 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_5
# 125 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 126 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_27, localId = LOCALID_DRAMPA_LAB
# 127 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_28, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 128 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_29, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 129 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 130 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_7
# 131 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 132 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_30, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 133 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 134 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_4
# 135 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_31, localId = LOCALID_DRAMPA_LAB
# 136 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 139 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_28
# 143 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_29
# 147 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_30
JurassicPark_Final_Lab_EventScript_Drampa_Scene_26:
# 151 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_38, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 152 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_39, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 153 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 154 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_8
# 155 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 156 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_40, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 157 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 158 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 160 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_33
# 162 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_34
# 164 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_35
JurassicPark_Final_Lab_EventScript_Drampa_Scene_31:
# 167 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_44, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 168 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_45, localId = LOCALID_DRAMPA_LAB
# 169 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 171 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_38
# 173 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_39
# 175 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_40
JurassicPark_Final_Lab_EventScript_Drampa_Scene_36:
# 178 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_49, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 179 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_50, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 180 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_51, localId = LOCALID_DRAMPA_LAB
# 181 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 182 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_9
# 183 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 184 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playbgm MUS_DUMMY, 0
# 185 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_M_ABSORB
# 186 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitse
# 187 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay 64
# 188 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_52, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 189 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_PIN
# 190 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_10
# 191 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 192 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 194 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_43
# 196 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_44
# 198 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_45
JurassicPark_Final_Lab_EventScript_Drampa_Scene_41:
# 201 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_56, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 202 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 203 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_PIN
# 204 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_11
# 205 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_11
# 206 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_11
# 207 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 208 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_57, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 209 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_58, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 210 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 212 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_48
# 214 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_49
# 216 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_50
JurassicPark_Final_Lab_EventScript_Drampa_Scene_46:
# 219 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_62, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 220 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 222 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_53
# 224 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_54
# 226 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_55
JurassicPark_Final_Lab_EventScript_Drampa_Scene_51:
# 229 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_66, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 230 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_67, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 231 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_68, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 232 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 233 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_12
# 234 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_3
# 235 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement LOCALID_CAMERA
# 236 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	dofieldeffectsparkle 10, 7, 0
# 237 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 238 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_RESULT, 0
# 239 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playbgm MUS_VS_BOSS_POWERFUL, 0
# 240 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_ORB
# 241 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	special DoOrbEffect
# 242 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay 300
# 243 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 245 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_58
# 248 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_59
# 251 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_60
JurassicPark_Final_Lab_EventScript_Drampa_Scene_56:
# 255 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 10, 7
# 256 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
# 257 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	special FadeOutOrbEffect
# 258 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_69, localId = VAR_LOCALID_CUTSCENE_MAIN
# 259 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 261 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_ROARING_MOON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_63
# 263 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_GREAT_TUSK_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_64
# 265 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_SCREAM_TAIL_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_65
JurassicPark_Final_Lab_EventScript_Drampa_Scene_61:
# 268 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_73, localId = VAR_LOCALID_CUTSCENE_MAIN
# 269 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 270 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_13
# 271 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 272 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 273 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitse
# 274 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_74, localId = VAR_LOCALID_CUTSCENE_MAIN
# 275 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 276 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_14
# 277 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 278 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 279 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitse
# 280 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay 32
# 281 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_15
# 282 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 283 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 284 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitse
# 285 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay 32
# 286 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_16
# 287 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 288 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 289 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitse
# 290 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay 32
# 291 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_74, localId = VAR_LOCALID_CUTSCENE_MAIN
# 292 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 293 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_14
# 294 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 295 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_M_STRENGTH
# 296 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitse
# 297 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 299 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_ROARING_MOON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_68
# 301 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_GREAT_TUSK_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_69
# 303 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_SCREAM_TAIL_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_70
JurassicPark_Final_Lab_EventScript_Drampa_Scene_66:
# 306 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_78, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 307 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_79, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 308 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 310 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_73
# 312 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_74
# 314 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_75
JurassicPark_Final_Lab_EventScript_Drampa_Scene_71:
# 317 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_82, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 318 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 320 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_78
# 322 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_79
# 324 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_80
JurassicPark_Final_Lab_EventScript_Drampa_Scene_76:
# 327 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_86, localId = LOCALID_DRAMPA_LAB
# 328 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_87, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 329 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 331 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_83
# 333 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_84
# 335 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_85
JurassicPark_Final_Lab_EventScript_Drampa_Scene_81:
# 338 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playbgm MUS_DUMMY, 0
# 339 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_91, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 340 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_17
# 341 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 342 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_92, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 343 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_93, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 344 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_94, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 345 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playbgm MUS_CALM_CUTSCENE, 0
# 346 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_95, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 347 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 349 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_88
# 351 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_89
# 353 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_90
JurassicPark_Final_Lab_EventScript_Drampa_Scene_86:
# 356 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_99, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 357 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 358 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_3
# 359 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 360 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 361 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 362 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_18
# 363 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 364 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_100, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 365 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_101, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 366 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_102, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 367 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 368 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_9
# 369 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 370 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_M_ABSORB
# 371 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitse
# 372 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_12
# 373 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 374 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_19
# 375 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 376 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay 64
# 377 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	dofieldeffectsparkle 10, 7, 0
# 378 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 379 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_RESULT, 0
# 380 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playbgm MUS_VS_DINO, 0
# 381 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_ORB
# 382 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	special DoOrbEffect
# 383 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay 300
# 384 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_20
# 385 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setobjectxyperm LOCALID_SLITHER_WING_LAB, 10, 7
# 386 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	addobject LOCALID_SLITHER_WING_LAB
# 387 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	special FadeOutOrbEffect
# 388 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_103, localId = LOCALID_SLITHER_WING_LAB
# 389 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_104, localId = LOCALID_SLITHER_WING_LAB
# 390 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_105, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 391 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_106, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 392 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_107, localId = LOCALID_SLITHER_WING_LAB
# 393 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 394 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_108, localId = VAR_LOCALID_CUTSCENE_MAIN
# 395 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_109, localId = LOCALID_SLITHER_WING_LAB
# 396 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_21
# 397 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 398 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_110, localId = VAR_LOCALID_CUTSCENE_MAIN
# 399 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_111, localId = VAR_LOCALID_CUTSCENE_MAIN
# 400 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 401 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_22
# 402 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 403 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_111, localId = VAR_LOCALID_CUTSCENE_MAIN
# 404 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 405 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setflag FLAG_SYS_DONT_TRANSITION_BATTLE_MUSIC
# 406 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 408 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_ROARING_MOON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_93
# 410 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_GREAT_TUSK_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_94
# 412 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_SCREAM_TAIL_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_95
JurassicPark_Final_Lab_EventScript_Drampa_Scene_91:
# 415 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitstate
# 416 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	clearflag FLAG_SYS_DONT_TRANSITION_BATTLE_MUSIC
# 417 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playbgm MUS_CALM_CUTSCENE, 0
# 418 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_112, localId = VAR_LOCALID_CUTSCENE_MAIN
# 419 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_113, localId = LOCALID_PLAYER
# 420 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_106, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 421 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_106, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 422 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 424 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_98
# 426 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_99
# 428 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_100
JurassicPark_Final_Lab_EventScript_Drampa_Scene_96:
# 431 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_117, localId = LOCALID_SLITHER_WING_LAB
# 432 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_118, localId = VAR_LOCALID_CUTSCENE_MAIN
# 433 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_119, localId = LOCALID_SLITHER_WING_LAB
# 434 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay 100
# 435 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setflag FLAG_NO_OW_MUSIC
# 436 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	clearflag FLAG_ALWAYS_RAINING
# 437 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_AFTER_DRAMPA
# 438 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 439 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	warp MAP_JURASSIC_PARK_BRIDGE_AND_LAB, 48, 16
# 440 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitstate
	return

JurassicPark_Final_Lab_EventScript_Drampa_Scene_3:
# 46 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_1

JurassicPark_Final_Lab_EventScript_Drampa_Scene_4:
# 48 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_1

JurassicPark_Final_Lab_EventScript_Drampa_Scene_5:
# 50 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_2, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_1

JurassicPark_Final_Lab_EventScript_Drampa_Scene_8:
# 61 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_3, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_6

JurassicPark_Final_Lab_EventScript_Drampa_Scene_9:
# 63 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_4, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_6

JurassicPark_Final_Lab_EventScript_Drampa_Scene_10:
# 65 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_5, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_6

JurassicPark_Final_Lab_EventScript_Drampa_Scene_13:
# 79 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_10, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_11

JurassicPark_Final_Lab_EventScript_Drampa_Scene_14:
# 81 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_11, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_11

JurassicPark_Final_Lab_EventScript_Drampa_Scene_15:
# 83 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_12, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_11

JurassicPark_Final_Lab_EventScript_Drampa_Scene_18:
# 93 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_15, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_16

JurassicPark_Final_Lab_EventScript_Drampa_Scene_19:
# 95 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_16, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_16

JurassicPark_Final_Lab_EventScript_Drampa_Scene_20:
# 97 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_17, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SIGH
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_16

JurassicPark_Final_Lab_EventScript_Drampa_Scene_23:
# 116 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_23, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_21

JurassicPark_Final_Lab_EventScript_Drampa_Scene_24:
# 118 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_24, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_21

JurassicPark_Final_Lab_EventScript_Drampa_Scene_25:
# 120 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_25, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_21

JurassicPark_Final_Lab_EventScript_Drampa_Scene_28:
# 140 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_32, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 141 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_33, localId = LOCALID_DRAMPA_LAB
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_26

JurassicPark_Final_Lab_EventScript_Drampa_Scene_29:
# 144 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_34, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 145 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_35, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_26

JurassicPark_Final_Lab_EventScript_Drampa_Scene_30:
# 148 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_36, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 149 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_37, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_26

JurassicPark_Final_Lab_EventScript_Drampa_Scene_33:
# 161 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_41, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_31

JurassicPark_Final_Lab_EventScript_Drampa_Scene_34:
# 163 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_42, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_31

JurassicPark_Final_Lab_EventScript_Drampa_Scene_35:
# 165 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_43, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_31

JurassicPark_Final_Lab_EventScript_Drampa_Scene_38:
# 172 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_46, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_36

JurassicPark_Final_Lab_EventScript_Drampa_Scene_39:
# 174 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_47, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_36

JurassicPark_Final_Lab_EventScript_Drampa_Scene_40:
# 176 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_48, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_36

JurassicPark_Final_Lab_EventScript_Drampa_Scene_43:
# 195 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_53, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_41

JurassicPark_Final_Lab_EventScript_Drampa_Scene_44:
# 197 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_54, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_41

JurassicPark_Final_Lab_EventScript_Drampa_Scene_45:
# 199 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_55, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_41

JurassicPark_Final_Lab_EventScript_Drampa_Scene_48:
# 213 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_59, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_46

JurassicPark_Final_Lab_EventScript_Drampa_Scene_49:
# 215 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_60, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_46

JurassicPark_Final_Lab_EventScript_Drampa_Scene_50:
# 217 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_61, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_46

JurassicPark_Final_Lab_EventScript_Drampa_Scene_53:
# 223 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_63, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_51

JurassicPark_Final_Lab_EventScript_Drampa_Scene_54:
# 225 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_64, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_51

JurassicPark_Final_Lab_EventScript_Drampa_Scene_55:
# 227 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_65, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_51

JurassicPark_Final_Lab_EventScript_Drampa_Scene_58:
# 246 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	removeobject LOCALID_BAGON_LAB
# 247 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_ROARING_MOON_LAB
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_56

JurassicPark_Final_Lab_EventScript_Drampa_Scene_59:
# 249 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	removeobject LOCALID_PHANPY_LAB
# 250 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_GREAT_TUSK_LAB
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_56

JurassicPark_Final_Lab_EventScript_Drampa_Scene_60:
# 252 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_LAB
# 253 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_SCREAM_TAIL_LAB
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_56

JurassicPark_Final_Lab_EventScript_Drampa_Scene_63:
# 262 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_70, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_61

JurassicPark_Final_Lab_EventScript_Drampa_Scene_64:
# 264 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_71, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_61

JurassicPark_Final_Lab_EventScript_Drampa_Scene_65:
# 266 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_72, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_61

JurassicPark_Final_Lab_EventScript_Drampa_Scene_68:
# 300 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_75, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_66

JurassicPark_Final_Lab_EventScript_Drampa_Scene_69:
# 302 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_76, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_66

JurassicPark_Final_Lab_EventScript_Drampa_Scene_70:
# 304 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_77, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_66

JurassicPark_Final_Lab_EventScript_Drampa_Scene_73:
# 311 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_80, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_71

JurassicPark_Final_Lab_EventScript_Drampa_Scene_74:
# 313 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_80, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_71

JurassicPark_Final_Lab_EventScript_Drampa_Scene_75:
# 315 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_81, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_71

JurassicPark_Final_Lab_EventScript_Drampa_Scene_78:
# 321 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_83, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_76

JurassicPark_Final_Lab_EventScript_Drampa_Scene_79:
# 323 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_84, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_76

JurassicPark_Final_Lab_EventScript_Drampa_Scene_80:
# 325 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_85, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_76

JurassicPark_Final_Lab_EventScript_Drampa_Scene_83:
# 332 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_88, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_81

JurassicPark_Final_Lab_EventScript_Drampa_Scene_84:
# 334 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_89, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_81

JurassicPark_Final_Lab_EventScript_Drampa_Scene_85:
# 336 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_90, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_81

JurassicPark_Final_Lab_EventScript_Drampa_Scene_88:
# 350 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_96, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_86

JurassicPark_Final_Lab_EventScript_Drampa_Scene_89:
# 352 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_97, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_86

JurassicPark_Final_Lab_EventScript_Drampa_Scene_90:
# 354 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_98, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_86

JurassicPark_Final_Lab_EventScript_Drampa_Scene_93:
# 409 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	puzzlebattle BP_ROARING_MOON
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_91

JurassicPark_Final_Lab_EventScript_Drampa_Scene_94:
# 411 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	puzzlebattle BP_GREAT_TUSK
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_91

JurassicPark_Final_Lab_EventScript_Drampa_Scene_95:
# 413 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	puzzlebattle BP_SCREAM_TAIL
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_91

JurassicPark_Final_Lab_EventScript_Drampa_Scene_98:
# 425 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_114, localId = VAR_LOCALID_CUTSCENE_MAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_96

JurassicPark_Final_Lab_EventScript_Drampa_Scene_99:
# 427 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_115, localId = VAR_LOCALID_CUTSCENE_MAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_96

JurassicPark_Final_Lab_EventScript_Drampa_Scene_100:
# 429 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_116, localId = VAR_LOCALID_CUTSCENE_MAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_96


# 38 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_0:
# 38 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_left
# 38 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
	step_end

# 41 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1:
# 41 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
	step_end

# 68 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_2:
# 68 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 68 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay_16
# 68 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay_16
# 68 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_3:
# 87 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
	step_end

# 100 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_4:
# 100 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_left
# 100 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 106 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_5:
# 106 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_left
	step_end

# 110 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_6:
# 110 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
# 110 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 130 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_7:
# 130 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 154 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_8:
# 154 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
# 154 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
# 154 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 182 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_9:
# 182 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_down
	step_end

# 190 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_10:
# 190 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 190 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay_16
# 190 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	lock_facing_direction
# 190 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_down
# 190 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	unlock_facing_direction
	step_end

# 204 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_11:
# 204 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 204 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay_16
	step_end

# 233 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_12:
# 233 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	lock_facing_direction
# 233 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
# 233 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	unlock_facing_direction
	step_end

# 270 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_13:
# 270 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
# 270 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_right
# 270 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_right
# 270 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_right
	step_end

# 276 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_14:
# 276 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
# 276 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_up
# 276 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_up
	step_end

# 281 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_15:
# 281 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	lock_facing_direction
# 281 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_down
# 281 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	unlock_facing_direction
# 281 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_down
# 281 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_down
# 281 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_down
# 281 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_down
	step_end

# 286 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_16:
# 286 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
# 286 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
# 286 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
# 286 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_left
# 286 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_left
# 286 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_left
	step_end

# 340 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_17:
# 340 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	face_right
	step_end

# 362 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_18:
# 362 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	face_up
	step_end

# 374 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_19:
# 374 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	lock_facing_direction
# 374 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_down
# 374 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	unlock_facing_direction
	step_end

# 384 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_20:
# 384 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	set_invisible
	step_end

# 396 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_21:
# 396 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	face_down
	step_end

# 401 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_22:
# 401 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_down
# 401 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_left
# 401 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_fast_left
# 401 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	face_down
	step_end

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_0:
# 46 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Ah!\n"
	.string "He's there!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_1:
# 48 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…There he is.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_2:
# 50 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Well, well, well.\p"
	.string "Look who we have there.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_3:
# 61 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "H-hey, you!!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_4:
# 63 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Doctor!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_5:
# 65 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "John Drampa, we meet again.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_6:
# 70 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You!\n"
	.string "You're…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_7:
# 71 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You're alive.\p"
	.string "That's… Good.\n"
	.string "That's good.\p"
	.string "But, weren't there four of you?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_8:
# 72 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(… … …!)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_9:
# 73 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Ah.\n"
	.string "Right.\p"
	.string "Regrettable.\n"
	.string "Very, very, regrettable.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_10:
# 79 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "We won't forgive you for what you did\n"
	.string "for our friend!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_11:
# 81 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Doctor, we won't let you open this park!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_12:
# 83 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Your little mad science experiment ends\n"
	.string "now.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_13:
# 85 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…So this is how it is?\p"
	.string "Hmm.\n"
	.string "Let me tell you a story.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_14:
# 89 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Have you ever felt like our society\n"
	.string "was…\n"
	.string "Degenerate?\l"
	.string "Rotten to the core?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_15:
# 93 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Not, really…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_16:
# 95 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "What are you even talking about…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_17:
# 97 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Oh, great, here we go.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_18:
# 102 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…I'm quite serious.\n"
	.string "Society is heading to its collapse.\p"
	.string "Weak Pokémon rule over weak Pokémon.\n"
	.string "Lawlessness and banditism are\l"
	.string "everywhere.\p"
	.string "Even this…\n"
	.string "Treasure hunting of yours.\p"
	.string "Who is that supposed to benefit?\n"
	.string "Society?\p"
	.string "No, I don't think so.\p"
	.string "Common ruffians, the lot of you.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_19:
# 103 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Hey!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_20:
# 104 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(This is quite a strange way to see\n"
	.string "things…)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_21:
# 108 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Of course, with my intellect, I foresaw\n"
	.string "all of this.\p"
	.string "And so I looked to the past.\p"
	.string "Yes, at a time before recorded history.\n"
	.string "When powerful Pokémon ruled the world.\p"
	.string "The strong consumed the weak.\p"
	.string "Simple.\n"
	.string "Beautiful.\n"
	.string "Effective.\p"
	.string "But this wonderful civilisation…\n"
	.string "Did not have a chance to thrive.\p"
	.string "Wiped out by a cataclysm.\p"
	.string "Quite unfair, don't you think?\p"
	.string "And so I decided…\n"
	.string "To bring them back.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_22:
# 112 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I spent all my fortunes, and decades of\n"
	.string "my life, to study genetic engineering.\p"
	.string "And finally, the breakthrough.\p"
	.string "I could resurrect them, so they could\n"
	.string "rule again.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_23:
# 116 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "These aren't rulers!\p"
	.string "These are monsters!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_24:
# 118 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…That didn't turn out the way you\n"
	.string "wanted, did it?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_25:
# 120 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Your enlightened rulers have the\n"
	.string "intelligence of a rock.\p"
	.string "No offense to rocks.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_26:
# 122 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Indeed.\n"
	.string "I was confronted with the reality.\p"
	.string "They were strong, yes.\n"
	.string "Stronger than any Pokémon of today.\p"
	.string "But they were…\n"
	.string "Mindless.\p"
	.string "Strength, without wisdom, is nothing.\p"
	.string "I brought back ancient Pokémon after\n"
	.string "ancient Pokémon, and they were all\l"
	.string "disappointments.\p"
	.string "Even Tyrantrum, the mighty king of the\n"
	.string "prehistoric world…\p"
	.string "When I discovered that it possessed no\n"
	.string "intellect, I was thrown into the\l"
	.string "deepest despair.\p"
	.string "But then…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_27:
# 126 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I realised how powerful I myself had\n"
	.string "become.\p"
	.string "I unlocked the secrets of life.\p"
	.string "I could…\n"
	.string "Create my own gods.\p"
	.string "There were so many avenues to explore!\n"
	.string "But before long, I ran out of money.\p"
	.string "And so, I had an idea.\p"
	.string "What if I took all my failures, and\n"
	.string "exhibited them for the world to see…\l"
	.string "For a price, of course.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_28:
# 127 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You're insane.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_29:
# 128 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "What did you say about…\p"
	.string "Creating gods?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_30:
# 132 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Ah!\n"
	.string "Piqued your interest, didn't I!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_31:
# 135 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Yes, there were many options I\n"
	.string "experimented with.\p"
	.string "But one of them was particularly\n"
	.string "promising.\p"
	.string "Say, are you familiar with the concept\n"
	.string "of…\p"
	.string "{COLOR RED}Genetic cross-over?{COLOR DARK_GRAY}$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_32:
# 140 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Genetic…\n"
	.string "What?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_33:
# 141 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Genetic cross-over.\p"
	.string "The exchange of genetic material\n"
	.string "between different chromosomes.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_34:
# 144 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Isn't that…\p"
	.string "What causes babies to be a mix of their\n"
	.string "parents…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_35:
# 145 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "An imprecise definition, but in a\n"
	.string "nutshell, yes!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_36:
# 148 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Isn't that like, a sex thing.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_37:
# 149 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…In a sense.\p"
	.string "More accurately, it's the exchange of\n"
	.string "genetic material between chromosomes\l"
	.string "during reproduction.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_38:
# 151 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You see, I developed a virus capable of\n"
	.string "altering the genetic makeup of\l"
	.string "Pokémon, on the fly.\p"
	.string "You take a Pokémon with knowledge,\n"
	.string "wisdom, and intellect…\p"
	.string "And inject them with a retrovirus\n"
	.string "containing prehistoric DNA.\p"
	.string "The result is the transformation into a\n"
	.string "superior lifeform.\p"
	.string "I call it the {COLOR RED}cross-over virus{COLOR DARK_GRAY}.\n"
	.string "Or {COLOR RED}C.O.V.{COLOR DARK_GRAY}, if you prefer.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_39:
# 152 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Why are you telling us all this…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_40:
# 156 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…You know, I really was intending on\n"
	.string "letting you leave.\p"
	.string "The park needs some good publicity,\n"
	.string "before its opening.\p"
	.string "But you've seen too much.\p"
	.string "You've seen the…\n"
	.string "Flaws.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_41:
# 161 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Are you going to…\n"
	.string "Kill us?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_42:
# 163 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…You're planning to get rid of us.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_43:
# 165 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "How classic.\p"
	.string "Monologuing before you kill us.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_44:
# 167 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "What?!\p"
	.string "Of course not!\n"
	.string "Do you take me for a common murderer?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_45:
# 168 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Ahem.\p"
	.string "As I said, what happened to your friend\n"
	.string "was an accident.\p"
	.string "And, good heavens, why would I waste\n"
	.string "time explaining everything if I was\l"
	.string "planning to kill you?\p"
	.string "No, I will just be taking you as my\n"
	.string "assistants.\p"
	.string "It's hard to run a park by myself, after\n"
	.string "all.\p"
	.string "And you have proven yourselves to be\n"
	.string "more than capable to handle the job.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_46:
# 172 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Ok, and what if we just refuse?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_47:
# 174 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Assistants?\p"
	.string "I don't think so!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_48:
# 176 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Are you stupid?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_49:
# 178 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Of course, I am perfectly aware that\n"
	.string "you would not be willing to take this\l"
	.string "opportunity without some…\p"
	.string "Incentive.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_50:
# 179 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(As if we would do this for any amount\n"
	.string "of money in the world!)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_51:
# 180 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Money?\n"
	.string "You seem to misunderstand.\p"
	.string "No, what I mean is…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_52:
# 188 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "This.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_53:
# 195 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Owww!\p"
	.string "A needle?\p"
	.string "What…\n"
	.string "What was in it…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_54:
# 197 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Ow!\p"
	.string "What was that f-…\p"
	.string "Wait…\n"
	.string "Don't tell me, in this needle…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_55:
# 199 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Ow!\n"
	.string "Hey!\p"
	.string "What did you inject me with?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_56:
# 201 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "The C.O.V., of course.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_57:
# 208 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(No…\n"
	.string "What's gonna happen now?!)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_58:
# 209 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I had to stop my research, but I did\n"
	.string "manage to get some batches made.\p"
	.string "Your friend here will transmute into\n"
	.string "something greater.\p"
	.string "Of course, they won't be the same\n"
	.string "Pokémon you've known them as.\p"
	.string "Now, theoretically, a vaccine could be\n"
	.string "made.\p"
	.string "But only if I'm allowed to continue my\n"
	.string "research.\p"
	.string "And you'll help me, won't you?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_59:
# 213 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Larvy, we need to get out of this island\n"
	.string "and find help, now!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_60:
# 215 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "We'll find someone else…\p"
	.string "That can make the vaccine!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_61:
# 217 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You…\n"
	.string "We'll find someone else that can make a\l"
	.string "vaccine!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_62:
# 219 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Leave and I'll destroy my research.\n"
	.string "All of it.\p"
	.string "I spent more than half my life on this.\p"
	.string "Maybe someone will be able to make a\n"
	.string "vaccine.\p"
	.string "How long will it take?\n"
	.string "Fifty years?\l"
	.string "A century, without my genius?\p"
	.string "Suit yourselves.\n"
	.string "But I think I know what you will choose.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_63:
# 223 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "WAAAAA!\p"
	.string "MAKE IT STOP!\n"
	.string "MAKE IT STOP!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_64:
# 225 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "WHAT DID YOU DO?!\p"
	.string "TAKE IT BACK!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_65:
# 227 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "WAAAAA!\p"
	.string "HOW DARE YOU STAB ME!\p"
	.string "HOW D-\n"
	.string "WAAAAAAAH!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_66:
# 229 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Please, calm yourself down.\p"
	.string "Your mental state will affect the\n"
	.string "result of the metamorphosis.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_67:
# 230 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "WAAAAAAAH!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_68:
# 231 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Settle down, I said!\p"
	.string "It's going to happen soon!\p"
	.string "You wouldn't want to…!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_69:
# 258 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "GRAAAAAH!\n"
	.string "GRAAAAAH!!!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_70:
# 262 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "No!\n"
	.string "Bagon!\p"
	.string "Can can you hear me, Bagon?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_71:
# 264 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "No!\n"
	.string "Phanpy!\p"
	.string "Can can you hear me, Phanpy?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_72:
# 266 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "No!\n"
	.string "Jiggly!\p"
	.string "Can can you hear me, Jiggly?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_73:
# 268 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "GWOOOOH!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_74:
# 274 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "GRAHHHHH!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_75:
# 300 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Bagon…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_76:
# 302 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Phanpy…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_77:
# 304 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Jiggly…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_78:
# 306 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I said to stay still!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_79:
# 307 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Well, this is a problem.\p"
	.string "If the metamorphosis happens under\n"
	.string "stress, the resulting specimen tends\l"
	.string "to…\p"
	.string "Self destruct.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_80:
# 311 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "What?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_81:
# 315 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You're joking…!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_82:
# 317 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "And here I was hoping to find an\n"
	.string "agreeable solution.\p"
	.string "…Hmmm.\n"
	.string "Unless.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_83:
# 321 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Please, tell us how to save our friend!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_84:
# 323 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Unless…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_85:
# 325 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Out with it, old man!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_86:
# 327 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Well, if one of you was willing to let me\n"
	.string "inject them with C.O.V.…\p"
	.string "If they didn't panic during the\n"
	.string "operation, they could mantain their\l"
	.string "senses.\p"
	.string "Maybe find a way to communicate?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_87:
# 328 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Ah, communication!\n"
	.string "This will be a brand new experiment!\p"
	.string "Oh, the data I will get from this!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_88:
# 332 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_89:
# 334 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "This is ridiculous!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_90:
# 336 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I swear, I will kill you with my bare\n"
	.string "hands.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_91:
# 339 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(… … …\n"
	.string "I'll do it.)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_92:
# 342 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Larvy, no…!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_93:
# 343 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Phenomenal!\p"
	.string "A willing subject!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_94:
# 344 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Larvy, why would you…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_95:
# 346 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(…I'm not going to let someone die\n"
	.string "again.)\p"
	.string "(If this is what it takes to protect my\n"
	.string "friends…\l"
	.string "I will do it.)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_96:
# 350 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Phanpy, please!\p"
	.string "Not you too!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_97:
# 352 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Phanpy, no!\p"
	.string "There has to be another way…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_98:
# 354 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I'll kill you too!\n"
	.string "I will!.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_99:
# 356 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Now, now, they made their choice.\p"
	.string "Come here.\n"
	.string "Future generations will thank you.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_100:
# 364 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Say goodbye to your friend, now.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_101:
# 365 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(Please forgive me.)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_102:
# 366 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "LARVY!!!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_103:
# 388 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "GRAAAAAAAH!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_104:
# 389 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "({COLOR RED}KILL. CRUSH.\n"
	.string "DESTROY. ATTACK.{COLOR DARK_GRAY})\p"
	.string "(!!!)\p"
	.string "(What… Are… These… Thoughts…?!)\p"
	.string "({COLOR RED}ATTACK. ATTACK.\n"
	.string "KILL. KILL.{COLOR DARK_GRAY})$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_105:
# 390 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "… … …!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_106:
# 391 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "… … …$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_107:
# 392 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(I… {COLOR RED}DESTROY.{COLOR DARK_GRAY}\n"
	.string "Can't… {COLOR RED}KILL.{COLOR DARK_GRAY}\l"
	.string "Understand them… {COLOR RED}CRUSH.{COLOR DARK_GRAY})$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_108:
# 394 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "({COLOR RED}PAIN. HELP. KILL.{COLOR DARK_GRAY})$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_109:
# 395 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(!!!)\p"
	.string "(I can hear… {COLOR RED}KILL.{COLOR DARK_GRAY}\n"
	.string "I can hear… You!)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_110:
# 398 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(Larvy…!)\p"
	.string "(Larvy… {COLOR RED}PAIN{COLOR DARK_GRAY}\n"
	.string "Help…{COLOR RED}FEAR.{COLOR DARK_GRAY}\l"
	.string "Me…{COLOR RED}KILL KILL KILL.{COLOR DARK_GRAY})$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_111:
# 399 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "GRAHHHHHHH!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_112:
# 418 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(Larvy…)\p"
	.string "(Calmed…\n"
	.string "Down…)\p"
	.string "(Going…\n"
	.string "Home…?)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_113:
# 419 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(Sorry…\n"
	.string "Must… Stay, for now…)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_114:
# 425 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(Bagon…\n"
	.string "Okay…?)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_115:
# 427 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(Phanpy…\n"
	.string "Okay…?)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_116:
# 429 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(Jiggly…\n"
	.string "Okay…?)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_117:
# 431 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(Yes…)\p"
	.string "(But… Must, stay…\n"
	.string "On island.)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_118:
# 432 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(As long, as…\n"
	.string "Together.)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_119:
# 433 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(…Yes.\n"
	.string "Together.)$"
