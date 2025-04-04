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
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
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
	call Common_EventScript_ApplyHandicap
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_120_STEVEN
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 57 "data/maps/FortreeCity_Gym/scripts.pory"

# 58 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 65 "data/maps/FortreeCity_Gym/scripts.pory"

# 66 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 72 "data/maps/FortreeCity_Gym/scripts.pory"

# 73 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 77 "data/maps/FortreeCity_Gym/scripts.pory"

# 78 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 82 "data/maps/FortreeCity_Gym/scripts.pory"

# 83 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 87 "data/maps/FortreeCity_Gym/scripts.pory"

# 88 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 92 "data/maps/FortreeCity_Gym/scripts.pory"

# 93 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 97 "data/maps/FortreeCity_Gym/scripts.pory"

# 98 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 102 "data/maps/FortreeCity_Gym/scripts.pory"

# 103 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 107 "data/maps/FortreeCity_Gym/scripts.pory"

# 108 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 115 "data/maps/FortreeCity_Gym/scripts.pory"

# 116 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 120 "data/maps/FortreeCity_Gym/scripts.pory"

# 121 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 126 "data/maps/FortreeCity_Gym/scripts.pory"

# 127 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 132 "data/maps/FortreeCity_Gym/scripts.pory"

# 133 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 137 "data/maps/FortreeCity_Gym/scripts.pory"

# 138 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 142 "data/maps/FortreeCity_Gym/scripts.pory"

# 143 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type POKéMON.\p"
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 153 "data/maps/FortreeCity_Gym/scripts.pory"

# 154 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 157 "data/maps/FortreeCity_Gym/scripts.pory"

# 158 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD POKéMON!$"
# 161 "data/maps/FortreeCity_Gym/scripts.pory"

# 162 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 165 "data/maps/FortreeCity_Gym/scripts.pory"

# 166 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 171 "data/maps/FortreeCity_Gym/scripts.pory"

# 172 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
# 174 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"

# 178 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"

# 182 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"

# 188 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"

# 193 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 196 "data/maps/FortreeCity_Gym/scripts.pory"

# 197 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"

# 202 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 205 "data/maps/FortreeCity_Gym/scripts.pory"

# 206 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"

# 209 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"

# 213 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"

# 219 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"

# 223 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"

# 228 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type POKéMON.\p"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"

# 233 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"

# 236 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's POKéMON are all business.$"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"

# 241 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD POKéMON\n"
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD POKéMON and I!$"
# 250 "data/maps/FortreeCity_Gym/scripts.pory"

# 251 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command POKéMON with more grace\l"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"

# 258 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"

# 262 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, you will be\n"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "able to use the HM move FLY outside\l"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of battle.\p"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"

# 269 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Its speed…\n"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"

# 275 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"

# 279 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD POKéMON.$"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"

# 283 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"

# 286 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"

# 291 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"

# 301 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"

# 304 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"

# 311 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
