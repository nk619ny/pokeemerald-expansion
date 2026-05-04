# 1 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 60
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_ExclamationMark
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_Delay48
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_FacePlayer
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 23 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 24 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 38 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 39 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 40 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 44 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 45 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 46 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_CAVE_OF_ORIGIN_WALLACE
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory:
# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}?\n"
# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I've heard tales of your exploits.\p"
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "My name is WALLACE.\p"
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I was once the GYM LEADER of\n"
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "SOOTOPOLIS, but something came up.\p"
# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "So now, I've entrusted my mentor JUAN\n"
# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "with the GYM's operation.\p"
# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\n"
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\p"
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "GROUDON and KYOGRE, the two Pokémon\n"
# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "wreaking havoc here, are considered\l"
# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "to be super-ancient Pokémon.\p"
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But there aren't just two super-\n"
# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient Pokémon.\p"
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "There is one more somewhere.\p"
# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Somewhere, there is a super-\n"
# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient Pokémon named RAYQUAZA.\p"
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It's said that it was RAYQUAZA that\n"
# 82 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "becalmed the two combatants in\l"
# 83 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "the distant past.\p"
# 84 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But even I have no clue as to\n"
# 85 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "RAYQUAZA's whereabouts…$"
# 86 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 87 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStoryShort:
# 88 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}?\n"
# 89 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I've heard tales of your exploits.\p"
# 90 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "My name is WALLACE.\p"
# 91 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I was once the GYM LEADER of\n"
# 92 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "SOOTOPOLIS, but something came up.\p"
# 93 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "So now, I've entrusted my mentor JUAN\n"
# 94 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "with the GYM's operation.$"
# 95 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 96 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza:
# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}, do you perhaps\n"
# 98 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "know where RAYQUAZA is now?\p"
# 99 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "If you do, please tell me.$"
# 100 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 101 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
# 102 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The CAVE OF ORIGIN?\p"
# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But that's right here!\n"
# 104 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I need you to do better than that!\p"
# 105 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Please, I need you to think about\n"
# 106 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "where RAYQUAZA might be right now.$"
# 107 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 108 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
# 109 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: MT. PYRE?\p"
# 110 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But when I met the old lady there\n"
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "earlier, she made no mention of it.\p"
# 112 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I very much doubt that the old lady\n"
# 113 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "would try to hide something from me…\p"
# 114 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, could you think about this\n"
# 115 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "more carefully for me?$"
# 116 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 117 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
# 118 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: Huh? You don't remember?\n"
# 119 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Hmm… That's a problem…\p"
# 120 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Can't you remember somehow?$"
# 121 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 122 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
# 123 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The SKY PILLAR?\p"
# 124 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "That's it!\n"
# 125 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It must be the SKY PILLAR!\p"
# 126 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, there's not a moment to lose!\n"
# 127 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "We'll head to the SKY PILLAR right away!$"

CaveOfOrigin_B1F_EventScript_WallaceNew::
# 134 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 135 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 137 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAVE_OF_ORIGIN_MEGA_STONE, CaveOfOrigin_B1F_EventScript_WallacePostStone
# 138 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, CaveOfOrigin_B1F_EventScript_WallaceNew_2
CaveOfOrigin_B1F_EventScript_WallaceNew_1:
	checkitem ITEM_SABLENITE
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_5
CaveOfOrigin_B1F_EventScript_WallaceNew_4:
	checkitem ITEM_MAWILITE
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_8
CaveOfOrigin_B1F_EventScript_WallaceNew_7:
	checkitem ITEM_FLOETTITE
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_11
CaveOfOrigin_B1F_EventScript_WallaceNew_10:
	checkitem ITEM_DRAGONINITE
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_14
CaveOfOrigin_B1F_EventScript_WallaceNew_13:
	checkitem ITEM_TYRANITARITE
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_18
CaveOfOrigin_B1F_EventScript_WallaceNew_16:
	checkitem ITEM_METAGROSSITE
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_22
CaveOfOrigin_B1F_EventScript_WallaceNew_21:
	checkitem ITEM_SALAMENCITE
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_25
CaveOfOrigin_B1F_EventScript_WallaceNew_24:
	checkitem ITEM_GARCHOMPITE
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_28
CaveOfOrigin_B1F_EventScript_WallaceNew_27:
	checkitem ITEM_GARCHOMPITE_Z
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_31
CaveOfOrigin_B1F_EventScript_WallaceNew_30:
	checkitem ITEM_BAXCALIBRITE
