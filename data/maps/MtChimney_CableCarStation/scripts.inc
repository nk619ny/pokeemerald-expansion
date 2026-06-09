# 1 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 2 "data/maps/MtChimney_CableCarStation/scripts.pory"
//.set LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, 1
# 3 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 4 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_MapScripts::
# 5 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_CableCarStation_OnTransition
# 6 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_CableCarStation_OnFrame
# 7 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.byte 0
# 8 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 9 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnTransition:
# 10 "data/maps/MtChimney_CableCarStation/scripts.pory"
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_MoveAttendantAside
# 11 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_MoveAttendantAside::
# 14 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, 5, 4
# 15 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data/maps/MtChimney_CableCarStation/scripts.pory"
	return
# 17 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 18 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnFrame:
# 19 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_ExitCableCar
# 20 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.2byte 0
# 21 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 22 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_ExitCableCar::
# 23 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lockall
# 24 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_CableCarStation_Movement_ExitCableCar
# 25 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 26 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 27 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 28 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, 6, 7
# 29 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	releaseall
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 32 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 33 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant::
# 34 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lock
# 35 "data/maps/MtChimney_CableCarStation/scripts.pory"
	faceplayer
# 36 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 37 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MtChimney_CableCarStation_EventScript_RideCableCar
# 38 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_CableCarStation_EventScript_DeclineRide
# 39 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 40 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 41 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_RideCableCar::
# 42 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 43 "data/maps/MtChimney_CableCarStation/scripts.pory"
	closemessage
# 44 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MtChimney_CableCarStation_Movement_LeadPlayerToCableCar
# 45 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_CableCarStation_Movement_BoardCableCar
# 46 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 47 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_0x8004, TRUE  @ Going down
# 48 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 2
# 49 "data/maps/MtChimney_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 50 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCarWarp
# 51 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCar
# 52 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
# 53 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 54 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 55 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_DeclineRide::
# 56 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 57 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
# 58 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 59 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 60 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_LeadPlayerToCableCar:
# 61 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 62 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 63 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_left
# 64 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_in_place_faster_right
# 65 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 66 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 67 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 68 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 69 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_right
# 70 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 71 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 72 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 73 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 74 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_BoardCableCar:
# 75 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 76 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 77 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 78 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 79 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 80 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 81 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_ExitCableCar:
# 82 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 83 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 84 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 85 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 86 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 87 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 88 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_CableCarReadyGetOn:
# 89 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go down.\n"
# 90 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 91 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 92 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_StepThisWay:
# 93 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 94 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 95 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_RideAnotherTime:
# 96 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"

MtChimney_CableCarStation_EventScript_MagmaGrunt::
# 101 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lock
# 102 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_EventScript_MagmaGrunt_Text_0, MSGBOX_NPC
# 103 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmessage
# 104 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
	end


MtChimney_CableCarStation_EventScript_MagmaGrunt_Text_0:
# 102 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "I'm sorry, but the cable car is currently\n"
	.string "out of service.\p"
	.string "We had to do some... routine\n"
	.string "maintenance.\p"
	.string "Please come back later.$"
