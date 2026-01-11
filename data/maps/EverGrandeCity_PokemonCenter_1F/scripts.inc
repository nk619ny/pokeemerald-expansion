# 1 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
//.set LOCALID_EVER_GRANDE_NURSE, 1
# 3 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
//.set LOCALID_EVER_GRANDE_SCOTT, 4
# 4 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 11 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_MET_SCOTT_IN_EVERGRANDE, EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott
# 12 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott::
# 15 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
# 16 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 17 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 18 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Nurse::
# 20 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_EVER_GRANDE_NURSE
# 21 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 25 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Woman::
# 28 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad, MSGBOX_NPC
# 29 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM::
# 32 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon, MSGBOX_NPC
# 33 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott::
# 36 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 38 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_DEFAULT
# 39 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 40 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth
# 41 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 45 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 46 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitse
# 47 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_EVER_GRANDE_SCOTT
# 48 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 49 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 50 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth::
# 52 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth
# 53 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 55 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit::
# 57 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExit
# 58 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 60 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth:
# 62 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 63 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 64 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 65 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 66 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 67 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 68 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 69 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 70 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExit:
# 71 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 72 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 73 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 74 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 75 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 76 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 77 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 78 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 79 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad:
# 80 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The Pokémon LEAGUE is only a short\n"
# 81 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "distance after the VICTORY ROAD.\p"
# 82 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "If you've come this far, what choice\n"
# 83 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "do you have but to keep going?$"
# 84 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 85 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon:
# 86 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The long and harrowing VICTORY ROAD…\p"
# 87 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "It's like reliving the path one has\n"
# 88 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "traveled in life…\p"
# 89 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Believe in your Pokémon and give it\n"
# 90 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "your very best!$"
# 91 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 92 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou:
# 93 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, you've clawed your\n"
# 94 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "way up to face the Pokémon LEAGUE!\p"
# 95 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'm happy for you!\n"
# 96 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "You made my cheering worthwhile!\p"
# 97 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}{KUN}, if you were to become\n"
# 98 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "the Pokémon LEAGUE CHAMPION…\p"
# 99 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'll get in touch with you then.\p"
# 100 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Okay, {PLAYER}{KUN}.\n"
# 101 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Go for greatness!$"
