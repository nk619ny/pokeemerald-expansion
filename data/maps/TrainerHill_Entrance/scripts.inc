# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"

# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"

# 19 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 0
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"

# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 33 "data/maps/TrainerHill_Entrance/scripts.pory"

# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"

# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_NURSE
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_ATTENDANT
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_MAN
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_GIRL
# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"

# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"

# 48 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"

# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_6, 0, TrainerHill_Entrance_EventScript_NewPostBattleCheck
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_8, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"

# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"

# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 79 "data/maps/TrainerHill_Entrance/scripts.pory"

# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"

# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"

# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_TRAINER_HILL_NURSE
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 108 "data/maps/TrainerHill_Entrance/scripts.pory"

# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"

# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"

# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
//TrainerHill_Entrance_EventScript_EntryTrigger::
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
//	lockall
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
	//goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
//	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
//	trainerhill_getsaved
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
//	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
//	trainerhill_allfloorsused
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
//	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
//	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
//	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"

# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"

# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"

# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"

# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"

# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"

# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 190 "data/maps/TrainerHill_Entrance/scripts.pory"

# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"

# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"

# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"

# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"

# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 216 "data/maps/TrainerHill_Entrance/scripts.pory"

# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"

# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"

# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"

# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 238 "data/maps/TrainerHill_Entrance/scripts.pory"

# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"

# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ExpandedPokemart
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"

# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_AWAKENING
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"

# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"

# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"

# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS.\p"
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"

# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS!$"
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"

# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"

# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. STR_VAR_1.$"
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"

# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be TRAINERS gathered\n"
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"

# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting TRAINERS?$"
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"

# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"

# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"

# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"

# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"

# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the TRAINERS switch places,\n"
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"

# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"

# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the TRAINER HILL, we conduct\n"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In TRAINER battles along the way,\n"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"

# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one POKéMON with you.\p"
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two POKéMON\n"
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"

# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the TRAINER HILL, because…\p"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"

# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"

# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"

# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"

# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"

# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"

# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"

# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "STR_VAR_1 min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"

# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of TRAINERS\n"
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and POKéMON combos are ahead?\p"
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"

# 436 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough TRAINERS come to this\n"
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINER HILL from all over.\p"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"

# 443 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"

# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"

# 454 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"

TrainerHill_EventScript_ScottIntro::
# 491 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 492 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 493 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottIntro, MSGBOX_NPC
# 494 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 495 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAreYouInterested, MSGBOX_YESNO
# 496 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 497 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TrainerHill_EventScript_ScottIntro_2
# 502 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAreYouSure, MSGBOX_YESNO
# 503 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 504 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TrainerHill_EventScript_ScottIntro_5
# 509 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottDecline
# 510 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
TrainerHill_EventScript_ScottIntro_1:
# 513 "data/maps/TrainerHill_Entrance/scripts.pory"
	giveitem ITEM_COIN_CASE
# 514 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 515 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitfanfare
# 516 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 517 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottDepart
# 518 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 519 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 520 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end

TrainerHill_EventScript_ScottIntro_2:
# 498 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAgree1st
# 499 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
	goto TrainerHill_EventScript_ScottIntro_1

TrainerHill_EventScript_ScottIntro_5:
# 505 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAgree2nd
# 506 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
	goto TrainerHill_EventScript_ScottIntro_1


# 524 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitArena:
# 525 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 525 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 525 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 525 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 526 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
	step_end

NewTrainerHill_EventScript_ReceiveReward::
# 530 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_9, TRUE
# 532 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitArena
# 533 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 536 "data/maps/TrainerHill_Entrance/scripts.pory"
	call NewTrainerHill_EventScript_GetNumCoins
# 537 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox NewTrainerHill_EventScript_ReceiveReward_Text_0, MSGBOX_DEFAULT
# 538 "data/maps/TrainerHill_Entrance/scripts.pory"
	addcoins VAR_TEMP_8
