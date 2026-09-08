JurassicPark_Visitor_Centre_MapScripts::
# 2 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 44 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 5 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_DRAMPA_EXPLAINER, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 8 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_TWO_GENERATORS_CUTSCENE, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 9 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	end

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_CentreSecondVisit
	return

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 10 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 12 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 15 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 18 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 22 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_SECOND, 17, 6
# 23 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_SECOND, MOVEMENT_TYPE_SLEEP
# 24 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_SECOND
# 25 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 27 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 30 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
# 33 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 37 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxyperm VAR_LOCALID_CUTSCENE_MAIN, 17, 7
# 38 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectmovementtype VAR_LOCALID_CUTSCENE_MAIN, MOVEMENT_TYPE_FACE_UP
# 39 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	addobject VAR_LOCALID_CUTSCENE_MAIN
	return

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 13 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_CENTRE
# 14 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_PHANPY_CENTRE
	goto JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_5

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_CENTRE
# 17 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_BAGON_CENTRE
	goto JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_5

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 19 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 20 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_SECOND, LOCALID_JIGGLYPUFF_CENTRE
	goto JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_5

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 28 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_CENTRE
# 29 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_PHANPY_CENTRE
	goto JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 31 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_CENTRE
# 32 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_BAGON_CENTRE
	goto JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 34 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 35 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_LOCALID_CUTSCENE_MAIN, LOCALID_JIGGLYPUFF_CENTRE
	goto JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 45 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_MET_DRAMPA, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 48 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 46 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_LookLarvy
	return

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 50 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_LarvyPanic
	return


JurassicPark_Visitor_Centre_EventScript_LookLarvy::
# 60 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 61 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_LookLarvy_Text_0
# 62 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 63 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_LookLarvy_Movement_0
# 64 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
# 65 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_IN_CENTRE
# 66 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_WalkUp::
# 72 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 73 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_WalkUp_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 74 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 75 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_WalkUp_Movement_0
# 76 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	end


JurassicPark_Visitor_Centre_EventScript_Bagon::
# 82 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 83 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 85 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_IN_CENTRE, JurassicPark_Visitor_Centre_EventScript_Bagon_3
# 89 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_CENTRE_SECOND_VISIT, JurassicPark_Visitor_Centre_EventScript_Bagon_4
# 93 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Visitor_Centre_EventScript_Bagon_5
# 98 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Visitor_Centre_EventScript_Bagon_6
JurassicPark_Visitor_Centre_EventScript_Bagon_1:
# 110 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Bagon_3:
# 86 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 87 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Bagon_Text_0, localId = LOCALID_BAGON_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 88 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Bagon_1

JurassicPark_Visitor_Centre_EventScript_Bagon_4:
# 90 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 91 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Bagon_Text_1, localId = LOCALID_BAGON_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 92 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Bagon_1

JurassicPark_Visitor_Centre_EventScript_Bagon_5:
# 94 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 95 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Bagon_Text_2, localId = LOCALID_BAGON_CENTRE
# 96 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Visitor_Centre_EventScript_Bagon_6:
# 99 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	compare VAR_FIRST_SAVED, CHAR_BAGON
	goto_if_eq JurassicPark_Visitor_Centre_EventScript_Bagon_8
# 105 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 106 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Bagon_Text_4, localId = LOCALID_BAGON_CENTRE
JurassicPark_Visitor_Centre_EventScript_Bagon_7:
# 108 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Bagon_1

JurassicPark_Visitor_Centre_EventScript_Bagon_8:
# 101 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Bagon_Text_3
	goto JurassicPark_Visitor_Centre_EventScript_Bagon_7


JurassicPark_Visitor_Centre_EventScript_Phanpy::
# 116 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 117 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 119 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_IN_CENTRE, JurassicPark_Visitor_Centre_EventScript_Phanpy_3
# 123 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_CENTRE_SECOND_VISIT, JurassicPark_Visitor_Centre_EventScript_Phanpy_4
# 149 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Visitor_Centre_EventScript_Phanpy_5
# 152 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Visitor_Centre_EventScript_Phanpy_6
JurassicPark_Visitor_Centre_EventScript_Phanpy_1:
# 165 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Phanpy_3:
# 120 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 121 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_0, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 122 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Phanpy_1

