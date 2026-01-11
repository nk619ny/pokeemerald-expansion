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
    call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 9 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 10 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu
# 11 "data/maps/SlateportCity_ContestHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 12 "data/maps/SlateportCity_ContestHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 13 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu
# 14 "data/maps/SlateportCity_ContestHall/scripts.pory"
	end
# 15 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 16 "data/maps/SlateportCity_ContestHall/scripts.pory"
SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToPC::
# 17 "data/maps/SlateportCity_ContestHall/scripts.pory"
	setflag FLAG_RECEIVED_COSPLAY_PIKACHU
# 18 "data/maps/SlateportCity_ContestHall/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 19 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 20 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToPCFinish
# 21 "data/maps/SlateportCity_ContestHall/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 22 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToPCFinish
# 23 "data/maps/SlateportCity_ContestHall/scripts.pory"
	end
# 24 "data/maps/SlateportCity_ContestHall/scripts.pory"

# 25 "data/maps/SlateportCity_ContestHall/scripts.pory"
SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToPCFinish::
# 26 "data/maps/SlateportCity_ContestHall/scripts.pory"
	call Common_EventScript_TransferredToPC
# 27 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu
# 28 "data/maps/SlateportCity_ContestHall/scripts.pory"
	end

SlateportCity_ContestHall_EventScript_ContestHallReceptionist::
# 36 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 37 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_ContestHallReceptionist_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_ContestHallArtist::
# 43 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 44 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_ContestHallArtist_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia::
# 50 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 51 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 52 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_set FLAG_RECEIVED_COSPLAY_PIKACHU, SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu
# 53 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_set FLAG_TEMP_1, SlateportCity_ContestHall_EventScript_Lisia_TryGiftAgain
# 54 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_defeated TRAINER_HILL_1, SlateportCity_ContestHall_EventScript_Lisia_SecondMeeting
# 55 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_not_defeated TRAINER_HILL_1, SlateportCity_ContestHall_EventScript_Lisia_FirstMeeting
# 56 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia_TryGiftAgain::
# 61 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 62 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 63 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Lisia_TryGiftAgain_Text_0, MSGBOX_DEFAULT
# 64 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 65 "data/maps/SlateportCity_ContestHall/scripts.pory"
	givemon SPECIES_PIKACHU_COSPLAY, 20
# 66 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 67 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 68 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 69 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia_FirstMeeting::
# 74 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 75 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 76 "data/maps/SlateportCity_ContestHall/scripts.pory"
	setflag FLAG_TEMP_1
# 77 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Lisia_FirstMeeting_Text_0, MSGBOX_DEFAULT
# 78 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 79 "data/maps/SlateportCity_ContestHall/scripts.pory"
	givemon SPECIES_PIKACHU_COSPLAY, 20
# 80 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 81 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 82 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 83 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia_SecondMeeting::
# 88 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 89 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 90 "data/maps/SlateportCity_ContestHall/scripts.pory"
	setflag FLAG_TEMP_1
# 91 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Lisia_SecondMeeting_Text_0, MSGBOX_DEFAULT
# 92 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 93 "data/maps/SlateportCity_ContestHall/scripts.pory"
	givemon SPECIES_PIKACHU_COSPLAY, 20
# 94 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 95 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SlateportCity_ContestHall_EventScript_CosplayPikachuAddedToParty
# 96 "data/maps/SlateportCity_ContestHall/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 97 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu::
# 102 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 103 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 104 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu_Text_0, MSGBOX_DEFAULT
# 105 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 106 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Fan1::
# 111 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 112 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 113 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Fan1_Text_0, MSGBOX_DEFAULT
# 114 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 115 "data/maps/SlateportCity_ContestHall/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 116 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitmovement 0
# 117 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Fan2::
# 122 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 123 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 124 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Fan2_Text_0, MSGBOX_DEFAULT
# 125 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 126 "data/maps/SlateportCity_ContestHall/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 127 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitmovement 0
# 128 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Fan3::
# 133 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 134 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 135 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Fan3_Text_0, MSGBOX_DEFAULT
# 136 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 137 "data/maps/SlateportCity_ContestHall/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 138 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitmovement 0
# 139 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end


