# 1 "data/maps/Route112_CableCarStation/scripts.pory"

# 2 "data/maps/Route112_CableCarStation/scripts.pory"
//.set LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, 1
# 3 "data/maps/Route112_CableCarStation/scripts.pory"

# 4 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_MapScripts::
# 5 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_CableCarStation_OnTransition
# 6 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route112_CableCarStation_OnFrame
# 7 "data/maps/Route112_CableCarStation/scripts.pory"
	.byte 0
# 8 "data/maps/Route112_CableCarStation/scripts.pory"

# 9 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnTransition:
# 10 "data/maps/Route112_CableCarStation/scripts.pory"
	setescapewarp MAP_ROUTE112, 28, 28
# 11 "data/maps/Route112_CableCarStation/scripts.pory"
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_MoveAttendantAside
# 12 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 13 "data/maps/Route112_CableCarStation/scripts.pory"

# 14 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_MoveAttendantAside::
# 15 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, 7, 4
# 16 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/Route112_CableCarStation/scripts.pory"
	return
# 18 "data/maps/Route112_CableCarStation/scripts.pory"

# 19 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnFrame:
# 20 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_ExitCableCar
# 21 "data/maps/Route112_CableCarStation/scripts.pory"
	.2byte 0
# 22 "data/maps/Route112_CableCarStation/scripts.pory"

# 23 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_ExitCableCar::
# 24 "data/maps/Route112_CableCarStation/scripts.pory"
	lockall
# 25 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_ExitCableCar
# 26 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 27 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 29 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, 6, 7
# 30 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	releaseall
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 33 "data/maps/Route112_CableCarStation/scripts.pory"

# 34 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant::
# 35 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 36 "data/maps/Route112_CableCarStation/scripts.pory"
	faceplayer
# 37 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 38 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route112_CableCarStation_EventScript_RideCableCar
# 39 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route112_CableCarStation_EventScript_DeclineRide
# 40 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 41 "data/maps/Route112_CableCarStation/scripts.pory"

# 42 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_RideCableCar::
# 43 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 44 "data/maps/Route112_CableCarStation/scripts.pory"
	closemessage
# 45 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, Route112_CableCarStation_Movement_LeadPlayerToCableCar
# 46 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_BoardCableCar
# 47 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_0x8004, FALSE  @ Going up
# 49 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 1
# 50 "data/maps/Route112_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 51 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCarWarp
# 52 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCar
# 53 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 54 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 55 "data/maps/Route112_CableCarStation/scripts.pory"

# 56 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_DeclineRide::
# 57 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 58 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 59 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 60 "data/maps/Route112_CableCarStation/scripts.pory"

# 61 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_LeadPlayerToCableCar:
# 62 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 63 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 64 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_right
# 65 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_in_place_faster_left
# 66 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 67 "data/maps/Route112_CableCarStation/scripts.pory"

# 68 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 69 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 70 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_left
# 71 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 72 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 73 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 74 "data/maps/Route112_CableCarStation/scripts.pory"

# 75 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_BoardCableCar:
# 76 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 77 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 78 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 79 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 80 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 81 "data/maps/Route112_CableCarStation/scripts.pory"

# 82 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_ExitCableCar:
# 83 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 84 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 85 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 86 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 87 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 88 "data/maps/Route112_CableCarStation/scripts.pory"

# 89 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_CableCarReadyGetOn:
# 90 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go up.\n"
# 91 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 92 "data/maps/Route112_CableCarStation/scripts.pory"

# 93 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_StepThisWay:
# 94 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 95 "data/maps/Route112_CableCarStation/scripts.pory"

# 96 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_RideAnotherTime:
# 97 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"
