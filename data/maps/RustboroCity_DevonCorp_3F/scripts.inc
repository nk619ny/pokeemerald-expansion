# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
//.set LOCALID_DEVON_CORP_3F_EMPLOYEE, 2
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition:
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_3F_EMPLOYEE, 3, 2
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_3F_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	return
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnFrame:
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DEVON_MEGA_STONE, RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm MR. STONE, the PRESIDENT of\n"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'd just got word about you!\p"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You saved our staff not just once,\n"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "but twice!\p"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I have a favor to ask of an amazing\n"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "person like you.\p"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I understand that you're delivering\n"
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a package to SLATEPORT's SHIPYARD.\p"
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, on the way, could you stop off in\n"
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEWFORD TOWN?\p"
# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I was hoping that you'd deliver a\n"
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "LETTER to STEVEN in DEWFORD.$"
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Now, you should know that\n"
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I am a great PRESIDENT.\p"
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So, I'd never be so cheap as to ask\n"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a favor for nothing in return.\p"
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That's why I want you to have this!$"
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a POKéNAV.$"
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: That device…\p"
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a Pokémon NAVIGATOR, or POKéNAV\n"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for short.\p"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's an indispensable tool for any\n"
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "TRAINER on an adventure.\p"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It has a map of the HOENN region.\p"
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You can check the locations of\n"
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEWFORD and SLATEPORT easily!\p"
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "By the way, I've heard that sinister\n"
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "criminals--MAGMA and AQUA, I believe--\l"
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "have been making trouble far and wide.\p"
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I think it would be best if you rested\n"
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "up before you go on your way.$"
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "go with caution and care!$"
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: I'm counting on you!$"
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: You delivered my LETTER?\n"
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you kindly!\p"
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is my way of thanking you.\n"
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It should help you, a TRAINER.$"
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: A Pokémon holding that\n"
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP. SHARE will be given some of the\l"
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP Points from battle.\p"
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It will get EXP Points even if it didn't\n"
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "actually battle.\p"
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I would say EXP. SHARE is quite useful\n"
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for raising weak Pokémon.$"
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Since my youth, I've immersed\n"
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "myself in work.\p"
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trends and that sort of thing.\p"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "But do young people all want to be\n"
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "TRAINERS in the Pokémon LEAGUE?$"
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the DEVON CORPORATION's\n"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "third floor.\p"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT's OFFICE is on\n"
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "this floor.\p"
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "grateful for what you've done.\p"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you got back for us…\p"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the SHIPYARD in SLATEPORT?\p"
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It would be awful if those robbers\n"
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "tried to take it again.\p"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on you to do that for me?\p"
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, that's right.\n"
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could you wait here a second?$"
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT would like to have\n"
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a word with you.\p"
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come with me.$"
# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you should go see CAPT. STERN.$"
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 304 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEVON's new products, the REPEAT BALL\n"
# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and TIMER BALL, have become hugely\l"
# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "popular among TRAINERS.$"
# 307 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 308 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 309 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 310 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "stones assembled by the PRESIDENT.$"

RustboroCity_DevonCorp_3F_EventScript_GivePowerGem::
# 315 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 316 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_GivePowerGem_Text_0, MSGBOX_DEFAULT
# 317 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 318 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_TM_POWER_GEM
# 319 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 320 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
	end


RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone::
# 329 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 330 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 331 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_DEVON_MEGA_STONE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 332 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_2
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_1:
	checkitem ITEM_PIDGEOTITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_5
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_4:
	checkitem ITEM_ALAKAZITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_8
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_7:
	checkitem ITEM_GENGARITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_11
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_10:
	checkitem ITEM_KANGASKHANITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_14
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_13:
	checkitem ITEM_AMPHAROSITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_17
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_16:
	checkitem ITEM_GARDEVOIRITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_20
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_19:
	checkitem ITEM_MEDICHAMITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_23
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_22:
	checkitem ITEM_MANECTITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_26
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_25:
	checkitem ITEM_ALTARIANITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_29
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_28:
	checkitem ITEM_BANETTITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_32
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_31:
	checkitem ITEM_ABSOLITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_35
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_34:
	checkitem ITEM_LOPUNNITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_38
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_37:
	checkitem ITEM_GALLADITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_41
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_40:
	checkitem ITEM_AUDINITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_44
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_43:
	checkitem ITEM_SCRAFTINITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_47
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_46:
	checkitem ITEM_HAWLUCHANITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_50
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_49:
	checkitem ITEM_FALINKSITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_53
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_52:
	checkitem ITEM_RAICHUNITE_X
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_56
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_55:
	checkitem ITEM_RAICHUNITE_Y
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_59
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_58:
	checkitem ITEM_MEOWSTICITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_62
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_61:
	checkitem ITEM_MACHAMPITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_65
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_64:
	checkitem ITEM_VIKAVOLITE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_68
RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_67:
# 359 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_22, ITEM_NONE
# 361 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 362 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_23, MSGBOX_DEFAULT
# 363 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 0, ITEM_SABLENITE, DYN_MULTICHOICE_CB_NONE
# 364 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_71
# 370 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_72
# 377 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	copyvar VAR_TEMP_5, VAR_RESULT
# 378 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	checkitemspace VAR_TEMP_5
# 379 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_77
# 385 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_5
# 386 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_26, MSGBOX_NPC
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 388 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem VAR_TEMP_5
# 389 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_MEGA_STONE
# 390 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 391 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 393 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 394 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 395 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 396 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_2:
# 333 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_MrStoneIntro, MSGBOX_DEFAULT
# 334 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_TEMP_1
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_1

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_5:
# 337 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_0, ITEM_PIDGEOTITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_4

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_8:
# 338 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_1, ITEM_ALAKAZITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_7

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_11:
# 339 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_2, ITEM_GENGARITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_10

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_14:
# 340 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_3, ITEM_KANGASKHANITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_13

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_17:
# 341 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_4, ITEM_AMPHAROSITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_16

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_20:
# 342 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_5, ITEM_GARDEVOIRITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_19

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_23:
# 343 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_6, ITEM_MEDICHAMITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_22

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_26:
# 344 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_7, ITEM_MANECTITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_25

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_29:
# 345 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_8, ITEM_ALTARIANITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_28

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_32:
# 346 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_9, ITEM_BANETTITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_31

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_35:
# 347 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_10, ITEM_ABSOLITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_34

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_38:
# 348 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_11, ITEM_LOPUNNITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_37

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_41:
# 349 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_12, ITEM_GALLADITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_40

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_44:
# 350 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_13, ITEM_AUDINITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_43

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_47:
# 351 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_14, ITEM_SCRAFTINITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_46

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_50:
# 352 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_15, ITEM_HAWLUCHANITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_49

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_53:
# 353 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_16, ITEM_FALINKSITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_52

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_56:
# 354 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_17, ITEM_RAICHUNITE_X
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_55

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_59:
# 355 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_18, ITEM_RAICHUNITE_Y
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_58

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_62:
# 356 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_19, ITEM_MEOWSTICITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_61

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_65:
# 357 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_20, ITEM_MACHAMPITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_64

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_68:
# 358 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_21, ITEM_VIKAVOLITE
	goto RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_67

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_71:
# 365 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_24, MSGBOX_NPC
# 366 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 367 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
	end

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_72:
# 371 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_24, MSGBOX_NPC
# 372 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 373 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
	end

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_77:
# 380 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_25, MSGBOX_NPC
# 381 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 382 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
	end


RustboroCity_DevonCorp_3F_EventScript_GivePowerGem_Text_0:
# 316 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I've always had a fondness for\n"
	.string "gemstones and rare minerals.\p"
	.string "I like to share this interest with\n"
	.string "others I meet, too.\p"
	.string "Here, please have this as a gift from\n"
	.string "myself and Devon Corporation.$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_0:
# 337 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Pidgeotite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_1:
# 338 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Alakazite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_2:
# 339 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Gengarite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_3:
# 340 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Kangaskhanite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_4:
# 341 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ampharosite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_5:
# 342 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Gardevoirite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_6:
# 343 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Medichamite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_7:
# 344 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Manectite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_8:
# 345 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Altarianite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_9:
# 346 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Banettite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_10:
# 347 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Absolite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_11:
# 348 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Lopunnite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_12:
# 349 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Galladite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_13:
# 350 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Audinite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_14:
# 351 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Scraftinite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_15:
# 352 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Hawluchanite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_16:
# 353 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Falinksite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_17:
# 354 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Raichunite X$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_18:
# 355 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Raichunite Y$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_19:
# 356 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Meowsticite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_20:
# 357 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Machampite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_21:
# 358 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Vikavolite$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_22:
# 359 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Nevermind$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_23:
# 362 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Which Mega Stone would you\n"
	.string "like?$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_24:
# 365 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Very well.\p"
	.string "Come back when you've decided on a Mega\n"
	.string "Stone.$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_25:
# 380 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Your bag seems to be full.\p"
	.string "Make some room and come back to me.$"

RustboroCity_DevonCorp_3F_EventScript_GiveMegaStone_Text_26:
# 386 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Wonderful. I hope this\n"
	.string "{STR_VAR_1} helps bring out the\l"
	.string "best in your Pokémon.$"

RustboroCity_DevonCorp_3F_EventScript_MrStoneIntro::
# 401 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: I've heard from my son that\n"
	.string "you're a very promising young trainer.\p"
	.string "Steven has encouraged the Devon\n"
	.string "Corporation to collect and study Mega\l"
	.string "Stones.\p"
	.string "I'd like to support your journey by\n"
	.string "gifting one to you.$"