SlateportCity_ContestHall_EventScript_Encore::
# 144 "data/maps/SlateportCity_ContestHall/scripts.pory"
	lock
# 145 "data/maps/SlateportCity_ContestHall/scripts.pory"
	faceplayer
# 146 "data/maps/SlateportCity_ContestHall/scripts.pory"
	checkitem ITEM_TM_ENCORE
# 147 "data/maps/SlateportCity_ContestHall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_ContestHall_EventScript_Encore_2
SlateportCity_ContestHall_EventScript_Encore_1:
# 153 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Encore_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 155 "data/maps/SlateportCity_ContestHall/scripts.pory"
	releaseall
	end

SlateportCity_ContestHall_EventScript_Encore_2:
# 148 "data/maps/SlateportCity_ContestHall/scripts.pory"
	msgbox SlateportCity_ContestHall_EventScript_Encore_Text_0, MSGBOX_DEFAULT
# 149 "data/maps/SlateportCity_ContestHall/scripts.pory"
	closemessage
# 150 "data/maps/SlateportCity_ContestHall/scripts.pory"
	giveitem ITEM_TM_ENCORE
# 151 "data/maps/SlateportCity_ContestHall/scripts.pory"
	waitfanfare
	goto SlateportCity_ContestHall_EventScript_Encore_1


SlateportCity_ContestHall_EventScript_ContestHallReceptionist_Text_0:
# 37 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Welcome to the Contest Hall!\p"
	.string "Unfortunately, we are currently not\n"
	.string "accepting new contestants at this\l"
	.string "location.$"

SlateportCity_ContestHall_EventScript_ContestHallArtist_Text_0:
# 44 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Hm?\n"
	.string "{PLAYER}, you said?\p"
	.string "Sorry, I don't have you on the list.$"

SlateportCity_ContestHall_EventScript_Lisia_TryGiftAgain_Text_0:
# 63 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Lisia: I hope you've made room for this\n"
	.string "special Pikachu!$"

SlateportCity_ContestHall_EventScript_Lisia_FirstMeeting_Text_0:
# 77 "data/maps/SlateportCity_ContestHall/scripts.pory"
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
# 91 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Lisia: Oh, it's you again!\p"
	.string "I may not be the best battler, but I\n"
	.string "just won another contest here in\l"
	.string "Slateport.\p"
	.string "I actually have a Pikachu that I\n"
	.string "trained for contests, but seems more\l"
	.string "interested in battling.\p"
	.string "You two would be a great match!$"

SlateportCity_ContestHall_EventScript_Lisia_ExplainCosplayPikachu_Text_0:
# 104 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Lisia: That Pikachu can wear several\n"
	.string "different outfits.\p"
	.string "It is such a cosplay prodigy, it can\n"
	.string "actually gain a new move and typing\l"
	.string "when in costume!$"

SlateportCity_ContestHall_EventScript_Fan1_Text_0:
# 113 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "I'm Lisia's biggest fan!$"

SlateportCity_ContestHall_EventScript_Fan2_Text_0:
# 124 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Lisia and her Altaria are so cool!$"

SlateportCity_ContestHall_EventScript_Fan3_Text_0:
# 135 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "Don't tell anyone, but I don't even know\n"
	.string "the rules to Pokémon contests.$"

SlateportCity_ContestHall_EventScript_Encore_Text_0:
# 148 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "As a judge, sometimes I am so blown\n"
	.string "away, I want an immediate repeat\l"
	.string "performance.\p"
	.string "With this TM, you can always ensure you\n"
	.string "see the same move again!$"

SlateportCity_ContestHall_EventScript_Encore_Text_1:
# 153 "data/maps/SlateportCity_ContestHall/scripts.pory"
	.string "The Encore is often better than the\n"
	.string "first performance!$"
