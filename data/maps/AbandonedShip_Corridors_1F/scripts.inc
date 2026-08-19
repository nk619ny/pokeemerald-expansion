# 1 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Youngster::
# 6 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
/*
# 10 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Charlie::
# 11 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
# 12 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 14 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
*/
# 15 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 16 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieIntro:
# 17 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "What's so funny about having my inner\n"
# 18 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "tube aboard the ship?$"
# 19 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 20 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieDefeat:
# 21 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Whoa, you overwhelmed me!$"
# 22 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 23 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharliePostBattle:
# 24 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "It's not easy throwing POKé BALLS\n"
# 25 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "while hanging on to an inner tube!$"
# 26 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 27 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_IsntItFunHere:
# 28 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Isn't it fun here?\n"
# 29 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "I get excited just being here!$"

AbandonedShip_Corridors_1F_EventScript_Charlie::
# 34 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat, AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin
# 35 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin
# 36 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_NPC
# 37 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	release
	end


AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin::
# 42 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_2
# 46 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_5
# 50 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_Text_1, MSGBOX_NPC
AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_4:
# 52 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	checkitemspace ITEM_HP_UP
# 53 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_9
# 58 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 59 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_Text_2, MSGBOX_NPC
AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_8:
# 61 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	release
	end

AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_2:
# 43 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	releaseall
	end

AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_5:
# 47 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_Text_0, MSGBOX_NPC
	goto AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_4

AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_9:
# 54 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	giveitem ITEM_HP_UP
# 55 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_8


AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_Text_0:
# 47 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "I found some old junk left behind on\n"
	.string "the boat.\p"
	.string "But my Dad says I'm not allowed to bring\n"
	.string "trash from the ship home anymore.\p"
	.string "Do you want it?$"

AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_Text_1:
# 50 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Did you decide to take the stuff I\n"
	.string "found?$"

AbandonedShip_Corridors_1F_EventScript_CharlieTryGiveVitamin_Text_2:
# 59 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "You don't want it either?\p"
	.string "I guess Dad was right.$"
