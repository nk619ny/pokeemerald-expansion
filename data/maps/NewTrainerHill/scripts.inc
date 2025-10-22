# 1 "data/maps/NewTrainerHill/scripts.pory"

# 2 "data/maps/NewTrainerHill/scripts.pory"
@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
# 3 "data/maps/NewTrainerHill/scripts.pory"
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_HILL_PLAYER).
# 4 "data/maps/NewTrainerHill/scripts.pory"
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
# 5 "data/maps/NewTrainerHill/scripts.pory"
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by dome_setopponentgfx.
# 6 "data/maps/NewTrainerHill/scripts.pory"

# 7 "data/maps/NewTrainerHill/scripts.pory"
.set NO_DRAW,       0
# 8 "data/maps/NewTrainerHill/scripts.pory"
.set DRAW_TRAINER,  1
# 9 "data/maps/NewTrainerHill/scripts.pory"
.set DRAW_TUCKER,   2
# 10 "data/maps/NewTrainerHill/scripts.pory"

# 11 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_MapScripts::
# 12 "data/maps/NewTrainerHill/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewTrainerHill_OnTransition
# 13 "data/maps/NewTrainerHill/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewTrainerHill_OnFrame
# 14 "data/maps/NewTrainerHill/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NewTrainerHill_OnWarp
# 15 "data/maps/NewTrainerHill/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewTrainerHill_OnResume
# 16 "data/maps/NewTrainerHill/scripts.pory"
	.byte 0
# 17 "data/maps/NewTrainerHill/scripts.pory"

# 18 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_OnTransition:
# 19 "data/maps/NewTrainerHill/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 20 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_SetOpponent
# 21 "data/maps/NewTrainerHill/scripts.pory"
	//dome_setopponentgfx
# 22 "data/maps/NewTrainerHill/scripts.pory"
	//frontier_get FRONTIER_DATA_BATTLE_NUM
# 23 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_SetupAudienceCount
# 24 "data/maps/NewTrainerHill/scripts.pory"
	//copyvar VAR_TEMP_F, VAR_RESULT
# 25 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_RESULT, DOME_ROUND1, NewTrainerHill_EventScript_SetWalkingAudienceMemberPos
# 26 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_SetPlayerGfx
# 27 "data/maps/NewTrainerHill/scripts.pory"
	end
# 28 "data/maps/NewTrainerHill/scripts.pory"

# 29 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_SetPlayerGfx::
# 30 "data/maps/NewTrainerHill/scripts.pory"
	checkplayergender
# 31 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, NewTrainerHill_EventScript_SetPlayerGfxMale
# 32 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, NewTrainerHill_EventScript_SetPlayerGfxFemale
# 33 "data/maps/NewTrainerHill/scripts.pory"
	return
# 34 "data/maps/NewTrainerHill/scripts.pory"

# 35 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_SetPlayerGfxMale::
# 36 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 37 "data/maps/NewTrainerHill/scripts.pory"
	return
# 38 "data/maps/NewTrainerHill/scripts.pory"

# 39 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_SetPlayerGfxFemale::
# 40 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 41 "data/maps/NewTrainerHill/scripts.pory"
	return
# 42 "data/maps/NewTrainerHill/scripts.pory"

# 43 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_OnFrame:
# 44 "data/maps/NewTrainerHill/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, NewTrainerHill_EventScript_EnterRoom
# 45 "data/maps/NewTrainerHill/scripts.pory"
	.2byte 0
# 46 "data/maps/NewTrainerHill/scripts.pory"

# 47 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_EnterRoom::
# 48 "data/maps/NewTrainerHill/scripts.pory"
	lockall
# 49 "data/maps/NewTrainerHill/scripts.pory"
	//call NewTrainerHill_EventScript_GetRoundNum
# 50 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_ROUND1, NewTrainerHill_EventScript_TryDoAudienceMemberWalkToSeat
# 51 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 52 "data/maps/NewTrainerHill/scripts.pory"
	waitmovement 0