JurassicPark_Visitor_Centre_EventScript_Phanpy_4:
# 124 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 125 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_1, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 126 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 127 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_2, MSGBOX_YESNO
# 128 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq JurassicPark_Visitor_Centre_EventScript_Phanpy_8
# 134 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_4, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 135 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_CENTRE, JurassicPark_Visitor_Centre_EventScript_Phanpy_Movement_0
# 136 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_5, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 137 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_6, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 138 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_7, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 139 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_8, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 140 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 141 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	playse SE_THUNDER
# 142 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitse
# 143 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 144 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_MUSIC_RAIN
# 145 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	delay 32
# 147 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_VISITOR_CENTRE_RED, VAR_TEMP_1, VAR_TEMP_2
# 148 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitstate
	goto JurassicPark_Visitor_Centre_EventScript_Phanpy_1

JurassicPark_Visitor_Centre_EventScript_Phanpy_5:
# 150 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_9, localId = LOCALID_PHANPY_CENTRE
# 151 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Phanpy_1

JurassicPark_Visitor_Centre_EventScript_Phanpy_6:
# 153 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	compare VAR_FIRST_SAVED, CHAR_PHANPY
	goto_if_eq JurassicPark_Visitor_Centre_EventScript_Phanpy_11
# 159 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 160 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_10, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SAD
JurassicPark_Visitor_Centre_EventScript_Phanpy_10:
# 162 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Phanpy_1

JurassicPark_Visitor_Centre_EventScript_Phanpy_8:
# 129 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_3, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 130 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 131 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Phanpy_11:
# 155 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Bagon_Text_3
	goto JurassicPark_Visitor_Centre_EventScript_Phanpy_10


JurassicPark_Visitor_Centre_EventScript_Jigglypuff::
# 171 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 172 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 174 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_IN_CENTRE, JurassicPark_Visitor_Centre_EventScript_Jigglypuff_3
# 177 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_CENTRE_SECOND_VISIT, JurassicPark_Visitor_Centre_EventScript_Jigglypuff_4
# 180 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_POST_ONE_GENERATOR, JurassicPark_Visitor_Centre_EventScript_Jigglypuff_5
# 186 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_POST_TWO_GENERATORS, JurassicPark_Visitor_Centre_EventScript_Jigglypuff_6
JurassicPark_Visitor_Centre_EventScript_Jigglypuff_1:
# 199 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_3:
# 175 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 176 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Jigglypuff_1

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_4:
# 178 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_1, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 179 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Jigglypuff_1

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_5:
# 181 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 182 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_2, localId = LOCALID_JIGGLYPUFF_CENTRE
# 183 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_3, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 184 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_4, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 185 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Jigglypuff_1

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_6:
# 187 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	compare VAR_FIRST_SAVED, CHAR_JIGGLYPUFF
	goto_if_eq JurassicPark_Visitor_Centre_EventScript_Jigglypuff_8
# 193 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 194 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_5, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
JurassicPark_Visitor_Centre_EventScript_Jigglypuff_7:
# 196 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Jigglypuff_1

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_8:
# 189 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Bagon_Text_3
	goto JurassicPark_Visitor_Centre_EventScript_Jigglypuff_7


JurassicPark_Visitor_Centre_EventScript_Tyrantrum::
# 206 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Tyrantrum_Text_0, MSGBOX_SIGN
	end


JurassicPark_Visitor_Centre_EventScript_Cradily::
# 212 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Cradily_Text_0, MSGBOX_SIGN
	end


JurassicPark_Visitor_Centre_EventScript_Armaldo::
# 218 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Armaldo_Text_0, MSGBOX_SIGN
	end


JurassicPark_Visitor_Centre_EventScript_Ammonite::
# 224 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Ammonite_Text_0, MSGBOX_SIGN
	end


JurassicPark_Visitor_Centre_EventScript_Schematics::
# 230 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Schematics_Text_0, MSGBOX_DEFAULT
# 231 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Visitor_Centre_EventScript_Computer::
# 237 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Computer_Text_0
# 238 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Visitor_Centre_EventScript_Amber::
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Amber_Text_0, MSGBOX_SIGN
	return


