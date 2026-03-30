# 1 "data/maps/SSTidalRooms/scripts.pory"

# 2 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_MapScripts::
# 3 "data/maps/SSTidalRooms/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalRooms/scripts.pory"

# 5 "data/maps/SSTidalRooms/scripts.pory"
/*
# 6 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver::
# 7 "data/maps/SSTidalRooms/scripts.pory"
	lock
# 8 "data/maps/SSTidalRooms/scripts.pory"
	faceplayer
# 9 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalRooms_EventScript_ExplainSnatch
# 10 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
# 11 "data/maps/SSTidalRooms/scripts.pory"
	giveitem ITEM_TM_SNATCH
# 12 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 13 "data/maps/SSTidalRooms/scripts.pory"
	setflag FLAG_RECEIVED_TM_SNATCH
# 14 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 15 "data/maps/SSTidalRooms/scripts.pory"
	release
# 16 "data/maps/SSTidalRooms/scripts.pory"
	end
# 17 "data/maps/SSTidalRooms/scripts.pory"

# 18 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_ExplainSnatch::
# 19 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 20 "data/maps/SSTidalRooms/scripts.pory"
	release
# 21 "data/maps/SSTidalRooms/scripts.pory"
	end
# 22 "data/maps/SSTidalRooms/scripts.pory"
*/
# 23 "data/maps/SSTidalRooms/scripts.pory"

# 24 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Bed::
# 25 "data/maps/SSTidalRooms/scripts.pory"
	lockall
# 26 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
# 27 "data/maps/SSTidalRooms/scripts.pory"
	closemessage
# 28 "data/maps/SSTidalRooms/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 29 "data/maps/SSTidalRooms/scripts.pory"
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
# 30 "data/maps/SSTidalRooms/scripts.pory"
	releaseall
# 31 "data/maps/SSTidalRooms/scripts.pory"
	end
# 32 "data/maps/SSTidalRooms/scripts.pory"

# 33 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Colton::
# 34 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
# 35 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/SSTidalRooms/scripts.pory"
	end
# 37 "data/maps/SSTidalRooms/scripts.pory"

# 38 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Micah::
# 39 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
# 40 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/SSTidalRooms/scripts.pory"
	end
# 42 "data/maps/SSTidalRooms/scripts.pory"

# 43 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Thomas::
# 44 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
# 45 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/SSTidalRooms/scripts.pory"
	end
# 47 "data/maps/SSTidalRooms/scripts.pory"

# 48 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Jed::
# 49 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
# 50 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/SSTidalRooms/scripts.pory"
	end
# 52 "data/maps/SSTidalRooms/scripts.pory"

# 53 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Lea::
# 54 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
# 55 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/SSTidalRooms/scripts.pory"
	end
# 57 "data/maps/SSTidalRooms/scripts.pory"

# 58 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Garret::
# 59 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
# 60 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/SSTidalRooms/scripts.pory"
	end
# 62 "data/maps/SSTidalRooms/scripts.pory"

# 63 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Naomi::
# 64 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
# 65 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/SSTidalRooms/scripts.pory"
	end
# 67 "data/maps/SSTidalRooms/scripts.pory"

# 68 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_TakeRestOnBed:
# 69 "data/maps/SSTidalRooms/scripts.pory"
	.string "There's a bed…\n"
# 70 "data/maps/SSTidalRooms/scripts.pory"
	.string "Let's take a rest.$"
# 71 "data/maps/SSTidalRooms/scripts.pory"

# 72 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonIntro:
# 73 "data/maps/SSTidalRooms/scripts.pory"
	.string "I often sail to LILYCOVE CITY.\p"
# 74 "data/maps/SSTidalRooms/scripts.pory"
	.string "I enjoy attending CONTESTS,\n"
# 75 "data/maps/SSTidalRooms/scripts.pory"
	.string "you see.$"
# 76 "data/maps/SSTidalRooms/scripts.pory"

