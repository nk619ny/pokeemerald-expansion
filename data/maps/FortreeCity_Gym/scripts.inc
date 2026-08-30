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
	goto FortreeCity_Gym_EventScript_Winona_PostBadge
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 29 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 30 "data/maps/FortreeCity_Gym/scripts.pory"

# 31 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_FLY_FROM_MAP_CONFIG
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 63
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_TRAINER_HILL_STATE, 6
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems6
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_120_STEVEN
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 63 "data/maps/FortreeCity_Gym/scripts.pory"

# 64 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	//giveitem ITEM_TM_TAILWIND
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitemspace ITEM_HP_UP
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitemspace ITEM_CARBOS
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	//msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_HP_UP, 3
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 3
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 76 "data/maps/FortreeCity_Gym/scripts.pory"

# 77 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	//giveitem ITEM_TM_TAILWIND
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitemspace ITEM_HP_UP
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitemspace ITEM_CARBOS
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	//msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_HP_UP, 3
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 3
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 89 "data/maps/FortreeCity_Gym/scripts.pory"

# 90 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 94 "data/maps/FortreeCity_Gym/scripts.pory"

# 95 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 99 "data/maps/FortreeCity_Gym/scripts.pory"

# 100 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 104 "data/maps/FortreeCity_Gym/scripts.pory"

# 105 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 109 "data/maps/FortreeCity_Gym/scripts.pory"

# 110 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 114 "data/maps/FortreeCity_Gym/scripts.pory"

# 115 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 119 "data/maps/FortreeCity_Gym/scripts.pory"

# 120 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 124 "data/maps/FortreeCity_Gym/scripts.pory"

# 125 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 132 "data/maps/FortreeCity_Gym/scripts.pory"

# 133 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 137 "data/maps/FortreeCity_Gym/scripts.pory"

# 138 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 143 "data/maps/FortreeCity_Gym/scripts.pory"

# 144 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 149 "data/maps/FortreeCity_Gym/scripts.pory"

# 150 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 154 "data/maps/FortreeCity_Gym/scripts.pory"

# 155 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 159 "data/maps/FortreeCity_Gym/scripts.pory"

# 160 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type Pokémon.\p"
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"

# 171 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 174 "data/maps/FortreeCity_Gym/scripts.pory"

# 175 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD Pokémon!$"
# 178 "data/maps/FortreeCity_Gym/scripts.pory"

# 179 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"

# 183 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD Pokémon aspire\n"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"

# 195 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 198 "data/maps/FortreeCity_Gym/scripts.pory"

# 199 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 204 "data/maps/FortreeCity_Gym/scripts.pory"

# 205 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 209 "data/maps/FortreeCity_Gym/scripts.pory"

# 210 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 213 "data/maps/FortreeCity_Gym/scripts.pory"

# 214 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"

# 219 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"

# 223 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 225 "data/maps/FortreeCity_Gym/scripts.pory"

# 226 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 229 "data/maps/FortreeCity_Gym/scripts.pory"

# 230 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"

# 236 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"

# 240 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"

# 245 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type Pokémon.\p"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"

# 250 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 252 "data/maps/FortreeCity_Gym/scripts.pory"

# 253 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's Pokémon are all business.$"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"

# 258 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE Pokémon GYM.\p"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD Pokémon\n"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD Pokémon and I!$"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"

# 268 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command Pokémon with more grace\l"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"

# 275 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"

# 279 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, you will be\n"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "able to use the HM move FLY outside\l"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of battle.\p"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"

# 286 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This TM contains Tailwind.\p"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Your Pokémon…\n"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Will soar faster than ever.\p"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"

# 292 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"

# 296 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD Pokémon.$"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"

# 300 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY Pokémon GYM$"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"

# 303 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY Pokémon GYM\p"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"

# 308 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"

# 318 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"

# 321 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 327 "data/maps/FortreeCity_Gym/scripts.pory"

# 328 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 336 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon with you?\p"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two Pokémon\n"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"

FortreeCity_Gym_EventScript_Winona_PostBadge::
# 347 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq FortreeCity_Gym_EventScript_Winona_PostBadge_2
FortreeCity_Gym_EventScript_Winona_PostBadge_1:
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	switch VAR_TEMP_8
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	case 1, FortreeCity_Gym_EventScript_Winona_PostBadge_6
# 356 "data/maps/FortreeCity_Gym/scripts.pory"
	case 2, FortreeCity_Gym_EventScript_Winona_PostBadge_7
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	case 3, FortreeCity_Gym_EventScript_Winona_PostBadge_8
# 362 "data/maps/FortreeCity_Gym/scripts.pory"
	case 4, FortreeCity_Gym_EventScript_Winona_PostBadge_9
# 366 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
	end

FortreeCity_Gym_EventScript_Winona_PostBadge_2:
# 348 "data/maps/FortreeCity_Gym/scripts.pory"
	random 3
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
# 350 "data/maps/FortreeCity_Gym/scripts.pory"
	addvar VAR_TEMP_8, 1
	goto FortreeCity_Gym_EventScript_Winona_PostBadge_1

FortreeCity_Gym_EventScript_Winona_PostBadge_4:
# 369 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 370 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
	end

FortreeCity_Gym_EventScript_Winona_PostBadge_6:
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_Winona_Legendaries, MSGBOX_NPC
# 355 "data/maps/FortreeCity_Gym/scripts.pory"
	addvar VAR_TEMP_8, 1
	goto FortreeCity_Gym_EventScript_Winona_PostBadge_4

FortreeCity_Gym_EventScript_Winona_PostBadge_7:
# 357 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_Winona_Magma, MSGBOX_NPC
# 358 "data/maps/FortreeCity_Gym/scripts.pory"
	addvar VAR_TEMP_8, 1
	goto FortreeCity_Gym_EventScript_Winona_PostBadge_4

FortreeCity_Gym_EventScript_Winona_PostBadge_8:
# 360 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_Winona_Aqua, MSGBOX_NPC
# 361 "data/maps/FortreeCity_Gym/scripts.pory"
	addvar VAR_TEMP_8, 1
	goto FortreeCity_Gym_EventScript_Winona_PostBadge_4

FortreeCity_Gym_EventScript_Winona_PostBadge_9:
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_NPC
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_TEMP_8, 1
	goto FortreeCity_Gym_EventScript_Winona_PostBadge_4


FortreeCity_Gym_Text_Winona_Legendaries::
# 374 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: Hm? Two legendaries?\p"
	.string "Well, Liza tells me Celesteela isn't\n"
	.string "really a legendary, it's some sort of\l"
	.string "space Beast.$"

FortreeCity_Gym_Text_Winona_Magma::
# 378 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: I don't really understand Team\n"
	.string "Magma.\p"
	.string "Here in Fortree, we haven't felt a need\n"
	.string "to transform our environment in order\l"
	.string "to have a thriving community.\p"
	.string "We live within the forest, in harmony\n"
	.string "with nature.$"

FortreeCity_Gym_Text_Winona_Aqua::
# 382 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: I did hear that Team Aqua was\n"
	.string "causing some commotion in the Weather\l"
	.string "Center nearby.\p"
	.string "It doesn't sound like they were really\n"
	.string "hurting anyone though.$"