# 539 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox NewTrainerHill_EventScript_ReceiveReward_Text_1, MSGBOX_DEFAULT
# 540 "data/maps/TrainerHill_Entrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 541 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitfanfare
# 542 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 543 "data/maps/TrainerHill_Entrance/scripts.pory"
	addvar VAR_TRAINER_HILL_STATE, 1
# 544 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 545 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 546 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


NewTrainerHill_EventScript_GetNumCoins::
# 551 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_TRAINER_HILL_STATE
# 552 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, NewTrainerHill_EventScript_GetNumCoins_2
# 555 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, NewTrainerHill_EventScript_GetNumCoins_3
# 558 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 3, NewTrainerHill_EventScript_GetNumCoins_4
# 561 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, NewTrainerHill_EventScript_GetNumCoins_5
# 564 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 5, NewTrainerHill_EventScript_GetNumCoins_6
# 567 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 6, NewTrainerHill_EventScript_GetNumCoins_7
# 570 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 7, NewTrainerHill_EventScript_GetNumCoins_8
# 573 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 8, NewTrainerHill_EventScript_GetNumCoins_9
# 576 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 9, NewTrainerHill_EventScript_GetNumCoins_10
# 579 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 10, NewTrainerHill_EventScript_GetNumCoins_11
# 582 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 11, NewTrainerHill_EventScript_GetNumCoins_12
# 585 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 12, NewTrainerHill_EventScript_GetNumCoins_13
# 588 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 13, NewTrainerHill_EventScript_GetNumCoins_14
# 591 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 14, NewTrainerHill_EventScript_GetNumCoins_15
# 594 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 15, NewTrainerHill_EventScript_GetNumCoins_16
# 597 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 16, NewTrainerHill_EventScript_GetNumCoins_17
# 600 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 17, NewTrainerHill_EventScript_GetNumCoins_18
# 603 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 18, NewTrainerHill_EventScript_GetNumCoins_19
# 607 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1000
# 608 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_18
	return

NewTrainerHill_EventScript_GetNumCoins_2:
# 553 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 50
# 554 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_3:
# 556 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 100
# 557 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_1
	return

NewTrainerHill_EventScript_GetNumCoins_4:
# 559 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 150
# 560 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_2
	return

NewTrainerHill_EventScript_GetNumCoins_5:
# 562 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 200
# 563 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_3
	return

NewTrainerHill_EventScript_GetNumCoins_6:
# 565 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 250
# 566 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_4
	return

NewTrainerHill_EventScript_GetNumCoins_7:
# 568 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 300
# 569 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_5
	return

NewTrainerHill_EventScript_GetNumCoins_8:
# 571 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 350
# 572 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_6
	return

NewTrainerHill_EventScript_GetNumCoins_9:
# 574 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 400
# 575 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_7
	return

NewTrainerHill_EventScript_GetNumCoins_10:
# 577 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 450
# 578 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_8
	return

NewTrainerHill_EventScript_GetNumCoins_11:
# 580 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 500
# 581 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_9
	return

NewTrainerHill_EventScript_GetNumCoins_12:
# 583 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 550
# 584 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_10
	return

NewTrainerHill_EventScript_GetNumCoins_13:
# 586 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 600
# 587 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_11
	return

NewTrainerHill_EventScript_GetNumCoins_14:
# 589 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 650
# 590 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_12
	return

NewTrainerHill_EventScript_GetNumCoins_15:
# 592 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 700
# 593 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_13
	return

NewTrainerHill_EventScript_GetNumCoins_16:
# 595 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 750
# 596 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_14
	return

NewTrainerHill_EventScript_GetNumCoins_17:
# 598 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 800
# 599 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_15
	return

NewTrainerHill_EventScript_GetNumCoins_18:
# 601 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 850
# 602 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_16
	return

