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
	switch VAR_LOCALID_CUTSCENE_MAIN
# 42 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_3
# 44 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_4
# 46 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_5
JurassicPark_Final_Lab_EventScript_Drampa_Scene_1:
# 49 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 50 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 51 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 52 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 53 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 54 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 56 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_8
# 58 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_9
# 60 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_10
JurassicPark_Final_Lab_EventScript_Drampa_Scene_6:
# 63 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_PIN
# 64 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_2
# 65 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 66 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_6, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 67 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_7, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 68 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 69 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_9, localId = LOCALID_DRAMPA_LAB
# 70 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 71 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 72 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 74 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_13
# 76 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_14
# 78 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_15
JurassicPark_Final_Lab_EventScript_Drampa_Scene_11:
# 81 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_13, localId = LOCALID_DRAMPA_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 82 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 83 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_3
# 84 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 85 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_14, localId = LOCALID_JIGGLYPUFF_LAB, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 86 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 88 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_18
# 90 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_19
# 92 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_20
JurassicPark_Final_Lab_EventScript_Drampa_Scene_16:
# 95 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 96 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_4
# 97 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 98 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_18, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 99 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_19, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 100 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_20, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 101 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 102 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_5
# 103 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 104 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_21, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 105 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 106 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_6
# 107 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 108 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_22, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 109 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 111 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_23
# 113 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_24
# 115 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_25
JurassicPark_Final_Lab_EventScript_Drampa_Scene_21:
# 118 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_26, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 119 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 120 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_5
# 121 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 122 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_27, localId = LOCALID_DRAMPA_LAB
# 123 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_28, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 124 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_29, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 125 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 126 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_7
# 127 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 128 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_30, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 129 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 130 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_4
# 131 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_31, localId = LOCALID_DRAMPA_LAB
# 132 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 135 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_28
# 139 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_29
# 143 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_30
JurassicPark_Final_Lab_EventScript_Drampa_Scene_26:
# 147 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_38, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 148 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_39, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 149 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 150 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_8
# 151 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 152 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_40, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 153 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 154 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1
# 155 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 156 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 158 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_33
# 160 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_34
# 162 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_35
JurassicPark_Final_Lab_EventScript_Drampa_Scene_31:
# 165 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_44, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 166 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_45, localId = LOCALID_DRAMPA_LAB
# 167 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 169 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_38
# 171 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_39
# 173 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_40
JurassicPark_Final_Lab_EventScript_Drampa_Scene_36:
# 176 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_49, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 177 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_50, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 178 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_51, localId = LOCALID_DRAMPA_LAB
# 179 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 180 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_9
# 181 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 182 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playbgm MUS_DUMMY, 0
# 183 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_M_ABSORB
# 184 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitse
# 185 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_52, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 186 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 188 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_43
# 190 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_44
# 192 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_45
JurassicPark_Final_Lab_EventScript_Drampa_Scene_41:
# 195 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_56, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 196 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 197 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_PIN
# 198 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_10
# 199 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_MAIN, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_10
# 200 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement VAR_LOCALID_CUTSCENE_SECOND, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_10
# 201 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement 0
# 202 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_57, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 203 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_58, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 204 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_SECOND
# 206 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_48
# 208 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_49
# 210 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_50
JurassicPark_Final_Lab_EventScript_Drampa_Scene_46:
# 213 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_62, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 214 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 216 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_53
# 218 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_54
# 220 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_55
JurassicPark_Final_Lab_EventScript_Drampa_Scene_51:
# 223 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_66, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 224 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_67, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 225 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_68, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 226 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	closemessage
# 227 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	special SpawnCameraObject
# 228 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_11
# 229 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_12
# 230 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitmovement LOCALID_CAMERA
# 231 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	dofieldeffectsparkle 10, 7, 0
# 232 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 233 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_RESULT, 0
# 234 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playbgm MUS_VS_BOSS_POWERFUL, 0
# 235 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	playse SE_ORB
# 236 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	special DoOrbEffect
# 237 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay 150
# 238 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	switch VAR_LOCALID_CUTSCENE_MAIN
# 240 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_BAGON_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_58
# 243 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_PHANPY_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_59
# 246 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	case LOCALID_JIGGLYPUFF_LAB, JurassicPark_Final_Lab_EventScript_Drampa_Scene_60
JurassicPark_Final_Lab_EventScript_Drampa_Scene_56:
# 250 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 10, 7
# 251 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
	return

