# 1 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_MapScripts::
# 3 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally::
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 12 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 13 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 14 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
# 15 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 18 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 19 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
/*
# 20 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 21 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
# 26 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
*/
# 29 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 32 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 33 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 34 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 38 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 39 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 40 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 41 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda::
# 45 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 47 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
# 49 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 50 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 51 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 57 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 63 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 64 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 65 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 66 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
# 69 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 70 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 71 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 72 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 75 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 76 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 77 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 78 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 83 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 86 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeech:
# 89 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: I lost to you, {PLAYER}, but I'm\n"
# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "not feeling down anymore.\p"
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Because I have a new purpose in life.\n"
# 92 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Together with my RALTS, I'm going\l"
# 93 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to challenge Pokémon GYMS and become\l"
# 94 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "a great TRAINER.\p"
# 95 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Please watch me, {PLAYER}.\n"
# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm going to be stronger than you.\p"
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "When I do, I'm going to challenge you\n"
# 98 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to another battle.$"
# 99 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 100 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
# 101 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: Please watch me, {PLAYER}.\n"
# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm going to get stronger than you.\p"
# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "When I do, I'm going to challenge you\n"
# 104 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to another battle.$"
# 105 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 106 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallysNextDoor:
# 107 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Oh! {PLAYER}{KUN}!\n"
# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's next door.\p"
# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "But, boy, there's something I have to\n"
# 110 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "tell you.\p"
# 111 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "This natural environment is doing\n"
# 112 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "wonders for WALLY's health.\p"
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Maybe it's not just the environment.\n"
# 114 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It could be Pokémon that are giving\l"
# 115 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "the boy hope.$"
# 116 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 117 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallySlippedOff:
# 118 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's gone away…\n"
# 119 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He slipped off on his own…$"
# 120 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 121 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
# 122 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Is that right?\n"
# 123 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's gone away that far all by\l"
# 124 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "himself…\p"
# 125 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Well, I have to give him credit--he is\n"
# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "my little brother's son.$"
# 127 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 128 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_MeetWanda:
# 129 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: You are?\n"
# 130 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Oh, right, I get it!\p"
# 131 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "You're the {PLAYER} who WALLY was\n"
# 132 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "telling me about.\p"
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm WALLY's cousin.\n"
# 134 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Glad to meet you!\p"
# 135 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I think WALLY's become a lot more lively\n"
# 136 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "and healthy since he came here.$"
# 137 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 138 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
# 139 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: Don't worry about WALLY.\n"
# 140 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He'll be just fine.\p"
# 141 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I know my little cousin, and he has\n"
# 142 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Pokémon with him, too.$"
# 143 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 144 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Thanks to you, I can see my girlfriend\n"
# 146 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "every day.\l"
# 147 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Happy? You bet I am!$"
# 148 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 149 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
# 150 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's boyfriend is a very\n"
# 151 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "driven and passionate sort of person.\p"
# 152 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He's been digging a tunnel nonstop\n"
# 153 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "just so he can see my daughter.\p"
# 154 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's a little concerned,\n"
# 155 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "so she goes out to the tunnel a lot.$"
# 156 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 157 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
# 158 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's amazing. My daughter's boyfriend\n"
# 159 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "was digging the tunnel by hand!\p"
# 160 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's so incredible!$"
# 161 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 162 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
# 163 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "If anything were to happen to WALLY,\n"
# 164 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I would never be able to look his\l"
# 165 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "parents in PETALBURG in the eye…$"
# 166 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 167 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
# 168 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY was in EVER GRANDE?\p"
# 169 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "His parents in PETALBURG would be\n"
# 170 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "astonished to hear that!$"

VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 181 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 182 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 183 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	checkitem ITEM_TM_HIDDEN_POWER
# 184 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_WandasHouse_EventScript_WallysUncle_2
# 191 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 192 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysGotPotential, MSGBOX_DEFAULT
# 193 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 194 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	releaseall
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncle_2:
# 185 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_0, MSGBOX_DEFAULT
# 186 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 187 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 188 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	waitfanfare
	end


VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_0:
# 185 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "You might know my nephew, Wally.\p"
	.string "We've always known he had real\n"
	.string "potential deep down.\p"
	.string "Pokémon each have some Hidden Power,\n"
	.string "too. You should try bringing it out!$"

VerdanturfTown_WandasHouse_Text_WallysGotPotential::
# 175 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: I hear Wally's doing great in the\n"
	.string "Pokémon League challenge.\p"
	.string "He's bound to go far with that Gallade\n"
	.string "of his.$"
