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
	call_if_eq VAR_TEMP_F, DOME_ROUND1, NewTrainerHill_EventScript_SetWalkingAudienceMemberPos
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
	setvar VAR_TEMP_0, TRUE
# 51 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_ROUND1, NewTrainerHill_EventScript_TryDoAudienceMemberWalkToSeat
# 52 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 53 "data/maps/NewTrainerHill/scripts.pory"
	waitmovement 0
# 54 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AnnouncePlayer
# 55 "data/maps/NewTrainerHill/scripts.pory"
	//msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome, MSGBOX_DEFAULT
# 56 "data/maps/NewTrainerHill/scripts.pory"
	closemessage
# 57 "data/maps/NewTrainerHill/scripts.pory"
	showobjectat LOCALID_HILL_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 58 "data/maps/NewTrainerHill/scripts.pory"
	goto NewTrainerHill_EventScript_PlayerEnter
# 59 "data/maps/NewTrainerHill/scripts.pory"
	//goto_if_ne VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY, NewTrainerHill_EventScript_PlayerEnterForTucker
# 60 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_PlayerEnter::
# 61 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_PLAYER, NewTrainerHill_Movement_PlayerEnter
# 62 "data/maps/NewTrainerHill/scripts.pory"
	goto NewTrainerHill_EventScript_AudienceReactToPlayer
# 63 "data/maps/NewTrainerHill/scripts.pory"

# 64 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_PlayerEnterForTucker::
# 65 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_PLAYER, NewTrainerHill_Movement_PlayerEnterForTucker
# 66 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AudienceReactToPlayer::
# 67 "data/maps/NewTrainerHill/scripts.pory"
	playse SE_M_ENCORE2
# 68 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AudienceLookAround
# 69 "data/maps/NewTrainerHill/scripts.pory"
	waitmovement 0
# 70 "data/maps/NewTrainerHill/scripts.pory"
	// ADD BATTLE INTRO HERE
# 71 "data/maps/NewTrainerHill/scripts.pory"
	//goto_if_ne VAR_TEMP_F, DOME_FINAL, NewTrainerHill_EventScript_BattleOpponent
# 72 "data/maps/NewTrainerHill/scripts.pory"
	//goto_if_ne VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY, NewTrainerHill_EventScript_AnnounceTucker
# 73 "data/maps/NewTrainerHill/scripts.pory"
	goto NewTrainerHill_EventScript_NewBattleSequence
# 74 "data/maps/NewTrainerHill/scripts.pory"
	return
# 75 "data/maps/NewTrainerHill/scripts.pory"

# 76 "data/maps/NewTrainerHill/scripts.pory"

# 77 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_OnWarp:
# 78 "data/maps/NewTrainerHill/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, NewTrainerHill_EventScript_SetUpObjects
# 79 "data/maps/NewTrainerHill/scripts.pory"
	.2byte 0
# 80 "data/maps/NewTrainerHill/scripts.pory"

# 81 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_SetUpObjects::
# 82 "data/maps/NewTrainerHill/scripts.pory"
	hideobjectat LOCALID_HILL_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 83 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AddAudience
# 84 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_SetPlayerGfx
# 85 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_1, 1
# 86 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_PLAYER, NewTrainerHill_Movement_SetInvisible
# 87 "data/maps/NewTrainerHill/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 88 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_ne VAR_RESULT, DOME_FINAL, NewTrainerHill_EventScript_EndSetUpObjects
# 89 "data/maps/NewTrainerHill/scripts.pory"
	frontier_getbrainstatus
# 90 "data/maps/NewTrainerHill/scripts.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
# 91 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_BRAIN_NOT_READY, NewTrainerHill_EventScript_EndSetUpObjects
# 92 "data/maps/NewTrainerHill/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 93 "data/maps/NewTrainerHill/scripts.pory"
	setobjectxyperm LOCALID_HILL_OPPONENT, 13, 9
# 94 "data/maps/NewTrainerHill/scripts.pory"
	removeobject LOCALID_HILL_OPPONENT
# 95 "data/maps/NewTrainerHill/scripts.pory"
	delay 1
