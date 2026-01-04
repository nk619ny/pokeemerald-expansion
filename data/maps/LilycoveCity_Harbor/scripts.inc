# 1 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 2 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_MapScripts::
# 3 "data/maps/LilycoveCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_Harbor_OnTransition
# 4 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.byte 0
# 5 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 6 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_OnTransition:
# 7 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setescapewarp MAP_LILYCOVE_CITY, 12, 33
# 8 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 9 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 10 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant::
# 11 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock
# 12 "data/maps/LilycoveCity_Harbor/scripts.pory"
	faceplayer
# 13 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_FerryUnavailable
# 14 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEonTicketState
# 15 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetAuroraTicketState
# 16 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetOldSeaMapState
# 17 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetMysticTicketState
# 18 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket
# 19 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetHasTicketsState
# 20 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_C, 2, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime
# 21 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_B, 1, LilycoveCity_Harbor_EventScript_EonTicketFirstTime
# 22 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_B, 2, LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime
# 23 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_B, 4, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime
# 24 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_B, 8, LilycoveCity_Harbor_EventScript_MysticTicketFirstTime
# 25 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_ne VAR_TEMP_B, 0, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime
# 26 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets
# 27 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 29 "data/maps/LilycoveCity_Harbor/scripts.pory"
@ First goto_if_eq is unnecessary; identical scripts
# 30 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets::
# 31 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_A, 0, LilycoveCity_Harbor_EventScript_NoEventTickets
# 32 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 33 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 34 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 35 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
# 36 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 37 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 38 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect::
# 39 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 40 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 41 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 42 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 43 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 44 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 0, LilycoveCity_Harbor_EventScript_GoToSlateport
# 45 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 1, LilycoveCity_Harbor_EventScript_GoToBattleFrontier
# 46 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_GoToSouthernIsland
# 47 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_GoToNavelRock
# 48 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_GoToBirthIsland
# 49 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_GoToFarawayIsland
# 50 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_ExitSailSelect
# 51 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_ExitSailSelect
# 52 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 54 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSouthernIsland::
# 55 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 56 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
# 57 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 58 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 59 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 61 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToNavelRock::
# 62 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 63 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
# 64 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 65 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 66 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 67 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 68 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBirthIsland::
# 69 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 70 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
# 71 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 72 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 73 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 74 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 75 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToFarawayIsland::
# 76 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 77 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 78 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 79 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 80 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 81 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 82 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateport::
# 83 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
# 84 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 85 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
# 86 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 87 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 88 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 89 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 90 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 91 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 92 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontier::
# 93 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 94 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 95 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 96 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 97 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 98 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 99 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 101 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState::
# 102 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 0
# 103 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, Common_EventScript_NopReturn
# 104 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_EON_TICKET
# 105 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 106 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 1
# 107 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_EON_TICKET, Common_EventScript_NopReturn
# 108 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 2
# 109 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 110 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 111 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState::
# 112 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 113 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, Common_EventScript_NopReturn
# 114 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 115 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 116 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 117 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_AURORA_TICKET, Common_EventScript_NopReturn
# 118 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 2
# 119 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 120 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 121 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState::
# 122 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 0
# 123 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_FARAWAY_ISLAND, Common_EventScript_NopReturn
# 124 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP
# 125 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 126 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 1
# 127 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_OLD_SEA_MAP, Common_EventScript_NopReturn
# 128 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 2
# 129 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState::
# 132 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 0
# 133 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, Common_EventScript_NopReturn
# 134 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 135 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 136 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 1
# 137 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_MYSTIC_TICKET, Common_EventScript_NopReturn
# 138 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 2
# 139 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 140 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 141 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket::
# 142 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_B, 0
# 143 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_E, 2, LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket
# 144 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_D, 2, LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket
# 145 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_C, 2, LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap
# 146 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket
# 147 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 149 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket::
# 150 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 1
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 153 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket::
# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 2
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 156 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 157 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap::
# 158 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 4
# 159 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 160 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 161 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket::
# 162 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 8
# 163 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 164 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 165 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState::
# 166 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_A, 0
# 167 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_E, 1, LilycoveCity_Harbor_EventScript_SetHasEonTicket
# 168 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_D, 1, LilycoveCity_Harbor_EventScript_SetHasAuroraTicket
# 169 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_C, 1, LilycoveCity_Harbor_EventScript_SetHasOldSeaMap
# 170 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, LilycoveCity_Harbor_EventScript_SetHasMysticTicket
# 171 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 172 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 173 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasEonTicket::
# 174 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 1
# 175 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 176 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 177 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasAuroraTicket::
# 178 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 2
# 179 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 180 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 181 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasOldSeaMap::
# 182 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 4
# 183 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 184 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 185 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasMysticTicket::
# 186 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 8
# 187 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 188 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 189 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_EonTicketFirstTime::
# 190 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_EON_TICKET
# 191 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 192 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 193 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 194 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowEonTicket, MSGBOX_DEFAULT
# 195 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
# 196 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 197 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 198 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime::
# 199 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 200 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 201 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
# 202 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 203 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 204 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 205 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 206 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime::
# 207 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 208 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 209 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 210 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 211 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 212 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
# 213 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 214 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 215 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime::
# 216 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 217 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 218 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
# 219 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 220 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 221 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 222 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 223 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime::
# 224 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_OLD_SEA_MAP
# 225 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowOldSeaMap, MSGBOX_DEFAULT
# 226 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 227 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 228 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OldSeaMapTooFar, MSGBOX_DEFAULT
# 229 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 230 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 231 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 232 "data/maps/LilycoveCity_Harbor/scripts.pory"
	playse SE_PIN
