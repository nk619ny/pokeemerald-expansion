# 1 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_MapScripts::
# 3 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 5 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_EventScript_Grunt10::
# 6 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat, MagmaHideout_3F_2R_EventScript_Grunt10Evacuation
# 7 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, MagmaHideout_3F_2R_EventScript_Grunt10Evacuation
# 8 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE
# 9 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	end
# 10 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 11 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Intro:
# 12 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "I understand everything our leader\n"
# 13 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "says. But you know what?\p"
# 14 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Doing stuff like digging up a super-\n"
# 15 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "ancient Pokémon…\p"
# 16 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "I think we're going a little too far.\n"
# 17 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "What do you think?$"
# 18 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 19 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Defeat:
# 20 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Yeah, I think we are doing something\n"
# 21 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "wrong somehow.$"
# 22 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 23 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10PostBattle:
# 24 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "You know, losing to you cleared my mind.\p"
# 25 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "The next time I see our leader,\n"
# 26 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "I'm going to ask him about what we do.$"

MagmaHideout_3F_2R_EventScript_Grunt10Evacuation::
# 31 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, MagmaHideout_3F_2R_EventScript_Grunt10Evacuation_2
MagmaHideout_3F_2R_EventScript_Grunt10Evacuation_1:
# 35 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	releaseall
	end

MagmaHideout_3F_2R_EventScript_Grunt10Evacuation_2:
# 32 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_EventScript_Grunt10Evacuation_Text_0, MSGBOX_NPC
# 33 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	closemessage
	goto MagmaHideout_3F_2R_EventScript_Grunt10Evacuation_1


MagmaHideout_3F_2R_EventScript_MegaStoneDisplay::
# 42 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	lock
# 43 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_EventScript_MegaStoneDisplay_Text, MSGBOX_DEFAULT
# 44 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	closemessage
# 45 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	goto_if_set FLAG_RECEIVED_MAGMA_MEGA_STONE, MagmaHideout_3F_2R_EventScript_MegaStoneDisplay_2
MagmaHideout_3F_2R_EventScript_MegaStoneDisplay_1:
# 46 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	closemessage
# 47 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	releaseall
	end

MagmaHideout_3F_2R_EventScript_MegaStoneDisplay_2:
# 45 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_EventScript_MegaStoneDisplay_Text_0, MSGBOX_DEFAULT
	goto MagmaHideout_3F_2R_EventScript_MegaStoneDisplay_1


MagmaHideout_3F_2R_EventScript_TakeMegaStone::
# 56 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	lock
# 57 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	faceplayer
# 58 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_EventScript_MegaStoneDisplay_Text, MSGBOX_DEFAULT
	checkitem ITEM_STEELIXITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_2
MagmaHideout_3F_2R_EventScript_TakeMegaStone_1:
	checkitem ITEM_HOUNDOOMINITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_5
MagmaHideout_3F_2R_EventScript_TakeMegaStone_4:
	checkitem ITEM_AGGRONITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_8
MagmaHideout_3F_2R_EventScript_TakeMegaStone_7:
	checkitem ITEM_CAMERUPTITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_11
MagmaHideout_3F_2R_EventScript_TakeMegaStone_10:
	checkitem ITEM_VICTREEBELITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_14
MagmaHideout_3F_2R_EventScript_TakeMegaStone_13:
	checkitem ITEM_EXCADRITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_17
MagmaHideout_3F_2R_EventScript_TakeMegaStone_16:
	checkitem ITEM_CHANDELURITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_20
MagmaHideout_3F_2R_EventScript_TakeMegaStone_19:
	checkitem ITEM_PYROARITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_23
MagmaHideout_3F_2R_EventScript_TakeMegaStone_22:
	checkitem ITEM_GOLURKITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_26
MagmaHideout_3F_2R_EventScript_TakeMegaStone_25:
	checkitem ITEM_CENTISKORITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_29
MagmaHideout_3F_2R_EventScript_TakeMegaStone_28:
	checkitem ITEM_FLYGONITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_32
MagmaHideout_3F_2R_EventScript_TakeMegaStone_31:
	checkitem ITEM_SUNFLORITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_35
MagmaHideout_3F_2R_EventScript_TakeMegaStone_34:
	checkitem ITEM_SANDACONDITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_38
MagmaHideout_3F_2R_EventScript_TakeMegaStone_37:
	checkitem ITEM_GARBODITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_41
MagmaHideout_3F_2R_EventScript_TakeMegaStone_40:
	checkitem ITEM_SCOVILLAINITE