# 96 "data/maps/NewTrainerHill/scripts.pory"
	addobject LOCALID_HILL_OPPONENT
# 97 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_OPPONENT, NewTrainerHill_Movement_SetInvisibleFacingUp
# 98 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_EndSetUpObjects::
# 99 "data/maps/NewTrainerHill/scripts.pory"
	end
# 100 "data/maps/NewTrainerHill/scripts.pory"

# 101 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_OnResume:
# 102 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, NewTrainerHill_EventScript_CallAddAudience
# 103 "data/maps/NewTrainerHill/scripts.pory"
	end
# 104 "data/maps/NewTrainerHill/scripts.pory"

# 105 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_CallAddAudience::
# 106 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AddAudience
# 107 "data/maps/NewTrainerHill/scripts.pory"
	return
# 108 "data/maps/NewTrainerHill/scripts.pory"

# 109 "data/maps/NewTrainerHill/scripts.pory"
@ Add audience members to supplement the permanent object event audience
# 110 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddAudience::
# 111 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_ROUND1, NewTrainerHill_EventScript_AddRound1Audience
# 112 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_ROUND2, NewTrainerHill_EventScript_AddRound2Audience
# 113 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_SEMIFINAL, NewTrainerHill_EventScript_AddSemifinalAudience
# 114 "data/maps/NewTrainerHill/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_FINAL, NewTrainerHill_EventScript_AddFinalAudience
# 115 "data/maps/NewTrainerHill/scripts.pory"
	return
# 116 "data/maps/NewTrainerHill/scripts.pory"

# 117 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddRound1Audience::
# 118 "data/maps/NewTrainerHill/scripts.pory"
	return
# 119 "data/maps/NewTrainerHill/scripts.pory"

# 120 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddRound2Audience::
# 121 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 122 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 123 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 124 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 125 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 126 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 127 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 128 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 129 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 130 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 131 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 132 "data/maps/NewTrainerHill/scripts.pory"
	return
# 133 "data/maps/NewTrainerHill/scripts.pory"

# 134 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddSemifinalAudience::
# 135 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 136 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 137 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 138 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 139 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 140 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 141 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 142 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 143 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 144 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 145 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 146 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 147 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 148 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 149 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 150 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 151 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 152 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 153 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 154 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 155 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
# 156 "data/maps/NewTrainerHill/scripts.pory"
	return
# 157 "data/maps/NewTrainerHill/scripts.pory"

# 158 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AddFinalAudience::
# 159 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 0, 2, 0
# 160 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 161 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 2, 15, 0
# 162 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 3, 5, 0
# 163 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 164 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 5, 7, 0
# 165 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 166 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 167 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 8, 10, 0
# 168 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 169 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 170 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 171 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 12, 14, 0
# 172 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 2
# 173 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 14, 12, 2
# 174 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 175 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 176 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 177 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 18, 6, 1
# 178 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 179 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 180 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 21, 10, 1
# 181 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 182 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 183 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 14, 1
# 184 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 185 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 186 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 3, 2
# 187 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 188 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 189 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 190 "data/maps/NewTrainerHill/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
# 191 "data/maps/NewTrainerHill/scripts.pory"
	return
# 192 "data/maps/NewTrainerHill/scripts.pory"

# 193 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_SetInvisible:
# 194 "data/maps/NewTrainerHill/scripts.pory"
	set_invisible
# 195 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 196 "data/maps/NewTrainerHill/scripts.pory"

# 197 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerEnter:
# 198 "data/maps/NewTrainerHill/scripts.pory"
	set_visible
# 199 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 200 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 201 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 202 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 203 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 204 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerStepForward:
# 205 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 206 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 207 "data/maps/NewTrainerHill/scripts.pory"

# 208 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerApproachAudience:
# 209 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 210 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 211 "data/maps/NewTrainerHill/scripts.pory"

# 212 "data/maps/NewTrainerHill/scripts.pory"
@ Identical to Movement_PlayerEnter
# 213 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerEnterForTucker:
# 214 "data/maps/NewTrainerHill/scripts.pory"
	set_visible
# 215 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 216 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 217 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 218 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 219 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 220 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 221 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 222 "data/maps/NewTrainerHill/scripts.pory"

