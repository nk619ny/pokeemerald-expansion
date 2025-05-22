# 1 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_OnFrame
# 4 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
# 5 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_DrakesRoom_OnWarp
# 6 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
@ Unused, Drake uses Sidneys identical OnWarp for some reason
# 9 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnWarp:
# 10 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	//map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
# 11 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 12 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
# 14 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnFrame:
# 18 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
# 19 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 20 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 21 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
# 22 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lockall
# 23 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	//call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 24 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_unset FLAG_DEFEATED_ELITE_4_DRAKE, PokemonLeague_EliteFour_EventScript_WalkInCloseDoorRight
# 25 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 26 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	releaseall
# 27 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 29 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad:
# 30 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
# 31 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_CloseDoor
# 32 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 33 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 34 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
# 35 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 36 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 37 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 38 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
# 39 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 40 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 41 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 42 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Drake::
# 43 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 44 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 45 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
# 46 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 47 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 48 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_TUCKER, EverGrandeCity_DrakesRoom_Text_Defeat
# 49 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
# 50 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 51 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Defeated::
# 53 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	//setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
# 54 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	//special Script_TryGainNewFanFromCounter
# 55 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 56 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call Common_EventScript_CheckIfEliteFourComplete
# 57 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
# 58 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 59 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 60 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 61 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
/*
# 62 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_IntroSpeech:
# 63 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I am the last of the POKéMON LEAGUE\n"
# 64 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "ELITE FOUR, DRAKE the DRAGON master!\p"
# 65 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "In their natural state, POKéMON are\n"
# 66 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "wild living things. They are free.\p"
# 67 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "At times, they hinder us.\n"
# 68 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "At times, they help us.\p"
# 69 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "For us to battle with POKéMON as\n"
# 70 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "partners, do you know what it takes?\p"
# 71 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Do you know what is needed?\p"
# 72 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "If you don't, then you will never\n"
# 73 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "prevail over me!$"
# 74 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 75 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_Defeat:
# 76 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Superb, it should be said.$"
# 77 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 78 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
# 79 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "You deserve every credit for coming\n"
# 80 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "this far as a TRAINER of POKéMON.\p"
# 81 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "You do seem to know what is needed.\p"
# 82 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Yes, what a TRAINER needs is a\n"
# 83 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "virtuous heart.\p"
# 84 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "POKéMON touch the good hearts of\n"
# 85 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "TRAINERS and learn good from wrong.\p"
# 86 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "They touch the good hearts of\n"
# 87 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "TRAINERS and grow strong.\p"
# 88 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Go! Go onwards!\n"
# 89 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "The CHAMPION is waiting!$"
# 90 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
*/
# 91 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 92 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Tucker::
# 93 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 94 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 95 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
# 96 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 97 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 98 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_TUCKER, EverGrandeCity_DrakesRoom_Text_Defeat
# 99 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
# 100 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end

EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
# 120 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 121 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_ALL_ELITE_FOUR_BEATEN, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech_2
# 125 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_NPC
EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech_1:
# 127 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 128 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech_2:
# 122 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostE4Speech, MSGBOX_NPC
	goto EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech_1


EverGrandeCity_DrakesRoom_Text_IntroSpeech::
# 103 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Ahahah! Do you hear it? The crowd!\n"
	.string "They're all itching to see our match!\p"
	.string "Ahahah! I bet you're twitching all over\n"
	.string "from the tension of getting to battle\l"
	.string "me!\p"
	.string "But don't worry about a thing! I'm the\n"
	.string "no. 1 star of the Elite Four!\p"
	.string "I, Tucker the Ace, will bathe you in a\n"
	.string "brilliant glow!\p"
	.string "Your strategy! Let's see it!\p"
	.string "The ultimate match! {PLAYER} versus\n"
	.string "the Ace, Tucker!\p"
	.string "Let the battle begin!$"

EverGrandeCity_DrakesRoom_Text_Defeat::
# 107 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "What the…$"

EverGrandeCity_DrakesRoom_Text_PostBattleSpeech::
# 111 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "You're genuinely fantastic! Yes, quite\n"
	.string "fantastic!\p"
	.string "You're strong, but above all, you have a\n"
	.string "unique charm!\p"
	.string "In you, I see a definite potential for a\n"
	.string "superstar like me.\p"
	.string "I will very much look forward to your\n"
	.string "encounters with the rest of the Elite\l"
	.string "Four!$"

EverGrandeCity_DrakesRoom_Text_PostE4Speech::
# 115 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "You're genuinely fantastic! Yes, quite\n"
	.string "fantastic!\p"
	.string "You're strong, but above all, you have a\n"
	.string "unique charm!\p"
	.string "In you, I see a definite potential for a\n"
	.string "superstar like me.\p"
	.string "I will very much look forward to your\n"
	.string "encounter with the Champion!$"
