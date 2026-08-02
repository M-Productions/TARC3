JurassicPark_Desert_Main_MapScripts::
	.byte 0


JurassicPark_Desert_Main_EventScript_WarpToLastPosition::
# 4 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	warpsilent MAP_JURASSIC_PARK_DESERT_MAIN, VAR_NON_QUICKSAND_X, VAR_NON_QUICKSAND_Y
# 5 "data/maps/JurassicPark_Desert_Main/scripts.pory"
	waitstate
	return