# 53 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AnnouncePlayer
# 54 "data/maps/NewTrainerHill/scripts.pory"
	//msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome, MSGBOX_DEFAULT
# 55 "data/maps/NewTrainerHill/scripts.pory"
	closemessage
# 56 "data/maps/NewTrainerHill/scripts.pory"
	showobjectat LOCALID_HILL_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 57 "data/maps/NewTrainerHill/scripts.pory"
	goto NewTrainerHill_EventScript_PlayerEnter
# 58 "data/maps/NewTrainerHill/scripts.pory"
	//goto_if_ne VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY, NewTrainerHill_EventScript_PlayerEnterForTucker
# 59 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_PlayerEnter::
# 60 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_PLAYER, NewTrainerHill_Movement_PlayerEnter
# 61 "data/maps/NewTrainerHill/scripts.pory"
	goto NewTrainerHill_EventScript_AudienceReactToPlayer
# 62 "data/maps/NewTrainerHill/scripts.pory"

# 63 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_PlayerEnterForTucker::
# 64 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_PLAYER, NewTrainerHill_Movement_PlayerEnterForTucker
# 65 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AudienceReactToPlayer::
# 66 "data/maps/NewTrainerHill/scripts.pory"
	playse SE_M_ENCORE2
# 67 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AudienceLookAround
# 68 "data/maps/NewTrainerHill/scripts.pory"
	waitmovement 0
# 69 "data/maps/NewTrainerHill/scripts.pory"
	// ADD BATTLE INTRO HERE
# 70 "data/maps/NewTrainerHill/scripts.pory"
	//goto_if_ne VAR_TEMP_F, DOME_FINAL, NewTrainerHill_EventScript_BattleOpponent
# 71 "data/maps/NewTrainerHill/scripts.pory"
	//goto_if_ne VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY, NewTrainerHill_EventScript_AnnounceTucker
# 72 "data/maps/NewTrainerHill/scripts.pory"
	goto NewTrainerHill_EventScript_NewBattleSequence
# 73 "data/maps/NewTrainerHill/scripts.pory"
	return
# 74 "data/maps/NewTrainerHill/scripts.pory"

# 75 "data/maps/NewTrainerHill/scripts.pory"

# 76 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_OnWarp:
# 77 "data/maps/NewTrainerHill/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, NewTrainerHill_EventScript_SetUpObjects
# 78 "data/maps/NewTrainerHill/scripts.pory"
	.2byte 0
# 79 "data/maps/NewTrainerHill/scripts.pory"

# 80 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_SetUpObjects::
# 81 "data/maps/NewTrainerHill/scripts.pory"
	hideobjectat LOCALID_HILL_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 82 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AddAudience
# 83 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_SetPlayerGfx
# 84 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_1, 1
# 85 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_PLAYER, NewTrainerHill_Movement_SetInvisible
# 86 "data/maps/NewTrainerHill/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 87 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_ne VAR_RESULT, DOME_FINAL, NewTrainerHill_EventScript_EndSetUpObjects
# 88 "data/maps/NewTrainerHill/scripts.pory"
	frontier_getbrainstatus
# 89 "data/maps/NewTrainerHill/scripts.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
# 90 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_BRAIN_NOT_READY, NewTrainerHill_EventScript_EndSetUpObjects
# 91 "data/maps/NewTrainerHill/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 92 "data/maps/NewTrainerHill/scripts.pory"
	setobjectxyperm LOCALID_HILL_OPPONENT, 13, 9
# 93 "data/maps/NewTrainerHill/scripts.pory"
	removeobject LOCALID_HILL_OPPONENT
# 94 "data/maps/NewTrainerHill/scripts.pory"
	delay 1
# 95 "data/maps/NewTrainerHill/scripts.pory"
	addobject LOCALID_HILL_OPPONENT
# 96 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_OPPONENT, NewTrainerHill_Movement_SetInvisibleFacingUp
# 97 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_EndSetUpObjects::
# 98 "data/maps/NewTrainerHill/scripts.pory"
	end
# 99 "data/maps/NewTrainerHill/scripts.pory"