# 223 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_PlayerStepForward2:
# 224 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 225 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 226 "data/maps/NewTrainerHill/scripts.pory"

# 227 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_OpponentStepForward:
# 228 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 229 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 230 "data/maps/NewTrainerHill/scripts.pory"

# 231 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_SetInvisibleFacingUp:
# 232 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 233 "data/maps/NewTrainerHill/scripts.pory"
	set_invisible
# 234 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 235 "data/maps/NewTrainerHill/scripts.pory"

# 236 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_TuckerEnterAndDance:
# 237 "data/maps/NewTrainerHill/scripts.pory"
	set_visible
# 238 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 239 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 240 "data/maps/NewTrainerHill/scripts.pory"
	walk_up
# 241 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 242 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 243 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 244 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 245 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 246 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 247 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 248 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 249 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 250 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 251 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 252 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 253 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 254 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 255 "data/maps/NewTrainerHill/scripts.pory"
	walk_fast_up
# 256 "data/maps/NewTrainerHill/scripts.pory"
	walk_fast_up
# 257 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 258 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 259 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 260 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 261 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 262 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 263 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 264 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 265 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 266 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 267 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 268 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 269 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 270 "data/maps/NewTrainerHill/scripts.pory"
	jump_2_left
# 271 "data/maps/NewTrainerHill/scripts.pory"
	unlock_facing_direction
# 272 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 273 "data/maps/NewTrainerHill/scripts.pory"
	lock_facing_direction
# 274 "data/maps/NewTrainerHill/scripts.pory"
	jump_2_left
# 275 "data/maps/NewTrainerHill/scripts.pory"
	jump_2_left
# 276 "data/maps/NewTrainerHill/scripts.pory"
	unlock_facing_direction
# 277 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 278 "data/maps/NewTrainerHill/scripts.pory"
	lock_facing_direction
# 279 "data/maps/NewTrainerHill/scripts.pory"
	jump_2_left
# 280 "data/maps/NewTrainerHill/scripts.pory"
	unlock_facing_direction
# 281 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 282 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 283 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 284 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 285 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 286 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 287 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 288 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 289 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 290 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 291 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 292 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 293 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 294 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 295 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 296 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 297 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 298 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 299 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 300 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 301 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 302 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 303 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 304 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 305 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 306 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 307 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 308 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 309 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 310 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 311 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 312 "data/maps/NewTrainerHill/scripts.pory"
	lock_facing_direction
# 313 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 314 "data/maps/NewTrainerHill/scripts.pory"
	walk_slow_right
# 315 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 316 "data/maps/NewTrainerHill/scripts.pory"
	walk_slow_right
# 317 "data/maps/NewTrainerHill/scripts.pory"
	unlock_facing_direction
# 318 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 319 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 320 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_up
# 321 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_up
# 322 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 323 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 324 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 325 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 326 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_up
# 327 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 328 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 329 "data/maps/NewTrainerHill/scripts.pory"
	walk_down
# 330 "data/maps/NewTrainerHill/scripts.pory"
	walk_down
# 331 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 332 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 333 "data/maps/NewTrainerHill/scripts.pory"
	face_up
# 334 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 335 "data/maps/NewTrainerHill/scripts.pory"
	face_right
# 336 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 337 "data/maps/NewTrainerHill/scripts.pory"
	face_down
# 338 "data/maps/NewTrainerHill/scripts.pory"
	delay_2
# 339 "data/maps/NewTrainerHill/scripts.pory"
	face_left
# 340 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 341 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 342 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 343 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 344 "data/maps/NewTrainerHill/scripts.pory"

# 345 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_AnnouncerMoveForTuckerEntrance:
# 346 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 347 "data/maps/NewTrainerHill/scripts.pory"
	delay_16
# 348 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 349 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 350 "data/maps/NewTrainerHill/scripts.pory"
	walk_in_place_faster_right
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
	delay_16
# 390 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 391 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 392 "data/maps/NewTrainerHill/scripts.pory"
	walk_in_place_faster_down
# 393 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 394 "data/maps/NewTrainerHill/scripts.pory"

