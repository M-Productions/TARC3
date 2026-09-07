# 1 "data/scripts/surf.pory"

# 2 "data/scripts/surf.pory"
EventScript_UseSurf::
# 3 "data/scripts/surf.pory"
	goto_if_unset FLAG_HIDE_ARCHEOPS, EventScript_EndUseSurf
# 4 "data/scripts/surf.pory"
    call EventScript_UseSurf_Archeops
# 5 "data/scripts/surf.pory"
	dofieldeffect FLDEFF_USE_SURF
# 6 "data/scripts/surf.pory"
EventScript_ReleaseUseSurf::
# 7 "data/scripts/surf.pory"
	releaseall
# 8 "data/scripts/surf.pory"
EventScript_EndUseSurf::
# 9 "data/scripts/surf.pory"
	end
# 10 "data/scripts/surf.pory"

# 11 "data/scripts/surf.pory"
EventScript_CurrentTooFast::
# 12 "data/scripts/surf.pory"
	lockall
# 13 "data/scripts/surf.pory"
	checkfieldmove FIELD_MOVE_SURF
# 14 "data/scripts/surf.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_CurrentTooFastEndMsg
# 15 "data/scripts/surf.pory"
	playse SE_SELECT
# 16 "data/scripts/surf.pory"
	msgbox Text_CurrentTooFast
# 17 "data/scripts/surf.pory"
EventScript_CurrentTooFastEndMsg::
# 18 "data/scripts/surf.pory"
	releaseall
# 19 "data/scripts/surf.pory"
	end

EventScript_UseSurf_Archeops::
# 23 "data/scripts/surf.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_RESULT
# 24 "data/scripts/surf.pory"
	switch VAR_RESULT
# 26 "data/scripts/surf.pory"
	case DIR_NORTH, EventScript_UseSurf_Archeops_3
# 28 "data/scripts/surf.pory"
	case DIR_SOUTH, EventScript_UseSurf_Archeops_4
# 30 "data/scripts/surf.pory"
	case DIR_EAST, EventScript_UseSurf_Archeops_5
# 32 "data/scripts/surf.pory"
	case DIR_WEST, EventScript_UseSurf_Archeops_6
EventScript_UseSurf_Archeops_1:
# 35 "data/scripts/surf.pory"
	waitmovement 0
	return

EventScript_UseSurf_Archeops_3:
# 27 "data/scripts/surf.pory"
	applymovement LOCALID_PLAYER, EventScript_UseSurf_Archeops_Movement_0
	goto EventScript_UseSurf_Archeops_1

EventScript_UseSurf_Archeops_4:
# 29 "data/scripts/surf.pory"
	applymovement LOCALID_PLAYER, EventScript_UseSurf_Archeops_Movement_1
	goto EventScript_UseSurf_Archeops_1

EventScript_UseSurf_Archeops_5:
# 31 "data/scripts/surf.pory"
	applymovement LOCALID_PLAYER, EventScript_UseSurf_Archeops_Movement_2
	goto EventScript_UseSurf_Archeops_1

EventScript_UseSurf_Archeops_6:
# 33 "data/scripts/surf.pory"
	applymovement LOCALID_PLAYER, EventScript_UseSurf_Archeops_Movement_3
	goto EventScript_UseSurf_Archeops_1


# 27 "data/scripts/surf.pory"
EventScript_UseSurf_Archeops_Movement_0:
# 27 "data/scripts/surf.pory"
	walk_up
	step_end

# 29 "data/scripts/surf.pory"
EventScript_UseSurf_Archeops_Movement_1:
# 29 "data/scripts/surf.pory"
	walk_down
	step_end

# 31 "data/scripts/surf.pory"
EventScript_UseSurf_Archeops_Movement_2:
# 31 "data/scripts/surf.pory"
	walk_left
	step_end

# 33 "data/scripts/surf.pory"
EventScript_UseSurf_Archeops_Movement_3:
# 33 "data/scripts/surf.pory"
	walk_right
	step_end
