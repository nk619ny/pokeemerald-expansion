# 1 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_MapScripts::
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
# 6 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_OnFrame
# 7 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.byte 0
# 8 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 9 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad:
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_EventScript_HideStevensNote
# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 12 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 13 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_HideStevensNote::
# 14 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
# 15 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 16 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition:
# 18 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_eq VAR_STEVENS_HOUSE_STATE, 2, MossdeepCity_StevensHouse_EventScript_SetStevenPos
# 19 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 20 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 21 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SetStevenPos::
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVENS_HOUSE_STEVEN, 6, 5
# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVENS_HOUSE_STEVEN, MOVEMENT_TYPE_FACE_UP
# 24 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 25 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 26 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnFrame:
# 27 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script_2 VAR_STEVENS_HOUSE_STATE, 6, MossdeepCity_StevensHouse_EventScript_StevenGivesDive
# 28 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.2byte 0
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenGivesDive::
# 31 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 32 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 33 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 34 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playse SE_PIN
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_ExclamationMark
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_Delay48
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_Movement_StevenApproachPlayer
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_YouveEarnedHMDive, MSGBOX_DEFAULT
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	giveitem ITEM_HM_DIVE
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_ExplainDive, MSGBOX_DEFAULT
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 20
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_Movement_StevenReturn
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenApproachPlayer:
# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 58 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 59 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 60 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_down
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenReturn:
# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_up
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 70 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 71 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_up
# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumPokeball::
# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum, MSGBOX_YESNO
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_LeaveBeldum
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum
# 79 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 80 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 81 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_LeaveBeldum::
# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 86 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum::
# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELDUM
# 88 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemon SPECIES_BELDUM, 5
# 89 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_StevensHouse_EventScript_SendBeldumParty
# 90 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_StevensHouse_EventScript_SendBeldumPC
# 91 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 94 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumParty::
# 95 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 96 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 97 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 102 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumPC::
# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 105 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 107 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 108 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 109 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 110 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC::
# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 115 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare::
# 117 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BELDUM
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_STEVENS_HOUSE_BELDUM_BALL
# 119 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 120 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedBeldum
# 121 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 122 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldum::
# 127 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 130 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 131 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 132 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 133 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 136 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Steven::
# 137 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
# 138 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 139 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Letter::
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused, leftover from RS
# 147 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_DiveItemBall::
# 148 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	finditem ITEM_HM_DIVE
# 149 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 150 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 152 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_YouveEarnedHMDive:
# 153 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 154 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "As you can see, there's not much here,\n"
# 155 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "but this is my home.\p"
# 156 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Thank you for all that you've done.\p"
# 157 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "This is my token of appreciation.\n"
# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's the HIDDEN MACHINE DIVE.\p"
# 159 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "No need to be shy--you've earned\n"
# 160 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "this HM.$"
# 161 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 162 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ExplainDive:
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: While you're using SURF, you\n"
# 164 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "should notice dark patches of water.\p"
# 165 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Use DIVE if you come to deep water\n"
# 166 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "like it. You'll drop to the seafloor.\p"
# 167 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "When you want to come back up, use\n"
# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "DIVE again.\p"
# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "In some places, it won't be possible\n"
# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "for you to surface, though.$"
# 171 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 172 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis:
# 173 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: Apparently, there's an\n"
# 174 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "underwater cavern between\l"
# 175 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "MOSSDEEP and SOOTOPOLIS.\p"
# 176 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "You know, the one that CAPT. STERN\n"
# 177 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "found in his submarine.$"
# 178 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 179 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum:
# 180 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p"
# 181 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It contained the POKéMON\n"
# 182 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "BELDUM.\p"
# 183 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Take the POKé BALL?$"
# 184 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 185 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ObtainedBeldum:
# 186 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} obtained a BELDUM.$"
# 187 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 188 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused
# 189 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon:
# 190 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "There is no space for another POKéMON.$"
# 191 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 192 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas:
# 193 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} left the POKé BALL where\n"
# 194 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "it was.$"
# 195 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 196 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LetterFromSteven:
# 197 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a letter.\p"
# 198 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "… … … … … …\p"
# 199 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "To {PLAYER}{KUN}…\p"
# 200 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I've decided to do a little soul-\n"
# 201 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "searching and train on the road.\p"
# 202 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I don't plan to return home for some\n"
# 203 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "time.\p"
# 204 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I have a favor to ask of you.\p"
# 205 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I want you to take the POKé BALL on\n"
# 206 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "the desk.\p"
# 207 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Inside it is a BELDUM, my favorite\n"
# 208 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "POKéMON.\p"
# 209 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I'm counting on you.\p"
# 210 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "May our paths cross someday.\p"
# 211 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN STONE$"
# 212 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 213 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_CollectionOfRareRocks:
# 214 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 215 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "stones assembled by STEVEN.$"
