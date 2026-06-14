# 1 "data/maps/Route127/scripts.pory"

# 2 "data/maps/Route127/scripts.pory"
Route127_MapScripts::
# 3 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route127_OnTransition
# 4 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route127_OnLoad
# 5 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route127_OnFrame
# 6 "data/maps/Route127/scripts.pory"
	.byte 0
# 7 "data/maps/Route127/scripts.pory"

# 8 "data/maps/Route127/scripts.pory"
Route127_OnTransition:
# 9 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 10 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 11 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_StartKyogreWeather
# 12 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_StartKyogreWeather
# 13 "data/maps/Route127/scripts.pory"
	end
# 14 "data/maps/Route127/scripts.pory"

# 15 "data/maps/Route127/scripts.pory"
Route127_OnLoad:
# 16 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute127North
# 17 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute127South
# 18 "data/maps/Route127/scripts.pory"
	end
# 19 "data/maps/Route127/scripts.pory"

# 20 "data/maps/Route127/scripts.pory"
Route127_OnFrame:
# 21 "data/maps/Route127/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 22 "data/maps/Route127/scripts.pory"
	.2byte 0
# 23 "data/maps/Route127/scripts.pory"

# 24 "data/maps/Route127/scripts.pory"
Route127_EventScript_Donny::
# 25 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_DONNY, Route127_Text_DonnyIntro, Route127_Text_DonnyDefeat
# 26 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route127/scripts.pory"
	end
# 28 "data/maps/Route127/scripts.pory"

# 29 "data/maps/Route127/scripts.pory"
Route127_EventScript_Jonah::
# 30 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_JONAH, Route127_Text_JonahIntro, Route127_Text_JonahDefeat
# 31 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route127/scripts.pory"
	end
# 33 "data/maps/Route127/scripts.pory"

# 34 "data/maps/Route127/scripts.pory"
Route127_EventScript_Henry::
# 35 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_HENRY, Route127_Text_HenryIntro, Route127_Text_HenryDefeat
# 36 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route127/scripts.pory"
	end
# 38 "data/maps/Route127/scripts.pory"

# 39 "data/maps/Route127/scripts.pory"
Route127_EventScript_Roger::
# 40 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ROGER, Route127_Text_RogerIntro, Route127_Text_RogerDefeat
# 41 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route127/scripts.pory"
	end
# 43 "data/maps/Route127/scripts.pory"

# 44 "data/maps/Route127/scripts.pory"
Route127_EventScript_Aidan::
# 45 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_AIDAN, Route127_Text_AidanIntro, Route127_Text_AidanDefeat
# 46 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route127/scripts.pory"
	end
# 48 "data/maps/Route127/scripts.pory"

# 49 "data/maps/Route127/scripts.pory"
Route127_EventScript_Athena::
# 50 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ATHENA, Route127_Text_AthenaIntro, Route127_Text_AthenaDefeat
# 51 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AthenaPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route127/scripts.pory"
	end
# 53 "data/maps/Route127/scripts.pory"

# 54 "data/maps/Route127/scripts.pory"
Route127_EventScript_Koji::
# 55 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, Route127_Text_KojiIntro, Route127_Text_KojiDefeat, Route127_EventScript_RegisterKoji
# 56 "data/maps/Route127/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 57 "data/maps/Route127/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route127_EventScript_RematchKoji
# 58 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostBattle, MSGBOX_DEFAULT
# 59 "data/maps/Route127/scripts.pory"
	release
# 60 "data/maps/Route127/scripts.pory"
	end
# 61 "data/maps/Route127/scripts.pory"

# 62 "data/maps/Route127/scripts.pory"
Route127_EventScript_RegisterKoji::
# 63 "data/maps/Route127/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 64 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiRegister, MSGBOX_DEFAULT
# 66 "data/maps/Route127/scripts.pory"
	//register_matchcall TRAINER_KOJI_1
# 67 "data/maps/Route127/scripts.pory"
	release
# 68 "data/maps/Route127/scripts.pory"
	end
# 69 "data/maps/Route127/scripts.pory"

# 70 "data/maps/Route127/scripts.pory"
Route127_EventScript_RematchKoji::
# 71 "data/maps/Route127/scripts.pory"
	trainerbattle_rematch TRAINER_KOJI_1, Route127_Text_KojiRematchIntro, Route127_Text_KojiRematchDefeat
# 72 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostRematch, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route127/scripts.pory"
	end

Route127_EventScript_Camden::
# 80 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_Camden_Text_0, MSGBOX_NPC
	end


Route127_EventScript_BraveBirdKeeper::
# 86 "data/maps/Route127/scripts.pory"
	lock
# 87 "data/maps/Route127/scripts.pory"
	faceplayer
# 88 "data/maps/Route127/scripts.pory"
	checkitem ITEM_TM_BRAVE_BIRD
# 89 "data/maps/Route127/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route127_EventScript_BraveBirdKeeper_2
# 96 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_BraveBirdKeeper_Text_1, MSGBOX_NPC
Route127_EventScript_BraveBirdKeeper_1:
# 98 "data/maps/Route127/scripts.pory"
	releaseall
	end

