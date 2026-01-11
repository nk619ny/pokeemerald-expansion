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
//TrainerHill_Entrance_EventScript_Records::
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	//lock
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	//msgbox TrainerHill_Entrance_Text_TrainerHill, MSGBOX_DEFAULT
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	//fadescreenswapbuffers FADE_TO_BLACK
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	//special ShowTrainerHillRecords
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	//waitstate
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	//releaseall
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
	//end
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"

# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"

# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"

# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"

# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 243 "data/maps/TrainerHill_Entrance/scripts.pory"

# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ExpandedPokemart
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"

# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_AWAKENING
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"

# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"

# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"

# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS.\p"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"

# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS!$"
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"

# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"

# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. STR_VAR_1.$"
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"

# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be TRAINERS gathered\n"
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"

# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting TRAINERS?$"
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"

# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"

# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 338 "data/maps/TrainerHill_Entrance/scripts.pory"

# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"

# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"

# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the TRAINERS switch places,\n"
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"

# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"

# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the TRAINER HILL, we conduct\n"
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In TRAINER battles along the way,\n"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"

# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one Pokémon with you.\p"
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two Pokémon\n"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"

# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the TRAINER HILL, because…\p"
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 393 "data/maps/TrainerHill_Entrance/scripts.pory"

# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"

# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"

# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"

# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"

# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"

# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"

# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "STR_VAR_1 min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 430 "data/maps/TrainerHill_Entrance/scripts.pory"

# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of TRAINERS\n"
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and Pokémon combos are ahead?\p"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 436 "data/maps/TrainerHill_Entrance/scripts.pory"

# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough TRAINERS come to this\n"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINER HILL from all over.\p"
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"

# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"

# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"

# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 457 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"

TrainerHill_EventScript_ScottIntro::
# 492 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 493 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 494 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottIntro, MSGBOX_NPC
# 495 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 496 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAreYouInterested, MSGBOX_YESNO
# 497 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 498 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TrainerHill_EventScript_ScottIntro_2
# 503 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAreYouSure, MSGBOX_YESNO
# 504 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 505 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TrainerHill_EventScript_ScottIntro_5
# 510 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottDecline
# 511 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
TrainerHill_EventScript_ScottIntro_1:
# 514 "data/maps/TrainerHill_Entrance/scripts.pory"
	giveitem ITEM_COIN_CASE
# 515 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 516 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitfanfare
# 517 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 518 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottDepart
# 519 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 520 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 521 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end

TrainerHill_EventScript_ScottIntro_2:
# 499 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAgree1st
# 500 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
	goto TrainerHill_EventScript_ScottIntro_1

TrainerHill_EventScript_ScottIntro_5:
# 506 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAgree2nd
# 507 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
	goto TrainerHill_EventScript_ScottIntro_1


# 525 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitArena:
# 526 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 526 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 526 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 526 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 527 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
	step_end

# 530 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_ScottDepart:
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
	step_end

NewTrainerHill_EventScript_ReceiveReward::
# 535 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 536 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_9, TRUE
# 537 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitArena
# 538 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 541 "data/maps/TrainerHill_Entrance/scripts.pory"
	call NewTrainerHill_EventScript_GetNumCoins
# 542 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox NewTrainerHill_EventScript_ReceiveReward_Text_0, MSGBOX_DEFAULT
# 543 "data/maps/TrainerHill_Entrance/scripts.pory"
	addcoins VAR_TEMP_8
# 544 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox NewTrainerHill_EventScript_ReceiveReward_Text_1, MSGBOX_DEFAULT
# 545 "data/maps/TrainerHill_Entrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 546 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitfanfare
# 547 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 548 "data/maps/TrainerHill_Entrance/scripts.pory"
	addvar VAR_TRAINER_HILL_STATE, 1
# 549 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 550 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 551 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