NewTrainerHill_EventScript_GetNumCoins_19:
# 604 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 900
# 605 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_17
	return


TrainerHill_Entrance_EventScript_EntryTrigger::
# 614 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 615 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 616 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_TRAINER_HILL_STATE, 0, TrainerHill_Entrance_EventScript_ComeBackLater
# 617 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_EntryTrigger_Text_0, MSGBOX_YESNO
# 618 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, TrainerHill_Entrance_EventScript_BeginChallenge
# 619 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_EntryTrigger_Text_1, MSGBOX_DEFAULT
# 620 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 621 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 622 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 623 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


TrainerHill_Entrance_EventScript_ComeBackLater::
# 628 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 629 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_TEMP_9, TRUE
	goto_if_eq TrainerHill_Entrance_EventScript_ComeBackLater_2
# 633 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_ComeBackLater_Text_1, MSGBOX_DEFAULT
TrainerHill_Entrance_EventScript_ComeBackLater_1:
# 635 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 636 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 637 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 638 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end

TrainerHill_Entrance_EventScript_ComeBackLater_2:
# 630 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_ComeBackLater_Text_0, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_EventScript_ComeBackLater_1


TrainerHill_Entrance_EventScript_BeginChallenge::
# 643 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 644 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_BeginChallenge_Text_0, MSGBOX_DEFAULT
# 645 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 646 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_WalkToArena
# 647 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 648 "data/maps/TrainerHill_Entrance/scripts.pory"
	warp MAP_NEW_TRAINER_HILL, 9, 5
# 649 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	return


# 653 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_WalkToArena:
# 654 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 654 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 654 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 654 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 654 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
	step_end

TrainerHill_Entrance_EventScript_NewPostBattleCheck::
# 658 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 659 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_6, 1
# 660 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_TRAINER_HILL_STATE, 100
	goto_if_gt TrainerHill_Entrance_EventScript_NewPostBattleCheck_2
TrainerHill_Entrance_EventScript_NewPostBattleCheck_1:
# 664 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	return

TrainerHill_Entrance_EventScript_NewPostBattleCheck_2:
# 661 "data/maps/TrainerHill_Entrance/scripts.pory"
	addvar VAR_TRAINER_HILL_STATE, -100
# 662 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto NewTrainerHill_EventScript_ReceiveReward
	goto TrainerHill_Entrance_EventScript_NewPostBattleCheck_1


NewTrainerHill_EventScript_ReceiveReward_Text_0:
# 537 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Congratulations on your win! As\n"
	.string "promised, here are some Game Corner\l"
	.string "Coins as a reward for your performance.$"

NewTrainerHill_EventScript_ReceiveReward_Text_1:
# 539 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Received {STR_VAR_1} Coins!$"

NewTrainerHill_EventScript_GetNumCoins_Text_0:
# 554 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "50$"

NewTrainerHill_EventScript_GetNumCoins_Text_1:
# 557 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "100$"

NewTrainerHill_EventScript_GetNumCoins_Text_2:
# 560 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "150$"

NewTrainerHill_EventScript_GetNumCoins_Text_3:
# 563 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "200$"

NewTrainerHill_EventScript_GetNumCoins_Text_4:
# 566 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "250$"

NewTrainerHill_EventScript_GetNumCoins_Text_5:
# 569 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "300$"

NewTrainerHill_EventScript_GetNumCoins_Text_6:
# 572 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "350$"

NewTrainerHill_EventScript_GetNumCoins_Text_7:
# 575 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "400$"

NewTrainerHill_EventScript_GetNumCoins_Text_8:
# 578 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "450$"

NewTrainerHill_EventScript_GetNumCoins_Text_9:
# 581 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "500$"

NewTrainerHill_EventScript_GetNumCoins_Text_10:
# 584 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "550$"

NewTrainerHill_EventScript_GetNumCoins_Text_11:
# 587 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "600$"