Route127_EventScript_BraveBirdKeeper_2:
# 90 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_BraveBirdKeeper_Text_0, MSGBOX_NPC
# 91 "data/maps/Route127/scripts.pory"
	closemessage
# 92 "data/maps/Route127/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 93 "data/maps/Route127/scripts.pory"
	waitfanfare
	goto Route127_EventScript_BraveBirdKeeper_1


Route127_EventScript_BlockSouthMossdeep::
# 107 "data/maps/Route127/scripts.pory"
	lock
# 108 "data/maps/Route127/scripts.pory"
	faceplayer
# 109 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_CantCross127Yet, MSGBOX_NPC
# 110 "data/maps/Route127/scripts.pory"
	closemessage
# 111 "data/maps/Route127/scripts.pory"
	releaseall
	end


Route127_EventScript_BlockRouteTrigger0::
# 116 "data/maps/Route127/scripts.pory"
	setvar VAR_TEMP_8, 0
# 117 "data/maps/Route127/scripts.pory"
	goto Route127_EventScript_HaltPlayer
	return


Route127_EventScript_BlockRouteTrigger1::
# 121 "data/maps/Route127/scripts.pory"
	setvar VAR_TEMP_8, 1
# 122 "data/maps/Route127/scripts.pory"
	goto Route127_EventScript_HaltPlayer
	return


Route127_EventScript_BlockRouteTrigger2::
# 126 "data/maps/Route127/scripts.pory"
	setvar VAR_TEMP_8, 2
# 127 "data/maps/Route127/scripts.pory"
	goto Route127_EventScript_HaltPlayer
	return


Route127_EventScript_BlockRouteTrigger3::
# 131 "data/maps/Route127/scripts.pory"
	setvar VAR_TEMP_8, 3
# 132 "data/maps/Route127/scripts.pory"
	goto Route127_EventScript_HaltPlayer
	return


Route127_EventScript_BlockRouteTrigger4::
# 136 "data/maps/Route127/scripts.pory"
	setvar VAR_TEMP_8, 4
# 137 "data/maps/Route127/scripts.pory"
	goto Route127_EventScript_HaltPlayer
	return


Route127_EventScript_BlockRouteTrigger5::
# 141 "data/maps/Route127/scripts.pory"
	setvar VAR_TEMP_8, 5
# 142 "data/maps/Route127/scripts.pory"
	goto Route127_EventScript_HaltPlayer
	return


Route127_EventScript_HaltPlayer::
# 147 "data/maps/Route127/scripts.pory"
	lock
# 148 "data/maps/Route127/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, Route127_EventScript_HaltPlayer_2
# 153 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Common_Movement_ExclamationMark
# 154 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route127/scripts.pory"
	switch VAR_TEMP_8
# 157 "data/maps/Route127/scripts.pory"
	case 0, Route127_EventScript_HaltPlayer_6
# 159 "data/maps/Route127/scripts.pory"
	case 1, Route127_EventScript_HaltPlayer_7
# 161 "data/maps/Route127/scripts.pory"
	case 2, Route127_EventScript_HaltPlayer_8
# 163 "data/maps/Route127/scripts.pory"
	case 3, Route127_EventScript_HaltPlayer_9
# 165 "data/maps/Route127/scripts.pory"
	case 4, Route127_EventScript_HaltPlayer_10
# 167 "data/maps/Route127/scripts.pory"
	case 5, Route127_EventScript_HaltPlayer_11
Route127_EventScript_HaltPlayer_4:
# 170 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 171 "data/maps/Route127/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 172 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_CantCross127Yet, MSGBOX_NPC
# 176 "data/maps/Route127/scripts.pory"
	closemessage
# 177 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerPushPlayer
# 178 "data/maps/Route127/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUpOneStep
# 179 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 180 "data/maps/Route127/scripts.pory"
	delay 20
# 181 "data/maps/Route127/scripts.pory"
	switch VAR_TEMP_8
# 182 "data/maps/Route127/scripts.pory"
	case 0, Route127_EventScript_HaltPlayer_14
# 184 "data/maps/Route127/scripts.pory"
	case 1, Route127_EventScript_HaltPlayer_15
# 186 "data/maps/Route127/scripts.pory"
	case 2, Route127_EventScript_HaltPlayer_16
# 188 "data/maps/Route127/scripts.pory"
	case 3, Route127_EventScript_HaltPlayer_17
# 190 "data/maps/Route127/scripts.pory"
	case 4, Route127_EventScript_HaltPlayer_18
# 192 "data/maps/Route127/scripts.pory"
	case 5, Route127_EventScript_HaltPlayer_19
Route127_EventScript_HaltPlayer_12:
# 195 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route127/scripts.pory"
	delay 20
# 197 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Common_Movement_FaceRight
# 198 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route127/scripts.pory"
	releaseall
	end

Route127_EventScript_HaltPlayer_2:
# 149 "data/maps/Route127/scripts.pory"
	setvar VAR_TEMP_7, 1
# 150 "data/maps/Route127/scripts.pory"
	releaseall
	end