# 100 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_OnResume:
# 101 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, NewTrainerHill_EventScript_CallAddAudience
# 102 "data/maps/NewTrainerHill/scripts.pory"
	end
# 103 "data/maps/NewTrainerHill/scripts.pory"

# 104 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_CallAddAudience::
# 105 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AddAudience
# 106 "data/maps/NewTrainerHill/scripts.pory"
	return
# 107 "data/maps/NewTrainerHill/scripts.pory"

# 108 "data/maps/NewTrainerHill/scripts.pory"
@ Add audience members to supplement the permanent object event audience
# 109 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddAudience::
# 110 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_ROUND1, NewTrainerHill_EventScript_AddRound1Audience
# 111 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_ROUND2, NewTrainerHill_EventScript_AddRound2Audience
# 112 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_SEMIFINAL, NewTrainerHill_EventScript_AddSemifinalAudience
# 113 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_FINAL, NewTrainerHill_EventScript_AddFinalAudience
# 114 "data/maps/NewTrainerHill/scripts.pory"
	return
# 115 "data/maps/NewTrainerHill/scripts.pory"

# 116 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddRound1Audience::
# 117 "data/maps/NewTrainerHill/scripts.pory"
	return
# 118 "data/maps/NewTrainerHill/scripts.pory"

# 119 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddRound2Audience::
# 120 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 121 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 122 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 123 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 124 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 125 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 126 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 127 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 128 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 129 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 130 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 131 "data/maps/NewTrainerHill/scripts.pory"
	return
# 132 "data/maps/NewTrainerHill/scripts.pory"

# 133 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddSemifinalAudience::
# 134 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 135 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 136 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 137 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 138 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 139 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 140 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 141 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 142 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 143 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 144 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 145 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 146 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 147 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 148 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 149 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 150 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 151 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 152 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 153 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 154 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
# 155 "data/maps/NewTrainerHill/scripts.pory"
	return
# 156 "data/maps/NewTrainerHill/scripts.pory"

# 157 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddFinalAudience::
# 158 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 0, 2, 0
# 159 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 160 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 2, 15, 0
# 161 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 3, 5, 0
# 162 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 163 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 5, 7, 0
# 164 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 165 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 166 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 8, 10, 0
# 167 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 168 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 169 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 170 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 12, 14, 0
# 171 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 2
# 172 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 14, 12, 2
# 173 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 174 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 175 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 176 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 18, 6, 1
# 177 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 178 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 179 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 21, 10, 1
# 180 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 181 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 182 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 14, 1
# 183 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 184 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 185 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 3, 2
# 186 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 187 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 188 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 189 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
# 190 "data/maps/NewTrainerHill/scripts.pory"
	return
# 191 "data/maps/NewTrainerHill/scripts.pory"

# 192 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_SetInvisible:
# 193 "data/maps/NewTrainerHill/scripts.pory"
	set_invisible
# 194 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 195 "data/maps/NewTrainerHill/scripts.pory"

# 196 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerEnter:
# 197 "data/maps/NewTrainerHill/scripts.pory"
	set_visible
# 198 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 199 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 200 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 201 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 202 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 203 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerStepForward:
# 204 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 205 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 206 "data/maps/NewTrainerHill/scripts.pory"

# 207 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerApproachAudience:
# 208 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 209 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 210 "data/maps/NewTrainerHill/scripts.pory"

# 211 "data/maps/NewTrainerHill/scripts.pory"
@ Identical to Movement_PlayerEnter
# 212 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerEnterForTucker:
# 213 "data/maps/NewTrainerHill/scripts.pory"
	set_visible
# 214 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 215 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 216 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 217 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 218 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 219 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 220 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 221 "data/maps/NewTrainerHill/scripts.pory"

# 222 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerStepForward2:
# 223 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 224 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 225 "data/maps/NewTrainerHill/scripts.pory"

# 226 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_OpponentStepForward:
# 227 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 228 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 229 "data/maps/NewTrainerHill/scripts.pory"

# 230 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_SetInvisibleFacingUp:
# 231 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 232 "data/maps/NewTrainerHill/scripts.pory"
	set_invisible