# 395 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_TuckerStepForward:
# 396 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 397 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 398 "data/maps/NewTrainerHill/scripts.pory"

# 399 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_TuckerApproachPlayer:
# 400 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 401 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 402 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 403 "data/maps/NewTrainerHill/scripts.pory"

# 404 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_AudienceLookAround::
# 405 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 0, DIR_EAST
# 406 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 2, DIR_EAST
# 407 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 4, DIR_EAST
# 408 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 6, DIR_EAST
# 409 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 8, DIR_EAST
# 410 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 10, DIR_WEST
# 411 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 12, DIR_WEST
# 412 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 14, DIR_WEST
# 413 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 16, DIR_WEST
# 414 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 18, DIR_WEST
# 415 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 20, DIR_EAST
# 416 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 22, DIR_EAST
# 417 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 24, DIR_EAST
# 418 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 26, DIR_EAST
# 419 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 28, DIR_EAST
# 420 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 30, DIR_EAST
# 421 "data/maps/NewTrainerHill/scripts.pory"
	delay 20
# 422 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 423 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 424 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 4, DIR_SOUTH
# 425 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 6, DIR_SOUTH
# 426 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 8, DIR_SOUTH
# 427 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 10, DIR_SOUTH
# 428 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 12, DIR_SOUTH
# 429 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 14, DIR_SOUTH
# 430 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 16, DIR_SOUTH
# 431 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 18, DIR_SOUTH
# 432 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 20, DIR_SOUTH
# 433 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 22, DIR_SOUTH
# 434 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 24, DIR_SOUTH
# 435 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 26, DIR_SOUTH
# 436 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 28, DIR_SOUTH
# 437 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 30, DIR_SOUTH
# 438 "data/maps/NewTrainerHill/scripts.pory"
	delay 20
# 439 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 1, DIR_EAST
# 440 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 3, DIR_EAST
# 441 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 5, DIR_EAST
# 442 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 7, DIR_EAST
# 443 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 9, DIR_EAST
# 444 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 11, DIR_WEST
# 445 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 13, DIR_WEST
# 446 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 15, DIR_WEST
# 447 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 17, DIR_WEST
# 448 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 19, DIR_WEST
# 449 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 21, DIR_EAST
# 450 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 23, DIR_EAST
# 451 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 25, DIR_EAST
# 452 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 27, DIR_WEST
# 453 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 31, DIR_WEST
# 454 "data/maps/NewTrainerHill/scripts.pory"
	delay 20
# 455 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 456 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 3, DIR_SOUTH
# 457 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 5, DIR_SOUTH
# 458 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 7, DIR_SOUTH
# 459 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 9, DIR_SOUTH
# 460 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 11, DIR_SOUTH
# 461 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 13, DIR_SOUTH
# 462 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 15, DIR_SOUTH
# 463 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 17, DIR_SOUTH
# 464 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 19, DIR_SOUTH
# 465 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 21, DIR_SOUTH
# 466 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 23, DIR_SOUTH
# 467 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 25, DIR_SOUTH
# 468 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 27, DIR_SOUTH
# 469 "data/maps/NewTrainerHill/scripts.pory"
	turnvobject 31, DIR_SOUTH
# 470 "data/maps/NewTrainerHill/scripts.pory"
	delay 20
# 471 "data/maps/NewTrainerHill/scripts.pory"
	return
# 472 "data/maps/NewTrainerHill/scripts.pory"

# 473 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_WarpToLobby::
# 474 "data/maps/NewTrainerHill/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 475 "data/maps/NewTrainerHill/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 5, 11
# 476 "data/maps/NewTrainerHill/scripts.pory"
	waitstate
# 477 "data/maps/NewTrainerHill/scripts.pory"
	end
# 478 "data/maps/NewTrainerHill/scripts.pory"

# 479 "data/maps/NewTrainerHill/scripts.pory"
@ On round 1 there's a 50% chance that a specific audience member will walk to his seat
# 480 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_SetWalkingAudienceMemberPos::
# 481 "data/maps/NewTrainerHill/scripts.pory"
	random 2
