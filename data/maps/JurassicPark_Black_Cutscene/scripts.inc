JurassicPark_Black_Cutscene_MapScripts::
# 3 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JurassicPark_Black_Cutscene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JurassicPark_Black_Cutscene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	map_script_2 VAR_INTRO_BOAT_CUTSCENE, 0, Black_Cutscene_Boat_Intro
	.2byte 0


Black_Cutscene_Boat_Intro::
# 11 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	lockall
# 12 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	playse SE_THUNDERSTORM
# 13 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	delay 20
# 14 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	msgbox Black_Cutscene_Boat_Intro_Text_0
# 15 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	closemessage
# 16 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	playse SE_THUNDER
# 17 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	waitse
# 18 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	delay 5
# 19 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	playse SE_THUNDER2
# 20 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	waitse
# 21 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_1, localId = LOCALID_PHANPY, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 22 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	playse SE_THUNDER
# 23 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_2, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_DIZZY
# 24 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_3, localId = LOCALID_JIGGLYPUFF, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 25 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_4, localId = LOCALID_PHANPY, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 26 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_5, localId = LOCALID_JIGGLYPUFF, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 27 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_6, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SIGH
# 28 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	closemessage
# 29 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	delay 10
# 30 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	playse SE_THUNDER2
# 31 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	waitse
# 32 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	delay 10
# 33 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_7, localId = LOCALID_BAGON, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 34 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_8, localId = LOCALID_PHANPY, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 35 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_9, localId = LOCALID_JIGGLYPUFF, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 36 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_10, localId = LOCALID_BAGON, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 37 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_11, localId = LOCALID_JIGGLYPUFF, mugshotEmotion = MUGSHOT_EMOTE_WORRIED
# 38 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_12, localId = LOCALID_JIGGLYPUFF, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 39 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	closemessage
# 40 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	delay 10
# 41 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	playse SE_THUNDER
# 42 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	waitse
# 43 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	delay 10
# 44 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_13, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 45 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_14, localId = LOCALID_PHANPY, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 46 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_15, localId = LOCALID_JIGGLYPUFF, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 47 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_16, localId = LOCALID_BAGON, mugshotEmotion = MUGSHOT_EMOTE_CRYING
# 48 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_17, localId = LOCALID_JIGGLYPUFF, mugshotEmotion = MUGSHOT_EMOTE_DETERMINED
# 49 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_18, localId = LOCALID_PLAYER, mugshotEmotion = MUGSHOT_EMOTE_STUNNED
# 50 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_19, localId = LOCALID_PHANPY, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 51 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_20, localId = LOCALID_JIGGLYPUFF, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 52 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	mnmbox Black_Cutscene_Boat_Intro_Text_21, localId = LOCALID_BAGON, mugshotEmotion = MUGSHOT_EMOTE_SURPRISED
# 53 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	closemessage
# 54 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	delay 5
# 55 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	playse SE_THUNDER2
# 56 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	waitse
# 57 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	delay 5
# 58 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 59 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	waitse
# 60 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	playse SE_M_EXPLOSION
# 61 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	waitse
# 62 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	delay 30
# 63 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	setvar VAR_INTRO_BOAT_CUTSCENE, 1
# 64 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_BEACH_DOCKS, 0
	return


Black_Cutscene_Boat_Intro_Text_0:
# 14 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "Somewhere, in the deep ocean…$"

Black_Cutscene_Boat_Intro_Text_1:
# 21 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "A-are you okay, everyone?!$"

Black_Cutscene_Boat_Intro_Text_2:
# 23 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "(Urgh…\n"
	.string "I think I'm going to be sick…)$"

Black_Cutscene_Boat_Intro_Text_3:
# 24 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "You and your treasure maps!\p"
	.string "There was supposed to be land, here!\n"
	.string "Land!$"

Black_Cutscene_Boat_Intro_Text_4:
# 25 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "W-we just got a little off course, is\n"
	.string "all!$"

Black_Cutscene_Boat_Intro_Text_5:
# 26 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "A little off course.$"

Black_Cutscene_Boat_Intro_Text_6:
# 27 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "(Here we go again…)$"

Black_Cutscene_Boat_Intro_Text_7:
# 33 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "Erm, guys…?$"

Black_Cutscene_Boat_Intro_Text_8:
# 34 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "I'm sure we'll find the island!\p"
	.string "We have to be very close, now!$"

Black_Cutscene_Boat_Intro_Text_9:
# 35 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "If we don't get thrown overboard first,\n"
	.string "that is!$"

Black_Cutscene_Boat_Intro_Text_10:
# 36 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "GUYS!\p"
	.string "Look, over there!\n"
	.string "Isn't that…?$"

Black_Cutscene_Boat_Intro_Text_11:
# 37 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "Look at w-$"

Black_Cutscene_Boat_Intro_Text_12:
# 38 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "Oh.\n"
	.string "Oh, no.$"

Black_Cutscene_Boat_Intro_Text_13:
# 44 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "(That wave…\n"
	.string "It's awfully big, isn't it…?)$"

Black_Cutscene_Boat_Intro_Text_14:
# 45 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "Turn the ship around!\n"
	.string "NOW!\p"
	.string "We have to face it dead on!$"

Black_Cutscene_Boat_Intro_Text_15:
# 46 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "On it!$"

Black_Cutscene_Boat_Intro_Text_16:
# 47 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "We're gonna die!\n"
	.string "We're gonna die!$"

Black_Cutscene_Boat_Intro_Text_17:
# 48 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "We're not gonna die if you just GIVE US\n"
	.string "A HAND!$"

Black_Cutscene_Boat_Intro_Text_18:
# 49 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "(No! It's too late!\n"
	.string "It's already here!)$"

Black_Cutscene_Boat_Intro_Text_19:
# 50 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "Everyone!\n"
	.string "Brace for impact!$"

Black_Cutscene_Boat_Intro_Text_20:
# 51 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "A{PAUSE 10}h{PAUSE 10}h{PAUSE 10}h{PAUSE 10}h{PAUSE 10}h{PAUSE 10}h{PAUSE 10}h{PAUSE 10}h{PAUSE 10}!$"

Black_Cutscene_Boat_Intro_Text_21:
# 52 "data/maps/JurassicPark_Black_Cutscene/scripts.pory"
	.string "N{PAUSE 10}o{PAUSE 10}o{PAUSE 10}o{PAUSE 10}o{PAUSE 10}o{PAUSE 10}o{PAUSE 10}o{PAUSE 10}o{PAUSE 10}!$"
