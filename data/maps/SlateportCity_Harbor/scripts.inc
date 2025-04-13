# 1 "data/maps/SlateportCity_Harbor/scripts.pory"

# 2 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_CAPT_STERN, 4
# 3 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_SS_TIDAL, 5
# 4 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_GRUNT, 6
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_ARCHIE, 7
# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_SUBMARINE, 8
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"

# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_MapScripts::
# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_OnTransition
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	.byte 0
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"

# 12 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition:
# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
	setescapewarp MAP_SLATEPORT_CITY, 28, 13
# 14 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 15 "data/maps/SlateportCity_Harbor/scripts.pory"
	//call_if_eq VAR_SLATEPORT_HARBOR_STATE, 1, SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene
# 16 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_ShowSSTidal
# 17 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"

# 19 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ShowSSTidal::
# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 22 "data/maps/SlateportCity_Harbor/scripts.pory"

# 23 "data/maps/SlateportCity_Harbor/scripts.pory"
/*
# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene::
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 12, 13
# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_LEFT
# 28 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 29 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 30 "data/maps/SlateportCity_Harbor/scripts.pory"

# 31 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger0::
# 32 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 0
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 35 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 36 "data/maps/SlateportCity_Harbor/scripts.pory"

# 37 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger1::
# 38 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 1
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 42 "data/maps/SlateportCity_Harbor/scripts.pory"

# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger2::
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 2
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"

# 49 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger3::
# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 3
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_PlayerWalkUp
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"

# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove, MSGBOX_DEFAULT
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT, SlateportCity_Harbor_Movement_AquaBoardSub
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_Harbor_Movement_AquaBoardSub
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SUBMARINE, SlateportCity_Harbor_Movement_SubmarineExit
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_GRUNT
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_ARCHIE
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SUBMARINE
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	//setflag FLAG_MET_TEAM_AQUA_HARBOR
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 0, SlateportCity_Harbor_EventScript_SternApproachPlayer0
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 1, SlateportCity_Harbor_EventScript_SternApproachPlayer1
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 2, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 3, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 80 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	//setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	//setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_CAPT_STERN
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_RIGHT
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
*/
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"

# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer0::
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer0
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 95 "data/maps/SlateportCity_Harbor/scripts.pory"

# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer1::
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer1
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 99 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 100 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"

# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer::
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 106 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 109 "data/maps/SlateportCity_Harbor/scripts.pory"

# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_AquaBoardSub:
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"

# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused, Archie instead shares above identical movement script with Grunt
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_ArchieBoardSub:
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"

# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit:
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 130 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"

# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer0:
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"

# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer1:
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 155 "data/maps/SlateportCity_Harbor/scripts.pory"

# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer:
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"

# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerWalkUp:
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 165 "data/maps/SlateportCity_Harbor/scripts.pory"

# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant::
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_AskForTicket
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"

# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket::
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"

# 181 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination::
# 182 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 186 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"

# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier::
# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_BattleFrontier
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"

# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused. Should be impossible for player to reach Ferry without having received SS Tidal ticket
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket::
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"

# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove::
# 206 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 207 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 214 "data/maps/SlateportCity_Harbor/scripts.pory"

# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier::
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 218 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 220 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 221 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"

# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 227 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"

# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry::
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 233 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 234 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SlateportCity_Harbor_EventScript_BoardFerryNorth
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_Harbor_EventScript_BoardFerryEast
# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 241 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 244 "data/maps/SlateportCity_Harbor/scripts.pory"

# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 246 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 249 "data/maps/SlateportCity_Harbor/scripts.pory"

# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast::
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 252 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"

# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth::
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 259 "data/maps/SlateportCity_Harbor/scripts.pory"

# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast:
# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 264 "data/maps/SlateportCity_Harbor/scripts.pory"

# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth:
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"

# 269 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor::
# 270 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 272 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 274 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_0x8004, 2, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather  @ Defeated both
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 280 "data/maps/SlateportCity_Harbor/scripts.pory"

# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather::
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"

# 286 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary::
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"

# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan::
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 293 "data/maps/SlateportCity_Harbor/scripts.pory"

# 294 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern::
# 295 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE, SlateportCity_Harbor_EventScript_NeedDive
# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_SLATEPORT_HARBOR_STATE, 2, SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 303 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 304 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"

# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine::
# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 311 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 312 "data/maps/SlateportCity_Harbor/scripts.pory"

# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive::
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 316 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 317 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"

# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NeedDive::
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
# 321 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 322 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"

# 324 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, SlateportCity_Harbor_EventScript_TradedScanner
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AskToTradeScanner
# 328 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryFinished
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"

# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished::
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"

# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner::
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 341 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"

# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade::
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoice 0, 0, MULTI_STERN_DEEPSEA, FALSE
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 347 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_DeepSeaTooth
# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_DeepSeaScale
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_DeclineTrade
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_DeclineTrade
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"

# 353 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth::
# 354 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaTooth, MSGBOX_YESNO
# 355 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 358 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 359 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 360 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"

# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale::
# 365 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaScale, MSGBOX_YESNO
# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 368 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 371 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 372 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 373 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 374 "data/maps/SlateportCity_Harbor/scripts.pory"

# 375 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeclineTrade::
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow, MSGBOX_DEFAULT
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 379 "data/maps/SlateportCity_Harbor/scripts.pory"

# 380 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDifferentTrade::
# 381 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhichOneDoYouWant
# 382 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"

