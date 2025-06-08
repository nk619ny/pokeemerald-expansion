# 1 "data/maps/NavelRock_Harbor/scripts.pory"

# 2 "data/maps/NavelRock_Harbor/scripts.pory"

# 3 "data/maps/NavelRock_Harbor/scripts.pory"
NavelRock_Harbor_MapScripts::
# 4 "data/maps/NavelRock_Harbor/scripts.pory"
	.byte 0
# 5 "data/maps/NavelRock_Harbor/scripts.pory"

# 6 "data/maps/NavelRock_Harbor/scripts.pory"
NavelRock_Harbor_EventScript_Sailor::
# 7 "data/maps/NavelRock_Harbor/scripts.pory"
	lock
# 8 "data/maps/NavelRock_Harbor/scripts.pory"
	faceplayer
# 9 "data/maps/NavelRock_Harbor/scripts.pory"
	msgbox NavelRock_Harbor_Text_SailorReturn, MSGBOX_YESNO
# 10 "data/maps/NavelRock_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NavelRock_Harbor_EventScript_AsYouLike
# 11 "data/maps/NavelRock_Harbor/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 12 "data/maps/NavelRock_Harbor/scripts.pory"
	closemessage
# 13 "data/maps/NavelRock_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 14 "data/maps/NavelRock_Harbor/scripts.pory"
	waitmovement 0
# 15 "data/maps/NavelRock_Harbor/scripts.pory"
	delay 30
# 16 "data/maps/NavelRock_Harbor/scripts.pory"
	hideobjectat LOCALID_NAVEL_ROCK_SAILOR, MAP_NAVEL_ROCK_HARBOR
# 17 "data/maps/NavelRock_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_NAVEL_ROCK_SS_TIDAL
# 18 "data/maps/NavelRock_Harbor/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 19 "data/maps/NavelRock_Harbor/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 20 "data/maps/NavelRock_Harbor/scripts.pory"
	waitstate
# 21 "data/maps/NavelRock_Harbor/scripts.pory"
	release
# 22 "data/maps/NavelRock_Harbor/scripts.pory"
	end
# 23 "data/maps/NavelRock_Harbor/scripts.pory"

# 24 "data/maps/NavelRock_Harbor/scripts.pory"
NavelRock_Harbor_EventScript_AsYouLike::
# 25 "data/maps/NavelRock_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 26 "data/maps/NavelRock_Harbor/scripts.pory"
	release
# 27 "data/maps/NavelRock_Harbor/scripts.pory"
	end