NewTrainerHill_EventScript_GetNumCoins::
# 556 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_TRAINER_HILL_STATE
# 557 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, NewTrainerHill_EventScript_GetNumCoins_2
# 560 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, NewTrainerHill_EventScript_GetNumCoins_3
# 563 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 3, NewTrainerHill_EventScript_GetNumCoins_4
# 566 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, NewTrainerHill_EventScript_GetNumCoins_5
# 569 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 5, NewTrainerHill_EventScript_GetNumCoins_6
# 572 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 6, NewTrainerHill_EventScript_GetNumCoins_7
# 575 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 7, NewTrainerHill_EventScript_GetNumCoins_8
# 578 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 8, NewTrainerHill_EventScript_GetNumCoins_9
# 581 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 9, NewTrainerHill_EventScript_GetNumCoins_10
# 584 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 10, NewTrainerHill_EventScript_GetNumCoins_11
# 587 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 11, NewTrainerHill_EventScript_GetNumCoins_12
# 590 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 12, NewTrainerHill_EventScript_GetNumCoins_13
# 593 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 13, NewTrainerHill_EventScript_GetNumCoins_14
# 596 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 14, NewTrainerHill_EventScript_GetNumCoins_15
# 599 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 15, NewTrainerHill_EventScript_GetNumCoins_16
# 602 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 16, NewTrainerHill_EventScript_GetNumCoins_17
# 605 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 17, NewTrainerHill_EventScript_GetNumCoins_18
# 608 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 18, NewTrainerHill_EventScript_GetNumCoins_19
# 612 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 613 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_2:
# 558 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 559 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_3:
# 561 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 562 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_4:
# 564 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 565 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_5:
# 567 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 568 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_6:
# 570 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 571 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_7:
# 573 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 574 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_8:
# 576 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 577 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_9:
# 579 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 580 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_10:
# 582 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 583 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_11:
# 585 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 586 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_12:
# 588 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 589 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_13:
# 591 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 592 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_14:
# 594 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 595 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_15:
# 597 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 598 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_16:
# 600 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 601 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_17:
# 603 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 604 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_18:
# 606 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 607 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return

NewTrainerHill_EventScript_GetNumCoins_19:
# 609 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_8, 1250
# 610 "data/maps/TrainerHill_Entrance/scripts.pory"
	bufferstring STR_VAR_1, NewTrainerHill_EventScript_GetNumCoins_Text_0
	return


TrainerHill_Entrance_EventScript_EntryTrigger::
# 619 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 620 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 621 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_TRAINER_HILL_STATE, 0, TrainerHill_Entrance_EventScript_ComeBackLater
# 622 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_EntryTrigger_Text_0, MSGBOX_YESNO
# 623 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, TrainerHill_Entrance_EventScript_BeginChallenge
# 624 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_EntryTrigger_Text_1, MSGBOX_DEFAULT
# 625 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 626 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 627 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 628 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


TrainerHill_Entrance_EventScript_ComeBackLater::
# 633 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 634 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_TEMP_9, TRUE
	goto_if_eq TrainerHill_Entrance_EventScript_ComeBackLater_2
# 638 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_ComeBackLater_Text_1, MSGBOX_DEFAULT
TrainerHill_Entrance_EventScript_ComeBackLater_1:
# 640 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 641 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 642 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 643 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end

TrainerHill_Entrance_EventScript_ComeBackLater_2:
# 635 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_ComeBackLater_Text_0, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_EventScript_ComeBackLater_1


TrainerHill_Entrance_EventScript_BeginChallenge::
# 648 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 649 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_BeginChallenge_Text_0, MSGBOX_DEFAULT
# 650 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 651 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_WalkToArena
# 652 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 653 "data/maps/TrainerHill_Entrance/scripts.pory"
	warp MAP_NEW_TRAINER_HILL, 9, 5
# 654 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	return


# 658 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_WalkToArena:
# 659 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 659 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 659 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 659 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
# 659 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_up
	step_end

TrainerHill_Entrance_EventScript_NewPostBattleCheck::
# 663 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 664 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_6, 1
# 665 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_RECEIVED_COIN_CASE, TrainerHill_Entrance_EventScript_ScottIntro
# 666 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_TRAINER_HILL_STATE, 100
	goto_if_gt TrainerHill_Entrance_EventScript_NewPostBattleCheck_2
TrainerHill_Entrance_EventScript_NewPostBattleCheck_1:
# 670 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	return

TrainerHill_Entrance_EventScript_NewPostBattleCheck_2:
# 667 "data/maps/TrainerHill_Entrance/scripts.pory"
	addvar VAR_TRAINER_HILL_STATE, -100
# 668 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto NewTrainerHill_EventScript_ReceiveReward
	goto TrainerHill_Entrance_EventScript_NewPostBattleCheck_1


TrainerHill_Entrance_EventScript_Records::
# 675 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 678 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_Records_Text_0, MSGBOX_DEFAULT
# 680 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 681 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


TrainerHill_Entrance_EventScript_ScottIntro::
# 686 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 687 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_TRAINERHILL_SCOTT, Common_Movement_ExclamationMark
# 688 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 689 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottIntro, MSGBOX_NPC
# 690 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 691 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAreYouInterested, MSGBOX_YESNO
# 692 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 693 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TrainerHill_Entrance_EventScript_ScottIntro_2
# 698 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAreYouSure, MSGBOX_YESNO
# 699 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 700 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TrainerHill_Entrance_EventScript_ScottIntro_5
# 705 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottDecline, MSGBOX_DEFAULT
# 706 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 707 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
TrainerHill_Entrance_EventScript_ScottIntro_1:
# 710 "data/maps/TrainerHill_Entrance/scripts.pory"
	giveitem ITEM_COIN_CASE