# 77 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonDefeat:
# 78 "data/maps/SSTidalRooms/scripts.pory"
	.string "That was an enjoyable match!$"
# 79 "data/maps/SSTidalRooms/scripts.pory"

# 80 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonPostBattle:
# 81 "data/maps/SSTidalRooms/scripts.pory"
	.string "I get so excited imagining what kinds\n"
# 82 "data/maps/SSTidalRooms/scripts.pory"
	.string "of Pokémon I'll get to see in the next\l"
# 83 "data/maps/SSTidalRooms/scripts.pory"
	.string "CONTEST. The anticipation of it thrills!$"
# 84 "data/maps/SSTidalRooms/scripts.pory"

# 85 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahIntro:
# 86 "data/maps/SSTidalRooms/scripts.pory"
	.string "Are your friends strong?$"
# 87 "data/maps/SSTidalRooms/scripts.pory"

# 88 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahDefeat:
# 89 "data/maps/SSTidalRooms/scripts.pory"
	.string "Your friends are, indeed, strong.$"
# 90 "data/maps/SSTidalRooms/scripts.pory"

# 91 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahPostBattle:
# 92 "data/maps/SSTidalRooms/scripts.pory"
	.string "Friends need not be human.\n"
# 93 "data/maps/SSTidalRooms/scripts.pory"
	.string "For me, Pokémon are treasured friends!$"
# 94 "data/maps/SSTidalRooms/scripts.pory"

# 95 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasIntro:
# 96 "data/maps/SSTidalRooms/scripts.pory"
	.string "Child…\n"
# 97 "data/maps/SSTidalRooms/scripts.pory"
	.string "Did you knock on the door?$"
# 98 "data/maps/SSTidalRooms/scripts.pory"

# 99 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasDefeat:
# 100 "data/maps/SSTidalRooms/scripts.pory"
	.string "A loss is to be accepted without haste\n"
# 101 "data/maps/SSTidalRooms/scripts.pory"
	.string "or panic.$"
# 102 "data/maps/SSTidalRooms/scripts.pory"

# 103 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasPostBattle:
# 104 "data/maps/SSTidalRooms/scripts.pory"
	.string "To be never ruffled in any situation is\n"
# 105 "data/maps/SSTidalRooms/scripts.pory"
	.string "the GENTLEMAN's code of conduct.$"
# 106 "data/maps/SSTidalRooms/scripts.pory"

# 107 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedIntro:
# 108 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: I feel a little shy about this, but…\n"
# 109 "data/maps/SSTidalRooms/scripts.pory"
	.string "We'll show you our lovey-dovey power!$"
# 110 "data/maps/SSTidalRooms/scripts.pory"

# 111 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedDefeat:
# 112 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: Sigh…$"
# 113 "data/maps/SSTidalRooms/scripts.pory"

# 114 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedPostBattle:
# 115 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: It's the first time that our lovey-\n"
# 116 "data/maps/SSTidalRooms/scripts.pory"
	.string "dovey power couldn't prevail!\l"
# 117 "data/maps/SSTidalRooms/scripts.pory"
	.string "You must be an awesome TRAINER!$"
# 118 "data/maps/SSTidalRooms/scripts.pory"

# 119 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedNotEnoughMons:
# 120 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: You only have one Pokémon?\n"
# 121 "data/maps/SSTidalRooms/scripts.pory"
	.string "Isn't that just too lonesome?$"
# 122 "data/maps/SSTidalRooms/scripts.pory"

# 123 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaIntro:
# 124 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: I feel a little silly, but…\n"
# 125 "data/maps/SSTidalRooms/scripts.pory"
	.string "We'll show you our lovey-dovey power!$"
# 126 "data/maps/SSTidalRooms/scripts.pory"

# 127 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaDefeat:
# 128 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: Oh, boo!$"
# 129 "data/maps/SSTidalRooms/scripts.pory"