# 0 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_44
MagmaHideout_3F_2R_EventScript_TakeMegaStone_43:
# 75 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_15, ITEM_NONE
# 77 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_16, MSGBOX_DEFAULT
# 78 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 0, ITEM_STEELIXITE, DYN_MULTICHOICE_CB_NONE
# 79 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_47
# 85 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_48
# 92 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	copyvar VAR_TEMP_5, VAR_RESULT
# 93 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	checkitemspace VAR_TEMP_5
# 94 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MagmaHideout_3F_2R_EventScript_TakeMegaStone_53
# 100 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	giveitem VAR_TEMP_5
# 101 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	setflag FLAG_RECEIVED_MAGMA_MEGA_STONE
# 102 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_MEGA_STONE
# 103 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	waitfanfare
# 104 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_19, MSGBOX_NPC
# 105 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	closemessage
# 108 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	closemessage
# 109 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	release
	end

MagmaHideout_3F_2R_EventScript_TakeMegaStone_2:
# 59 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_0, ITEM_STEELIXITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_1

MagmaHideout_3F_2R_EventScript_TakeMegaStone_5:
# 60 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_1, ITEM_HOUNDOOMINITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_4

MagmaHideout_3F_2R_EventScript_TakeMegaStone_8:
# 61 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_2, ITEM_AGGRONITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_7

MagmaHideout_3F_2R_EventScript_TakeMegaStone_11:
# 62 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_3, ITEM_CAMERUPTITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_10

MagmaHideout_3F_2R_EventScript_TakeMegaStone_14:
# 63 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_4, ITEM_VICTREEBELITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_13

MagmaHideout_3F_2R_EventScript_TakeMegaStone_17:
# 64 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_5, ITEM_EXCADRITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_16

MagmaHideout_3F_2R_EventScript_TakeMegaStone_20:
# 65 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_6, ITEM_CHANDELURITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_19

MagmaHideout_3F_2R_EventScript_TakeMegaStone_23:
# 66 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_7, ITEM_PYROARITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_22

MagmaHideout_3F_2R_EventScript_TakeMegaStone_26:
# 67 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_8, ITEM_GOLURKITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_25

MagmaHideout_3F_2R_EventScript_TakeMegaStone_29:
# 68 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_9, ITEM_CENTISKORITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_28

MagmaHideout_3F_2R_EventScript_TakeMegaStone_32:
# 69 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_10, ITEM_FLYGONITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_31

MagmaHideout_3F_2R_EventScript_TakeMegaStone_35:
# 70 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_11, ITEM_SUNFLORITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_34

MagmaHideout_3F_2R_EventScript_TakeMegaStone_38:
# 71 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_12, ITEM_SANDACONDITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_37

MagmaHideout_3F_2R_EventScript_TakeMegaStone_41:
# 72 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_13, ITEM_GARBODITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_40

MagmaHideout_3F_2R_EventScript_TakeMegaStone_44:
# 73 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	dynmultipush MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_14, ITEM_SCOVILLAINITE
	goto MagmaHideout_3F_2R_EventScript_TakeMegaStone_43

MagmaHideout_3F_2R_EventScript_TakeMegaStone_47:
# 80 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_17, MSGBOX_NPC
# 81 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	closemessage
# 82 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	releaseall
	end

MagmaHideout_3F_2R_EventScript_TakeMegaStone_48:
# 86 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_17, MSGBOX_NPC
# 87 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	closemessage
# 88 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	releaseall
	end

MagmaHideout_3F_2R_EventScript_TakeMegaStone_53:
# 95 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_18, MSGBOX_NPC
# 96 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	closemessage
# 97 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	releaseall
	end


MagmaHideout_3F_2R_EventScript_Grunt10Evacuation_Text_0:
# 32 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "What? You're telling me the rest of Team\n"
	.string "Magma evacuated?\p"
	.string "I didn't hear any alarms in here!\p"
	.string "What are YOU still doing here? We need\n"
	.string "to get out!$"

MagmaHideout_3F_2R_EventScript_MegaStoneDisplay_Text_0:
# 45 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "The machine has locked shut.$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_0:
# 59 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Steelixite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_1:
# 60 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Houndoominite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_2:
# 61 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Aggronite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_3:
# 62 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Cameruptite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_4:
# 63 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Victreebelite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_5:
# 64 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Excadrillite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_6:
# 65 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Chandelurite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_7:
# 66 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Pyroarite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_8:
# 67 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Golurkite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_9:
# 68 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Centiskorite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_10:
# 69 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Flygonite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_11:
# 70 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Sunflorite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_12:
# 71 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Sandacondite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_13:
# 72 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Garbodite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_14:
# 73 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Scovillainite$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_15:
# 75 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Nevermind$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_16:
# 77 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Take one of the Mega Stones?$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_17:
# 80 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Left the machine without taking a Mega\n"
	.string "Stone.$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_18:
# 95 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Too bad!\l"
	.string "The BAG is full...$"

MagmaHideout_3F_2R_EventScript_TakeMegaStone_Text_19:
# 104 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "The machine locked automatically after\n"
	.string "the Stone was removed.$"

MagmaHideout_3F_2R_EventScript_MegaStoneDisplay_Text::
# 51 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "This machine appears to hold Team\n"
	.string "Magma's Mega Stones.$"
