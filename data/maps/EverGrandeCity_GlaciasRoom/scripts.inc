# 1 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
# 4 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
# 5 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
# 6 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnWarp:
# 9 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	//map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
# 10 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
# 13 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 14 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnFrame:
# 17 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
# 18 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
# 21 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lockall
# 22 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	//call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 23 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 24 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 25 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
# 26 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad:
# 29 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
# 30 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 3, EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
# 31 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 33 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
# 34 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 35 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 36 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 37 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
# 38 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 39 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 40 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 42 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 43 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	faceplayer
# 44 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
# 45 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 46 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 47 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_GlaciasRoom_Text_Defeat
# 48 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
# 49 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 50 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 51 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Defeated::
# 52 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 53 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call Common_EventScript_CheckIfEliteFourComplete
# 54 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
# 55 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 56 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 57 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 58 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
/*
# 59 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
# 60 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Welcome, my name is GLACIA\n"
# 61 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "of the ELITE FOUR.\p"
# 62 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "I've traveled from afar to HOENN\n"
# 63 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "so that I may hone my ice skills.\p"
# 64 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "But all I have seen are challenges by\n"
# 65 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "weak TRAINERS and their POKéMON.\p"
# 66 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "What about you?\p"
# 67 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "It would please me to no end if I could\n"
# 68 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "go all out against you!$"
# 69 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 70 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_Defeat:
# 71 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "You and your POKéMON…\n"
# 72 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "How hot your spirits burn!\p"
# 73 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "The all-consuming heat overwhelms.\p"
# 74 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "It's no surprise that my icy skills\n"
# 75 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "failed to harm you.$"
# 76 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 77 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
# 78 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Advance to the next room.\p"
# 79 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "And there, confirm the truly fearsome\n"
# 80 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "side of the POKéMON LEAGUE.$"
# 81 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
*/
# 82 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 83 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Wallace::
# 84 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 85 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	faceplayer
# 86 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
# 87 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 88 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 89 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_GlaciasRoom_Text_Defeat
# 90 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
# 91 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end

EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
# 112 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 113 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_ALL_ELITE_FOUR_BEATEN, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech_2
# 117 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_NPC
EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech_1:
# 119 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	waitmessage
# 120 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech_2:
# 114 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostE4Speech, MSGBOX_NPC
	goto EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech_1


EverGrandeCity_GlaciasRoom_Text_IntroSpeech::
# 95 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Allow me to formally introduce myself.\n"
	.string "I am Wallace. Member of the Elite Four.\p"
	.string "I come from Sootopolis, and heard of\n"
	.string "your talent from my mentor, Juan.\p"
	.string "This is where your achievements are put\n"
	.string "to the test against what others like\l"
	.string "you have achieved.\p"
	.string "Now! Who can most elegantly dance with\n"
	.string "their Pokémon?\p"
	.string "Show me right here and now!$"

EverGrandeCity_GlaciasRoom_Text_Defeat::
# 99 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Bravo!$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech::
# 103 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "I realize now your authenticity and\n"
	.string "magnificence as a Pokémon Trainer.\p"
	.string "I find much joy in having met you and\n"
	.string "your Pokémon.\p"
	.string "Proceed forth, and prove yourself\n"
	.string "against the remaining members!$"

EverGrandeCity_GlaciasRoom_Text_PostE4Speech::
# 107 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "I lack fitting words to offer you.\p"
	.string "You are standing before the summit of\n"
	.string "all Hoenn Trainers.\p"
	.string "Let us see if you can even surpass\n"
	.string "Steven!$"
