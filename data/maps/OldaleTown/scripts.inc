# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"

# 3 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 4 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 5 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 6 "data/maps/OldaleTown/scripts.pory"

# 7 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 8 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 9 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 10 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 11 "data/maps/OldaleTown/scripts.pory"
	// call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 12 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 13 "data/maps/OldaleTown/scripts.pory"
	end
# 14 "data/maps/OldaleTown/scripts.pory"

# 15 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 16 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 17 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 18 "data/maps/OldaleTown/scripts.pory"
	return
# 19 "data/maps/OldaleTown/scripts.pory"

# 20 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 21 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_FOOTPRINTS_MAN, 1, 11
# 22 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 23 "data/maps/OldaleTown/scripts.pory"
	return
# 24 "data/maps/OldaleTown/scripts.pory"

# 25 "data/maps/OldaleTown/scripts.pory"
/* OldaleTown_EventScript_MoveMartEmployee::
# 26 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 27 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 28 "data/maps/OldaleTown/scripts.pory"
	return */
# 29 "data/maps/OldaleTown/scripts.pory"

# 30 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 31 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 32 "data/maps/OldaleTown/scripts.pory"
	end
# 33 "data/maps/OldaleTown/scripts.pory"

# 34 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 35 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 36 "data/maps/OldaleTown/scripts.pory"
	end
# 37 "data/maps/OldaleTown/scripts.pory"

# 38 "data/maps/OldaleTown/scripts.pory"
/*OldaleTown_EventScript_MartEmployee::
# 39 "data/maps/OldaleTown/scripts.pory"
	lock
# 40 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 41 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 42 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 43 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 44 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 45 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 46 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 47 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 48 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 49 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 50 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 51 "data/maps/OldaleTown/scripts.pory"
	end
# 52 "data/maps/OldaleTown/scripts.pory"

# 53 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 54 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 55 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
# 56 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 58 "data/maps/OldaleTown/scripts.pory"
	end
# 59 "data/maps/OldaleTown/scripts.pory"

# 60 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 61 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 62 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
# 63 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 65 "data/maps/OldaleTown/scripts.pory"
	end
# 66 "data/maps/OldaleTown/scripts.pory"

# 67 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 68 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
# 69 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 70 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 72 "data/maps/OldaleTown/scripts.pory"
	end
# 73 "data/maps/OldaleTown/scripts.pory"

# 74 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 75 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 76 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 77 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 78 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 79 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 80 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 81 "data/maps/OldaleTown/scripts.pory"
	release
# 82 "data/maps/OldaleTown/scripts.pory"
	end
# 83 "data/maps/OldaleTown/scripts.pory"

# 84 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 85 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 86 "data/maps/OldaleTown/scripts.pory"
	release
# 87 "data/maps/OldaleTown/scripts.pory"
	end */
# 88 "data/maps/OldaleTown/scripts.pory"

# 89 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 90 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 91 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 92 "data/maps/OldaleTown/scripts.pory"
	release
# 93 "data/maps/OldaleTown/scripts.pory"
	end
# 94 "data/maps/OldaleTown/scripts.pory"

# 95 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 96 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 97 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 99 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 100 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 102 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 104 "data/maps/OldaleTown/scripts.pory"
	step_end
# 105 "data/maps/OldaleTown/scripts.pory"

# 106 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 107 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 109 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 116 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 117 "data/maps/OldaleTown/scripts.pory"
	step_end
# 118 "data/maps/OldaleTown/scripts.pory"

# 119 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 128 "data/maps/OldaleTown/scripts.pory"
	step_end
# 129 "data/maps/OldaleTown/scripts.pory"

# 130 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 132 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 133 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 134 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 142 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 144 "data/maps/OldaleTown/scripts.pory"
	step_end
# 145 "data/maps/OldaleTown/scripts.pory"

# 146 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 149 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 150 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 154 "data/maps/OldaleTown/scripts.pory"
	step_end
# 155 "data/maps/OldaleTown/scripts.pory"

# 156 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 157 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 158 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 159 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 160 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 164 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 165 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 166 "data/maps/OldaleTown/scripts.pory"
	step_end
# 167 "data/maps/OldaleTown/scripts.pory"

# 168 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 171 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 172 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 173 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 176 "data/maps/OldaleTown/scripts.pory"
	step_end
# 177 "data/maps/OldaleTown/scripts.pory"

# 178 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 188 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 190 "data/maps/OldaleTown/scripts.pory"
	step_end
# 191 "data/maps/OldaleTown/scripts.pory"

# 192 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 193 "data/maps/OldaleTown/scripts.pory"
	lock
# 194 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 195 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 196 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 197 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 198 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 199 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 200 "data/maps/OldaleTown/scripts.pory"
	release
# 201 "data/maps/OldaleTown/scripts.pory"
	end
# 202 "data/maps/OldaleTown/scripts.pory"

# 203 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 204 "data/maps/OldaleTown/scripts.pory"
	lockall
# 205 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 206 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 207 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 208 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 209 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 210 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 211 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 212 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 213 "data/maps/OldaleTown/scripts.pory"
	end
# 214 "data/maps/OldaleTown/scripts.pory"

# 215 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 216 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 217 "data/maps/OldaleTown/scripts.pory"
	release
# 218 "data/maps/OldaleTown/scripts.pory"
	end
# 219 "data/maps/OldaleTown/scripts.pory"