JurassicPark_Final_Lab_EventScript_Drampa_Scene_3:
# 43 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_0, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_1

JurassicPark_Final_Lab_EventScript_Drampa_Scene_4:
# 45 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_1, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_1

JurassicPark_Final_Lab_EventScript_Drampa_Scene_5:
# 47 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_2, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_1

JurassicPark_Final_Lab_EventScript_Drampa_Scene_8:
# 57 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_3, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_6

JurassicPark_Final_Lab_EventScript_Drampa_Scene_9:
# 59 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_4, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_6

JurassicPark_Final_Lab_EventScript_Drampa_Scene_10:
# 61 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_5, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_6

JurassicPark_Final_Lab_EventScript_Drampa_Scene_13:
# 75 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_10, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_11

JurassicPark_Final_Lab_EventScript_Drampa_Scene_14:
# 77 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_11, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_11

JurassicPark_Final_Lab_EventScript_Drampa_Scene_15:
# 79 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_12, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_11

JurassicPark_Final_Lab_EventScript_Drampa_Scene_18:
# 89 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_15, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_16

JurassicPark_Final_Lab_EventScript_Drampa_Scene_19:
# 91 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_16, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_16

JurassicPark_Final_Lab_EventScript_Drampa_Scene_20:
# 93 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_17, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SIGH
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_16

JurassicPark_Final_Lab_EventScript_Drampa_Scene_23:
# 112 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_23, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_21

JurassicPark_Final_Lab_EventScript_Drampa_Scene_24:
# 114 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_24, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_21

JurassicPark_Final_Lab_EventScript_Drampa_Scene_25:
# 116 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_25, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_21

JurassicPark_Final_Lab_EventScript_Drampa_Scene_28:
# 136 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_32, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 137 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_33, localId = LOCALID_DRAMPA_LAB
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_26

JurassicPark_Final_Lab_EventScript_Drampa_Scene_29:
# 140 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_34, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 141 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_35, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_26

JurassicPark_Final_Lab_EventScript_Drampa_Scene_30:
# 144 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_36, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 145 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_37, localId = LOCALID_DRAMPA_LAB, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_26

JurassicPark_Final_Lab_EventScript_Drampa_Scene_33:
# 159 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_41, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_31

JurassicPark_Final_Lab_EventScript_Drampa_Scene_34:
# 161 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_42, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_31

JurassicPark_Final_Lab_EventScript_Drampa_Scene_35:
# 163 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_43, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_31

JurassicPark_Final_Lab_EventScript_Drampa_Scene_38:
# 170 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_46, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_36

JurassicPark_Final_Lab_EventScript_Drampa_Scene_39:
# 172 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_47, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_36

JurassicPark_Final_Lab_EventScript_Drampa_Scene_40:
# 174 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_48, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_36

JurassicPark_Final_Lab_EventScript_Drampa_Scene_43:
# 189 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_53, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_41

JurassicPark_Final_Lab_EventScript_Drampa_Scene_44:
# 191 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_54, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_41

JurassicPark_Final_Lab_EventScript_Drampa_Scene_45:
# 193 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_55, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_41

JurassicPark_Final_Lab_EventScript_Drampa_Scene_48:
# 207 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_59, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_46

JurassicPark_Final_Lab_EventScript_Drampa_Scene_49:
# 209 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_60, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_46

JurassicPark_Final_Lab_EventScript_Drampa_Scene_50:
# 211 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_61, localId = VAR_LOCALID_CUTSCENE_SECOND, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_46