# 482 "data/maps/NewTrainerHill/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 483 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_eq VAR_TEMP_D, 0, Common_EventScript_NopReturn
# 484 "data/maps/NewTrainerHill/scripts.pory"
	setobjectxyperm LOCALID_HILL_AUDIENCE_WALKING, 2, 0
# 485 "data/maps/NewTrainerHill/scripts.pory"
	setobjectmovementtype LOCALID_HILL_AUDIENCE_WALKING, MOVEMENT_TYPE_FACE_RIGHT
# 486 "data/maps/NewTrainerHill/scripts.pory"
	return
# 487 "data/maps/NewTrainerHill/scripts.pory"

# 488 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_EventScript_TryDoAudienceMemberWalkToSeat::
# 489 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_eq VAR_TEMP_D, 0, Common_EventScript_NopReturn
# 490 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_AUDIENCE_WALKING, NewTrainerHill_Movement_AudienceMemberWalkToSeat
# 491 "data/maps/NewTrainerHill/scripts.pory"
	return
# 492 "data/maps/NewTrainerHill/scripts.pory"

# 493 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_AudienceTwinJump:
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
	delay_16
# 506 "data/maps/NewTrainerHill/scripts.pory"
	delay_8
# 507 "data/maps/NewTrainerHill/scripts.pory"
	disable_jump_landing_ground_effect
# 508 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_down
# 509 "data/maps/NewTrainerHill/scripts.pory"
	delay_4
# 510 "data/maps/NewTrainerHill/scripts.pory"
	jump_in_place_down
# 511 "data/maps/NewTrainerHill/scripts.pory"
	enable_jump_landing_ground_effect
# 512 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 513 "data/maps/NewTrainerHill/scripts.pory"

# 514 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_AudienceMemberWalkToSeat:
# 515 "data/maps/NewTrainerHill/scripts.pory"
	walk_down
# 516 "data/maps/NewTrainerHill/scripts.pory"
	walk_down
# 517 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 518 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 519 "data/maps/NewTrainerHill/scripts.pory"
	walk_in_place_faster_down
# 520 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 521 "data/maps/NewTrainerHill/scripts.pory"

# 522 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_RefereeEnter:
# 523 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 524 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 525 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 526 "data/maps/NewTrainerHill/scripts.pory"
	walk_right
# 527 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 528 "data/maps/NewTrainerHill/scripts.pory"

# 529 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_AnnouncerFaceLeft:
# 530 "data/maps/NewTrainerHill/scripts.pory"
	walk_in_place_faster_left
# 531 "data/maps/NewTrainerHill/scripts.pory"
	step_end
# 532 "data/maps/NewTrainerHill/scripts.pory"

# 533 "data/maps/NewTrainerHill/scripts.pory"
NewTrainerHill_Movement_RefereeExit:
# 534 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 535 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 536 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 537 "data/maps/NewTrainerHill/scripts.pory"
	walk_left
# 538 "data/maps/NewTrainerHill/scripts.pory"
	step_end

NewTrainerHill_EventScript_SetupAudienceCount::
# 543 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, NewTrainerHill_EventScript_SetupAudienceCount_2
# 546 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, NewTrainerHill_EventScript_SetupAudienceCount_3
# 549 "data/maps/NewTrainerHill/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, NewTrainerHill_EventScript_SetupAudienceCount_4
# 553 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_F, DOME_ROUND1
NewTrainerHill_EventScript_SetupAudienceCount_1:
	return

NewTrainerHill_EventScript_SetupAudienceCount_2:
# 544 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_F, DOME_FINAL
	goto NewTrainerHill_EventScript_SetupAudienceCount_1

NewTrainerHill_EventScript_SetupAudienceCount_3:
# 547 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_F, DOME_SEMIFINAL
	goto NewTrainerHill_EventScript_SetupAudienceCount_1

NewTrainerHill_EventScript_SetupAudienceCount_4:
# 550 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_TEMP_F, DOME_ROUND2
	goto NewTrainerHill_EventScript_SetupAudienceCount_1


NewTrainerHill_EventScript_AnnouncePlayer::
# 559 "data/maps/NewTrainerHill/scripts.pory"
	switch VAR_TRAINER_HILL_STATE