JurassicPark_Visitor_Centre_EventScript_Drampa::
# 249 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 250 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 251 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_NORTH, JurassicPark_Visitor_Centre_EventScript_Drampa_3
# 255 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_EAST, JurassicPark_Visitor_Centre_EventScript_Drampa_4
# 258 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_WEST, JurassicPark_Visitor_Centre_EventScript_Drampa_5
JurassicPark_Visitor_Centre_EventScript_Drampa_1:
# 262 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_SECOND_VISIT
	goto_if_eq JurassicPark_Visitor_Centre_EventScript_Drampa_7
# 272 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_1, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 273 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 274 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_2, MSGBOX_YESNO
# 275 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq JurassicPark_Visitor_Centre_EventScript_Drampa_10
# 281 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_4, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 283 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 284 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	delay 5
# 285 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 286 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 287 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_RESULT
# 289 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_NORTH, JurassicPark_Visitor_Centre_EventScript_Drampa_14
# 291 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_EAST, JurassicPark_Visitor_Centre_EventScript_Drampa_15
# 294 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_WEST, JurassicPark_Visitor_Centre_EventScript_Drampa_16
JurassicPark_Visitor_Centre_EventScript_Drampa_12:
# 298 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_CENTRE, 14, 7
# 299 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_BAGON_CENTRE, 15, 8
# 300 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_CENTRE, 14, 8
# 301 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_4
# 302 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_4
# 303 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_4
# 304 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_5
# 305 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
# 306 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 307 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_5, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 308 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_6, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 309 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_7, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 310 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_8, localId = LOCALID_BAGON_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 311 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_9, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 312 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_10, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 313 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_11, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 314 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_12, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 315 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_13, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 316 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_14, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 317 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_15, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 318 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_16, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 319 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_17, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 320 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_18, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 321 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_19, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 322 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_20, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 323 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_6
# 325 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
# 326 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_CENTRE
# 327 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 328 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitse
# 329 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_21, localId = LOCALID_BAGON_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 330 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 331 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 332 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_CENTRE
# 333 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_CENTRE
# 334 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_CENTRE
# 335 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	delay 16
# 336 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 337 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitse
# 338 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadedefaultbgm
# 339 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_GOING_TO_PLATFORM
# 340 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 341 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Drampa_3:
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_1

JurassicPark_Visitor_Centre_EventScript_Drampa_4:
# 256 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_0
# 257 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_1

JurassicPark_Visitor_Centre_EventScript_Drampa_5:
# 259 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_1
# 260 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_1

JurassicPark_Visitor_Centre_EventScript_Drampa_7:
# 264 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_0, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 265 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 266 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Drampa_10:
# 277 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_3, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 278 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Visitor_Centre_EventScript_Drampa_14:
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_12

JurassicPark_Visitor_Centre_EventScript_Drampa_15:
# 292 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_2
# 293 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_12

JurassicPark_Visitor_Centre_EventScript_Drampa_16:
# 295 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_3
# 296 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_12