Route127_EventScript_HaltPlayer_6:
# 158 "data/maps/Route127/scripts.pory"
	delay 5
	goto Route127_EventScript_HaltPlayer_4

Route127_EventScript_HaltPlayer_7:
# 160 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerHaltPlayer1
	goto Route127_EventScript_HaltPlayer_4

Route127_EventScript_HaltPlayer_8:
# 162 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerHaltPlayer2
	goto Route127_EventScript_HaltPlayer_4

Route127_EventScript_HaltPlayer_9:
# 164 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerHaltPlayer3
	goto Route127_EventScript_HaltPlayer_4

Route127_EventScript_HaltPlayer_10:
# 166 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerHaltPlayer4
	goto Route127_EventScript_HaltPlayer_4

Route127_EventScript_HaltPlayer_11:
# 168 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerHaltPlayer5
	goto Route127_EventScript_HaltPlayer_4

Route127_EventScript_HaltPlayer_14:
# 183 "data/maps/Route127/scripts.pory"
	delay 5
	goto Route127_EventScript_HaltPlayer_12

Route127_EventScript_HaltPlayer_15:
# 185 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerReturnToSpot1
	goto Route127_EventScript_HaltPlayer_12

Route127_EventScript_HaltPlayer_16:
# 187 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerReturnToSpot2
	goto Route127_EventScript_HaltPlayer_12

Route127_EventScript_HaltPlayer_17:
# 189 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerReturnToSpot3
	goto Route127_EventScript_HaltPlayer_12

Route127_EventScript_HaltPlayer_18:
# 191 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerReturnToSpot4
	goto Route127_EventScript_HaltPlayer_12

Route127_EventScript_HaltPlayer_19:
# 193 "data/maps/Route127/scripts.pory"
	applymovement LOCALID_ROUTE127_SWIMMERBLOCK, Route127_Movement_SwimmerReturnToSpot5
	goto Route127_EventScript_HaltPlayer_12


# 205 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerPushPlayer:
# 206 "data/maps/Route127/scripts.pory"
	walk_right
	step_end

# 209 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerHaltPlayer1:
# 210 "data/maps/Route127/scripts.pory"
	walk_fast_right
	step_end

# 213 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerHaltPlayer2:
# 214 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 214 "data/maps/Route127/scripts.pory"
	walk_fast_right
	step_end

# 217 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerHaltPlayer3:
# 218 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route127/scripts.pory"
	walk_fast_right
	step_end

# 221 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerHaltPlayer4:
# 222 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 222 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 222 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 222 "data/maps/Route127/scripts.pory"
	walk_fast_right
	step_end

# 225 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerHaltPlayer5:
# 226 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route127/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route127/scripts.pory"
	walk_fast_right
	step_end

# 229 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerReturnToSpot1:
# 230 "data/maps/Route127/scripts.pory"
	walk_left
	step_end

# 233 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerReturnToSpot2:
# 234 "data/maps/Route127/scripts.pory"
	walk_left
# 234 "data/maps/Route127/scripts.pory"
	walk_left
	step_end

# 237 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerReturnToSpot3:
# 238 "data/maps/Route127/scripts.pory"
	walk_left
# 238 "data/maps/Route127/scripts.pory"
	walk_left
# 238 "data/maps/Route127/scripts.pory"
	walk_left
	step_end

# 241 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerReturnToSpot4:
# 242 "data/maps/Route127/scripts.pory"
	walk_left
# 242 "data/maps/Route127/scripts.pory"
	walk_left
# 242 "data/maps/Route127/scripts.pory"
	walk_left
# 242 "data/maps/Route127/scripts.pory"
	walk_left
	step_end

# 245 "data/maps/Route127/scripts.pory"
Route127_Movement_SwimmerReturnToSpot5:
# 246 "data/maps/Route127/scripts.pory"
	walk_left
# 246 "data/maps/Route127/scripts.pory"
	walk_left
# 246 "data/maps/Route127/scripts.pory"
	walk_left
# 246 "data/maps/Route127/scripts.pory"
	walk_left
# 246 "data/maps/Route127/scripts.pory"
	walk_left
	step_end

Route127_EventScript_Camden_Text_0:
# 80 "data/maps/Route127/scripts.pory"
	.string "Sometimes when I go into the water, I\n"
	.string "look down, and get dizzy.\p"
	.string "I could never bring myself to go in\n"
	.string "deeper.$"

Route127_EventScript_BraveBirdKeeper_Text_0:
# 90 "data/maps/Route127/scripts.pory"
	.string "People underestimate the power of Bird\n"
	.string "Pokémon all the time.\p"
	.string "But if you attack with full force from\n"
	.string "the sky, few foes can withstand it!$"

Route127_EventScript_BraveBirdKeeper_Text_1:
# 96 "data/maps/Route127/scripts.pory"
	.string "I hear there is a tower nearby where\n"
	.string "powerful Flying-types gather.$"

Route127_EventScript_CantCross127Yet::
# 102 "data/maps/Route127/scripts.pory"
	.string "The water currents in this area are\n"
	.string "really bad right now.\p"
	.string "You won't be able to head this way until\n"
	.string "they calm down.$"