# 560 "data/maps/NewTrainerHill/scripts.pory"
	case 1, NewTrainerHill_EventScript_AnnouncePlayer_3
# 562 "data/maps/NewTrainerHill/scripts.pory"
	case 2, NewTrainerHill_EventScript_AnnouncePlayer_4
# 564 "data/maps/NewTrainerHill/scripts.pory"
	case 3, NewTrainerHill_EventScript_AnnouncePlayer_5
# 565 "data/maps/NewTrainerHill/scripts.pory"
	case 4, NewTrainerHill_EventScript_AnnouncePlayer_5
# 567 "data/maps/NewTrainerHill/scripts.pory"
	case 5, NewTrainerHill_EventScript_AnnouncePlayer_6
# 568 "data/maps/NewTrainerHill/scripts.pory"
	case 6, NewTrainerHill_EventScript_AnnouncePlayer_6
# 570 "data/maps/NewTrainerHill/scripts.pory"
	case 7, NewTrainerHill_EventScript_AnnouncePlayer_7
# 572 "data/maps/NewTrainerHill/scripts.pory"
	case 8, NewTrainerHill_EventScript_AnnouncePlayer_8
# 575 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_6, MSGBOX_DEFAULT
NewTrainerHill_EventScript_AnnouncePlayer_1:
	return

NewTrainerHill_EventScript_AnnouncePlayer_3:
# 561 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_0, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1

NewTrainerHill_EventScript_AnnouncePlayer_4:
# 563 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_1, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1

NewTrainerHill_EventScript_AnnouncePlayer_5:
# 566 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_2, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1

NewTrainerHill_EventScript_AnnouncePlayer_6:
# 569 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_3, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1

NewTrainerHill_EventScript_AnnouncePlayer_7:
# 571 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_4, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1

NewTrainerHill_EventScript_AnnouncePlayer_8:
# 573 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnouncePlayer_Text_5, MSGBOX_DEFAULT
	goto NewTrainerHill_EventScript_AnnouncePlayer_1


NewTrainerHill_EventScript_SetOpponent::
# 581 "data/maps/NewTrainerHill/scripts.pory"
	switch VAR_TRAINER_HILL_STATE
# 582 "data/maps/NewTrainerHill/scripts.pory"
	case 1, NewTrainerHill_EventScript_SetOpponent_3
# 584 "data/maps/NewTrainerHill/scripts.pory"
	case 2, NewTrainerHill_EventScript_SetOpponent_4
# 586 "data/maps/NewTrainerHill/scripts.pory"
	case 3, NewTrainerHill_EventScript_SetOpponent_5
# 588 "data/maps/NewTrainerHill/scripts.pory"
	case 4, NewTrainerHill_EventScript_SetOpponent_6
NewTrainerHill_EventScript_SetOpponent_1:
	return

NewTrainerHill_EventScript_SetOpponent_3:
# 583 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_YOUNGSTER
	goto NewTrainerHill_EventScript_SetOpponent_1

NewTrainerHill_EventScript_SetOpponent_4:
# 585 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BEAUTY
	goto NewTrainerHill_EventScript_SetOpponent_1

NewTrainerHill_EventScript_SetOpponent_5:
# 587 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SCIENTIST_1
	goto NewTrainerHill_EventScript_SetOpponent_1

NewTrainerHill_EventScript_SetOpponent_6:
# 589 "data/maps/NewTrainerHill/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_EXPERT_F
	goto NewTrainerHill_EventScript_SetOpponent_1


NewTrainerHill_EventScript_AnnounceOpponent::
# 595 "data/maps/NewTrainerHill/scripts.pory"
	switch VAR_TRAINER_HILL_STATE
# 596 "data/maps/NewTrainerHill/scripts.pory"
	case 1, NewTrainerHill_EventScript_AnnounceOpponent_3
# 598 "data/maps/NewTrainerHill/scripts.pory"
	case 2, NewTrainerHill_EventScript_AnnounceOpponent_4
# 600 "data/maps/NewTrainerHill/scripts.pory"
	case 3, NewTrainerHill_EventScript_AnnounceOpponent_5