# 233 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 234 "data/maps/NewTrainerHill/scripts.pory"

# 235 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_TuckerEnterAndDance:
# 236 "data/maps/NewTrainerHill/scripts.pory"
	set_visible
# 237 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 238 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 239 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 240 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 241 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 242 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 243 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 244 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 245 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 246 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 247 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 248 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 249 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 250 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 251 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 252 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 253 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 254 "data/maps/NewTrainerHill/scripts.pory"
	walk_fast_up
# 255 "data/maps/NewTrainerHill/scripts.pory"
	walk_fast_up
# 256 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 257 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 258 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 259 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 260 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 261 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 262 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 263 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 264 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 265 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 266 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 267 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 268 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 269 "data/maps/NewTrainerHill/scripts.pory"
	jump_2_left
# 270 "data/maps/NewTrainerHill/scripts.pory"
	unlock_facing_direction
# 271 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 272 "data/maps/NewTrainerHill/scripts.pory"
	lock_facing_direction
# 273 "data/maps/NewTrainerHill/scripts.pory"
	jump_2_left
# 274 "data/maps/NewTrainerHill/scripts.pory"
	jump_2_left
# 275 "data/maps/NewTrainerHill/scripts.pory"
	unlock_facing_direction
# 276 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 277 "data/maps/NewTrainerHill/scripts.pory"
	lock_facing_direction
# 278 "data/maps/NewTrainerHill/scripts.pory"
	jump_2_left
# 279 "data/maps/NewTrainerHill/scripts.pory"
	unlock_facing_direction
# 280 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 281 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 282 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 283 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 284 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 285 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 286 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 287 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 288 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 289 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 290 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 291 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 292 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 293 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 294 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 295 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 296 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 297 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 298 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 299 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 300 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 301 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 302 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 303 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 304 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 305 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 306 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 307 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 308 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 309 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 310 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 311 "data/maps/NewTrainerHill/scripts.pory"
	lock_facing_direction
# 312 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 313 "data/maps/NewTrainerHill/scripts.pory"
	walk_slow_right
# 314 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 315 "data/maps/NewTrainerHill/scripts.pory"
	walk_slow_right
# 316 "data/maps/NewTrainerHill/scripts.pory"
	unlock_facing_direction
# 317 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 318 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 319 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_up
# 320 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_up
# 321 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 322 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 323 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 324 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 325 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_up
# 326 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 327 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 328 "data/maps/NewTrainerHill/scripts.pory"
	walk_down
# 329 "data/maps/NewTrainerHill/scripts.pory"
	walk_down
# 330 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 331 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 332 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 333 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 334 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 335 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 336 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 337 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 338 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 339 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 340 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 341 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 342 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 343 "data/maps/NewTrainerHill/scripts.pory"

# 344 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_AnnouncerMoveForTuckerEntrance:
# 345 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 346 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 347 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 348 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 349 "data/maps/NewTrainerHill/scripts.pory"
	walk_in_place_faster_right
# 350 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 351 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 352 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 353 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 354 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 355 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 356 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 357 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 358 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 359 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 360 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 361 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 362 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 363 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 364 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 365 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 366 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 367 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 368 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 369 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 370 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 371 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 372 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 373 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 374 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 375 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 376 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 377 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 378 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 379 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 380 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 381 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 382 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 383 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 384 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 385 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 386 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 387 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 388 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 389 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 390 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 391 "data/maps/NewTrainerHill/scripts.pory"
	walk_in_place_faster_down
# 392 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 393 "data/maps/NewTrainerHill/scripts.pory"

# 394 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_TuckerStepForward:
# 395 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 396 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 397 "data/maps/NewTrainerHill/scripts.pory"

# 398 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_TuckerApproachPlayer:
# 399 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 400 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 401 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 402 "data/maps/NewTrainerHill/scripts.pory"

