# 1 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
    closemessage
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
    goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//checkitem ITEM_ROOT_FOSSIL
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//checkitem ITEM_CLAW_FOSSIL
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ This whole section has needless duplication and could be condensed considerably
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil::
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil::
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil::
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil::
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 1, RustboroCity_DevonCorp_2F_EventScript_LileepReady
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 2, RustboroCity_DevonCorp_2F_EventScript_AnorithReady
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LileepReady::
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_AnorithReady::
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep::
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 20
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty::
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC::
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC::
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare::
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep::
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith::
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 20
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty::
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC::
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC::
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare::
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith::
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, FALSE
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil::
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil::
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect::
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with Pokémon.\p"
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS…\p"
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But I haven't made much headway…$"
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS!\p"
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The REPEAT BALL makes it easier to\n"
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "catch Pokémon you've caught before.\p"
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The TIMER BALL gets better at catching\n"
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pokémon the longer a battle runs.\p"
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Both are proudly developed by\n"
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please give them a try!$"
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav:
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the POKéNAV!\p"
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "As an engineer, I feel blessed to have\n"
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "made something so great!$"
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's a POKéNAV!\p"
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It came about as a result of our\n"
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "PRESIDENT's desire to learn about\l"
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the feelings of Pokémon.\p"
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like me to describe its\n"
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "features in detail?\p"
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "No, no. I think you'll find out just by\n"
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "trying the POKéNAV out.$"
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pokémon…\p"
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been working with scientists in\n"
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Mossdeep to develop a device that\l"
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "resurrects Pokémon from fossils…\p"
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Is that a Pokémon fossil?\p"
# 326 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring that Pokémon\n"
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "FOSSIL REGENERATOR.$"
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "DEVON's technological expertise\n"
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have not one, but two, fossils?\p"
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, my machine can only\n"
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "regenerate one Pokémon at a time.\p"
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to pick one of your\n"
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "fossils for regeneration?$"
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\n"
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized Pokémon has been\n"
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 362 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient Pokémon.\n"
# 363 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
# 366 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 367 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 368 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 369 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ Unused
# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many Pokémon.\n"
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for this one.$"
# 373 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the POKéNAV…\p"
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 378 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 379 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 380 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 381 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript::
	checkitem ITEM_OLD_AMBER
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_2
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_1:
	checkitem ITEM_HELIX_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_5
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_4:
	checkitem ITEM_DOME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_8
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_7:
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_11
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_10:
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_14
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_13:
	checkitem ITEM_ARMOR_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_17
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_16:
	checkitem ITEM_SKULL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_20
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_19:
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_23
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_22:
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_26
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_25:
	checkitem ITEM_PLUME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_29
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_28:
	checkitem ITEM_COVER_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_32
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_31:
	checkitem ITEM_FOSSILIZED_BIRD
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_35
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_34:
	checkitem ITEM_FOSSILIZED_DINO
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_38
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_37:
	checkitem ITEM_FOSSILIZED_FISH
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_41
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_40:
	checkitem ITEM_FOSSILIZED_DRAKE
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_44
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_43:
# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_15, 15
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_16
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 1, 0, DYN_MULTICHOICE_CB_NONE
# 412 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 413 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_TEMP_4
# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_48
# 416 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_49
# 418 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_50
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 3, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_51
# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 4, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_52
# 424 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 5, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_53
# 426 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 6, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_54
# 428 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 7, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_55
# 430 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 8, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_56
# 432 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 9, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_57
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 10, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_58
# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 11, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_59
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 12, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_59
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 13, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_59
# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 14, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_59
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 15, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_60
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 127, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_60
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46:
# 447 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_18, MSGBOX_YESNO
# 448 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_61
# 452 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_TEMP_4
# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_66
# 457 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_67
# 461 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_68
# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 3, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_69
# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 4, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_70
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 5, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_71
# 477 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 6, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_72
# 481 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 7, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_73
# 485 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 8, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_74
# 489 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 9, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_75
# 493 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 10, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_76
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64:
# 498 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_19, MSGBOX_NPC
# 499 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 500 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 60
# 501 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 502 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_6
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_6, 5, 0, 0, 0
# 504 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 505 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MON_GIVEN_TO_PARTY, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_79
# 511 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MON_GIVEN_TO_PC, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_80
# 517 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MON_CANT_GIVE, EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_81
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_81:
# 519 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_22
# 520 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem VAR_TEMP_5
EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_77:
# 522 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 523 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	releaseall
	end

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_2:
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_0, 0
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_1

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_5:
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_1, 1
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_4

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_8:
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_2, 2
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_7

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_11:
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_3, 3
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_10

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_14:
# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_4, 4
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_13

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_17:
# 399 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_5, 5
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_16

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_20:
# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_6, 6
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_19

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_23:
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_7, 7
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_22

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_26:
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_8, 8
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_25

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_29:
# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_9, 9
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_28

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_32:
# 404 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_10, 10
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_31

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_35:
# 405 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_11, 11
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_34

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_38:
# 406 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_12, 12
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_37

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_41:
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_13, 13
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_40

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_44:
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_14, 14
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_43

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_48:
# 415 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_OLD_AMBER
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_49:
# 417 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELIX_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_50:
# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DOME_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_51:
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_52:
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_53:
# 425 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ARMOR_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_54:
# 427 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SKULL_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_55:
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JAW_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_56:
# 431 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SAIL_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_57:
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PLUME_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_58:
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_COVER_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_59:
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_17
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto EventScript_RustboroCity_DevonCorp_2F_DeclinedFossilScript
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_60:
# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto EventScript_RustboroCity_DevonCorp_2F_DeclinedFossilScript
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_46

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_61:
# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto EventScript_RustboroCity_DevonCorp_2F_DeclinedFossilScript
	return

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_66:
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 455 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_AERODACTYL
# 456 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_OLD_AMBER
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_67:
# 458 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 459 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_OMANYTE
# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_HELIX_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_68:
# 462 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
# 463 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_KABUTO
# 464 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_DOME_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_69:
# 466 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 467 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_LILEEP
# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_ROOT_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_70:
# 470 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 471 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_ANORITH
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_CLAW_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_71:
# 474 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ARMOR_FOSSIL
# 475 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_SHIELDON
# 476 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_ARMOR_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_72:
# 478 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_SKULL_FOSSIL
# 479 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_CRANIDOS
# 480 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_SKULL_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_73:
# 482 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_JAW_FOSSIL
# 483 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_TYRUNT
# 484 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_JAW_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_74:
# 486 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_SAIL_FOSSIL
# 487 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_AMAURA
# 488 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_SAIL_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_75:
# 490 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_PLUME_FOSSIL
# 491 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_ARCHEN
# 492 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_PLUME_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_76:
# 494 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_COVER_FOSSIL
# 495 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_TIRTOUGA
# 496 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_5, ITEM_COVER_FOSSIL
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_64

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_79:
# 506 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 507 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_20
# 508 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 509 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NicknamePartyMon
# 510 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_21, MSGBOX_NPC
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_77

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_80:
# 512 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 513 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_20
# 514 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 515 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NicknameBoxMon
# 516 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_21, MSGBOX_NPC
	goto EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_77


