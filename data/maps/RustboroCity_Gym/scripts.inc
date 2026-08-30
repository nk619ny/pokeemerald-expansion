# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	//specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Roxanne_PostBadge
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 14 "data/maps/RustboroCity_Gym/scripts.pory"

# 15 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfo, MSGBOX_DEFAULT
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_HIDE_REGIROCK_RUINS_ROCK
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
//	addvar VAR_PETALBURG_GYM_STATE, 1
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP 51
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TRAINER_HILL_STATE, 4
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems4
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TakeThis, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
//	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 36 "data/maps/RustboroCity_Gym/scripts.pory"

# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_STONE_EDGE
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 40 "data/maps/RustboroCity_Gym/scripts.pory"

# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 43 "data/maps/RustboroCity_Gym/scripts.pory"

# 44 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_IRON, 6
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	//msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"

# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 56 "data/maps/RustboroCity_Gym/scripts.pory"

# 57 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 61 "data/maps/RustboroCity_Gym/scripts.pory"

# 62 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 66 "data/maps/RustboroCity_Gym/scripts.pory"

# 67 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 71 "data/maps/RustboroCity_Gym/scripts.pory"

# 72 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Danielle::
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DANIELLE, RustboroCity_Gym_Text_DanielleIntro, RustboroCity_Gym_Text_DanielleDefeat
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 76 "data/maps/RustboroCity_Gym/scripts.pory"

# 77 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Jace::
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JACE, RustboroCity_Gym_Text_JaceIntro, RustboroCity_Gym_Text_JaceDefeat
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 81 "data/maps/RustboroCity_Gym/scripts.pory"

# 82 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 89 "data/maps/RustboroCity_Gym/scripts.pory"

# 90 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 94 "data/maps/RustboroCity_Gym/scripts.pory"

# 95 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 100 "data/maps/RustboroCity_Gym/scripts.pory"

# 101 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 106 "data/maps/RustboroCity_Gym/scripts.pory"

# 107 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 111 "data/maps/RustboroCity_Gym/scripts.pory"

# 112 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 116 "data/maps/RustboroCity_Gym/scripts.pory"

# 117 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 131 "data/maps/RustboroCity_Gym/scripts.pory"

# 132 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon CHAMPIONSHIP together!\p"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type Pokémon.\p"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"

# 154 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"

# 166 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"

# 170 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"

# 173 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"

# 177 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"

# 181 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"

# 184 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"

# 189 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK Pokémon need room to\n"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"

# 195 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"

# 199 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"

# 204 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon GYM LEADER.\p"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"

# 213 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon LEAGUE's rules state\n"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"

# 225 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"

# 229 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE contains\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Stone Edge. It deals significant\p"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rock-type damage.$"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"

# 234 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"

# 240 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"

# 243 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"

# 248 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"

# 265 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"

# 269 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"

# 277 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"

# 281 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"

# 287 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"

RustboroCity_Gym_EventScript_Roxanne_PostBadge::
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_PostBadge_2
RustboroCity_Gym_EventScript_Roxanne_PostBadge_1:
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_TEMP_3
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, RustboroCity_Gym_EventScript_Roxanne_PostBadge_6
# 346 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, RustboroCity_Gym_EventScript_Roxanne_PostBadge_7
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, RustboroCity_Gym_EventScript_Roxanne_PostBadge_8
# 352 "data/maps/RustboroCity_Gym/scripts.pory"
	case 4, RustboroCity_Gym_EventScript_Roxanne_PostBadge_9
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end

RustboroCity_Gym_EventScript_Roxanne_PostBadge_2:
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	random 3
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 340 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto RustboroCity_Gym_EventScript_Roxanne_PostBadge_1

RustboroCity_Gym_EventScript_Roxanne_PostBadge_4:
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end

RustboroCity_Gym_EventScript_Roxanne_PostBadge_6:
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Roxanne_Steven, MSGBOX_NPC
# 345 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto RustboroCity_Gym_EventScript_Roxanne_PostBadge_4

RustboroCity_Gym_EventScript_Roxanne_PostBadge_7:
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Roxanne_Rusturf, MSGBOX_NPC
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto RustboroCity_Gym_EventScript_Roxanne_PostBadge_4

RustboroCity_Gym_EventScript_Roxanne_PostBadge_8:
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Roxanne_Bridge, MSGBOX_NPC
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto RustboroCity_Gym_EventScript_Roxanne_PostBadge_4

RustboroCity_Gym_EventScript_Roxanne_PostBadge_9:
# 353 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_NPC
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto RustboroCity_Gym_EventScript_Roxanne_PostBadge_4


RustboroCity_Gym_Text_StoneBadgeInfo::
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge enables your Pokémon\n"
	.string "to use the HM move Strength outside of\l"
	.string "battle.$"

RustboroCity_Gym_Text_TakeThis::
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_JaceIntro::
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Pokémon and I patrolled the\n"
	.string "mountains around Rustboro.\p"
	.string "Roxanne saw us and recruited us for her\n"
	.string "Gym!$"

RustboroCity_Gym_Text_JaceDefeat::
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Maybe I should head back to the\n"
	.string "mountains…$"

RustboroCity_Gym_Text_JacePostBattle::
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne trains us hard, so we can help\n"
	.string "her keep the Gym strong!$"

RustboroCity_Gym_Text_DanielleIntro::
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "People don't expert a young girl like\n"
	.string "Roxanne to be a Rock-type specialist.\p"
	.string "She shows that anyone can have\n"
	.string "strength, grit, and determination!$"

RustboroCity_Gym_Text_DanielleDefeat::
# 324 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I guess I still have a lot to learn about\n"
	.string "Rock-type Pokémon.$"

RustboroCity_Gym_Text_DaniellePostBattle::
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is my inspiration.\p"
	.string "I came to Rustboro to learn from her!$"

RustboroCity_Gym_Text_Roxanne_Steven::
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I graduated from the\n"
	.string "Rustboro Trainer School as\l"
	.string "valedictorian.\p"
	.string "Steven Stone was the salutatorian of\n"
	.string "that class.$"

RustboroCity_Gym_Text_Roxanne_Rusturf::
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: After the bridge went down, we\n"
	.string "reopened the Rusturf Tunnel project.\p"
	.string "I negotiated a compromise with Archie\n"
	.string "and Mr. Stone after team Aqua's\l"
	.string "intervention.\p"
	.string "We will continue clearing the tunnel,\n"
	.string "but only with skilled Trainers and their\l"
	.string "Pokémon operating carefully.$"

RustboroCity_Gym_Text_Roxanne_Bridge::
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm glad we were able to get\n"
	.string "the bridge to Petalburg City repaired.\p"
	.string "Devon Corp took over the project, and\n"
	.string "did a great job.$"
