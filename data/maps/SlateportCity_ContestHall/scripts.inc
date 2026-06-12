# 1 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 2 "data/maps/SlateportCity_ContestHall/scripts.pory"
SlateportCity_ContestHall_MapScripts::
# 3 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 5 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 6 "data/maps/SlateportCity_ContestHall/scripts.pory"
SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty::
# 7 "data/maps/SlateportCity_ContestHall/scripts.pory"
	setflag FLAG_RECEIVED_COSPLAY_PIKACHU
# 8 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 9 "data/maps/SlateportCity_ContestHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/SlateportCity_ContestHall/scripts.pory"
	message Common_Text_PlayerReceivedCosplayPikachu
# 11 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitmessage
# 12 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitfanfare
# 13 "data/maps/SlateportCity_ContestHall/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIKACHU_COSPLAY
# 14 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 15 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 16 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu
# 17 "data/maps/SlateportCity_ContestHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 18 "data/maps/SlateportCity_ContestHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 19 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu
# 20 "data/maps/SlateportCity_ContestHall/scripts.pory"
	end
# 21 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 22 "data/maps/SlateportCity_ContestHall/scripts.pory"
SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToPC::
# 23 "data/maps/SlateportCity_ContestHall/scripts.pory"
	setflag FLAG_RECEIVED_COSPLAY_PIKACHU
# 24 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 25 "data/maps/SlateportCity_ContestHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 26 "data/maps/SlateportCity_ContestHall/scripts.pory"
	message Common_Text_PlayerReceivedCosplayPikachu
# 27 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitmessage
# 28 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitfanfare
# 29 "data/maps/SlateportCity_ContestHall/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIKACHU_COSPLAY
# 30 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 31 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 32 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToPCFinish
# 33 "data/maps/SlateportCity_ContestHall/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 34 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToPCFinish
# 35 "data/maps/SlateportCity_ContestHall/scripts.pory"
	end
# 36 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 37 "data/maps/SlateportCity_ContestHall/scripts.pory"
SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToPCFinish::
# 38 "data/maps/SlateportCity_ContestHall/scripts.pory"
	call Common_EventScript_TransferredToPC
# 39 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu
# 40 "data/maps/SlateportCity_ContestHall/scripts.pory"
	end

SlateportCity_ContestHall_EventScript_ContestHallReceptionist::
# 48 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 49 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_ContestHallReceptionist_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_ContestHallArtist::
# 55 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 56 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_ContestHallArtist_Text_0, MSGBOX_DEFAULT
# 57 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia::
# 62 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 63 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 64 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_set FLAG_RECEIVED_COSPLAY_PIKACHU, SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu
# 65 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_set FLAG_TEMP_1, SlateportCity_ContestHall_EventScript_Lisia_TryGiftAgain
# 66 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_defeated TRAINER_HILL_1, SlateportCity_ContestHall_EventScript_Lisia_SecondMeeting
# 67 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_not_defeated TRAINER_HILL_1, SlateportCity_ContestHall_EventScript_Lisia_FirstMeeting
# 68 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia_TryGiftAgain::
# 73 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 74 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 75 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Lisia_TryGiftAgain_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 77 "data/maps/SlateportCity_ContestHall/scripts.pory"
	givemon SPECIES_PIKACHU_COSPLAY, 20
# 78 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 79 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 80 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 81 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia_FirstMeeting::
# 86 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 87 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 88 "data/maps/SlateportCity_ContestHall/scripts.pory"
	setflag FLAG_TEMP_1
# 89 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Lisia_FirstMeeting_Text_0, MSGBOX_DEFAULT
# 90 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 91 "data/maps/SlateportCity_ContestHall/scripts.pory"
	givemon SPECIES_PIKACHU_COSPLAY, 20
# 92 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 93 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 94 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 95 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia_SecondMeeting::
# 100 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 101 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 102 "data/maps/SlateportCity_ContestHall/scripts.pory"
	setflag FLAG_TEMP_1
# 103 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Lisia_SecondMeeting_Text_0, MSGBOX_DEFAULT
# 104 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 105 "data/maps/SlateportCity_ContestHall/scripts.pory"
	givemon SPECIES_PIKACHU_COSPLAY, 20
# 106 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 107 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 108 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 109 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu::
# 114 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 115 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 116 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu_Text_0, MSGBOX_DEFAULT
# 117 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 118 "data/maps/SlateportCity_ContestHall/scripts.pory"
	giveitem ITEM_CONTEST_PASS
# 119 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Fan1::
# 124 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 125 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 126 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Fan1_Text_0, MSGBOX_DEFAULT
# 127 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 128 "data/maps/SlateportCity_ContestHall/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 129 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitmovement 0
# 130 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Fan2::
# 135 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 136 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 137 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Fan2_Text_0, MSGBOX_DEFAULT
# 138 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 139 "data/maps/SlateportCity_ContestHall/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 140 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitmovement 0
# 141 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Fan3::
# 146 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 147 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 148 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Fan3_Text_0, MSGBOX_DEFAULT
# 149 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 150 "data/maps/SlateportCity_ContestHall/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 151 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitmovement 0
# 152 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Encore::
# 157 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 158 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 159 "data/maps/SlateportCity_ContestHall/scripts.pory"
	checkitem ITEM_TM_ENCORE