EventScript_RustboroCity_DevonCorp_2F_DeclinedFossilScript::
# 529 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox EventScript_RustboroCity_DevonCorp_2F_DeclinedFossilScript_Text_0
# 530 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 531 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	releaseall
	end


EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_0:
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Old Amber$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_1:
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Helix Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_2:
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Dome Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_3:
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Root Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_4:
# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Claw Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_5:
# 399 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Armor Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_6:
# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Skull Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_7:
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Jaw Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_8:
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Sail Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_9:
# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Plume Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_10:
# 404 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Cover Fossil$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_11:
# 405 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossilized Bird$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_12:
# 406 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossilized Dino$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_13:
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossilized Fish$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_14:
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossilized Drake$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_15:
# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Not Right Now$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_16:
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Do you have a fossil you would like us\n"
	.string "to revive?$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_17:
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, I can't revive that one,\n"
	.string "because the fossil is incomplete.$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_18:
# 447 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You want me to revive your\n"
	.string "{STR_VAR_1}, is that correct?$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_19:
# 498 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Okay! This will just take a moment.$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_20:
# 507 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Received {STR_VAR_2}!$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_21:
# 510 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It worked! We succesfully revived an\n"
	.string "ancient Pokémon fossil!\p"
	.string "I hope you enjoy this prehistoric\n"
	.string "creature.$"

EventScript_RustboroCity_DevonCorp_2F_NewFossilScript_Text_22:
# 519 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Something wen't wrong... Please take your fossil back.\pMaybe you should try again later?$"

EventScript_RustboroCity_DevonCorp_2F_DeclinedFossilScript_Text_0:
# 529 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "If you do come across any Pokémon\n"
	.string "fossils, please bring them to us!\p"
	.string "I would love a chance to put our new\n"
	.string "technology to work.$"
