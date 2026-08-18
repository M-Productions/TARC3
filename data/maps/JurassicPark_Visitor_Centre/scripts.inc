JurassicPark_Visitor_Centre_MapScripts::
# 2 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 5 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_DRAMPA_EXPLAINER, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	end

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_CentreSecondVisit
	return

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_MET_DRAMPA, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 16 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	map_script_2 VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE, JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 14 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_LookLarvy
	return

JurassicPark_Visitor_Centre_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 18 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	goto JurassicPark_Visitor_Centre_EventScript_LarvyPanic
	return


JurassicPark_Visitor_Centre_EventScript_LookLarvy::
# 27 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 28 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_LookLarvy_Text_0
# 29 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 30 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_LookLarvy_Movement_0
# 31 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
# 32 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_IN_CENTRE
# 33 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_WalkUp::
# 39 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 40 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_WalkUp_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 41 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 42 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_WalkUp_Movement_0
# 43 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	end


JurassicPark_Visitor_Centre_EventScript_Bagon::
# 49 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 50 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 52 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_IN_CENTRE, JurassicPark_Visitor_Centre_EventScript_Bagon_3
# 56 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_CENTRE_SECOND_VISIT, JurassicPark_Visitor_Centre_EventScript_Bagon_4
JurassicPark_Visitor_Centre_EventScript_Bagon_1:
# 61 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Bagon_3:
# 53 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 54 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Bagon_Text_0, localId = LOCALID_BAGON_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 55 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Bagon_1

JurassicPark_Visitor_Centre_EventScript_Bagon_4:
# 57 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 58 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Bagon_Text_1, localId = LOCALID_BAGON_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 59 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Bagon_1


JurassicPark_Visitor_Centre_EventScript_Phanpy::
# 67 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 68 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 70 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_IN_CENTRE, JurassicPark_Visitor_Centre_EventScript_Phanpy_3
# 74 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_CENTRE_SECOND_VISIT, JurassicPark_Visitor_Centre_EventScript_Phanpy_4
JurassicPark_Visitor_Centre_EventScript_Phanpy_1:
# 102 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Phanpy_3:
# 71 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 72 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_0, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 73 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Phanpy_1

JurassicPark_Visitor_Centre_EventScript_Phanpy_4:
# 75 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	faceplayer
# 76 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_1, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 77 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 78 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_2, MSGBOX_YESNO
# 79 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq JurassicPark_Visitor_Centre_EventScript_Phanpy_6
# 85 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_4, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 86 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_CENTRE, JurassicPark_Visitor_Centre_EventScript_Phanpy_Movement_0
# 87 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_5, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 88 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_6, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 89 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_7, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 90 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_8, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 91 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 92 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	playse SE_THUNDER
# 93 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitse
# 94 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 95 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_MUSIC_RAIN
# 96 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	delay 32
# 98 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_VISITOR_CENTRE_RED, VAR_TEMP_1, VAR_TEMP_2
# 99 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitstate
	goto JurassicPark_Visitor_Centre_EventScript_Phanpy_1

JurassicPark_Visitor_Centre_EventScript_Phanpy_6:
# 80 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_3, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 81 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 82 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_Jigglypuff::
# 108 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 109 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_GAME_STATE
# 111 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_IN_CENTRE, JurassicPark_Visitor_Centre_EventScript_Jigglypuff_3
# 114 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case GS_CENTRE_SECOND_VISIT, JurassicPark_Visitor_Centre_EventScript_Jigglypuff_4
JurassicPark_Visitor_Centre_EventScript_Jigglypuff_1:
# 119 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_3:
# 112 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_0, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_ANGRY
# 113 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Jigglypuff_1

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_4:
# 115 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_1, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 116 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	goto JurassicPark_Visitor_Centre_EventScript_Jigglypuff_1


JurassicPark_Visitor_Centre_EventScript_Tyrantrum::
# 126 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Tyrantrum_Text_0, MSGBOX_SIGN
	end


JurassicPark_Visitor_Centre_EventScript_Cradily::
# 132 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Cradily_Text_0, MSGBOX_SIGN
	end


JurassicPark_Visitor_Centre_EventScript_Armaldo::
# 138 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Armaldo_Text_0, MSGBOX_SIGN
	end


JurassicPark_Visitor_Centre_EventScript_Ammonite::
# 144 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Ammonite_Text_0, MSGBOX_SIGN
	end