# 220 "data/maps/OldaleTown/scripts.pory"
/*
# 221 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 222 "data/maps/OldaleTown/scripts.pory"
	lockall
# 223 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 224 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 225 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 226 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 227 "data/maps/OldaleTown/scripts.pory"
	end
# 228 "data/maps/OldaleTown/scripts.pory"

# 229 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 230 "data/maps/OldaleTown/scripts.pory"
	lockall
# 231 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 232 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 233 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 234 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 235 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 236 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 237 "data/maps/OldaleTown/scripts.pory"
	end
# 238 "data/maps/OldaleTown/scripts.pory"

# 239 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 240 "data/maps/OldaleTown/scripts.pory"
	lockall
# 241 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 242 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 243 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 244 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 245 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 246 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 247 "data/maps/OldaleTown/scripts.pory"
	end
# 248 "data/maps/OldaleTown/scripts.pory"

# 249 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 250 "data/maps/OldaleTown/scripts.pory"
	lockall
# 251 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 252 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 253 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 254 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 255 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 256 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 257 "data/maps/OldaleTown/scripts.pory"
	end
# 258 "data/maps/OldaleTown/scripts.pory"

# 259 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 260 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 261 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 262 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 263 "data/maps/OldaleTown/scripts.pory"
	end
# 264 "data/maps/OldaleTown/scripts.pory"

# 265 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 266 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 267 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 268 "data/maps/OldaleTown/scripts.pory"
	end
# 269 "data/maps/OldaleTown/scripts.pory"

# 270 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 271 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 272 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 273 "data/maps/OldaleTown/scripts.pory"
	end
# 274 "data/maps/OldaleTown/scripts.pory"

# 275 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 276 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 277 "data/maps/OldaleTown/scripts.pory"
//	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 278 "data/maps/OldaleTown/scripts.pory"
//	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 279 "data/maps/OldaleTown/scripts.pory"
//	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 280 "data/maps/OldaleTown/scripts.pory"
//	waitmovement 0
# 281 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 282 "data/maps/OldaleTown/scripts.pory"
//	setvar VAR_OLDALE_RIVAL_STATE, 2
# 283 "data/maps/OldaleTown/scripts.pory"
//	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 284 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 285 "data/maps/OldaleTown/scripts.pory"
	end
# 286 "data/maps/OldaleTown/scripts.pory"

# 287 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 288 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 289 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 290 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/OldaleTown/scripts.pory"
	return
# 292 "data/maps/OldaleTown/scripts.pory"

# 293 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 294 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 295 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 296 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/OldaleTown/scripts.pory"
	return
# 298 "data/maps/OldaleTown/scripts.pory"
	*/
# 299 "data/maps/OldaleTown/scripts.pory"

# 300 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 301 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 302 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 303 "data/maps/OldaleTown/scripts.pory"
	step_end
# 304 "data/maps/OldaleTown/scripts.pory"

# 305 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 306 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 307 "data/maps/OldaleTown/scripts.pory"
	step_end
# 308 "data/maps/OldaleTown/scripts.pory"

# 309 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 310 "data/maps/OldaleTown/scripts.pory"
	face_left
# 311 "data/maps/OldaleTown/scripts.pory"
	step_end
# 312 "data/maps/OldaleTown/scripts.pory"

# 313 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 314 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 315 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 316 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 317 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 318 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 319 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 320 "data/maps/OldaleTown/scripts.pory"
	step_end
# 321 "data/maps/OldaleTown/scripts.pory"

# 322 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 323 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 324 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 325 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 326 "data/maps/OldaleTown/scripts.pory"
	step_end
# 327 "data/maps/OldaleTown/scripts.pory"

# 328 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 329 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 330 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 331 "data/maps/OldaleTown/scripts.pory"
	step_end
# 332 "data/maps/OldaleTown/scripts.pory"

# 333 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 334 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 335 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 336 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 337 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 338 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 339 "data/maps/OldaleTown/scripts.pory"
	step_end
# 340 "data/maps/OldaleTown/scripts.pory"

# 341 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 342 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 343 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 344 "data/maps/OldaleTown/scripts.pory"
	step_end
# 345 "data/maps/OldaleTown/scripts.pory"

# 346 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 347 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 348 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 349 "data/maps/OldaleTown/scripts.pory"

# 350 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 351 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 352 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 353 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 354 "data/maps/OldaleTown/scripts.pory"

# 355 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 356 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 357 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 358 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 359 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 360 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 361 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 362 "data/maps/OldaleTown/scripts.pory"

# 363 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 364 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 365 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 366 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 367 "data/maps/OldaleTown/scripts.pory"

# 368 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 369 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 370 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 371 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 372 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 373 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 374 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 375 "data/maps/OldaleTown/scripts.pory"

# 376 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 377 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 378 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 379 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 380 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 381 "data/maps/OldaleTown/scripts.pory"

# 382 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 383 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 384 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 387 "data/maps/OldaleTown/scripts.pory"

# 388 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 390 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 392 "data/maps/OldaleTown/scripts.pory"

# 393 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 394 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 397 "data/maps/OldaleTown/scripts.pory"

# 398 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 400 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleTown_EventScript_MartWorker::
# 405 "data/maps/OldaleTown/scripts.pory"
	lock
# 406 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 407 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_MartWorker_Text_0, MSGBOX_NPC
# 408 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


OldaleTown_EventScript_MartWorker_Text_0:
# 407 "data/maps/OldaleTown/scripts.pory"
	.string "This is a Pokemart - if you need\n"
	.string "supplies for your journeys, you can buy\l"
	.string "them here!$"
