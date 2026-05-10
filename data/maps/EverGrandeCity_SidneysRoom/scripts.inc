# 1 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_SidneysRoom_OnLoad
# 4 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 5 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_SidneysRoom_OnTransition
# 6 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_SidneysRoom_OnFrame
# 7 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 9 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnTransition:
# 10 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	//setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 11 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	//setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 12 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 14 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad:
# 15 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom
# 16 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 1, EverGrandeCity_SidneysRoom_EventScript_CloseDoor
# 17 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom::
# 20 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 21 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 22 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 23 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_CloseDoor::
# 24 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 25 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 26 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnWarp:
# 28 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	//map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth
# 29 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 30 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 31 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth::
# 32 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 33 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 34 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 35 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnFrame:
# 36 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor
# 37 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 39 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor::
# 40 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lockall
# 41 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	//call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 42 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_unset FLAG_DEFEATED_ELITE_4_SIDNEY, PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 43 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 44 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
# 45 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 46 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 47 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
/*
# 48 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 49 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 50 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 51 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
# 52 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 53 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 54 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_NOLAND, EverGrandeCity_SidneysRoom_Text_Defeat
# 55 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
# 56 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 57 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
*/
# 58 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 59 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Defeated::
# 60 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 61 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call Common_EventScript_CheckIfEliteFourComplete
# 62 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
# 63 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 64 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 65 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 66 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
/*
# 67 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_IntroSpeech:
# 68 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Welcome, challenger!\n"
# 69 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I'm SIDNEY of the ELITE FOUR.\p"
# 70 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I like that look you're giving me.\n"
# 71 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I guess you'll give me a good match.\l"
# 72 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "That's good! Looking real good!\p"
# 73 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "All right! You and me, let's enjoy\n"
# 74 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "a battle that can only be staged\l"
# 75 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "here in the Pokémon LEAGUE!$"
# 76 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 77 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_Defeat:
# 78 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, how do you like that? I lost!\n"
# 79 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Eh, it was fun, so it doesn't matter.$"
# 80 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 81 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_PostBattleSpeech:
# 82 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, listen to what this loser has\n"
# 83 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "to say.\p"
# 84 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You've got what it takes to go far.\n"
# 85 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Now, go on to the next room and enjoy\l"
# 86 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "your next battle!$"
# 87 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
*/
# 88 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 89 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Noland::
# 90 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 91 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 92 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
# 93 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 94 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 95 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_NOLAND, EverGrandeCity_SidneysRoom_Text_Defeat
# 96 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
# 97 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end

EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech::
# 118 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 119 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_ALL_ELITE_FOUR_BEATEN, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech_2
# 123 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_NPC
EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech_1:
# 125 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmessage
# 126 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech_2:
# 120 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostE4Speech, MSGBOX_NPC
	goto EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech_1


EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 131 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 132 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 133 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_Sidney_2
EverGrandeCity_SidneysRoom_EventScript_Sidney_1:
# 136 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 137 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 138 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	random 2
# 139 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EverGrandeCity_SidneysRoom_EventScript_Sidney_5
# 143 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_NOLAND_2, EverGrandeCity_SidneysRoom_Text_Defeat
EverGrandeCity_SidneysRoom_EventScript_Sidney_4:
# 145 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
	return

EverGrandeCity_SidneysRoom_EventScript_Sidney_2:
# 134 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_1

EverGrandeCity_SidneysRoom_EventScript_Sidney_5:
# 140 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_NOLAND, EverGrandeCity_SidneysRoom_Text_Defeat
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_4


EverGrandeCity_SidneysRoom_Text_IntroSpeech::
# 101 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Hey, hey! My name's Noland!\p"
	.string "You must have a grasp of battling to\n"
	.string "get this far.\p"
	.string "But, listen up.\p"
	.string "Knowledge isn't only about reading\n"
	.string "books or doing desk work. Just doing\l"
	.string "that sort of thing... It may as well be\l"
	.string "useless!\p"
	.string "You have to experience things with your\n"
	.string "heart and your body, understand?\p"
	.string "Let's see if you know enough... in the\n"
	.string "ways that count!$"

EverGrandeCity_SidneysRoom_Text_Defeat::
# 105 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Good job! You know what you're doing!$"

EverGrandeCity_SidneysRoom_Text_PostBattleSpeech::
# 109 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Heh... you're a pretty bright spark.\p"
	.string "You keep up your studies, there'll be no\n"
	.string "stopping you!\p"
	.string "You should go on to the next room and\n"
	.string "have a good time!$"

EverGrandeCity_SidneysRoom_Text_PostE4Speech::
# 113 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Heh... you're a pretty bright spark.\p"
	.string "You go show the Champion what you\n"
	.string "know!$"
