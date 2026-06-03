# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_Gym/scripts.pory"

# 7 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 10 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 11 "data/maps/FortreeCity_Gym/scripts.pory"

# 12 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 15 "data/maps/FortreeCity_Gym/scripts.pory"

# 16 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 19 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 20 "data/maps/FortreeCity_Gym/scripts.pory"

# 21 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	//specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 29 "data/maps/FortreeCity_Gym/scripts.pory"

# 30 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_FLY_FROM_MAP_CONFIG
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 63
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_TRAINER_HILL_STATE, 6
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems6
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_120_STEVEN
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 62 "data/maps/FortreeCity_Gym/scripts.pory"

# 63 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	//giveitem ITEM_TM_TAILWIND
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitemspace ITEM_HP_UP
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitemspace ITEM_CARBOS
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	//msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_HP_UP, 3
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 3
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 75 "data/maps/FortreeCity_Gym/scripts.pory"

# 76 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	//giveitem ITEM_TM_TAILWIND
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitemspace ITEM_HP_UP
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitemspace ITEM_CARBOS
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	//msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_HP_UP, 3
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 3
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 88 "data/maps/FortreeCity_Gym/scripts.pory"

# 89 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 93 "data/maps/FortreeCity_Gym/scripts.pory"

# 94 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 98 "data/maps/FortreeCity_Gym/scripts.pory"

# 99 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 103 "data/maps/FortreeCity_Gym/scripts.pory"

# 104 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 108 "data/maps/FortreeCity_Gym/scripts.pory"

# 109 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 113 "data/maps/FortreeCity_Gym/scripts.pory"

# 114 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 118 "data/maps/FortreeCity_Gym/scripts.pory"

# 119 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 123 "data/maps/FortreeCity_Gym/scripts.pory"

# 124 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 131 "data/maps/FortreeCity_Gym/scripts.pory"

# 132 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 136 "data/maps/FortreeCity_Gym/scripts.pory"

# 137 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 142 "data/maps/FortreeCity_Gym/scripts.pory"

# 143 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 148 "data/maps/FortreeCity_Gym/scripts.pory"

# 149 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 153 "data/maps/FortreeCity_Gym/scripts.pory"

# 154 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 158 "data/maps/FortreeCity_Gym/scripts.pory"

# 159 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type Pokémon.\p"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 169 "data/maps/FortreeCity_Gym/scripts.pory"

# 170 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"

# 174 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD Pokémon!$"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"

# 178 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"

# 182 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"

# 188 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD Pokémon aspire\n"
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 193 "data/maps/FortreeCity_Gym/scripts.pory"

# 194 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 197 "data/maps/FortreeCity_Gym/scripts.pory"

# 198 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 203 "data/maps/FortreeCity_Gym/scripts.pory"

# 204 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"

# 209 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"

# 213 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"

# 218 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"

# 222 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 224 "data/maps/FortreeCity_Gym/scripts.pory"

# 225 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"

# 229 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"

# 235 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 236 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 238 "data/maps/FortreeCity_Gym/scripts.pory"

# 239 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"

# 244 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type Pokémon.\p"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"

# 249 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 251 "data/maps/FortreeCity_Gym/scripts.pory"

# 252 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's Pokémon are all business.$"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"

# 257 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE Pokémon GYM.\p"
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD Pokémon\n"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD Pokémon and I!$"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"

# 267 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command Pokémon with more grace\l"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"

# 274 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"

# 278 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, you will be\n"
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "able to use the HM move FLY outside\l"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of battle.\p"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"

# 285 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This TM contains Tailwind.\p"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Your Pokémon…\n"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Will soar faster than ever.\p"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"

# 291 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"

# 295 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD Pokémon.$"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"

# 299 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY Pokémon GYM$"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"

# 302 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY Pokémon GYM\p"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"

# 307 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"

# 317 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"

# 320 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"

# 327 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 336 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon with you?\p"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two Pokémon\n"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