# 602 "data/maps/NewTrainerHill/scripts.pory"
	case 4, NewTrainerHill_EventScript_AnnounceOpponent_6
NewTrainerHill_EventScript_AnnounceOpponent_1:
	return

NewTrainerHill_EventScript_AnnounceOpponent_3:
# 597 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnounceOpponent_Text_0, MSGBOX_NPC
	goto NewTrainerHill_EventScript_AnnounceOpponent_1

NewTrainerHill_EventScript_AnnounceOpponent_4:
# 599 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnounceOpponent_Text_1, MSGBOX_NPC
	goto NewTrainerHill_EventScript_AnnounceOpponent_1

NewTrainerHill_EventScript_AnnounceOpponent_5:
# 601 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnounceOpponent_Text_2, MSGBOX_NPC
	goto NewTrainerHill_EventScript_AnnounceOpponent_1

NewTrainerHill_EventScript_AnnounceOpponent_6:
# 603 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_AnnounceOpponent_Text_3, MSGBOX_NPC
	goto NewTrainerHill_EventScript_AnnounceOpponent_1


NewTrainerHill_EventScript_StartBattle::
# 609 "data/maps/NewTrainerHill/scripts.pory"
	switch VAR_TRAINER_HILL_STATE
# 610 "data/maps/NewTrainerHill/scripts.pory"
	case 1, NewTrainerHill_EventScript_StartBattle_3
# 612 "data/maps/NewTrainerHill/scripts.pory"
	case 2, NewTrainerHill_EventScript_StartBattle_4
# 614 "data/maps/NewTrainerHill/scripts.pory"
	case 3, NewTrainerHill_EventScript_StartBattle_5
# 616 "data/maps/NewTrainerHill/scripts.pory"
	case 4, NewTrainerHill_EventScript_StartBattle_6
NewTrainerHill_EventScript_StartBattle_1:
	return

NewTrainerHill_EventScript_StartBattle_3:
# 611 "data/maps/NewTrainerHill/scripts.pory"
	trainerbattle_no_intro TRAINER_HILL_1, LilycoveCity_Text_BrendanDefeat
	goto NewTrainerHill_EventScript_StartBattle_1

NewTrainerHill_EventScript_StartBattle_4:
# 613 "data/maps/NewTrainerHill/scripts.pory"
	trainerbattle_no_intro TRAINER_HILL_2, LilycoveCity_Text_BrendanDefeat
	goto NewTrainerHill_EventScript_StartBattle_1

NewTrainerHill_EventScript_StartBattle_5:
# 615 "data/maps/NewTrainerHill/scripts.pory"
	trainerbattle_no_intro TRAINER_HILL_3, LilycoveCity_Text_BrendanDefeat
	goto NewTrainerHill_EventScript_StartBattle_1

NewTrainerHill_EventScript_StartBattle_6:
# 617 "data/maps/NewTrainerHill/scripts.pory"
	trainerbattle_no_intro TRAINER_HILL_4, LilycoveCity_Text_BrendanDefeat
	goto NewTrainerHill_EventScript_StartBattle_1


NewTrainerHill_EventScript_NewBattleSequence::
# 623 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_AnnounceOpponent
# 624 "data/maps/NewTrainerHill/scripts.pory"
	closemessage
# 625 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward
# 626 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward
# 627 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDownOneStep
# 628 "data/maps/NewTrainerHill/scripts.pory"
	waitmovement 0
# 629 "data/maps/NewTrainerHill/scripts.pory"
	delay 60
# 630 "data/maps/NewTrainerHill/scripts.pory"
	call NewTrainerHill_EventScript_StartBattle
# 633 "data/maps/NewTrainerHill/scripts.pory"
	goto NewTrainerHill_EventScript_VictorySequence
	return


NewTrainerHill_EventScript_VictorySequence::
# 638 "data/maps/NewTrainerHill/scripts.pory"
	applymovement LOCALID_HILL_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 639 "data/maps/NewTrainerHill/scripts.pory"
	waitmovement 0
# 640 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_VictorySequence_Text_0, MSGBOX_DEFAULT
# 641 "data/maps/NewTrainerHill/scripts.pory"
	playse SE_M_ENCORE2