JurassicPark_Visitor_Centre_EventScript_Schematics::
# 150 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Schematics_Text_0, MSGBOX_DEFAULT
# 151 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Visitor_Centre_EventScript_Computer::
# 157 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Computer_Text_0
# 158 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	end


JurassicPark_Visitor_Centre_EventScript_Amber::
# 164 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Amber_Text_0, MSGBOX_SIGN
	return


JurassicPark_Visitor_Centre_EventScript_Drampa::
# 169 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 170 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 171 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_NORTH, JurassicPark_Visitor_Centre_EventScript_Drampa_3
# 175 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_EAST, JurassicPark_Visitor_Centre_EventScript_Drampa_4
# 178 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_WEST, JurassicPark_Visitor_Centre_EventScript_Drampa_5
JurassicPark_Visitor_Centre_EventScript_Drampa_1:
# 182 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	compare VAR_GAME_STATE, GS_CENTRE_SECOND_VISIT
	goto_if_eq JurassicPark_Visitor_Centre_EventScript_Drampa_7
# 192 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_1, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 193 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 194 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	msgbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_2, MSGBOX_YESNO
# 195 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq JurassicPark_Visitor_Centre_EventScript_Drampa_10
# 201 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_4, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 202 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 203 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 204 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	delay 5
# 205 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_CALM_CUTSCENE
# 206 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 207 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_NORTH, JurassicPark_Visitor_Centre_EventScript_Drampa_14
# 211 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_EAST, JurassicPark_Visitor_Centre_EventScript_Drampa_15
# 214 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	case DIR_WEST, JurassicPark_Visitor_Centre_EventScript_Drampa_16
JurassicPark_Visitor_Centre_EventScript_Drampa_12:
# 218 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_PHANPY_CENTRE, 14, 7
# 219 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_BAGON_CENTRE, 15, 8
# 220 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxy LOCALID_JIGGLYPUFF_CENTRE, 14, 8
# 221 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PHANPY_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_4
# 222 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_JIGGLYPUFF_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_4
# 223 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_BAGON_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_4
# 224 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_5
# 225 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
# 226 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 227 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_5, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 228 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_6, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 229 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_7, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 230 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_8, localId = LOCALID_BAGON_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_HAPPY
# 231 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_9, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 232 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_10, localId = LOCALID_JIGGLYPUFF_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 233 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_11, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 234 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_12, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 235 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_13, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 236 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_14, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 237 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_15, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 238 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_16, localId = LOCALID_PHANPY_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 239 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_17, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 240 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_18, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_JOYOUS
# 241 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_19, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 242 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_20, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 243 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_6
# 245 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
# 246 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	removeobject LOCALID_DRAMPA_CENTRE
# 247 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 248 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitse
# 249 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_21, localId = LOCALID_BAGON_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_INSPIRED
# 250 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 251 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_TO_BLACK
# 252 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	removeobject LOCALID_BAGON_CENTRE
# 253 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	removeobject LOCALID_JIGGLYPUFF_CENTRE
# 254 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	removeobject LOCALID_PHANPY_CENTRE
# 255 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	delay 16
# 256 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	playse SE_EXIT
# 257 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitse
# 258 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadedefaultbgm
# 259 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_GOING_TO_PLATFORM
# 260 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 261 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Drampa_3:
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_1

JurassicPark_Visitor_Centre_EventScript_Drampa_4:
# 176 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_0
# 177 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_1

JurassicPark_Visitor_Centre_EventScript_Drampa_5:
# 179 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_DRAMPA_CENTRE, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_1
# 180 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_1

JurassicPark_Visitor_Centre_EventScript_Drampa_7:
# 184 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_0, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 185 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 186 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end

JurassicPark_Visitor_Centre_EventScript_Drampa_10:
# 197 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_Drampa_Text_3, localId = LOCALID_DRAMPA_CENTRE, mugshotEmotion = MUGSHOT_EMOTE_NORMAL
# 198 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
	end

JurassicPark_Visitor_Centre_EventScript_Drampa_14:
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_12

JurassicPark_Visitor_Centre_EventScript_Drampa_15:
# 212 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_2
# 213 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_12

JurassicPark_Visitor_Centre_EventScript_Drampa_16:
# 215 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_3
# 216 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
	goto JurassicPark_Visitor_Centre_EventScript_Drampa_12