NewTrainerHill_EventScript_GetNumCoins_Text_12:
# 590 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "650$"

NewTrainerHill_EventScript_GetNumCoins_Text_13:
# 593 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "700$"

NewTrainerHill_EventScript_GetNumCoins_Text_14:
# 596 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "750$"

NewTrainerHill_EventScript_GetNumCoins_Text_15:
# 599 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "800$"

NewTrainerHill_EventScript_GetNumCoins_Text_16:
# 602 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "850$"

NewTrainerHill_EventScript_GetNumCoins_Text_17:
# 605 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "900$"

NewTrainerHill_EventScript_GetNumCoins_Text_18:
# 608 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "1000$"

TrainerHill_Entrance_EventScript_EntryTrigger_Text_0:
# 617 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome to Trainer Hill! We have\n"
	.string "prepared a Pokémon battle exhibition\l"
	.string "with an audience, and Scott is offering\l"
	.string "a reward to the winner.\p"
	.string "Are you interested in competing?$"

TrainerHill_Entrance_EventScript_EntryTrigger_Text_1:
# 619 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I see. Please feel free to come back if\n"
	.string "you change your mind.$"

TrainerHill_Entrance_EventScript_ComeBackLater_Text_0:
# 630 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It will take some time for us to arrange\n"
	.string "another challenger for you. Please come\l"
	.string "back later.$"

TrainerHill_Entrance_EventScript_ComeBackLater_Text_1:
# 633 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry, but we are still working on\n"
	.string "arranging another battle here at\l"
	.string "Trainer Hill. Please check back later.$"

TrainerHill_Entrance_EventScript_BeginChallenge_Text_0:
# 644 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wonderful.\p"
	.string "Please proceed to the arena, and good\n"
	.string "luck!$"

TrainerHill_Text_ScottIntro::
# 462 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: Ah, {PLAYER}!\n"
	.string "You've stumbled onto something\l"
	.string "exciting.\p"
	.string "This is Trainer Hill, a new facility I'm\n"
	.string "launching for exhibition battles\l"
	.string "between trainers.\p"
	.string "It's a way for Trainers to hone their\n"
	.string "skills, and residents of nearby Cities\l"
	.string "to see talented or aspiring Trainers.$"

TrainerHill_Text_ScottAreYouInterested::
# 466 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Are you interested in participating?$"

TrainerHill_Text_ScottAreYouSure::
# 470 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: Are you sure?\n"
	.string "Wattson has agreed to subsidize this\l"
	.string "project, so for every battle you win\l"
	.string "here in Trainer Hill, you'll receive Coins\l"
	.string "for the Mauville Game Corner as a\l"
	.string "reward.\n"
	.string "Is that enough to convince you?$"

TrainerHill_Text_ScottAgree1st::
# 474 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: Great! I've got another\n"
	.string "participant already lined up, so you can\l"
	.string "talk to the gate attendant whenever\l"
	.string "you're ready.\p"
	.string "Wattson has agreed to subsidize this\n"
	.string "project, so for every battle you win\l"
	.string "here in Trainer Hill, you'll receive Coins\l"
	.string "for the Mauville Game Corner as a\l"
	.string "reward.\p"
	.string "You can use this Coin Case to collect\n"
	.string "them.$"

TrainerHill_Text_ScottAgree2nd::
# 478 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: Great! I've got another\n"
	.string "participant already lined up, so you can\l"
	.string "talk to the gate attendant whenever\l"
	.string "you're ready.\n"
	.string "You can take this Coin Case to store\l"
	.string "any prizes you win.$"

TrainerHill_Text_ScottDecline::
# 482 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: Oh well, I'm sure I'll find other\n"
	.string "Trainers interested in participating.\p"
	.string "In case you change your mind, take this.$"

TrainerHill_Text_ScottDepart::
# 486 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: I've got to go spread the word\n"
	.string "and find more Trainers. I'll see you\l"
	.string "around!$"