# 403 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AudienceLookAround::
# 404 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 0, DIR_EAST
# 405 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 2, DIR_EAST
# 406 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 4, DIR_EAST
# 407 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 6, DIR_EAST
# 408 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 8, DIR_EAST
# 409 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 10, DIR_WEST
# 410 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 12, DIR_WEST
# 411 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 14, DIR_WEST
# 412 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 16, DIR_WEST
# 413 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 18, DIR_WEST
# 414 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 20, DIR_EAST
# 415 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 22, DIR_EAST
# 416 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 24, DIR_EAST
# 417 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 26, DIR_EAST
# 418 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 28, DIR_EAST
# 419 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 30, DIR_EAST
# 420 "data/maps/NewTrainerHill/scripts.pory"
	delay 20
# 421 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 422 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 423 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 4, DIR_SOUTH
# 424 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 6, DIR_SOUTH
# 425 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 8, DIR_SOUTH
# 426 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 10, DIR_SOUTH
# 427 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 12, DIR_SOUTH
# 428 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 14, DIR_SOUTH
# 429 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 16, DIR_SOUTH
# 430 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 18, DIR_SOUTH
# 431 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 20, DIR_SOUTH
# 432 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 22, DIR_SOUTH
# 433 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 24, DIR_SOUTH
# 434 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 26, DIR_SOUTH
# 435 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 28, DIR_SOUTH
# 436 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 30, DIR_SOUTH
# 437 "data/maps/NewTrainerHill/scripts.pory"
	delay 20
# 438 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 1, DIR_EAST
# 439 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 3, DIR_EAST
# 440 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 5, DIR_EAST
# 441 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 7, DIR_EAST
# 442 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 9, DIR_EAST
# 443 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 11, DIR_WEST
# 444 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 13, DIR_WEST
# 445 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 15, DIR_WEST
# 446 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 17, DIR_WEST
# 447 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 19, DIR_WEST
# 448 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 21, DIR_EAST
# 449 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 23, DIR_EAST
# 450 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 25, DIR_EAST
# 451 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 27, DIR_WEST
# 452 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 31, DIR_WEST
# 453 "data/maps/NewTrainerHill/scripts.pory"
	delay 20
# 454 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 455 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 3, DIR_SOUTH
# 456 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 5, DIR_SOUTH
# 457 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 7, DIR_SOUTH
# 458 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 9, DIR_SOUTH
# 459 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 11, DIR_SOUTH
# 460 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 13, DIR_SOUTH
# 461 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 15, DIR_SOUTH
# 462 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 17, DIR_SOUTH
# 463 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 19, DIR_SOUTH
# 464 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 21, DIR_SOUTH
# 465 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 23, DIR_SOUTH
# 466 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 25, DIR_SOUTH
# 467 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 27, DIR_SOUTH
# 468 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 31, DIR_SOUTH
# 469 "data/maps/NewTrainerHill/scripts.pory"
	delay 20
# 470 "data/maps/NewTrainerHill/scripts.pory"
	return
# 471 "data/maps/NewTrainerHill/scripts.pory"

# 472 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_WarpToLobby::
# 473 "data/maps/NewTrainerHill/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 474 "data/maps/NewTrainerHill/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 5, 11
# 475 "data/maps/NewTrainerHill/scripts.pory"
	waitstate
# 476 "data/maps/NewTrainerHill/scripts.pory"
	end
# 477 "data/maps/NewTrainerHill/scripts.pory"

# 478 "data/maps/NewTrainerHill/scripts.pory"
@ On round 1 there's a 50% chance that a specific audience member will walk to his seat
# 479 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_SetWalkingAudienceMemberPos::
# 480 "data/maps/NewTrainerHill/scripts.pory"
	random 2
# 481 "data/maps/NewTrainerHill/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 482 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_eq VAR_TEMP_D, 0, Common_EventScript_NopReturn
# 483 "data/maps/NewTrainerHill/scripts.pory"
	setobjectxyperm LOCALID_HILL_AUDIENCE_WALKING, 2, 0
# 484 "data/maps/NewTrainerHill/scripts.pory"
	setobjectmovementtype LOCALID_HILL_AUDIENCE_WALKING, MOVEMENT_TYPE_FACE_RIGHT