# 386 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner::
# 387 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 388 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 389 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"

# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable:
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 395 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "available at present…$"
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"

# 398 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket:
# 399 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 400 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 401 "data/maps/SlateportCity_Harbor/scripts.pory"

# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket:
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 405 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"

# 408 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo:
# 409 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 412 "data/maps/SlateportCity_Harbor/scripts.pory"

# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime:
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 415 "data/maps/SlateportCity_Harbor/scripts.pory"

# 416 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs:
# 417 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 418 "data/maps/SlateportCity_Harbor/scripts.pory"

# 419 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs:
# 420 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 421 "data/maps/SlateportCity_Harbor/scripts.pory"

# 422 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry:
# 423 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "departure.$"
# 425 "data/maps/SlateportCity_Harbor/scripts.pory"

# 426 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo:
# 427 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 428 "data/maps/SlateportCity_Harbor/scripts.pory"

# 429 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday:
# 430 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
# 431 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wonder what it'd be like?\p"
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'd love to go deep underwater like\n"
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that someday.$"
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"

# 435 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather:
# 436 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
# 437 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "know about the weather!\p"
# 438 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Speaking of weather, I heard something\n"
# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "from a guy at the WEATHER INSTITUTE.\p"
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "He was saying abnormal weather has\n"
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "been reported all over the place!\p"
# 442 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You should visit the WEATHER INSTITUTE\n"
# 443 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "and ask around!$"
# 444 "data/maps/SlateportCity_Harbor/scripts.pory"

# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe:
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\n"
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ocean floor exploration.\p"
# 448 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But the sub's too small for me.\p"
# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "If I squeezed in, there wouldn't be\n"
# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "any room for the CAPTAIN…$"
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"

# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum:
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Those thugs…\p"
# 454 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They're the same lot who tried to rob\n"
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the DEVON GOODS at the MUSEUM.$"
# 456 "data/maps/SlateportCity_Harbor/scripts.pory"

# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove:
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "ARCHIE: Oh?\n"
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Not you again…\p"
# 460 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You are tenacious to track us here,\n"
# 461 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that much I will give you.\p"
# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But now…\n"
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "No one can stop us! No one!\p"
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Or, will you follow us back to our\n"
# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "HIDEOUT in LILYCOVE CITY?\p"
# 466 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Fwahahahaha…$"
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"

# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine:
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Why…\p"
# 470 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Why would TEAM AQUA steal my\n"
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SUBMARINE EXPLORER 1?\p"
# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They can't be after the slumbering\n"
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "POKéMON at the bottom of the sea…\p"
# 474 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But even if I were to chase them,\n"
# 475 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I don't stand a chance against them…$"
# 476 "data/maps/SlateportCity_Harbor/scripts.pory"

# 477 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TeamAquaLeftNeedDive:
# 478 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, {PLAYER}{KUN}…\p"
# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Okay… So TEAM AQUA left before you\n"
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "could stop them…\p"
# 481 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Oh, no, don't blame yourself.\n"
# 482 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're not responsible for this.\p"
# 483 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Trying to catch a submarine…\n"
# 484 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's impossible for most people.\p"
# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 486 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 487 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 488 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 489 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 490 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 491 "data/maps/SlateportCity_Harbor/scripts.pory"

# 492 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_NeedDiveToCatchSub:
# 493 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Trying to catch a\n"
# 494 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "submarine… It's impossible.\p"
# 495 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 496 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 497 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 500 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 501 "data/maps/SlateportCity_Harbor/scripts.pory"

# 502 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry:
# 503 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, yes.\n"
# 504 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MR. BRINEY came to our SHIPYARD.\p"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It won't be long now before we finish\n"
# 506 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "making the ferry!$"
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"

# 508 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry:
# 509 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: {PLAYER}{KUN}!\p"
# 510 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We finally finished making the ferry\n"
# 511 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "S.S. TIDAL!\p"
# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We couldn't have done it without\n"
# 513 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your friend MR. BRINEY.\p"
# 514 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please go for a short cruise on it!$"
# 515 "data/maps/SlateportCity_Harbor/scripts.pory"

# 516 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner:
# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh?\n"
# 518 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, that item you have…\p"
# 519 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "That's a SCANNER! That would sure\n"
# 520 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "help us on our explorations.\p"
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, would you trade your\n"
# 522 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SCANNER for something?\p"
# 523 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Like, say, a DEEPSEATOOTH or\n"
# 524 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "a DEEPSEASCALE that I have?$"
# 525 "data/maps/SlateportCity_Harbor/scripts.pory"

# 526 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow:
# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Are you certain?\n"
# 528 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
# 529 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Well, okay, then. If you want to trade\n"
# 530 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your SCANNER, let me know.$"
# 531 "data/maps/SlateportCity_Harbor/scripts.pory"

# 532 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth:
# 533 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 534 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEATOOTH?$"
# 535 "data/maps/SlateportCity_Harbor/scripts.pory"

# 536 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale:
# 537 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 538 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEASCALE?$"
# 539 "data/maps/SlateportCity_Harbor/scripts.pory"

# 540 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant:
# 541 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Which one do you want?$"
# 542 "data/maps/SlateportCity_Harbor/scripts.pory"

# 543 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern:
# 544 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\n"
# 545 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN.$"
# 546 "data/maps/SlateportCity_Harbor/scripts.pory"

# 547 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch:
# 548 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Thanks, {PLAYER}{KUN}!\n"
# 549 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "This will help our research a lot!$"