JurassicPark_Visitor_Centre_EventScript_CentreSecondVisit::
# 267 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_CENTRE_SECOND_VISIT
# 268 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_BAGON_CENTRE
# 269 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_JIGGLYPUFF_CENTRE
# 270 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_DRAMPA_CENTRE
# 271 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_HIDE_PHANPY_CENTRE
# 272 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_JIGGLYPUFF_CENTRE, 1, 5
# 273 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectxyperm LOCALID_PHANPY_CENTRE, 2, 8
# 274 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setobjectmovementtype LOCALID_PHANPY_CENTRE, MOVEMENT_TYPE_FACE_DOWN
# 275 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end


JurassicPark_Visitor_Centre_EventScript_LarvyPanic::
# 281 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	lock
# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Movement_0
# 283 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	waitmovement 0
# 284 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_0, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 285 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 286 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	delay 32
# 287 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	fadenewbgm MUS_DUMMY
# 288 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_1, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 289 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 290 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	mnmbox JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_3, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 291 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	closemessage
# 292 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	clearflag FLAG_PANIC_OW_MUSIC
# 293 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	setvar VAR_GAME_STATE, GS_NO_GENERATORS
# 294 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	release
	end


# 30 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_LookLarvy_Movement_0:
# 30 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 30 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 30 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 30 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 30 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 42 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_WalkUp_Movement_0:
# 42 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
	step_end

# 86 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Phanpy_Movement_0:
# 86 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_down
	step_end

# 176 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_0:
# 176 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_in_place_left
	step_end

# 179 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_1:
# 179 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_in_place_right
	step_end

# 212 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_2:
# 212 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_faster_down
# 212 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_faster_right
# 212 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 215 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_3:
# 215 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_faster_down
# 215 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_faster_left
# 215 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 221 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_4:
# 221 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_up
	step_end

# 224 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_5:
# 224 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_in_place_down
	step_end

# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_Drampa_Movement_6:
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_left
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
# 244 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_down
	step_end

# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Movement_0:
# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	walk_up
# 282 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	face_down
	step_end

JurassicPark_Visitor_Centre_EventScript_LookLarvy_Text_0:
# 28 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Larvy!\n"
	.string "Come here!\p"
	.string "This is incredible!$"

JurassicPark_Visitor_Centre_EventScript_WalkUp_Text_0:
# 40 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(I need to talk to people first.)$"

JurassicPark_Visitor_Centre_EventScript_Bagon_Text_0:
# 54 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Look at how big this guy is!\p"
	.string "Will I grow up to be this strong, too?$"

JurassicPark_Visitor_Centre_EventScript_Bagon_Text_1:
# 58 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Now that I've met a real one, this\n"
	.string "skeleton is kind of scary.$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_0:
# 72 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "So it WAS prehistoric Pokémon…\n"
	.string "But… How?$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_1:
# 76 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Hey, Larvy…\n"
	.string "Do you have time?\p"
	.string "There's something I have to talk you\n"
	.string "about.$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_2:
# 78 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Listen to what Phanpy has to say?$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_3:
# 80 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Of course.\n"
	.string "Take you time!$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_4:
# 85 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
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
# 87 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "What's strange here is the power grid.\p"
	.string "The Doc wasn't lying about the backup\n"
	.string "generators.\p"
	.string "But if I'm reading this right, the\n"
	.string "system is way overloaded.\p"
	.string "Something is pulling an immense\n"
	.string "quantity of power.$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_6:
# 88 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Which means…?$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_7:
# 89 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Which means that in case of any power\n"
	.string "fluctuation…\l"
	.string "Say, from a lightning strike…\p"
	.string "The whole thing would go down.$"

JurassicPark_Visitor_Centre_EventScript_Phanpy_Text_8:
# 90 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "That's…\p"
	.string "Surely there's safeguards in place…\n"
	.string "Right?$"

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_0:
# 112 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "This face…\n"
	.string "Its smug aura mocks me.$"

JurassicPark_Visitor_Centre_EventScript_Jigglypuff_Text_1:
# 115 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Is that so…$"

JurassicPark_Visitor_Centre_EventScript_Tyrantrum_Text_0:
# 126 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "TYRANTRUM\n"
	.string "The king of the ancient world.\p"
	.string "Its gargantuan jaws can shred any\n"
	.string "material like paper.$"

