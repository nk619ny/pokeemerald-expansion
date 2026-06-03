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
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfo, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_HIDE_REGIROCK_RUINS_ROCK
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
//	addvar VAR_PETALBURG_GYM_STATE, 1
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP 51
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TRAINER_HILL_STATE, 4
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems4
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TakeThis, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
//	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 35 "data/maps/RustboroCity_Gym/scripts.pory"

# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_STONE_EDGE
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 39 "data/maps/RustboroCity_Gym/scripts.pory"

# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Gym/scripts.pory"

# 43 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_IRON, 6
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	//msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 50 "data/maps/RustboroCity_Gym/scripts.pory"

# 51 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 55 "data/maps/RustboroCity_Gym/scripts.pory"

# 56 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 60 "data/maps/RustboroCity_Gym/scripts.pory"

# 61 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Gym/scripts.pory"

# 66 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 70 "data/maps/RustboroCity_Gym/scripts.pory"

# 71 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Danielle::
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DANIELLE, RustboroCity_Gym_Text_DanielleIntro, RustboroCity_Gym_Text_DanielleDefeat
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 75 "data/maps/RustboroCity_Gym/scripts.pory"

# 76 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Jace::
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JACE, RustboroCity_Gym_Text_JaceIntro, RustboroCity_Gym_Text_JaceDefeat
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 80 "data/maps/RustboroCity_Gym/scripts.pory"

# 81 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 88 "data/maps/RustboroCity_Gym/scripts.pory"

# 89 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 93 "data/maps/RustboroCity_Gym/scripts.pory"

# 94 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 99 "data/maps/RustboroCity_Gym/scripts.pory"

# 100 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 105 "data/maps/RustboroCity_Gym/scripts.pory"

# 106 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 110 "data/maps/RustboroCity_Gym/scripts.pory"

# 111 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 115 "data/maps/RustboroCity_Gym/scripts.pory"

# 116 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 130 "data/maps/RustboroCity_Gym/scripts.pory"

# 131 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon CHAMPIONSHIP together!\p"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type Pokémon.\p"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"

# 153 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"

# 165 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"

# 169 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"

# 172 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"

# 176 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"

# 180 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"

# 183 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"

# 188 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK Pokémon need room to\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"

# 194 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"

# 198 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"

# 203 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon GYM LEADER.\p"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"

# 212 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon LEAGUE's rules state\n"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"

# 224 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"

# 228 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE contains\n"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Stone Edge. It deals significant\p"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rock-type damage.$"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"

# 233 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"

# 239 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"

# 242 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"

# 247 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"

# 264 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"

# 268 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"

# 276 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"

# 280 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"

# 286 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"

RustboroCity_Gym_Text_StoneBadgeInfo::
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge enables your Pokémon\n"
	.string "to use the HM move Strength outside of\l"
	.string "battle.$"

RustboroCity_Gym_Text_TakeThis::
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_JaceIntro::
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Pokémon and I patrolled the\n"
	.string "mountains around Rustboro.\p"
	.string "Roxanne saw us and recruited us for her\n"
	.string "Gym!$"

RustboroCity_Gym_Text_JaceDefeat::
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Maybe I should head back to the\n"
	.string "mountains…$"

RustboroCity_Gym_Text_JacePostBattle::
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne trains us hard, so we can help\n"
	.string "her keep the Gym strong!$"

RustboroCity_Gym_Text_DanielleIntro::
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "People don't expert a young girl like\n"
	.string "Roxanne to be a Rock-type specialist.\p"
	.string "She shows that anyone can have\n"
	.string "strength, grit, and determination!$"

RustboroCity_Gym_Text_DanielleDefeat::
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I guess I still have a lot to learn about\n"
	.string "Rock-type Pokémon.$"

RustboroCity_Gym_Text_DaniellePostBattle::
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is my inspiration.\p"
	.string "I came to Rustboro to learn from her!$"
