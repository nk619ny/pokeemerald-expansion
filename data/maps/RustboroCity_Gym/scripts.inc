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
	call Common_EventScript_RemoveOptionalItems4
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TakeThis, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
//	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 36 "data/maps/RustboroCity_Gym/scripts.pory"

# 37 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_STONE_EDGE
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 44 "data/maps/RustboroCity_Gym/scripts.pory"

# 45 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 49 "data/maps/RustboroCity_Gym/scripts.pory"

# 50 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 54 "data/maps/RustboroCity_Gym/scripts.pory"

# 55 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 59 "data/maps/RustboroCity_Gym/scripts.pory"

# 60 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 64 "data/maps/RustboroCity_Gym/scripts.pory"

# 65 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Danielle::
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DANIELLE, RustboroCity_Gym_Text_DanielleIntro, RustboroCity_Gym_Text_DanielleDefeat
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 69 "data/maps/RustboroCity_Gym/scripts.pory"

# 70 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Jace::
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JACE, RustboroCity_Gym_Text_JaceIntro, RustboroCity_Gym_Text_JaceDefeat
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 74 "data/maps/RustboroCity_Gym/scripts.pory"

# 75 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 82 "data/maps/RustboroCity_Gym/scripts.pory"

# 83 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 87 "data/maps/RustboroCity_Gym/scripts.pory"

# 88 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 93 "data/maps/RustboroCity_Gym/scripts.pory"

# 94 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
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
RustboroCity_Gym_EventScript_GymStatueCertified::
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 104 "data/maps/RustboroCity_Gym/scripts.pory"

# 105 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 109 "data/maps/RustboroCity_Gym/scripts.pory"

# 110 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 124 "data/maps/RustboroCity_Gym/scripts.pory"

# 125 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon CHAMPIONSHIP together!\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type Pokémon.\p"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"

# 147 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"

# 159 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"

# 163 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"

# 166 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"

# 170 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"

# 174 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"

# 177 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"

# 182 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK Pokémon need room to\n"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"

# 188 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"

# 192 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"

# 197 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon GYM LEADER.\p"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"

# 206 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon LEAGUE's rules state\n"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"

# 218 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"

# 222 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE contains\n"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Stone Edge. It deals significant\p"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rock-type damage.$"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"

# 227 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"

# 233 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"

# 236 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"

# 241 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"

# 258 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"

# 262 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"

# 270 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"

# 274 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"

# 280 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"

RustboroCity_Gym_Text_StoneBadgeInfo::
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge enables your Pokémon\n"
	.string "to use the HM move Strength outside of\l"
	.string "battle.$"

RustboroCity_Gym_Text_TakeThis::
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_JaceIntro::
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Pokémon and I patrolled the\n"
	.string "mountains around Rustboro.\p"
	.string "Roxanne saw us and recruited us for her\n"
	.string "Gym!$"

RustboroCity_Gym_Text_JaceDefeat::
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Maybe I should head back to the\n"
	.string "mountains…$"

RustboroCity_Gym_Text_JacePostBattle::
# 309 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne trains us hard, so we can help\n"
	.string "her keep the Gym strong!$"

RustboroCity_Gym_Text_DanielleIntro::
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "People don't expert a young girl like\n"
	.string "Roxanne to be a Rock-type specialist.\p"
	.string "She shows that anyone can have\n"
	.string "strength, grit, and determination!$"

RustboroCity_Gym_Text_DanielleDefeat::
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I guess I still have a lot to learn about\n"
	.string "Rock-type Pokémon.$"

RustboroCity_Gym_Text_DaniellePostBattle::
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is my inspiration.\p"
	.string "I came to Rustboro to learn from her!$"