JurassicPark_Final_Lab_EventScript_Drampa_Scene_53:
# 217 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_63, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_51

JurassicPark_Final_Lab_EventScript_Drampa_Scene_54:
# 219 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_64, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_51

JurassicPark_Final_Lab_EventScript_Drampa_Scene_55:
# 221 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	mnmbox JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_65, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_51

JurassicPark_Final_Lab_EventScript_Drampa_Scene_58:
# 241 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	removeobject LOCALID_BAGON_LAB
# 242 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_ROARING_MOON_LAB
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_56

JurassicPark_Final_Lab_EventScript_Drampa_Scene_59:
# 244 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	removeobject LOCALID_PHANPY_LAB
# 245 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_GREAT_TUSK_LAB
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_56

JurassicPark_Final_Lab_EventScript_Drampa_Scene_60:
# 247 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_LAB
# 248 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_SCREAM_TAIL_LAB
	goto JurassicPark_Final_Lab_EventScript_Drampa_Scene_56


# 38 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_0:
# 38 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_left
# 38 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
	step_end

# 50 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_1:
# 50 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_2:
# 64 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 64 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay_16
# 64 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay_16
# 64 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_3:
# 83 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
	step_end

# 96 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_4:
# 96 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_left
# 96 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 102 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_5:
# 102 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_6:
# 106 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
# 106 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 126 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_7:
# 126 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 150 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_8:
# 150 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
# 150 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
# 150 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 180 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_9:
# 180 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_down
# 180 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_down
	step_end

# 198 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_10:
# 198 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 198 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	delay_16
	step_end

# 228 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_11:
# 228 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	lock_facing_direction
# 228 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
# 228 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	unlock_facing_direction
	step_end

# 229 "data/maps/JurassicPark_Final_Lab/scripts.pory"
JurassicPark_Final_Lab_EventScript_Drampa_Scene_Movement_12:
# 229 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_right
# 229 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	walk_up
	step_end

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_0:
# 43 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Ah!\n"
	.string "He's there!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_1:
# 45 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…There he is.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_2:
# 47 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Well, well, well.\p"
	.string "Look who we have there.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_3:
# 57 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "H-hey, you!!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_4:
# 59 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Doctor!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_5:
# 61 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "John Drampa, we meet again.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_6:
# 66 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You!\n"
	.string "You're…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_7:
# 67 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You're alive.\p"
	.string "That's… Good.\n"
	.string "That's good.\p"
	.string "But, weren't there four of you?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_8:
# 68 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(… … …)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_9:
# 69 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Ah.\n"
	.string "I see.\p"
	.string "Regrettable.\n"
	.string "Very, very, regrettable.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_10:
# 75 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "We won't forgive you for what you did\n"
	.string "for our friend!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_11:
# 77 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Doctor, we won't let you open this park!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_12:
# 79 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Your little mad science experiment ends\n"
	.string "now.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_13:
# 81 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…So this is how it is?\p"
	.string "Hmm.\n"
	.string "Let me tell you a story.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_14:
# 85 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Have you ever felt like our society\n"
	.string "was…\n"
	.string "Degenerate?\p"
	.string "Rotten to the core?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_15:
# 89 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Not, really…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_16:
# 91 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "What are you even talking about…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_17:
# 93 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Oh, great, here we go.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_18:
# 98 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…I'm quite serious.\p"
	.string "Society is heading to its collapse.\p"
	.string "Weak Pokémon rule over weak Pokémon.\p"
	.string "Lawlessness and banditism are\n"
	.string "everywhere.\p"
	.string "Even this…\n"
	.string "Treasure hunting of yours.\p"
	.string "Who is that supposed to benefit?\n"
	.string "Society?\p"
	.string "No, I don't think so.\p"
	.string "Common ruffians, the lot of you.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_19:
# 99 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Hey!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_20:
# 100 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(This is quite a strange way to see\n"
	.string "things…)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_21:
# 104 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Of course, with my intellect, I foresaw\n"
	.string "all of this.\p"
	.string "And so I looked to the past.\p"
	.string "Yes, at a time before recorded history.\p"
	.string "When powerful Pokémon ruled the world.\p"
	.string "The strong consumed the weak.\p"
	.string "Simple.\n"
	.string "Beautiful.\n"
	.string "Effective.\p"
	.string "But this wonderful civilisation…\n"
	.string "Did not have a chance to thrive.\p"
	.string "Wiped out by a cataclysm.\p"
	.string "Quite unfair, don't you think?\p"
	.string "And so I decided…\p"
	.string "To bring them back.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_22:
# 108 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I spent all my fortunes, and decades of\n"
	.string "my life, to study genetic engineering.\p"
	.string "And finally, the breakthrough.\p"
	.string "I could bring them back, so they could\n"
	.string "rule again.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_23:
# 112 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "These aren't rulers!\p"
	.string "These are monsters!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_24:
# 114 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…That didn't turn out the way you\n"
	.string "wanted, did it?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_25:
# 116 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Your enlightened rulers have the\n"
	.string "intelligence of a rock.\p"
	.string "No offense to rocks.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_26:
# 118 "data/maps/JurassicPark_Final_Lab/scripts.pory"
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
	.string "I will be honest with you.\p"
	.string "When I discovered that it possessed no\n"
	.string "intellect, I was thrown into the\l"
	.string "deepest despair.\p"
	.string "But then…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_27:
# 122 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I realised how powerful I myself had\n"
	.string "become.\p"
	.string "I unlocked the secrets of genetic\n"
	.string "engineering.\p"
	.string "I could…\n"
	.string "Create my own gods.\p"
	.string "There were so many avenues to explore!\p"
	.string "Cloning.\n"
	.string "Splicing.\l"
	.string "Creation of entirely new lifeforms.\p"
	.string "But before long, I ran out of money.\p"
	.string "And so, I had an idea.\p"
	.string "What if I took all my failures, and\n"
	.string "exhibited them for the world to see…\l"
	.string "For a price, of course.\p"
	.string "And through this, not only will I cover\n"
	.string "all my fundings…\p"
	.string "But I will be sure to have access to\n"
	.string "plenty of…\n"
	.string "Test subjects.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_28:
# 123 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You're insane.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_29:
# 124 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "What did you say about…\p"
	.string "Creating gods?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_30:
# 128 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Ah!\n"
	.string "Piqued your interest, didn't I!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_31:
# 131 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Yes, there were many options I\n"
	.string "experimented with.\p"
	.string "But one of them was particularly\n"
	.string "promising.\p"
	.string "Say, are you familiar with the concept\n"
	.string "of…\p"
	.string "{COLOR RED}Genetic cross-over?{COLOR DARK_GRAY}$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_32:
# 136 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Genetic…\n"
	.string "What?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_33:
# 137 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Genetic cross-over.\p"
	.string "The exchange of genetic material\n"
	.string "between chromosomes during\l"
	.string "reproduction.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_34:
# 140 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Isn't that…\p"
	.string "What causes babies to be a mix of their\n"
	.string "parents…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_35:
# 141 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "An imprecise definition, but in a\n"
	.string "nutshell, yes!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_36:
# 144 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Isn't that like, a sex thing.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_37:
# 145 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…In a sense.\p"
	.string "More accurately, it's the exchange of\n"
	.string "genetic material between chromosomes\l"
	.string "during reproduction.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_38:
# 147 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You see, I developed a virus capable of\n"
	.string "altering the genetic makeup of\l"
	.string "Pokémon.\p"
	.string "You take a Pokémon with knowledge,\n"
	.string "wisdom, and intellect…\p"
	.string "And inject them with a retrovirus\n"
	.string "containing prehistoric DNA.\p"
	.string "The result is the transformation into a\n"
	.string "superior lifeform.\p"
	.string "Believe it or not, much easier than\n"
	.string "growing one from scratch.\p"
	.string "I call it the cross-over virus.\n"
	.string "Or C.O.V., if you prefer.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_39:
# 148 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Why are you telling us all this…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_40:
# 152 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…You know, I really was intending on\n"
	.string "letting you leave.\p"
	.string "The park needs some good publicity,\n"
	.string "before its opening.\p"
	.string "But you've seen too much.\p"
	.string "You've seen the…\n"
	.string "Flaws.\p"
	.string "I can't let this chance be ruined, you\n"
	.string "see.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_41:
# 159 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Are you going to…\n"
	.string "Kill us?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_42:
# 161 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…You're planning to get rid of us.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_43:
# 163 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "How classic.\p"
	.string "Monologuing before you kill us.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_44:
# 165 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "What?!\p"
	.string "Of course not!\n"
	.string "Do you take me for a common murderer?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_45:
# 166 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Ahem.\n"
	.string "As I said, what happened to your friend\l"
	.string "was an accident.\p"
	.string "A regrettable one, too.\p"
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
# 170 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Ok, and what if we just refuse?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_47:
# 172 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Assistants?\p"
	.string "I don't think so!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_48:
# 174 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Are you stupid?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_49:
# 176 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Of course, I am perfectly aware that\n"
	.string "you would not be willing to take this\l"
	.string "opportunity without some…\p"
	.string "Incentive.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_50:
# 177 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(As if we would do this for any amount\n"
	.string "of money in the world!)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_51:
# 178 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Money?\n"
	.string "You seem to misunderstand.\p"
	.string "No, what I mean is…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_52:
# 185 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "This.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_53:
# 189 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Owww!\p"
	.string "A needle?\p"
	.string "What…\n"
	.string "What was in it…?$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_54:
# 191 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Ow!\p"
	.string "What was that f-…\p"
	.string "Wait…\n"
	.string "Don't tell me, in this needle…$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_55:
# 193 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "…Ow!\n"
	.string "Hey!\p"
	.string "What did you inject me with?!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_56:
# 195 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "The C.O.V., of course.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_57:
# 202 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "(No…\p"
	.string "What's gonna happen now?!)$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_58:
# 203 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "I had to stop my research, but I did\n"
	.string "manage to get some batches made.\p"
	.string "Still highly experimental, of course.\p"
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
# 207 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Larvy, we need to get out of this island\n"
	.string "and find help, now!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_60:
# 209 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "We'll find someone else…\p"
	.string "That can make the vaccine!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_61:
# 211 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "You…\n"
	.string "We'll find someone else that can make a\l"
	.string "vaccine!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_62:
# 213 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Leave and I'll destroy my research.\n"
	.string "All of it.\p"
	.string "I'm deadly serious.\p"
	.string "I spent more than half my life on this.\p"
	.string "Maybe someone will be able to make a\n"
	.string "vaccine.\p"
	.string "How long will it take?\n"
	.string "Fifty years?\p"
	.string "A century, without my genius?\p"
	.string "Suit yourselves.\n"
	.string "But I think I know what you will choose.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_63:
# 217 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "WAAAAA!\p"
	.string "MAKE IT STOP!\n"
	.string "MAKE IT STOP!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_64:
# 219 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "WHAT DID YOU DO?!\p"
	.string "TAKE IT BACK!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_65:
# 221 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "GRAAAH!\p"
	.string "HOW DARE YOU STAB ME!\p"
	.string "HOW D-\p"
	.string "GRAHHHH!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_66:
# 223 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Oh, my.\p"
	.string "Please, calm yourself down.\p"
	.string "Your mental state does affect the\n"
	.string "result of the metamorphosis.$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_67:
# 224 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "AAAAAAAH!$"

JurassicPark_Final_Lab_EventScript_Drampa_Scene_Text_68:
# 225 "data/maps/JurassicPark_Final_Lab/scripts.pory"
	.string "Settle down, I said!\p"
	.string "It's going to happen soon!\p"
	.string "You wouldn't want to…!$"
