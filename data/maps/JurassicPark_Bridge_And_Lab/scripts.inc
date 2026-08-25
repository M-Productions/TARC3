JurassicPark_Bridge_And_Lab_MapScripts::
# 2 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	goto_if_set FLAG_HIDE_BRIDGE, JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

JurassicPark_Bridge_And_Lab_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 14, METATILE_Forest_Primary_TopRightCornerRock, FALSE
# 5 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 15, METATILE_Forest_Primary_FloorRock, FALSE
# 6 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 16, METATILE_Forest_Primary_FloorRock, FALSE
# 7 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 17, METATILE_Forest_Primary_FloorRock, FALSE
# 9 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 14, METATILE_Secret_Lab_Secondary_TopRightRockWater, TRUE
# 10 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 15, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 11 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 16, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 12 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 17, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 14 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 15 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 16 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 17 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 19 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 20 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 21 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 22 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 24 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 25 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 26 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 27 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 29 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 30 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 31 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 32 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 34 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 35 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 36 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 37 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 39 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 40 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 41 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 42 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 44 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 45 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 46 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 47 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 50 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 51 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 52 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 53 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 55 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 56 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 57 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 58 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 17, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 60 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 61 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 62 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 16, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 63 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 65 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 66 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 15, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 67 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 68 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 70 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 14, METATILE_Forest_Primary_LeftRock, TRUE
# 71 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 15, METATILE_Forest_Primary_LeftRock, TRUE
# 72 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 73 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 75 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 14, METATILE_Forest_Primary_FloorRock, TRUE
# 76 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 15, METATILE_Forest_Primary_FloorRock, TRUE
# 77 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 16, METATILE_Forest_Primary_FloorRock, TRUE
# 78 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 17, METATILE_Forest_Primary_FloorRock, TRUE
# 79 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
	return


JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa::
# 88 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	lockall
# 89 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_0, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_SHOUTING
# 90 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 91 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_PIN
# 92 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_0
# 93 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 94 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_1, localId = LOCALID_DRAMPA_BRIDGE, mugshotEmotion = MUGSHOT_EMOTE_SAD
# 95 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 96 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 97 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1
# 98 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_2
# 99 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement LOCALID_DRAMPA_BRIDGE
# 100 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special SpawnCameraObject
# 101 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3
# 102 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3
# 103 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 105 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 14, METATILE_Forest_Primary_TopRightCornerRock, FALSE
# 106 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 15, METATILE_Forest_Primary_FloorRock, FALSE
# 107 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 16, METATILE_Forest_Primary_FloorRock, FALSE
# 108 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 28, 17, METATILE_Forest_Primary_FloorRock, FALSE
# 110 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 14, METATILE_Secret_Lab_Secondary_TopRightRockWater, TRUE
# 111 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 15, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 112 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 16, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 113 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 29, 17, METATILE_Secret_Lab_Secondary_RightRockWater, TRUE
# 115 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 116 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 117 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 118 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 30, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 120 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 121 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 122 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 123 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 31, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 126 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 127 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 129 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 130 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 131 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 133 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 134 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 135 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 136 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 32, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 138 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 139 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 140 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 141 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 33, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 143 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 144 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 145 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 146 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 34, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 148 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 149 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 150 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 151 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 35, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 153 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 154 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 156 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 157 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4
# 158 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 160 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 161 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 162 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 163 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 36, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 166 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 167 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 168 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 169 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 37, 17, METATILE_Secret_Lab_Secondary_Water, TRUE
# 171 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 172 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 173 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 16, METATILE_Secret_Lab_Secondary_Water, TRUE
# 174 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 38, 17, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 176 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 177 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 15, METATILE_Secret_Lab_Secondary_Water, TRUE
# 178 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 16, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 179 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 39, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 181 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 182 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_DRAMPA_BRIDGE, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_5
# 185 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 187 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 14, METATILE_Secret_Lab_Secondary_Water, TRUE
# 188 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 15, METATILE_Secret_Lab_Secondary_TopLeftRockWater, TRUE
# 189 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 190 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 40, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 192 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 14, METATILE_Forest_Primary_LeftRock, TRUE
# 193 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 15, METATILE_Forest_Primary_LeftRock, TRUE
# 194 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 16, METATILE_Forest_Primary_LeftRock, TRUE
# 195 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 41, 17, METATILE_Forest_Primary_LeftRock, TRUE
# 197 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 14, METATILE_Forest_Primary_FloorRock, TRUE
# 198 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 15, METATILE_Forest_Primary_FloorRock, TRUE
# 199 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 16, METATILE_Forest_Primary_FloorRock, TRUE
# 200 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setmetatile 42, 17, METATILE_Forest_Primary_FloorRock, TRUE
# 202 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	playse SE_UNLOCK
# 203 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special DrawWholeMapView
# 205 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_BRIDGE
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	applymovement LOCALID_CAMERA, JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_6
# 207 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	waitmovement 0
# 208 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	mnmbox JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_2, localId = OBJ_EVENT_ID_NPC_FOLLOWER, mugshotEmotion = MUGSHOT_EMOTE_PAIN
# 209 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	closemessage
# 210 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	special RemoveCameraObject
# 211 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	removeobject LOCALID_DRAMPA_BRIDGE
# 212 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_TYRANTRUM_PLATFORM
# 213 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setvar VAR_GAME_STATE, GS_CENTRE_AFTER_BRIDGE
# 214 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	clearflag FLAG_HIDE_DINOS_WILDS
# 215 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	setflag FLAG_HIDE_DINOS_PLATFORM
# 216 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	releaseall
	end


# 92 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_0:
# 92 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	emote_exclamation_mark
# 92 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	delay_16
# 92 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 96 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_1:
# 96 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_right
	step_end

# 98 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_2:
# 98 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 98 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 101 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_3:
# 101 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 101 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 101 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 129 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_4:
# 129 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 129 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 129 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 129 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_5:
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
# 184 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_right
	step_end

# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Movement_6:
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
# 206 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	walk_fast_left
	step_end

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_0:
# 89 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "Doctor, where are you going?!$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_1:
# 94 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "…I'm sorry.\n"
	.string "There's no more time.$"

JurassicPark_Bridge_And_Lab_EventScript_Chase_Drampa_Text_2:
# 208 "data/maps/JurassicPark_Bridge_And_Lab/scripts.pory"
	.string "The bridge…\n"
	.string "Retracted?\p"
	.string "W-What…\p"
	.string "Larvy, we…\n"
	.string "The Doctor…\l"
	.string "What is happening…\p"
	.string "We need to check on the others…$"