JurassicPark_Visitor_Centre_EventScript_CentreSecondVisit::
# 347 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_CENTRE_SECOND_VISIT
# 348 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_CENTRE
# 349 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 350 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_DRAMPA_CENTRE
# 351 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_CENTRE
# 352 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_CENTRE, 1, 5
# 353 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_CENTRE, 2, 8
# 354 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_CENTRE, MOVEMENT_TYPE_FACE_DOWN
# 355 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_LarvyPanic::
# 361 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 362 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Movement_0
# 363 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
# 364 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 365 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 366 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	delay 32
# 367 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_DUMMY
# 368 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 369 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 370 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 371 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 372 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_PANIC_OW_MUSIC
# 373 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_NO_GENERATORS
# 374 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor::
# 380 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	delay 16
# 381 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 382 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 384 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_3
# 385 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_3
# 387 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_4
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_1:
# 390 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 392 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_7
# 400 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_8
# 408 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_9
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5:
# 418 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_8, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 419 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_SECOND_SAVED
# 421 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_12
# 442 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_13
# 457 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_14
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_10:
# 466 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_POST_TWO_GENERATORS
# 467 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_NO_OW_MUSIC
# 468 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_SPAWN_WEST
# 469 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	forcesave
# 470 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	releaseall
	end

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_3:
# 386 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_4:
# 388 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_1

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_7:
# 393 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 395 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_16
# 397 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_17
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_8:
# 401 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 403 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_19
# 405 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_20
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_9:
# 409 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 411 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_22
# 413 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_23
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_12:
# 422 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_9, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 423 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 425 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_26
# 428 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_27
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_24:
# 432 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_14, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 433 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_15, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 434 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_16, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 435 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 437 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_33
# 439 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_JIGGLYPUFF, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_34
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_10

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_13:
# 443 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_19, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 444 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_20, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 445 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_21, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 446 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_17, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 447 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_FIRST_SAVED
# 449 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_PHANPY, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_30
# 451 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case CHAR_BAGON, JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_31
JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_28:
# 454 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_23, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 455 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_24, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 456 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_25, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_10

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_14:
# 458 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_26, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 459 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_27, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 460 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_28, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 461 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_29, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 462 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_30, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_TEARY_EYED
# 463 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_25, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_10

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_16:
# 396 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_2, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_17:
# 398 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_3, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_19:
# 404 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_4, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_20:
# 406 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_5, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_22:
# 412 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_6, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_23:
# 414 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_7, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_5

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_26:
# 426 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_10, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 427 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_11, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_24

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_27:
# 429 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_12, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 430 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_13, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_SAD
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_24

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_30:
# 450 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_22, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_28

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_31:
# 452 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_22, localId = VAR_LOCALID_CUTSCENE_MAIN, mugshotEmotion = MUGSHOT_EMOTE_CRYING
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_28

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_33:
# 438 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_17, localId = VAR_LOCALID_CUTSCENE_MAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_10

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_34:
# 440 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_18, localId = VAR_LOCALID_CUTSCENE_MAIN
	goto JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_10


# 63 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_LookLarvy_Movement_0:
# 63 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 63 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 63 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 63 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 63 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 75 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_WalkUp_Movement_0:
# 75 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 135 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Phanpy_Movement_0:
# 135 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 256 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_0:
# 256 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_in_place_left
	step_end

# 259 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_1:
# 259 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_in_place_right
	step_end

# 292 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_2:
# 292 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_faster_down
# 292 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_faster_right
# 292 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 295 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_3:
# 295 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_faster_down
# 295 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_faster_left
# 295 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 301 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_4:
# 301 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 304 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_5:
# 304 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_6:
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 324 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 362 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Movement_0:
# 362 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 362 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 362 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 362 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 362 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 362 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 362 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_down
	step_end

JurassicPark_Visitor_Centre_EventScript_LookLarvy_Text_0:
# 61 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Come here!\p"
	.string "This is incredible!$"

JurassicPark_Visitor_Centre_EventScript_WalkUp_Text_0:
# 73 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(I need to talk to people first.)$"

JurassicPark_Visitor_Centre_EventScript_Bagon_Text_0:
# 87 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Look at how big this guy is!\p"
	.string "Will I grow up to be this strong, too?$"

JurassicPark_Visitor_Centre_EventScript_Bagon_Text_1:
# 91 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Now that I've met a real one, this\n"
	.string "skeleton is kind of scary.$"

JurassicPark_Visitor_Centre_EventScript_Bagon_Text_2:
# 95 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Hi, Larvy.\p"
	.string "Our adventure was really fun!\n"
	.string "Flying around was surprisingly tiring…\p"
	.string "I wonder if it's going to be as tiring\n"
	.string "when I'm a Salamence.$"

JurassicPark_Visitor_Centre_EventScript_Bagon_Text_3:
# 101 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "There's no response.$"

JurassicPark_Visitor_Centre_EventScript_Bagon_Text_4:
# 106 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Larvy, I'll take care of this.\p"
	.string "You go look for the last generator,\n"
	.string "okay?$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_0:
# 121 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "So it WAS prehistoric Pokémon…\n"
	.string "But… How?$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_1:
# 125 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy…\n"
	.string "Do you have time?\p"
	.string "There's something I have to talk you\n"
	.string "about.$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_2:
# 127 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Listen to what Phanpy has to say?$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_3:
# 129 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Of course.\n"
	.string "Take you time!$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_4:
# 134 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "So, uhm…\n"
	.string "About this… Park.\p"
	.string "Don't you think it's a bit…\n"
	.string "Strange?\p"
	.string "I'm not sure how to feel about the\n"
	.string "caged Pokémon.\p"
	.string "They may be mindless as Dr. Drampa said,\n"
	.string "but…\l"
	.string "They're still Pokémon.\p"
	.string "And exhibiting them in enclosures…\n"
	.string "I'm not sure about it.$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_5:
# 136 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "What's strange here is the power grid.\p"
	.string "The Doc wasn't lying about the backup\n"
	.string "generators.\p"
	.string "But if I'm reading this right, the\n"
	.string "system is way overloaded.\p"
	.string "Something is pulling an immense\n"
	.string "quantity of power.$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_6:
# 137 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Which means…?$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_7:
# 138 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Which means that in case of any power\n"
	.string "fluctuation…\l"
	.string "Say, from a lightning strike…\p"
	.string "The whole thing would go down.$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_8:
# 139 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "That's…\p"
	.string "Surely there's safeguards in place…\n"
	.string "Right?$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_9:
# 150 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Hmm…\n"
	.string "They haven't evolved the ability to\l"
	.string "talk…\p"
	.string "But maybe, if…$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_10:
# 160 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Larvy, I appreciate your company, but\n"
	.string "you should look for the last generator.$"

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_0:
# 175 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "This face…\n"
	.string "Its smug aura mocks me.$"

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_1:
# 178 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Is that so…$"

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_2:
# 182 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "'Sup.\n"
	.string "I'm feeling a bit better.\p"
	.string "I'll be back to floating in no ti-$"

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_3:
# 183 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Owwww…$"

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_4:
# 184 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "…No time at all.$"

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_5:
# 194 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Still here?\n"
	.string "We need to get out, pronto.\p"
	.string "Look for the final generator, will you?$"

JurassicPark_Visitor_Centre_EventScript_Tyrantrum_Text_0:
# 206 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "TYRANTRUM\n"
	.string "The king of the ancient world.\p"
	.string "Its gargantuan jaws can shred any\n"
	.string "material like paper.$"

JurassicPark_Visitor_Centre_EventScript_Cradily_Text_0:
# 212 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "CRADILY\n"
	.string "The patient predator.\p"
	.string "Its tentacles secrete digestive fluid\n"
	.string "that dissolve any prey.$"

JurassicPark_Visitor_Centre_EventScript_Armaldo_Text_0:
# 218 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "ARMALDO\n"
	.string "The plated fortress.\p"
	.string "Its tough scales make it impenetrable\n"
	.string "to any assault.$"

JurassicPark_Visitor_Centre_EventScript_Ammonite_Text_0:
# 224 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Piles of ammonite from the primordial\n"
	.string "sea.$"

JurassicPark_Visitor_Centre_EventScript_Schematics_Text_0:
# 230 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Complicated schematics that you can't\n"
	.string "quite understand.$"

JurassicPark_Visitor_Centre_EventScript_Computer_Text_0:
# 237 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "You've never been good with technology.$"

JurassicPark_Visitor_Centre_EventScript_Amber_Text_0:
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Genetic material from an ancient flying\n"
	.string "Pokémon is encased in the amber.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_0:
# 264 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Ah, hello!\p"
	.string "Yes, as I was saying, I have a boat\n"
	.string "ready to get you back as soon as the\l"
	.string "rain stops.\p"
	.string "Of course, you'll put a good word for\n"
	.string "the park before the opening, won't you?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_1:
# 272 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Magnificent exhibits, eh?\p"
	.string "So, are you ready to learn more?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_2:
# 274 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Proceed to the explanation?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_3:
# 277 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Of course, of course!\p"
	.string "Feel free to look around all you want.\n"
	.string "There is no rush!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_4:
# 281 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Splendid!\n"
	.string "Now, let us gather all of your friends.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_5:
# 307 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "So, everyone, you're familiar with\n"
	.string "prehistoric Pokémon, yes?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_6:
# 308 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Mysterious Pokémon that existed\n"
	.string "millions of years ago and went extinct?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_7:
# 309 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Precisely!\p"
	.string "Back in the day, titanic Pokémon ruled\n"
	.string "the world through their might.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_8:
# 310 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I'm sure a Salamence would beat a\n"
	.string "prehistoric Pokémon easily!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_9:
# 311 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Not even close, my child.\n"
	.string "Prehistoric Pokémon are much, much\l"
	.string "stronger than any Pokémon of today.\p"
	.string "Some scholars say that they were so\n"
	.string "powerful that Rayquaza, the dragon\l"
	.string "God, grew scared and summoned a meteor\l"
	.string "to smite them.\p"
	.string "Of course, it's merely fanciful tales.\n"
	.string "I prefer dealing with reality.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_10:
# 312 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "And, if I'm picking up the context\n"
	.string "clues…\p"
	.string "You're telling us that prehistoric\n"
	.string "Pokémon surived on this island until\l"
	.string "today.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_11:
# 313 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Oh, nothing of the sort.\p"
	.string "I brought them back.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_12:
# 314 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "What?!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_13:
# 315 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Yes!\n"
	.string "With this machine here…\l"
	.string "Well, this one is a replica.\p"
	.string "But with a machine like this, my life's\n"
	.string "work…\p"
	.string "I can bring fossilized remains back to\n"
	.string "life!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_14:
# 316 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "That's impossible!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_15:
# 317 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "And yet you've seen it with your very\n"
	.string "own eyes!\p"
	.string "I am in the final stages of setting up\n"
	.string "this island to be an educational park.\p"
	.string "I call it…\n"
	.string "Jurassic PokéPark!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_16:
# 318 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "So… What are these Pokémon like?\p"
	.string "We tried talking to them, but…$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_17:
# 319 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "…$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_18:
# 320 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Well, why don't you come and take a look\n"
	.string "for yourselves?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_19:
# 321 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(What was that look for…?)$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_20:
# 322 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "There's an observation platform east\n"
	.string "of this center.\l"
	.string "I'll meet you there.\p"
	.string "Oh and…\n"
	.string "Please don't take any detours.\p"
	.string "The rest of the park is still being\n"
	.string "finished.\p"
	.string "It's not dangerous, but someone could\n"
	.string "still get injured.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_21:
# 329 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Well, what are we waiting for?\p"
	.string "Let's go see it!$"

JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_0:
# 364 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(It's not coming inside, is it?!)$"

JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_1:
# 368 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(No…\n"
	.string "I guess it's too big.)$"

JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_2:
# 369 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(But, the others!\n"
	.string "Did they make it?!)$"

JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_3:
# 370 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(I have to find them…\n"
	.string "And restart the generators.)\p"
	.string "(But the only way is…\n"
	.string "Going outside.)\p"
	.string "(Gulp…\n"
	.string "Can I even… Do this?)\p"
	.string "(…I don't have a choice.\n"
	.string "I need to.)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_0:
# 386 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(Will she…\n"
	.string "Be okay?)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_1:
# 388 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(Will he…\n"
	.string "Be okay?)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_2:
# 396 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I-I don't know, Larvy.\n"
	.string "I don't know much about medicine.\p"
	.string "Phanpy would know, but…\n"
	.string "Oh, poor Phanpy…\p"
	.string "If I wasn't so weak, she wouldn't have\n"
	.string "had to…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_3:
# 398 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I-I don't know, Larvy.\n"
	.string "I don't know much about medicine.\p"
	.string "Phanpy would know, but she's not here\n"
	.string "right now…\p"
	.string "If I wasn't so weak, Jiggly wouldn't\n"
	.string "have had to…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_4:
# 404 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "…She will be.\n"
	.string "She HAS to.\p"
	.string "We've gone through so much worse\n"
	.string "together.\p"
	.string "This is nothing, you understand?\n"
	.string "Nothing!\p"
	.string "I can't believe she would go ahead and\n"
	.string "pull this one me…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_5:
# 406 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "…I got sloppy.\n"
	.string "This is all my fault.\p"
	.string "I let my guard down and this…\n"
	.string "And this…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_6:
# 412 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I-I don't know…\n"
	.string "There was barely any medicine here…\p"
	.string "Oh, Bagon, why did you have to…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_7:
# 414 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I-I don't know…\n"
	.string "There was barely any medicine here…\p"
	.string "Oh, Jiggly, I…\n"
	.string "It can't end like this…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_8:
# 418 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(This was all my fault.)\p"
	.string "(If there is someone to take the blame…\n"
	.string "It should be me.)\p"
	.string "(If I didn't freeze up, I could have…\n"
	.string "I should have…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_9:
# 422 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Larvy, no!\n"
	.string "You've been doing so much!\p"
	.string "So much more than me.\p"
	.string "This…\n"
	.string "Was too much for all of us.\p"
	.string "It's not your fault.\p"
	.string "I think…\n"
	.string "We have to get out of here…\l"
	.string "As soon as possible.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_10:
# 426 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(But Phanpy…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_11:
# 427 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I'll look after her, okay?\p"
	.string "I don't know if there's anything here\n"
	.string "that can make her feel better, but…\p"
	.string "Once we leave the island, we can take\n"
	.string "her to a hospital.\p"
	.string "I think you should…\n"
	.string "Start looking for the final generator.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_12:
# 429 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(But Jiggly…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_13:
# 430 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I'll look after him, okay?\p"
	.string "I don't know if there's anything here\n"
	.string "that can make him feel better, but…\p"
	.string "Once we leave the island, we can take\n"
	.string "him to a hospital.\p"
	.string "I think you should…\n"
	.string "Start looking for the final generator.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_14:
# 432 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(But if that Pokémon showed up again, I\n"
	.string "don't know if…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_15:
# 433 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Larvy.\n"
	.string "I know how you feel.\p"
	.string "But we need you.\n"
	.string "I know you can do it, okay?$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_16:
# 434 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(You're right.\n"
	.string "My friends need me.)\p"
	.string "(Okay.\n"
	.string "I will look for the last generator, now.)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_17:
# 438 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Thank you.\n"
	.string "I promise, Phanpy will be okay.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_18:
# 440 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Thank you.\n"
	.string "I promise, Jiggly will be okay.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_19:
# 443 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Oh no no no, don't you start.\p"
	.string "Don't you START blaming yourself.\p"
	.string "Don't you know how egoistical that is?\n"
	.string "It drives me insane.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_20:
# 444 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(You were JUST blaming yourself.)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_21:
# 445 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Oh, I know that look.\n"
	.string "You're thinking I'm a hypocrite.$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_22:
# 450 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I know, okay?\n"
	.string "I know I am!\p"
	.string "I drive myself insane!\p"
	.string "I'm just-\n"
	.string "I'm just-\p"
	.string "I'm just trying to keep everything\n"
	.string "running!\p"
	.string "And I didn't, and now Phanpy…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_23:
# 454 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(Jiggly…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_24:
# 455 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "…I don't know if there's anything here\n"
	.string "that can help with the wounds.\p"
	.string "Larvy, could you…\n"
	.string "Try and find the last generator…?\l"
	.string "We need to leave.\p"
	.string "I want to…\n"
	.string "Stay here and make sure that…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_25:
# 456 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(…I understand.\p"
	.string "I don't know what I'll do if that\n"
	.string "Pokémon shows up again, but…\p"
	.string "I will try.)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_26:
# 458 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "No, Larvy, please.\n"
	.string "Don't blame yourself.\p"
	.string "This adventure was my idea.\n"
	.string "I'm the one who pushed for it.\p"
	.string "I thought it was going to be easy.\n"
	.string "I thought it was going to be fun.\p"
	.string "I thought we were going to make amazing\n"
	.string "discoveries.\p"
	.string "And instead…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_27:
# 459 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(You didn't know…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_28:
# 460 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Of COURSE I didn't know, did I?!\p"
	.string "That's the problem!\n"
	.string "That's always the problem!\p"
	.string "People rely on me to know everything!\n"
	.string "And when I don't…\l"
	.string "And when I don't…!\p"
	.string "Pokémon get hurt!\n"
	.string "Or…\l"
	.string "Worse…$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_29:
# 461 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(Phanpy…)$"

JurassicPark_Visitor_Centre_EventScript_TwoGeneratorsCutsceneIndoor_Text_30:
# 462 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I-I'm sorry.\p"
	.string "I-I'd like to stay here.\n"
	.string "See what I can do.\p"
	.string "Could you look for the last generator…?$"
