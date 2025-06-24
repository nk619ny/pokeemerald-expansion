# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts::
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition:
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 1, 6
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 4, 6
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 2, 2
# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly::
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ArchieDefeated::
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ArchiePostBattle, MSGBOX_DEFAULT
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_Delay48
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ArchieDepart, MSGBOX_DEFAULT
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_SHELLY
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_4
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_ARCHIE
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Just a setback!$"
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my POKéMON?$"
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A TEAM MAGMA mob just passed\n"
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the WEATHER INSTITUTE.\p"
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "They appear to be headed for\n"
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "MT. PYRE!$"
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?! That is where the Orbs are!\p"
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We can't waste any more time here!$"
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\n"
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks to you, we're safe!\p"
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It might be an odd way of thanking you,\n"
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "but take this POKéMON.$"
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this POKéMON.$"
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received CASTFORM!$"
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That POKéMON changes shape according\n"
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "to the weather conditions.\p"
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "There're plenty of them in the\n"
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "INSTITUTE--go ahead and take it.$"
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather:
# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, a drought has been recorded\n"
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in {STR_VAR_1}.\p"
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather:
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, heavy rainfall has been\n"
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recorded over {STR_VAR_1}.\p"
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no longer being reported.\p"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The occasional rainfall is a blessing,\n"
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "really.$"

Route119_WeatherInstitute_2F_EventScript_Archie::
# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ArchieIntro, Route119_WeatherInstitute_2F_Text_ArchieOutro, Route119_WeatherInstitute_2F_EventScript_ArchieDefeated
# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0
# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	releaseall
	end


Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0:
# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It doesn't matter if we lose here.\p"
	.string "I've already found the records on the\n"
	.string "ancient Pokémon Maxie is after.\p"
	.string "Even better, we've learned of another…$"

Route119_WeatherInstitute_2F_Text_Grunt2Intro::
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The Institute has lots of research on\n"
	.string "Pokémon who interact with the weather.\p"
	.string "We need to figure out what Maxie is\n"
	.string "planning, and how to stop it!$"

Route119_WeatherInstitute_2F_Text_Grunt5Intro::
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Archie has already found a few Pokémon\n"
	.string "that affect the Weather.\p"
	.string "Maybe now we'll be able to stop team\n"
	.string "Magma?$"

Route119_WeatherInstitute_2F_Text_Grunt2Defeat::
# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Are we going to be stopped by a kid?$"

Route119_WeatherInstitute_2F_Text_Grunt5PostBattle::
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hmph, so what?\n"
	.string "Shelly and Archie found the important\l"
	.string "documents…$"

Route119_WeatherInstitute_2F_Text_Grunt2PostBattle::
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Maxie has been researching his plans\n"
	.string "for years.\p"
	.string "If we can't learn more about these\n"
	.string "ancient Pokémon, we won't be able to\l"
	.string "stop him from ruining the balance of\l"
	.string "Hoenn!$"

Route119_WeatherInstitute_2F_Text_Grunt3Intro::
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're Team Aqua!\n"
	.string "If others are threatening Nature, we'll\l"
	.string "make sure Nature can fight back!$"

Route119_WeatherInstitute_2F_Text_Grunt3PostBattle::
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what could\n"
	.string "happen if we lose!\p"
	.string "You stay out of our way!$"

Route119_WeatherInstitute_2F_Text_ArchieIntro::
# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Archie: Ah, it's you again!\n"
	.string "Why do you insist on meddling in our\l"
	.string "important work?\p"
	.string "I'll show you the same thing I'm going to\n"
	.string "show Maxie. Witness what happens when\l"
	.string "you stand against the Forces of\l"
	.string "Nature!$"

Route119_WeatherInstitute_2F_Text_ArchieOutro::
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "This is the problem… Humans think they\n"
	.string "can fight against Nature…$"

Route119_WeatherInstitute_2F_Text_ShellyIntro::
# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "These scientists spend so much time\n"
	.string "studying the weather, but they would\l"
	.string "just sit idly by and take measurements\l"
	.string "while Team Magma disrupted it beyond\l"
	.string "repair.\p"
	.string "We're here to take this valuable\n"
	.string "information and do something with it!$"

Route119_WeatherInstitute_2F_Text_ShellyDefeat::
# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Was that… not bracing enough to keep\n"
	.string "you out?$"

Route119_WeatherInstitute_2F_Text_ShellyPostBattle::
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Even if you chase us out, I've collected\n"
	.string "the data we need.\p"
	.string "We'll figure out how to weaponize the\n"
	.string "weather, and put an end to Team Magma's\l"
	.string "plans!$"

Route119_WeatherInstitute_2F_Text_ArchiePostBattle::
# 336 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Day by day, human actions are polluting\n"
	.string "the oceans, damaging the forests, and\l"
	.string "changing the climate.\p"
	.string "It would be one then for us to suffer\n"
	.string "the consequences of our actions, but\l"
	.string "the innocent Pokémon and animals of\l"
	.string "Hoenn won't be able to adapt in time.\p"
	.string "We need to go back… to how things were\n"
	.string "before.$"

Route119_WeatherInstitute_2F_Text_ArchieDepart::
# 340 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Archie: We cannot allow the Orbs to fall\n"
	.string "into Maxie's hands. We have to hurry to\l"
	.string "Mt. Pyre, too.$"

Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous::
# 344 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching weather for many\n"
	.string "years.\p"
	.string "Human activity is certainly impacting\n"
	.string "the climate, but the idea that we can\l"
	.string "predict or control how the environment\l"
	.string "will respond is laughable.$"
