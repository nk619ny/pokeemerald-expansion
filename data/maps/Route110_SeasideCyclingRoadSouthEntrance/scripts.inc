# 1 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 2 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_MapScripts::
	.byte 0
# 5 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

Route110_SeasideCyclingRoadSouthEntrance_EventScript_Clerk::
# 16 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lock
# 17 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	faceplayer
# 18 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 19 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	release
# 20 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 21 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 22 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck::
# 23 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 24 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 0, Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike
# 27 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 28 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 29 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 30 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 31 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike::
# 37 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 38 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	closemessage
# 39 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter
# 40 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 42 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 43 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 44 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter:
# 45 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	walk_left
# 46 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	step_end
# 47 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 48 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad::
# 49 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
	clearflag FLAG_SYS_CYCLING_ROAD
# 52 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 53 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 54 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 55 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 56 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad:
# 57 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 58 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 59 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 60 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 61 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 62 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk:
# 63 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 64 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 65 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"
