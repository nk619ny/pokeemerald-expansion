# 1 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
//.set LOCALID_BRINEYS_HOUSE_BRINEY, 1
# 3 "data/maps/Route104_MrBrineysHouse/scripts.pory"
//.set LOCALID_BRINEYS_HOUSE_PEEKO, 2
# 4 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 5 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_MapScripts::
# 6 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MrBrineysHouse_OnTransition
# 7 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 9 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition:
# 10 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 11 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_eq VAR_BRINEY_HOUSE_STATE, 1, Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos
# 12 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_set FLAG_RECEIVED_POKENAV, Route104_MrBrineysHouse_EventScript_HideRustboroRival
# 13 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 14 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 15 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_HideRustboroRival::
# 16 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 17 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 18 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 19 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos::
# 20 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_BRINEY, 9, 3
# 21 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_BRINEY, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
# 22 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_PEEKO, 9, 6
# 23 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_PEEKO, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 25 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 26 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney::
# 27 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 28 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 29 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route104_MrBrineysHouse_EventScript_NoLongerNeedBoat
# 30 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_set FLAG_ENABLE_BRINEY_BOAT, Route104_MrBrineysHouse_EventScript_TakeMyBoatReminder
# 31 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route104_MrBrineysHouse_EventScript_TakeMyBoat
# 32 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_unset FLAG_MR_BRINEY_SAILING_INTRO, Route104_MrBrineysHouse_EventScript_SailingIntro
# 33 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	//goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_SailBothDeliveries
# 34 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	//goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_SailDeliverPackage
# 35 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound
# 36 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 37 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 38 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailingIntro::
# 39 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 40 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WaitUpPeeko, MSGBOX_DEFAULT
# 41 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford, MSGBOX_YESNO
# 42 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 43 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 44 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 45 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 46 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound::
# 47 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	message Route104_MrBrineysHouse_Text_WhereAreWeBound
# 48 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 49 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	multichoicedefault 20, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 50 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 0, Route104_MrBrineysHouse_EventScript_SailToDewford
# 52 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 1, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 53 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case MULTI_B_PRESSED, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 54 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 55 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 56 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailBothDeliveries::
# 57 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford, MSGBOX_YESNO
# 58 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 59 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 60 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 61 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 62 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailDeliverPackage::
# 63 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford, MSGBOX_YESNO
# 64 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 65 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 66 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 67 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 68 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing::
# 69 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_DeclineDeliverySail, MSGBOX_DEFAULT
# 70 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 71 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 72 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 73 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineSailing::
# 74 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail, MSGBOX_DEFAULT
# 75 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 76 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 77 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 78 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailToDewford::
# 79 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_SetSailForDewford, MSGBOX_DEFAULT
# 80 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 81 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
# 82 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 83 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 84 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 85 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 86 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 87 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 88 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL
# 89 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	warp MAP_ROUTE104, 13, 51
# 90 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitstate
# 91 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
# 92 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 93 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 94 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Peeko::
# 95 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 96 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 97 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitse
# 98 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 99 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_Peeko, MSGBOX_DEFAULT
# 100 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmoncry
# 101 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 102 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 103 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 104 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WaitUpPeeko:
# 105 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Hold on, lass!\n"
# 106 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Wait up, PEEKO!$"
# 107 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 108 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_SetSailForDewford:
# 109 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
# 110 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Anchors aweigh!\n"
# 111 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 112 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 113 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_DeclineDeliverySail:
# 114 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Is that so?\p"
# 115 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 116 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "you want to set sail!$"
# 117 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 118 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford:
# 119 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 120 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "I know exactly what you want to say!\p"
# 121 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You're ready to go to Dewford.\p"
# 122 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What you need me to do is no problem\n"
# 123 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "at all--I'm the man for the job!$"
# 124 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 125 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford:
# 126 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 127 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "I know exactly what you want to say!\p"
# 128 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You're ready to go to Dewford.\p"
# 129 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What you need me to do is no problem\n"
# 130 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "at all--I'm the man for the job!$"
# 131 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 132 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WhereAreWeBound:
# 133 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 134 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 135 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 136 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 137 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail:
# 138 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Is that so?\p"
# 139 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 140 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "you want to set sail!$"
# 141 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 142 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_Peeko:
# 143 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "PEEKO: Pii piihyoro!$"

Route104_MrBrineysHouse_EventScript_TakeMyBoat::
# 164 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 165 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 166 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TakeMyBoat, MSGBOX_NPC
# 167 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 168 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_ENABLE_BRINEY_BOAT
# 169 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
	end


Route104_MrBrineysHouse_EventScript_TakeMyBoatReminder::
# 174 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 175 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 176 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TakeMyBoatReminder, MSGBOX_NPC
# 177 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 178 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
	end


Route104_MrBrineysHouse_EventScript_NoLongerNeedBoat::
# 183 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 184 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 185 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NoLongerNeedBoat, MSGBOX_NPC
# 186 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 187 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
	end


Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford::
# 147 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy, {PLAYER}! I just\n"
	.string "received a call from your father about\l"
	.string "you.\p"
	.string "So, you beat him in a Pokémon battle,\n"
	.string "hm?\p"
	.string "That's mighty impressive. I suppose\n"
	.string "you're off to Dewford now?\p"
	.string "Well, I'm happy to take you. Come along\n"
	.string "with me, and we'll sail together!$"

Route104_MrBrineysHouse_Text_TakeMyBoat::
# 151 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy, {PLAYER}!\p"
	.string "Beating Roxanne is a mighty impressive\n"
	.string "task.\p"
	.string "I think you're capable enough now to\n"
	.string "sail the seas on our own.\p"
	.string "As thanks for rescuing Peeko, I'm happy\n"
	.string "to let you take out my boat to explore\l"
	.string "Route 104 to 109, and make your own\l"
	.string "adventures.\p"
	.string "Just walk up to the water outside, and\n"
	.string "set sail!$"

Route104_MrBrineysHouse_Text_TakeMyBoatReminder::
# 155 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Have you figured out how to\n"
	.string "sail?\p"
	.string "If you walk to the edge of the beach\n"
	.string "outside, you'll be able to take my boat\l"
	.string "out.$"

Route104_MrBrineysHouse_Text_NoLongerNeedBoat::
# 159 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy, {PLAYER}!\p"
	.string "I see you can surf with your own\n"
	.string "Pokémon now, so you no longer need my\l"
	.string "boat.\p"
	.string "Now you can sail out into even farther\n"
	.string "seas!$"