# 711 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitfanfare
# 712 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 713 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 714 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottDepart, MSGBOX_DEFAULT
# 715 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 716 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 717 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_TRAINERHILL_SCOTT, TrainerHill_Entrance_Movement_ScottDepart
# 718 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 719 "data/maps/TrainerHill_Entrance/scripts.pory"
	removeobject LOCALID_TRAINERHILL_SCOTT
# 720 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	return

TrainerHill_Entrance_EventScript_ScottIntro_2:
# 694 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAgree1st, MSGBOX_DEFAULT
# 695 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
	goto TrainerHill_Entrance_EventScript_ScottIntro_1

TrainerHill_Entrance_EventScript_ScottIntro_5:
# 701 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Text_ScottAgree2nd, MSGBOX_DEFAULT
# 702 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
	goto TrainerHill_Entrance_EventScript_ScottIntro_1


NewTrainerHill_EventScript_ReceiveReward_Text_0:
# 542 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Congratulations on your win! As\n"
	.string "promised, here are some Game Corner\l"
	.string "Coins as a reward for your performance.$"

NewTrainerHill_EventScript_ReceiveReward_Text_1:
# 544 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Received {STR_VAR_1} Coins!$"

NewTrainerHill_EventScript_GetNumCoins_Text_0:
# 559 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "1250$"

TrainerHill_Entrance_EventScript_EntryTrigger_Text_0:
# 622 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome to Trainer Hill! We have\n"
	.string "prepared a Pokémon battle exhibition\l"
	.string "with an audience, and Scott is offering\l"
	.string "a reward to the winner.\p"
	.string "Are you interested in competing?$"

TrainerHill_Entrance_EventScript_EntryTrigger_Text_1:
# 624 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I see. Please feel free to come back if\n"
	.string "you change your mind.$"

TrainerHill_Entrance_EventScript_ComeBackLater_Text_0:
# 635 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It will take some time for us to arrange\n"
	.string "another challenger for you. Please come\l"
	.string "back later.$"

TrainerHill_Entrance_EventScript_ComeBackLater_Text_1:
# 638 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry, but we are still working on\n"
	.string "arranging another battle here at\l"
	.string "Trainer Hill. Please check back later.$"

TrainerHill_Entrance_EventScript_BeginChallenge_Text_0:
# 649 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wonderful.\p"
	.string "Please proceed to the arena, and good\n"
	.string "luck!$"

TrainerHill_Entrance_EventScript_Records_Text_0:
# 678 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainer Hill is a new project, designed\n"
	.string "by Scott, to make Pokémon battles more\l"
	.string "exciting and engaging for both trainers\l"
	.string "and spectators alike.\p"
	.string "Elite Trainers from all over Hoenn, and\n"
	.string "beyond, can come here to test their\l"
	.string "mettle against each other.\p"
	.string "Trainer Hill also provides the people of\n"
	.string "Hoenn an opportunity to watch these\l"
	.string "battles up close, and cheer on their\l"
	.string "favorites!\p"
	.string "Trainer Hill is just the first of many\n"
	.string "institutions under development, as\l"
	.string "part of the Battle Frontier project.$"

TrainerHill_Text_ScottIntro::
# 463 "data/maps/TrainerHill_Entrance/scripts.pory"
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
# 467 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Are you interested in participating?$"

TrainerHill_Text_ScottAreYouSure::
# 471 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: Are you sure?\n"
	.string "Wattson has agreed to subsidize this\l"
	.string "project, so for every battle you win\l"
	.string "here in Trainer Hill, you'll receive Coins\l"
	.string "for the Mauville Game Corner as a\l"
	.string "reward.\n"
	.string "Is that enough to convince you?$"

TrainerHill_Text_ScottAgree1st::
# 475 "data/maps/TrainerHill_Entrance/scripts.pory"
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
# 479 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: Great! I've got another\n"
	.string "participant already lined up, so you can\l"
	.string "talk to the gate attendant whenever\l"
	.string "you're ready.\n"
	.string "You can take this Coin Case to store\l"
	.string "any prizes you win.$"

TrainerHill_Text_ScottDecline::
# 483 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: Oh well, I'm sure I'll find other\n"
	.string "Trainers interested in participating.\p"
	.string "In case you change your mind, take this.$"

TrainerHill_Text_ScottDepart::
# 487 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Scott: I've got to go spread the word\n"
	.string "and find more Trainers. I'll see you\l"
	.string "around!$"