# 485 "data/maps/NewTrainerHill/scripts.pory"
	return
# 486 "data/maps/NewTrainerHill/scripts.pory"

# 487 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_TryDoAudienceMemberWalkToSeat::
# 488 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_eq VAR_TEMP_D, 0, Common_EventScript_NopReturn
# 489 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_AUDIENCE_WALKING, NewTrainerHill_Movement_AudienceMemberWalkToSeat
# 490 "data/maps/NewTrainerHill/scripts.pory"
	return
# 491 "data/maps/NewTrainerHill/scripts.pory"

# 492 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_AudienceTwinJump:
# 493 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 494 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 495 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 496 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 497 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 498 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 499 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 500 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 501 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 502 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 503 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 504 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 505 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 506 "data/maps/NewTrainerHill/scripts.pory"
	disable_jump_landing_ground_effect
# 507 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_down
# 508 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 509 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_down
# 510 "data/maps/NewTrainerHill/scripts.pory"
	enable_jump_landing_ground_effect
# 511 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 512 "data/maps/NewTrainerHill/scripts.pory"

# 513 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_AudienceMemberWalkToSeat:
# 514 "data/maps/NewTrainerHill/scripts.pory"
	walk_down
# 515 "data/maps/NewTrainerHill/scripts.pory"
	walk_down
# 516 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 517 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 518 "data/maps/NewTrainerHill/scripts.pory"
	walk_in_place_faster_down
# 519 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 520 "data/maps/NewTrainerHill/scripts.pory"

# 521 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_RefereeEnter:
# 522 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 523 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 524 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 525 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 526 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 527 "data/maps/NewTrainerHill/scripts.pory"

# 528 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_AnnouncerFaceLeft:
# 529 "data/maps/NewTrainerHill/scripts.pory"
	walk_in_place_faster_left
# 530 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 531 "data/maps/NewTrainerHill/scripts.pory"

# 532 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_RefereeExit:
# 533 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 534 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 535 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 536 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 537 "data/maps/NewTrainerHill/scripts.pory"
	step_end

NewTrainerHill_EventScript_SetupAudienceCount::
# 541 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, NewTrainerHill_EventScript_SetupAudienceCount_2
# 544 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, NewTrainerHill_EventScript_SetupAudienceCount_3
# 547 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, NewTrainerHill_EventScript_SetupAudienceCount_4
# 551 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_F, DOME_ROUND1
NewTrainerHill_EventScript_SetupAudienceCount_1:
	return

NewTrainerHill_EventScript_SetupAudienceCount_2:
# 542 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_F, DOME_FINAL
	goto NewTrainerHill_EventScript_SetupAudienceCount_1

NewTrainerHill_EventScript_SetupAudienceCount_3:
# 545 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_F, DOME_SEMIFINAL
	goto NewTrainerHill_EventScript_SetupAudienceCount_1

NewTrainerHill_EventScript_SetupAudienceCount_4:
# 548 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_F, DOME_ROUND2
	goto NewTrainerHill_EventScript_SetupAudienceCount_1


NewTrainerHill_EventScript_AnnouncePlayer::
# 557 "data/maps/NewTrainerHill/scripts.pory"
	switch VAR_TEMP_F
# 558 "data/maps/NewTrainerHill/scripts.pory"
	case DOME_ROUND1, NewTrainerHill_EventScript_AnnouncePlayer_3
# 560 "data/maps/NewTrainerHill/scripts.pory"
	case DOME_ROUND2, NewTrainerHill_EventScript_AnnouncePlayer_4
# 562 "data/maps/NewTrainerHill/scripts.pory"
	case DOME_SEMIFINAL, NewTrainerHill_EventScript_AnnouncePlayer_5
# 564 "data/maps/NewTrainerHill/scripts.pory"
	case DOME_FINAL, NewTrainerHill_EventScript_AnnouncePlayer_6
NewTrainerHill_EventScript_AnnouncePlayer_1:
	return

NewTrainerHill_EventScript_AnnouncePlayer_3:
# 559 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_0, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1