# 233 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_ExclamationMark
# 234 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 235 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_Delay48
# 236 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 237 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth
# 238 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast
# 239 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_LILYCOVE_HARBOR_BRINEY
# 240 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth
# 241 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast
# 242 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyHoldOnASecond, MSGBOX_DEFAULT
# 243 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth
# 244 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast
# 245 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyLetsSail, MSGBOX_DEFAULT
# 246 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 247 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth
# 248 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast
# 249 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 250 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 251 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 252 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 253 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 254 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 255 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 256 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime::
# 257 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 258 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 259 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 260 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 261 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 262 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 263 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 264 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MysticTicketFirstTime::
# 265 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 266 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 267 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 268 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 269 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 270 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
# 271 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 272 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 273 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime::
# 274 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 275 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 276 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
# 277 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 278 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 279 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 280 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 281 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime::
# 282 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 283 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 284 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 285 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message EventTicket_Text_OddTicketsWhereTo
# 286 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 287 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 1
# 288 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 289 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 290 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 291 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 292 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
# 293 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
# 294 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
# 295 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime
# 296 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
# 297 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
# 298 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 299 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 300 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 301 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect::
# 302 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 303 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 304 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 305 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 306 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 307 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 308 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 309 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_ATTENDANT, Common_Movement_WalkInPlaceFasterDown
# 310 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 311 "data/maps/LilycoveCity_Harbor/scripts.pory"
	showobjectat LOCALID_LILYCOVE_HARBOR_ATTENDANT, MAP_LILYCOVE_CITY_HARBOR
# 312 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 313 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 314 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 315 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 316 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 317 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEventTicketSailor::
# 318 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 320 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 321 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 322 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 60
# 323 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 325 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_FacePlayer
# 326 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 327 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 328 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 329 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor::
# 330 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 331 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 332 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 333 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 334 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
# 335 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
# 336 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 337 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideplayer
# 338 "data/maps/LilycoveCity_Harbor/scripts.pory"
	//hideobjectat LOCALID_PLAYER, 0 //changed in 1.13.3