# 160 "data/maps/SlateportCity_ContestHall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_ContestHall_EventScript_Encore_2
SlateportCity_ContestHall_EventScript_Encore_1:
# 166 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Encore_Text_1, MSGBOX_DEFAULT
# 167 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 168 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end

SlateportCity_ContestHall_EventScript_Encore_2:
# 161 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Encore_Text_0, MSGBOX_DEFAULT
# 162 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 163 "data/maps/SlateportCity_ContestHall/scripts.pory"
	giveitem ITEM_TM_ENCORE
# 164 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitfanfare
	goto SlateportCity_ContestHall_EventScript_Encore_1


SlateportCity_ContestHall_EventScript_Charm::
# 174 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 175 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 176 "data/maps/SlateportCity_ContestHall/scripts.pory"
	checkitem ITEM_TM_CHARM
# 177 "data/maps/SlateportCity_ContestHall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_ContestHall_EventScript_Charm_2
SlateportCity_ContestHall_EventScript_Charm_1:
# 183 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Charm_Text_1, MSGBOX_DEFAULT
# 184 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 185 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end

SlateportCity_ContestHall_EventScript_Charm_2:
# 178 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Charm_Text_0, MSGBOX_DEFAULT
# 179 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 180 "data/maps/SlateportCity_ContestHall/scripts.pory"
	giveitem ITEM_TM_CHARM
# 181 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitfanfare
	goto SlateportCity_ContestHall_EventScript_Charm_1


SlateportCity_ContestHall_EventScript_ContestHallReceptionist_Text_0:
# 49 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Welcome to the Contest Hall!\p"
	.string "Unfortunately, we are currently not\n"
	.string "accepting new contestants at this\l"
	.string "location.$"

SlateportCity_ContestHall_EventScript_ContestHallArtist_Text_0:
# 56 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Hm?\n"
	.string "{PLAYER}, you said?\p"
	.string "Sorry, I don't have you on the list.$"

SlateportCity_ContestHall_EventScript_Lisia_TryGiftAgain_Text_0:
# 75 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Lisia: I hope you've made room for this\n"
	.string "special Pikachu!$"

SlateportCity_ContestHall_EventScript_Lisia_FirstMeeting_Text_0:
# 89 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Oh, hi, another fan!\n"
	.string "Oh, you're not?\p"
	.string "My name's Lisia, and I'm the Hoenn\n"
	.string "Contest Champion!\p"
	.string "I'm giving out autographs, but if you\n"
	.string "aren't a contest fan, you probably\l"
	.string "won't want one...\p"
	.string "I know! As a Pokémon trainer, I bet\n"
	.string "you'll appreciate this special Pikachu.$"

SlateportCity_ContestHall_EventScript_Lisia_SecondMeeting_Text_0:
# 103 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Lisia: Oh, it's you again!\p"
	.string "I may not be the best battler, but I\n"
	.string "just won another contest here in\l"
	.string "Slateport.\p"
	.string "I actually have a Pikachu that I\n"
	.string "trained for contests, but seems more\l"
	.string "interested in battling.\p"
	.string "You two would be a great match!$"

SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu_Text_0:
# 116 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Lisia: That Pikachu can wear several\n"
	.string "different outfits.\p"
	.string "It is such a cosplay prodigy, it can\n"
	.string "actually gain a new move and typing\l"
	.string "when in costume!$"

SlateportCity_ContestHall_EventScript_Fan1_Text_0:
# 126 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "I'm Lisia's biggest fan!$"

SlateportCity_ContestHall_EventScript_Fan2_Text_0:
# 137 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Lisia and her Altaria are so cool!$"

SlateportCity_ContestHall_EventScript_Fan3_Text_0:
# 148 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Don't tell anyone, but I don't even know\n"
	.string "the rules to Pokémon contests.$"

SlateportCity_ContestHall_EventScript_Encore_Text_0:
# 161 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "As a judge, sometimes I am so blown\n"
	.string "away, I want an immediate repeat\l"
	.string "performance.\p"
	.string "With this TM, you can always ensure you\n"
	.string "see the same move again!$"

SlateportCity_ContestHall_EventScript_Encore_Text_1:
# 166 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "The Encore is often better than the\n"
	.string "first performance!$"

SlateportCity_ContestHall_EventScript_Charm_Text_0:
# 178 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "As a judge, I see all kinds of charming\n"
	.string "Pokémon.\p"
	.string "With this TM, your Pokémon can become\n"
	.string "charmers too!$"

SlateportCity_ContestHall_EventScript_Charm_Text_1:
# 183 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "You can get far in life with a little\n"
	.string "charm!$"