# 642 "data/maps/NewTrainerHill/scripts.pory"
	waitfanfare
# 643 "data/maps/NewTrainerHill/scripts.pory"
	msgbox NewTrainerHill_EventScript_VictorySequence_Text_1, MSGBOX_DEFAULT
# 644 "data/maps/NewTrainerHill/scripts.pory"
	waitmessage
# 645 "data/maps/NewTrainerHill/scripts.pory"
	delay 60
# 646 "data/maps/NewTrainerHill/scripts.pory"
	addvar VAR_TRAINER_HILL_STATE, 100
# 647 "data/maps/NewTrainerHill/scripts.pory"
	warp MAP_TRAINER_HILL_ENTRANCE, 9, 2
	return


NewTrainerHill_EventScript_AnnouncePlayer_Text_0:
# 561 "data/maps/NewTrainerHill/scripts.pory"
	.string "Presenting a local trainer from\n"
	.string "Littleroot Town: {PLAYER}!$"

NewTrainerHill_EventScript_AnnouncePlayer_Text_1:
# 563 "data/maps/NewTrainerHill/scripts.pory"
	.string "Fresh off a win against local Gym\n"
	.string "Leader Wattson, it's {PLAYER}!$"

NewTrainerHill_EventScript_AnnouncePlayer_Text_2:
# 566 "data/maps/NewTrainerHill/scripts.pory"
	.string "Presenting a rising talent who has been\n"
	.string "collecting Gym Badges: {PLAYER}!$"

NewTrainerHill_EventScript_AnnouncePlayer_Text_3:
# 569 "data/maps/NewTrainerHill/scripts.pory"
	.string "Stopping at Trainer Hill on their way to\n"
	.string "Eastern Hoenn and the final Gym Badges,\l"
	.string "here's {PLAYER}!$"

NewTrainerHill_EventScript_AnnouncePlayer_Text_4:
# 571 "data/maps/NewTrainerHill/scripts.pory"
	.string "A skilled trainer who's collected almost\n"
	.string "all of the Hoenn Gym Badges, we have\l"
	.string "{PLAYER}!$"

NewTrainerHill_EventScript_AnnouncePlayer_Text_5:
# 573 "data/maps/NewTrainerHill/scripts.pory"
	.string "We are honored to present a hero of\n"
	.string "Hoenn, {PLAYER}!$"

NewTrainerHill_EventScript_AnnouncePlayer_Text_6:
# 575 "data/maps/NewTrainerHill/scripts.pory"
	.string "On this side we have {PLAYER}, a Hoenn League Champion!$"

NewTrainerHill_EventScript_AnnounceOpponent_Text_0:
# 597 "data/maps/NewTrainerHill/scripts.pory"
	.string "{PLAYER} will be facing Charlie, a\n"
	.string "Youngster from Dewford Town!$"

NewTrainerHill_EventScript_AnnounceOpponent_Text_1:
# 599 "data/maps/NewTrainerHill/scripts.pory"
	.string "{PLAYER} will be facing Lily, a Beauty\n"
	.string "from Slateport City!$"

NewTrainerHill_EventScript_AnnounceOpponent_Text_2:
# 601 "data/maps/NewTrainerHill/scripts.pory"
	.string "{PLAYER} will be facing Max, a\n"
	.string "Scientist from Mauville City!$"

NewTrainerHill_EventScript_AnnounceOpponent_Text_3:
# 603 "data/maps/NewTrainerHill/scripts.pory"
	.string "{PLAYER} will be facing Flora, an\n"
	.string "Expert from Lilycove City!$"

NewTrainerHill_EventScript_VictorySequence_Text_0:
# 640 "data/maps/NewTrainerHill/scripts.pory"
	.string "And our winner is, {PLAYER}!\n"
	.string "Congratulations!$"

NewTrainerHill_EventScript_VictorySequence_Text_1:
# 643 "data/maps/NewTrainerHill/scripts.pory"
	.string "I hope you all enjoyed this exciting\n"
	.string "battle at Trainer Hill. Come back soon\l"
	.string "to see more new trainers, and find out\l"
	.string "if {PLAYER} can win again!$"