# 339 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 340 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 341 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 342 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 343 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryUnavailable::
# 344 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_FerryUnavailable, MSGBOX_DEFAULT
# 345 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 346 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 347 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 348 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoEventTickets::
# 349 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 350 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 351 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 352 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
# 353 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 354 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 355 "data/maps/LilycoveCity_Harbor/scripts.pory"
@ Unused
# 356 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoTicket::
# 357 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_NoTicket, MSGBOX_DEFAULT
# 358 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 359 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 360 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 361 "data/maps/LilycoveCity_Harbor/scripts.pory"
@ Unused
# 362 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateportUnused::
# 363 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
# 364 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 365 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
# 366 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 367 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 368 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 369 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 370 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 371 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 372 "data/maps/LilycoveCity_Harbor/scripts.pory"
@ Unused
# 373 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused::
# 374 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 375 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 376 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 377 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 378 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 379 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 380 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 381 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 382 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind::
# 383 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo
# 384 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 385 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
# 386 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 387 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 388 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerry::
# 389 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_PleaseBoard, MSGBOX_DEFAULT
# 390 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 391 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 392 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 393 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 394 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 395 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
# 396 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
# 397 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 398 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideplayer
# 399 "data/maps/LilycoveCity_Harbor/scripts.pory"
	//hideobjectat LOCALID_PLAYER, 0 //changed in 1.13.3
# 400 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 401 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 402 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 403 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 404 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast::
# 405 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryEast
# 406 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 407 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 408 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 409 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth::
# 410 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth
# 411 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 412 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 413 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 414 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_ExitSailSelect::
# 415 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 416 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 417 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 418 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 419 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryEast:
# 420 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 421 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 422 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 423 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 424 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth:
# 425 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 426 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 427 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 428 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_UnusedBoardFerry:
# 429 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 430 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 431 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 432 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_Sailor::
# 433 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock
# 434 "data/maps/LilycoveCity_Harbor/scripts.pory"
	faceplayer
# 435 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_SailorFerryAvailable
# 436 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryUnavailable, MSGBOX_DEFAULT
# 437 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 438 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 439 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 440 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SailorFerryAvailable::
# 441 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryAvailable, MSGBOX_DEFAULT
# 442 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 443 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 444 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 445 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth::
# 446 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayNorth
# 447 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 448 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 449 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 450 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast::
# 451 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayEast
# 452 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 453 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 454 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 455 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorOutOfWayNorth:
# 456 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_right
# 457 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 458 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_left
# 459 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 460 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 461 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 462 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorOutOfWayEast:
# 463 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 464 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_down
# 465 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 466 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 467 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 468 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth::
# 469 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterLeft
# 470 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 471 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 472 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 473 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast::
# 474 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterDown
# 475 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 476 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 477 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 478 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth::
# 479 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterDown
# 480 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 481 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 482 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 483 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast::
# 484 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterLeft
# 485 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 486 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 487 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 488 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth::
# 489 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 490 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth
# 491 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth
# 492 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 493 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 494 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 495 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast::
# 496 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 497 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast
# 498 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast
# 499 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 500 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 501 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 502 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_BrineyBoardFerry:
# 503 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 504 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_8
# 505 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 506 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 507 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 508 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth:
# 509 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 510 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 511 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 512 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 513 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 514 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 515 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth:
# 516 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 517 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 518 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 519 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 520 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 521 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 522 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 523 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 524 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 525 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast:
# 526 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 527 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 528 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 529 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 530 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 531 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 532 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 533 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast:
# 534 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 535 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 536 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 537 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 538 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 539 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 540 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 541 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 542 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_FerryUnavailable:
# 543 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 544 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 545 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 546 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "available at present…$"
# 547 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 548 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_MayISeeYourTicket:
# 549 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 550 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 551 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 552 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_NoTicket:
# 553 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 554 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 555 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 556 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 557 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 558 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_FlashTicketWhereTo:
# 559 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 560 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 561 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 562 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 563 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailAnotherTime:
# 564 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 565 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 566 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SlateportItIs:
# 567 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 568 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 569 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_BattleFrontierItIs:
# 570 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 571 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 572 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_PleaseBoard:
# 573 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 574 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "departure.$"
# 575 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 576 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo:
# 577 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 578 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 579 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailorFerryUnavailable:
# 580 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Until they finish making the ferry,\n"
# 581 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "we sailors have nothing to do…\p"
# 582 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I wish they'd get a move on, the folks\n"
# 583 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "at the SHIPYARD in SLATEPORT.$"
# 584 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 585 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailorFerryAvailable:
# 586 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The ferry S.S. TIDAL is finally in\n"
# 587 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "operation.\p"
# 588 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The folks at the SHIPYARD in SLATEPORT\n"
# 589 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "must've worked extra hard.\p"
# 590 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Well, it's my turn to get busy now!$"