NewTrainerHill_EventScript_AnnouncePlayer_4:
# 561 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_1, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1

NewTrainerHill_EventScript_AnnouncePlayer_5:
# 563 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_2, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1

NewTrainerHill_EventScript_AnnouncePlayer_6:
# 565 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_3, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1


NewTrainerHill_EventScript_SetOpponent::
# 571 "data/maps/NewTrainerHill/scripts.pory"
	switch VAR_TRAINER_HILL_STATE
# 572 "data/maps/NewTrainerHill/scripts.pory"
	case 1, NewTrainerHill_EventScript_SetOpponent_3
# 574 "data/maps/NewTrainerHill/scripts.pory"
	case 2, NewTrainerHill_EventScript_SetOpponent_4
# 576 "data/maps/NewTrainerHill/scripts.pory"
	case 3, NewTrainerHill_EventScript_SetOpponent_5
# 578 "data/maps/NewTrainerHill/scripts.pory"
	case 4, NewTrainerHill_EventScript_SetOpponent_6
NewTrainerHill_EventScript_SetOpponent_1:
	return

NewTrainerHill_EventScript_SetOpponent_3:
# 573 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_YOUNGSTER
	goto NewTrainerHill_EventScript_SetOpponent_1

NewTrainerHill_EventScript_SetOpponent_4:
# 575 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BEAUTY
	goto NewTrainerHill_EventScript_SetOpponent_1

NewTrainerHill_EventScript_SetOpponent_5:
# 577 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SCIENTIST_1
	goto NewTrainerHill_EventScript_SetOpponent_1

NewTrainerHill_EventScript_SetOpponent_6:
# 579 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_EXPERT_F
	goto NewTrainerHill_EventScript_SetOpponent_1


NewTrainerHill_EventScript_AnnounceOpponent::
# 585 "data/maps/NewTrainerHill/scripts.pory"
	switch VAR_TRAINER_HILL_STATE
# 586 "data/maps/NewTrainerHill/scripts.pory"
	case 1, NewTrainerHill_EventScript_AnnounceOpponent_3
# 588 "data/maps/NewTrainerHill/scripts.pory"
	case 2, NewTrainerHill_EventScript_AnnounceOpponent_4
# 590 "data/maps/NewTrainerHill/scripts.pory"
	case 3, NewTrainerHill_EventScript_AnnounceOpponent_5
# 592 "data/maps/NewTrainerHill/scripts.pory"
	case 4, NewTrainerHill_EventScript_AnnounceOpponent_6
NewTrainerHill_EventScript_AnnounceOpponent_1:
	return

NewTrainerHill_EventScript_AnnounceOpponent_3:
# 587 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnounceOpponent_Text_0, MSGBOX_NPC
	goto NewTrainerHill_EventScript_AnnounceOpponent_1

NewTrainerHill_EventScript_AnnounceOpponent_4:
# 589 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnounceOpponent_Text_1, MSGBOX_NPC
	goto NewTrainerHill_EventScript_AnnounceOpponent_1

NewTrainerHill_EventScript_AnnounceOpponent_5:
# 591 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnounceOpponent_Text_2, MSGBOX_NPC
	goto NewTrainerHill_EventScript_AnnounceOpponent_1

NewTrainerHill_EventScript_AnnounceOpponent_6:
# 593 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnounceOpponent_Text_3, MSGBOX_NPC
	goto NewTrainerHill_EventScript_AnnounceOpponent_1


NewTrainerHill_EventScript_StartBattle::
# 599 "data/maps/NewTrainerHill/scripts.pory"
	switch VAR_TRAINER_HILL_STATE
# 600 "data/maps/NewTrainerHill/scripts.pory"
	case 1, NewTrainerHill_EventScript_StartBattle_3
# 602 "data/maps/NewTrainerHill/scripts.pory"
	case 2, NewTrainerHill_EventScript_StartBattle_4
# 604 "data/maps/NewTrainerHill/scripts.pory"
	case 3, NewTrainerHill_EventScript_StartBattle_5
