# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_2, 2
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SHELLY, 3
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SCIENTIST, 5
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_3, 7
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_4, 8
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_ARCHIE, 9
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts::
# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition:
# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 1, 6
# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 4, 6
# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 2, 2
# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly::
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ArchieDefeated::
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ArchiePostBattle, MSGBOX_DEFAULT
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_GRUNT_3
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_Delay48
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ArchieDepart, MSGBOX_DEFAULT
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_SHELLY
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_ARCHIE
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SCIENTIST
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Just a setback!$"
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my POKéMON?$"
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A TEAM MAGMA mob just passed\n"
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the WEATHER INSTITUTE.\p"
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "They appear to be headed for\n"
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "MT. PYRE!$"
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?! That is where the Orbs are!\p"
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We can't waste any more time here!$"
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\n"
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks to you, we're safe!\p"
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It might be an odd way of thanking you,\n"
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "but take this POKéMON.$"
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this POKéMON.$"
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received CASTFORM!$"
# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That POKéMON changes shape according\n"
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "to the weather conditions.\p"
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "There're plenty of them in the\n"
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "INSTITUTE--go ahead and take it.$"
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather:
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, a drought has been recorded\n"
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in {STR_VAR_1}.\p"
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather:
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, heavy rainfall has been\n"
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recorded over {STR_VAR_1}.\p"
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no longer being reported.\p"
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The occasional rainfall is a blessing,\n"
# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "really.$"

Route119_WeatherInstitute_2F_EventScript_Archie::
# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ArchieIntro, Route119_WeatherInstitute_2F_Text_ArchieOutro, Route119_WeatherInstitute_2F_EventScript_ArchieDefeated
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0
# 327 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	releaseall
	end


Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0:
# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It doesn't matter if we lose here.\p"
	.string "I've already found the records on the\n"
	.string "ancient Pokémon Maxie is after.\p"
	.string "Even better, we've learned of another…$"

Route119_WeatherInstitute_2F_Text_Grunt2Intro::
# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The Institute has lots of research on\n"
	.string "Pokémon who interact with the weather.\p"
	.string "We need to figure out what Maxie is\n"
	.string "planning, and how to stop it!$"

Route119_WeatherInstitute_2F_Text_Grunt5Intro::
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Archie has already found a few Pokémon\n"
	.string "that affect the Weather.\p"
	.string "Maybe now we'll be able to stop team\n"
	.string "Magma?$"

Route119_WeatherInstitute_2F_Text_Grunt2Defeat::
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Are we going to be stopped by a kid?$"

Route119_WeatherInstitute_2F_Text_Grunt5PostBattle::
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hmph, so what?\n"
	.string "Shelly and Archie found the important\l"
	.string "documents…$"

Route119_WeatherInstitute_2F_Text_Grunt2PostBattle::
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Maxie has been researching his plans\n"
	.string "for years.\p"
	.string "If we can't learn more about these\n"
	.string "ancient Pokémon, we won't be able to\l"
	.string "stop him from ruining the balance of\l"
	.string "Hoenn!$"

Route119_WeatherInstitute_2F_Text_Grunt3Intro::
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're Team Aqua!\n"
	.string "If others are threatening Nature, we'll\l"
	.string "make sure Nature can fight back!$"

Route119_WeatherInstitute_2F_Text_Grunt3PostBattle::
# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what could\n"
	.string "happen if we lose!\p"
	.string "You stay out of our way!$"

Route119_WeatherInstitute_2F_Text_ArchieIntro::
# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Archie: Ah, it's you again!\n"
	.string "Why do you insist on meddling in our\l"
	.string "important work?\p"
	.string "I'll show you the same thing I'm going to\n"
	.string "show Maxie. Witness what happens when\l"
	.string "you stand against the Forces of\l"
	.string "Nature!$"

Route119_WeatherInstitute_2F_Text_ArchieOutro::
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "This is the problem… Humans think they\n"
	.string "can fight against Nature…$"

Route119_WeatherInstitute_2F_Text_ShellyIntro::
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "These scientists spend so much time\n"
	.string "studying the weather, but they would\l"
	.string "just sit idly by and take measurements\l"
	.string "while Team Magma disrupted it beyond\l"
	.string "repair.\p"
	.string "We're here to take this valuable\n"
	.string "information and do something with it!$"

Route119_WeatherInstitute_2F_Text_ShellyDefeat::
# 336 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Was that… not bracing enough to keep\n"
	.string "you out?$"

Route119_WeatherInstitute_2F_Text_ShellyPostBattle::
# 340 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Even if you chase us out, I've collected\n"
	.string "the data we need.\p"
	.string "We'll figure out how to weaponize the\n"
	.string "weather, and put an end to Team Magma's\l"
	.string "plans!$"

Route119_WeatherInstitute_2F_Text_ArchiePostBattle::
# 344 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
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
# 348 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Archie: We cannot allow the Orbs to fall\n"
	.string "into Maxie's hands. We have to hurry to\l"
	.string "Mt. Pyre, too.$"

Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous::
# 352 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching weather for many\n"
	.string "years.\p"
	.string "Human activity is certainly impacting\n"
	.string "the climate, but the idea that we can\l"
	.string "predict or control how the environment\l"
	.string "will respond is laughable.$"