# 130 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaPostBattle:
# 131 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: I can't believe it!\n"
# 132 "data/maps/SSTidalRooms/scripts.pory"
	.string "Our lovey-dovey power failed…\l"
# 133 "data/maps/SSTidalRooms/scripts.pory"
	.string "You must be an awesome TRAINER!$"
# 134 "data/maps/SSTidalRooms/scripts.pory"

# 135 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaNotEnoughMons:
# 136 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: I wanted to battle…\n"
# 137 "data/maps/SSTidalRooms/scripts.pory"
	.string "But you don't even have two Pokémon…$"
# 138 "data/maps/SSTidalRooms/scripts.pory"

# 139 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretIntro:
# 140 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ah, you've come just in time.\p"
# 141 "data/maps/SSTidalRooms/scripts.pory"
	.string "I'm bored, you see.\n"
# 142 "data/maps/SSTidalRooms/scripts.pory"
	.string "You may entertain me.$"
# 143 "data/maps/SSTidalRooms/scripts.pory"

# 144 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretDefeat:
# 145 "data/maps/SSTidalRooms/scripts.pory"
	.string "…That will do.$"
# 146 "data/maps/SSTidalRooms/scripts.pory"

# 147 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretPostBattle:
# 148 "data/maps/SSTidalRooms/scripts.pory"
	.string "Perhaps I shall get Father to acquire\n"
# 149 "data/maps/SSTidalRooms/scripts.pory"
	.string "a yacht for me.\l"
# 150 "data/maps/SSTidalRooms/scripts.pory"
	.string "A yacht for me and Pokémon!$"
# 151 "data/maps/SSTidalRooms/scripts.pory"

# 152 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiIntro:
# 153 "data/maps/SSTidalRooms/scripts.pory"
	.string "Oh, you're such an adorable TRAINER.\n"
# 154 "data/maps/SSTidalRooms/scripts.pory"
	.string "Would you like to have tea?\l"
# 155 "data/maps/SSTidalRooms/scripts.pory"
	.string "Or would you rather battle?$"
# 156 "data/maps/SSTidalRooms/scripts.pory"

# 157 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiDefeat:
# 158 "data/maps/SSTidalRooms/scripts.pory"
	.string "I see.\n"
# 159 "data/maps/SSTidalRooms/scripts.pory"
	.string "You're the active sort.$"
# 160 "data/maps/SSTidalRooms/scripts.pory"

# 161 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiPostBattle:
# 162 "data/maps/SSTidalRooms/scripts.pory"
	.string "A world cruise on a luxury liner has its\n"
# 163 "data/maps/SSTidalRooms/scripts.pory"
	.string "charms, I must say…\p"
# 164 "data/maps/SSTidalRooms/scripts.pory"
	.string "But, I will admit there is an appealing\n"
# 165 "data/maps/SSTidalRooms/scripts.pory"
	.string "side to touring HOENN by ferry.$"
# 166 "data/maps/SSTidalRooms/scripts.pory"

# 167 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NotSuspiciousTakeThis:
# 168 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uh… Hi! I… I'm not acting suspicious!\n"
# 169 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uh… You can have this! For free!\p"
# 170 "data/maps/SSTidalRooms/scripts.pory"
	.string "It… Honestly, I didn't SNATCH it from\n"
# 171 "data/maps/SSTidalRooms/scripts.pory"
	.string "someone! I'd never do such a thing!\l"
# 172 "data/maps/SSTidalRooms/scripts.pory"
	.string "It's clean! You can use it!$"
# 173 "data/maps/SSTidalRooms/scripts.pory"

# 174 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ExplainSnatch:
# 175 "data/maps/SSTidalRooms/scripts.pory"
	.string "SNATCH steals the beneficial effects\n"
# 176 "data/maps/SSTidalRooms/scripts.pory"
	.string "of certain moves before they can be\l"
# 177 "data/maps/SSTidalRooms/scripts.pory"
	.string "used by a foe or ally.$"
