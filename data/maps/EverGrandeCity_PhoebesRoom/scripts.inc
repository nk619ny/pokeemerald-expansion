# 1 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_PhoebesRoom_OnLoad
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PhoebesRoom_OnFrame
# 6 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnWarp:
# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	//map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
# 13 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 14 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnFrame:
# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor
# 18 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor::
# 21 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lockall
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	//call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_unset FLAG_DEFEATED_ELITE_4_PHOEBE, PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
# 26 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad:
# 29 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 2, EverGrandeCity_PhoebesRoom_EventScript_CloseDoor
# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 35 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 36 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 37 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_CloseDoor::
# 38 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 39 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 42 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 43 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 44 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 46 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 47 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LUCY, EverGrandeCity_PhoebesRoom_Text_Defeat
# 48 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 49 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Defeated::
# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call Common_EventScript_CheckIfEliteFourComplete
# 54 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
/*
# 59 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
# 60 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Ahahaha!\p"
# 61 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I'm PHOEBE of the ELITE FOUR.\n"
# 62 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I did my training on MT. PYRE.\p"
# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "While I trained, I gained the ability\n"
# 64 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "to commune with GHOST-type POKéMON.\p"
# 65 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes, the bond I developed with POKéMON\n"
# 66 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "is extremely tight.\p"
# 67 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "So, come on, just try and see if you can\n"
# 68 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "even inflict damage on my POKéMON!$"
# 69 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 70 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_Defeat:
# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Oh, darn.\n"
# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I've gone and lost.$"
# 73 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 74 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
# 75 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "There's a definite bond between you\n"
# 76 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "and your POKéMON, too.\p"
# 77 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I didn't recognize it, so it's only\n"
# 78 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "natural that I lost.\p"
# 79 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yup, I'd like to see how far your bond\n"
# 80 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "will carry you.\p"
# 81 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Go ahead, move on to the next room.$"
# 82 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
*/
# 83 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 84 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Lucy::
# 85 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 86 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 87 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 89 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 90 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LUCY, EverGrandeCity_PhoebesRoom_Text_Defeat
# 91 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 92 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end

EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
# 114 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 115 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_ALL_ELITE_FOUR_BEATEN, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech_2
# 119 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_NPC
EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech_1:
# 121 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 122 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech_2:
# 116 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostE4Speech, MSGBOX_NPC
	goto EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech_1


EverGrandeCity_PhoebesRoom_Text_IntroSpeech::
# 97 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I am Lucy… You have entered my domain…\p"
	.string "You already know it, but to advance, you\n"
	.string "must defeat me.\p"
	.string "I'm not one for idle chatter. Hurry.\p"
	.string "Come on… Your luck… I hope you didn't\n"
	.string "use it all up to get here…$"

EverGrandeCity_PhoebesRoom_Text_Defeat::
# 101 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Urk…$"

EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech::
# 105 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "…That's all there is… Disappear\n"
	.string "already…$"

EverGrandeCity_PhoebesRoom_Text_PostE4Speech::
# 109 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "You are never so skilled that victory is\n"
	.string "completely certain.\p"
	.string "More often than not, luck is what tilts\n"
	.string "the scales of battle.\p"
	.string "Time to see who has better luck. Or, who\n"
	.string "has the strength to overcome whatever\l"
	.string "obstacles bad luck places before them.\l"
	.string "You, or the Champion.$"