# 606 "data/maps/NewTrainerHill/scripts.pory"
	case 4, NewTrainerHill_EventScript_StartBattle_6
NewTrainerHill_EventScript_StartBattle_1:
	return

NewTrainerHill_EventScript_StartBattle_3:
# 601 "data/maps/NewTrainerHill/scripts.pory"
	trainerbattle_no_intro TRAINER_HILL_1, LilycoveCity_Text_BrendanDefeat
	goto NewTrainerHill_EventScript_StartBattle_1

NewTrainerHill_EventScript_StartBattle_4:
# 603 "data/maps/NewTrainerHill/scripts.pory"
	trainerbattle_no_intro TRAINER_HILL_2, LilycoveCity_Text_BrendanDefeat
	goto NewTrainerHill_EventScript_StartBattle_1

NewTrainerHill_EventScript_StartBattle_5:
# 605 "data/maps/NewTrainerHill/scripts.pory"
	trainerbattle_no_intro TRAINER_HILL_3, LilycoveCity_Text_BrendanDefeat
	goto NewTrainerHill_EventScript_StartBattle_1

NewTrainerHill_EventScript_StartBattle_6:
# 607 "data/maps/NewTrainerHill/scripts.pory"
	trainerbattle_no_intro TRAINER_HILL_4, LilycoveCity_Text_BrendanDefeat
	goto NewTrainerHill_EventScript_StartBattle_1


NewTrainerHill_EventScript_NewBattleSequence::
# 613 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AnnounceOpponent
# 614 "data/maps/NewTrainerHill/scripts.pory"
	closemessage
# 615 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward
# 616 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward
# 617 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDownOneStep
# 618 "data/maps/NewTrainerHill/scripts.pory"
	waitmovement 0
# 619 "data/maps/NewTrainerHill/scripts.pory"
	delay 60
# 620 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_StartBattle
# 621 "data/maps/NewTrainerHill/scripts.pory"
	addvar VAR_TRAINER_HILL_STATE, 1
# 622 "data/maps/NewTrainerHill/scripts.pory"
	warp MAP_TRAINER_HILL_ENTRANCE, 5, 11
	return


NewTrainerHill_EventScript_AnnouncePlayer_Text_0:
# 559 "data/maps/NewTrainerHill/scripts.pory"
	.string "Presenting a local trainer from Littleroot Town: {PLAYER}!$"

NewTrainerHill_EventScript_AnnouncePlayer_Text_1:
# 561 "data/maps/NewTrainerHill/scripts.pory"
	.string "Presenting a rising talent who has been collecting Gym Badges: {PLAYER}!$"

NewTrainerHill_EventScript_AnnouncePlayer_Text_2:
# 563 "data/maps/NewTrainerHill/scripts.pory"
	.string "Presenting a fierce competitor on his way to Ever Grande City: {PLAYER}!$"

NewTrainerHill_EventScript_AnnouncePlayer_Text_3:
# 565 "data/maps/NewTrainerHill/scripts.pory"
	.string "Presenting {PLAYER}, a Hoenn League Champion!$"

NewTrainerHill_EventScript_AnnounceOpponent_Text_0:
# 587 "data/maps/NewTrainerHill/scripts.pory"
	.string "{PLAYER} will be facing Charlie, a\n"
	.string "Youngster from Dewford Town!$"

NewTrainerHill_EventScript_AnnounceOpponent_Text_1:
# 589 "data/maps/NewTrainerHill/scripts.pory"
	.string "{PLAYER} will be facing Lily, a Beauty\n"
	.string "from Slateport City!$"

NewTrainerHill_EventScript_AnnounceOpponent_Text_2:
# 591 "data/maps/NewTrainerHill/scripts.pory"
	.string "{PLAYER} will be facing Max, a\n"
	.string "Scientist from Mauville City!$"

NewTrainerHill_EventScript_AnnounceOpponent_Text_3:
# 593 "data/maps/NewTrainerHill/scripts.pory"
	.string "{PLAYER} will be facing Flora, an\n"
	.string "Expert from Lilycove City!$"