JurassicPark_Visitor_Centre_EventScript_Cradily_Text_0:
# 132 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "CRADILY\n"
	.string "The patient predator.\p"
	.string "Its tentacles secrete digestive fluid\n"
	.string "that dissolve any prey.$"

JurassicPark_Visitor_Centre_EventScript_Armaldo_Text_0:
# 138 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "ARMALDO\n"
	.string "The plated fortress.\p"
	.string "Its tough scales make it impenetrable\n"
	.string "to any assault.$"

JurassicPark_Visitor_Centre_EventScript_Ammonite_Text_0:
# 144 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Piles of ammonite from the primordial\n"
	.string "sea.$"

JurassicPark_Visitor_Centre_EventScript_Schematics_Text_0:
# 150 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Complicated schematics that you can't\n"
	.string "quite understand.$"

JurassicPark_Visitor_Centre_EventScript_Computer_Text_0:
# 157 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "You've never been good with technology.$"

JurassicPark_Visitor_Centre_EventScript_Amber_Text_0:
# 164 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Genetic material from an ancient flying\n"
	.string "Pokémon is encased in the amber.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_0:
# 184 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Ah, hello!\p"
	.string "Yes, as I was saying, I have a boat\n"
	.string "ready to get you back as soon as the\l"
	.string "rain stops.\p"
	.string "Of course, you'll put a good word for\n"
	.string "the park before the opening, won't you?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_1:
# 192 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Magnificent exhibits, eh?\p"
	.string "So, are you ready to learn more?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_2:
# 194 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Proceed to the explanation?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_3:
# 197 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Of course, of course!\p"
	.string "Feel free to look around all you want.\n"
	.string "There is no rush!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_4:
# 201 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Splendid!\n"
	.string "Now, let us gather all of your friends.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_5:
# 227 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "So, everyone, you're familiar with\n"
	.string "prehistoric Pokémon, yes?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_6:
# 228 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Mysterious Pokémon that existed\n"
	.string "millions of years ago and went extinct?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_7:
# 229 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Precisely!\p"
	.string "Back in the day, titanic Pokémon ruled\n"
	.string "the world through their might.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_8:
# 230 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "I'm sure a Salamence would beat a\n"
	.string "prehistoric Pokémon easily!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_9:
# 231 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
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
# 232 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "And, if I'm picking up the context\n"
	.string "clues…\p"
	.string "You're telling us that prehistoric\n"
	.string "Pokémon surived on this island until\l"
	.string "today.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_11:
# 233 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Oh, nothing of the sort.\p"
	.string "I brought them back.$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_12:
# 234 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "What?!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_13:
# 235 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Yes!\n"
	.string "With this machine here…\l"
	.string "Well, this one is a replica.\p"
	.string "But with a machine like this, my life's\n"
	.string "work…\p"
	.string "I can bring fossilized remains back to\n"
	.string "life!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_14:
# 236 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "That's impossible!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_15:
# 237 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "And yet you've seen it with your very\n"
	.string "own eyes!\p"
	.string "I am in the final stages of setting up\n"
	.string "this island to be an educational park.\p"
	.string "I call it…\n"
	.string "Jurassic Park!$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_16:
# 238 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "So… What are these Pokémon like?\p"
	.string "We tried talking to them, but…$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_17:
# 239 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "…$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_18:
# 240 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Well, why don't you come and take a look\n"
	.string "for yourselves?$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_19:
# 241 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(What was that look for…?)$"

JurassicPark_Visitor_Centre_EventScript_Drampa_Text_20:
# 242 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
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
# 249 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "Well, what are we waiting for?\p"
	.string "Let's go see it!$"

JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_0:
# 284 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(It's not coming inside, is it?!)$"

JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_1:
# 288 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(No…\n"
	.string "I guess it's too big.)$"

JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_2:
# 289 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(But, the others!\n"
	.string "Did they make it?!)$"

JurassicPark_Visitor_Centre_EventScript_LarvyPanic_Text_3:
# 290 "data/maps/JurassicPark_Visitor_Centre/scripts.pory"
	.string "(I have to find them…\n"
	.string "And restart the generators.)\p"
	.string "(But the only way is…\n"
	.string "Going outside.)\p"
	.string "(Gulp…\n"
	.string "Can I even… Do this?)\p"
	.string "(…No, I don't have a choice.\n"
	.string "I need to.)\p"
	.string "(For my friends…)$"