# 0 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_34
CaveOfOrigin_B1F_EventScript_WallaceNew_33:
# 154 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_10, ITEM_NONE
# 156 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_EventScript_WallaceNew_Text_11, MSGBOX_NPC
# 157 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 158 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_EventScript_WallaceNew_Text_12, MSGBOX_DEFAULT
# 159 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 0, ITEM_SABLENITE, DYN_MULTICHOICE_CB_NONE
# 160 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_37
# 166 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_38
# 173 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	copyvar VAR_TEMP_5, VAR_RESULT
# 174 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	checkitemspace VAR_TEMP_5
# 175 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CaveOfOrigin_B1F_EventScript_WallaceNew_43
# 181 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_5
# 182 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_EventScript_WallaceNew_Text_15, MSGBOX_NPC
# 183 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 184 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	giveitem VAR_TEMP_5
# 185 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_RECEIVED_CAVE_OF_ORIGIN_MEGA_STONE
# 186 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitfanfare
# 187 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 189 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 190 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
	end

CaveOfOrigin_B1F_EventScript_WallaceNew_2:
# 139 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStoryShort, MSGBOX_DEFAULT
# 140 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_1

CaveOfOrigin_B1F_EventScript_WallaceNew_5:
# 143 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_0, ITEM_SABLENITE
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_4

CaveOfOrigin_B1F_EventScript_WallaceNew_8:
# 144 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_1, ITEM_MAWILITE
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_7

CaveOfOrigin_B1F_EventScript_WallaceNew_11:
# 145 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_2, ITEM_FLOETTITE
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_10

CaveOfOrigin_B1F_EventScript_WallaceNew_14:
# 146 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_3, ITEM_DRAGONINITE
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_13

CaveOfOrigin_B1F_EventScript_WallaceNew_17:
# 147 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_4, ITEM_TYRANITARITE
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_16

CaveOfOrigin_B1F_EventScript_WallaceNew_18:
# 147 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, CaveOfOrigin_B1F_EventScript_WallaceNew_17
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_16

CaveOfOrigin_B1F_EventScript_WallaceNew_22:
# 148 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_5, ITEM_METAGROSSITE
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_21

CaveOfOrigin_B1F_EventScript_WallaceNew_25:
# 149 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_6, ITEM_SALAMENCITE
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_24

CaveOfOrigin_B1F_EventScript_WallaceNew_28:
# 150 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_7, ITEM_GARCHOMPITE
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_27

CaveOfOrigin_B1F_EventScript_WallaceNew_31:
# 151 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_8, ITEM_GARCHOMPITE_Z
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_30

CaveOfOrigin_B1F_EventScript_WallaceNew_34:
# 152 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	dynmultipush CaveOfOrigin_B1F_EventScript_WallaceNew_Text_9, ITEM_BAXCALIBRITE
	goto CaveOfOrigin_B1F_EventScript_WallaceNew_33

CaveOfOrigin_B1F_EventScript_WallaceNew_37:
# 161 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_EventScript_WallaceNew_Text_13, MSGBOX_NPC
# 162 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 163 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	releaseall
	end

CaveOfOrigin_B1F_EventScript_WallaceNew_38:
# 167 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_EventScript_WallaceNew_Text_13, MSGBOX_NPC
# 168 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 169 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	releaseall
	end

CaveOfOrigin_B1F_EventScript_WallaceNew_43:
# 176 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_EventScript_WallaceNew_Text_14, MSGBOX_NPC
# 177 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 178 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	releaseall
	end


CaveOfOrigin_B1F_EventScript_WallacePostStone::
# 196 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 197 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_EventScript_WallacePostStone_Text_0, MSGBOX_NPC
# 198 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 199 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
	end


CaveOfOrigin_B1F_EventScript_WallaceNew_Text_0:
# 143 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Sablenite$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_1:
# 144 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Mawilite$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_2:
# 145 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Floettite$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_3:
# 146 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Dragoninite$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_4:
# 147 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Tyranitarite$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_5:
# 148 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Metagrossite$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_6:
# 149 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Salamencite$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_7:
# 150 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Garchompite$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_8:
# 151 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Garchompite Z$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_9:
# 152 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Baxcalibrite$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_10:
# 154 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Nevermind$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_11:
# 156 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wallace: We've found some of the most\n"
	.string "powerful Mega Stones here.\p"
	.string "I'd like to give you one, in recognition\n"
	.string "of your efforts to restore harmony to\l"
	.string "the region.$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_12:
# 158 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Which Mega Stone would you like?$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_13:
# 161 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wallace: Very well.\p"
	.string "Come back when you've decided on a Mega\n"
	.string "Stone.$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_14:
# 176 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wallace: Your bag seems to be full.\p"
	.string "Make some room and come back to me.$"

CaveOfOrigin_B1F_EventScript_WallaceNew_Text_15:
# 182 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wallace: Very well. Use this\n"
	.string "{STR_VAR_1} wisely.$"

CaveOfOrigin_B1F_EventScript_WallacePostStone_Text_0:
# 197 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wallace: The power of these\n"
	.string "super-ancient Pokémon is almost\l"
	.string "unbelievable.$"
