# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 32 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 33 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 34 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 35 "data/maps/SlateportCity/scripts.pory"
	end
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 39 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 40 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 41 "data/maps/SlateportCity/scripts.pory"
	return
# 42 "data/maps/SlateportCity/scripts.pory"

# 43 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/SlateportCity/scripts.pory"
	return
# 59 "data/maps/SlateportCity/scripts.pory"

# 60 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 61 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 63 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 64 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 65 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/SlateportCity/scripts.pory"
	return
# 67 "data/maps/SlateportCity/scripts.pory"

# 68 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 70 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 71 "data/maps/SlateportCity/scripts.pory"
	return
# 72 "data/maps/SlateportCity/scripts.pory"

# 73 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 74 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 75 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 76 "data/maps/SlateportCity/scripts.pory"

# 77 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 78 "data/maps/SlateportCity/scripts.pory"
	lockall
# 79 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 80 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 81 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 82 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 84 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 85 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 86 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 88 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 89 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 92 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 93 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 94 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 95 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 96 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 97 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 98 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 99 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 100 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 102 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 103 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 105 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 106 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 107 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 108 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 109 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 110 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 111 "data/maps/SlateportCity/scripts.pory"
	end
# 112 "data/maps/SlateportCity/scripts.pory"

# 113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 114 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 115 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 116 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 117 "data/maps/SlateportCity/scripts.pory"
	step_end
# 118 "data/maps/SlateportCity/scripts.pory"

# 119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 120 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/SlateportCity/scripts.pory"
	step_end
# 128 "data/maps/SlateportCity/scripts.pory"

# 129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	step_end
# 139 "data/maps/SlateportCity/scripts.pory"

# 140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 141 "data/maps/SlateportCity/scripts.pory"
	lock
# 142 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 143 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 144 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 145 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 146 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 147 "data/maps/SlateportCity/scripts.pory"
	release
# 148 "data/maps/SlateportCity/scripts.pory"
	end
# 149 "data/maps/SlateportCity/scripts.pory"

# 150 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 152 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 157 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
	pokemartlistend

# 162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 163 "data/maps/SlateportCity/scripts.pory"
	lock
# 164 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 165 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 166 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 167 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 168 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 169 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 170 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 171 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 174 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 175 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 176 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 177 "data/maps/SlateportCity/scripts.pory"
	release
# 178 "data/maps/SlateportCity/scripts.pory"
	end
# 179 "data/maps/SlateportCity/scripts.pory"

# 180 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 181 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity/scripts.pory"
	release
# 183 "data/maps/SlateportCity/scripts.pory"
	end
# 184 "data/maps/SlateportCity/scripts.pory"

# 185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 186 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity/scripts.pory"
	release
# 188 "data/maps/SlateportCity/scripts.pory"
	end
# 189 "data/maps/SlateportCity/scripts.pory"

# 190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 191 "data/maps/SlateportCity/scripts.pory"
	lock
# 192 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 193 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 194 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 195 "data/maps/SlateportCity/scripts.pory"
	release
# 196 "data/maps/SlateportCity/scripts.pory"
	end
# 197 "data/maps/SlateportCity/scripts.pory"

# 198 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 199 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 200 "data/maps/SlateportCity/scripts.pory"
	release
# 201 "data/maps/SlateportCity/scripts.pory"
	end
# 202 "data/maps/SlateportCity/scripts.pory"

# 203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 204 "data/maps/SlateportCity/scripts.pory"
	lock
# 205 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 206 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 207 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 208 "data/maps/SlateportCity/scripts.pory"
	release
# 209 "data/maps/SlateportCity/scripts.pory"
	end
# 210 "data/maps/SlateportCity/scripts.pory"

# 211 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 212 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 213 "data/maps/SlateportCity/scripts.pory"
	release
# 214 "data/maps/SlateportCity/scripts.pory"
	end
# 215 "data/maps/SlateportCity/scripts.pory"

# 216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 217 "data/maps/SlateportCity/scripts.pory"
	lock
# 218 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 219 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 220 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 221 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 222 "data/maps/SlateportCity/scripts.pory"
	release
# 223 "data/maps/SlateportCity/scripts.pory"
	end
# 224 "data/maps/SlateportCity/scripts.pory"

# 225 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 226 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 227 "data/maps/SlateportCity/scripts.pory"
	release
# 228 "data/maps/SlateportCity/scripts.pory"
	end
# 229 "data/maps/SlateportCity/scripts.pory"

# 230 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 231 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity/scripts.pory"
	release
# 233 "data/maps/SlateportCity/scripts.pory"
	end
# 234 "data/maps/SlateportCity/scripts.pory"

# 235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 236 "data/maps/SlateportCity/scripts.pory"
	lock
# 237 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 238 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 239 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 240 "data/maps/SlateportCity/scripts.pory"
	release
# 241 "data/maps/SlateportCity/scripts.pory"
	end
# 242 "data/maps/SlateportCity/scripts.pory"

# 243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 244 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 245 "data/maps/SlateportCity/scripts.pory"
	release
# 246 "data/maps/SlateportCity/scripts.pory"
	end
# 247 "data/maps/SlateportCity/scripts.pory"

# 248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 249 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 250 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 251 "data/maps/SlateportCity/scripts.pory"
	end
# 252 "data/maps/SlateportCity/scripts.pory"

# 253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 254 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 255 "data/maps/SlateportCity/scripts.pory"
	end
# 256 "data/maps/SlateportCity/scripts.pory"

# 257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 258 "data/maps/SlateportCity/scripts.pory"
	lock
# 259 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 260 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 261 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 262 "data/maps/SlateportCity/scripts.pory"
	release
# 263 "data/maps/SlateportCity/scripts.pory"
	end
# 264 "data/maps/SlateportCity/scripts.pory"

# 265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 266 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 267 "data/maps/SlateportCity/scripts.pory"
	release
# 268 "data/maps/SlateportCity/scripts.pory"
	end
# 269 "data/maps/SlateportCity/scripts.pory"

# 270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 271 "data/maps/SlateportCity/scripts.pory"
	lock
# 272 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 273 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 274 "data/maps/SlateportCity/scripts.pory"
	release
# 275 "data/maps/SlateportCity/scripts.pory"
	end
# 276 "data/maps/SlateportCity/scripts.pory"

# 277 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 278 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 279 "data/maps/SlateportCity/scripts.pory"
	end
# 280 "data/maps/SlateportCity/scripts.pory"

# 281 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 282 "data/maps/SlateportCity/scripts.pory"
	lockall
# 283 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 284 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 285 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 286 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 287 "data/maps/SlateportCity/scripts.pory"
	end
# 288 "data/maps/SlateportCity/scripts.pory"

# 289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 290 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 291 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 292 "data/maps/SlateportCity/scripts.pory"
	end
# 293 "data/maps/SlateportCity/scripts.pory"

# 294 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 295 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 296 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 297 "data/maps/SlateportCity/scripts.pory"
	end
# 298 "data/maps/SlateportCity/scripts.pory"

# 299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 300 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 301 "data/maps/SlateportCity/scripts.pory"
	end
# 302 "data/maps/SlateportCity/scripts.pory"

# 303 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 304 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 305 "data/maps/SlateportCity/scripts.pory"
	end
# 306 "data/maps/SlateportCity/scripts.pory"

# 307 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 308 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 309 "data/maps/SlateportCity/scripts.pory"
	end
# 310 "data/maps/SlateportCity/scripts.pory"

# 311 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 312 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 313 "data/maps/SlateportCity/scripts.pory"
	end
# 314 "data/maps/SlateportCity/scripts.pory"

# 315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 316 "data/maps/SlateportCity/scripts.pory"
	lockall
# 317 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 318 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 319 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 320 "data/maps/SlateportCity/scripts.pory"
	end
# 321 "data/maps/SlateportCity/scripts.pory"

# 322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 323 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 324 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 325 "data/maps/SlateportCity/scripts.pory"
	end
# 326 "data/maps/SlateportCity/scripts.pory"

# 327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 328 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 329 "data/maps/SlateportCity/scripts.pory"
	end
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 332 "data/maps/SlateportCity/scripts.pory"
	lock
# 333 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 334 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 335 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 336 "data/maps/SlateportCity/scripts.pory"
	release
# 337 "data/maps/SlateportCity/scripts.pory"
	end
# 338 "data/maps/SlateportCity/scripts.pory"

# 339 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 340 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 341 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 342 "data/maps/SlateportCity/scripts.pory"
	release
# 343 "data/maps/SlateportCity/scripts.pory"
	end
# 344 "data/maps/SlateportCity/scripts.pory"

# 345 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 346 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 347 "data/maps/SlateportCity/scripts.pory"
	end
# 348 "data/maps/SlateportCity/scripts.pory"

# 349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 350 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 351 "data/maps/SlateportCity/scripts.pory"
	end
# 352 "data/maps/SlateportCity/scripts.pory"

# 353 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 354 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 355 "data/maps/SlateportCity/scripts.pory"
	end
# 356 "data/maps/SlateportCity/scripts.pory"

# 357 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 358 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 359 "data/maps/SlateportCity/scripts.pory"
	end
# 360 "data/maps/SlateportCity/scripts.pory"

# 361 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 362 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 363 "data/maps/SlateportCity/scripts.pory"
	end
# 364 "data/maps/SlateportCity/scripts.pory"

# 365 "data/maps/SlateportCity/scripts.pory"
/* SlateportCity_EventScript_AquaGrunt1::
# 366 "data/maps/SlateportCity/scripts.pory"
	lock
# 367 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 368 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 369 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 370 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 371 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 372 "data/maps/SlateportCity/scripts.pory"
	release
# 373 "data/maps/SlateportCity/scripts.pory"
	end
# 374 "data/maps/SlateportCity/scripts.pory"

# 375 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 376 "data/maps/SlateportCity/scripts.pory"
	lock
# 377 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 378 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 379 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 380 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 381 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 382 "data/maps/SlateportCity/scripts.pory"
	release
# 383 "data/maps/SlateportCity/scripts.pory"
	end
# 384 "data/maps/SlateportCity/scripts.pory"

# 385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 386 "data/maps/SlateportCity/scripts.pory"
	lock
# 387 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 388 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 389 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 390 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 391 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 392 "data/maps/SlateportCity/scripts.pory"
	release
# 393 "data/maps/SlateportCity/scripts.pory"
	end
# 394 "data/maps/SlateportCity/scripts.pory"

# 395 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 396 "data/maps/SlateportCity/scripts.pory"
	lock
# 397 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 398 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 399 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 400 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 401 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 402 "data/maps/SlateportCity/scripts.pory"
	release
# 403 "data/maps/SlateportCity/scripts.pory"
	end
# 404 "data/maps/SlateportCity/scripts.pory"

# 405 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 406 "data/maps/SlateportCity/scripts.pory"
	lock
# 407 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 408 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 409 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 410 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 411 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 412 "data/maps/SlateportCity/scripts.pory"
	release
# 413 "data/maps/SlateportCity/scripts.pory"
	end
# 414 "data/maps/SlateportCity/scripts.pory"

# 415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 416 "data/maps/SlateportCity/scripts.pory"
	lock
# 417 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 418 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 419 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 420 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 421 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 422 "data/maps/SlateportCity/scripts.pory"
	release
# 423 "data/maps/SlateportCity/scripts.pory"
	end
# 424 "data/maps/SlateportCity/scripts.pory"

# 425 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 426 "data/maps/SlateportCity/scripts.pory"
	lock
# 427 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 428 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 429 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 430 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 431 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 432 "data/maps/SlateportCity/scripts.pory"
	release
# 433 "data/maps/SlateportCity/scripts.pory"
	end
# 434 "data/maps/SlateportCity/scripts.pory"

# 435 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 436 "data/maps/SlateportCity/scripts.pory"
	lock
# 437 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 438 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 439 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 440 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 441 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 442 "data/maps/SlateportCity/scripts.pory"
	release
# 443 "data/maps/SlateportCity/scripts.pory"
	end
# 444 "data/maps/SlateportCity/scripts.pory"

# 445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 446 "data/maps/SlateportCity/scripts.pory"
	lock
# 447 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 448 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 449 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 450 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 451 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 452 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 453 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 454 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 455 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 456 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 457 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 458 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 459 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 460 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 461 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 462 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 463 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 464 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 465 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 466 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 467 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 468 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 469 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 470 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 471 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 472 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 473 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 474 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 475 "data/maps/SlateportCity/scripts.pory"
	release
# 476 "data/maps/SlateportCity/scripts.pory"
	end
# 477 "data/maps/SlateportCity/scripts.pory"

# 478 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 479 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 480 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 481 "data/maps/SlateportCity/scripts.pory"
	step_end
# 482 "data/maps/SlateportCity/scripts.pory"

# 483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 484 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 485 "data/maps/SlateportCity/scripts.pory"
	end
# 486 "data/maps/SlateportCity/scripts.pory"

# 487 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 488 "data/maps/SlateportCity/scripts.pory"
	lock
# 489 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 490 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 491 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 492 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 493 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 494 "data/maps/SlateportCity/scripts.pory"
	release
# 495 "data/maps/SlateportCity/scripts.pory"
	end   */
# 496 "data/maps/SlateportCity/scripts.pory"

# 497 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 498 "data/maps/SlateportCity/scripts.pory"
	lock
# 499 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 500 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 501 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 502 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 503 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 504 "data/maps/SlateportCity/scripts.pory"
	release
# 505 "data/maps/SlateportCity/scripts.pory"
	end
# 506 "data/maps/SlateportCity/scripts.pory"

# 507 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 508 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 509 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 510 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 511 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
	pokemartlistend

# 516 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 517 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 518 "data/maps/SlateportCity/scripts.pory"
	release
# 519 "data/maps/SlateportCity/scripts.pory"
	end
# 520 "data/maps/SlateportCity/scripts.pory"

# 521 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 522 "data/maps/SlateportCity/scripts.pory"
	lock
# 523 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 524 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 525 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 526 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 527 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 528 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 529 "data/maps/SlateportCity/scripts.pory"
	release
# 530 "data/maps/SlateportCity/scripts.pory"
	end
# 531 "data/maps/SlateportCity/scripts.pory"

# 532 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 533 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 534 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 535 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 536 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 537 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 538 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 539 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 540 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 541 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 542 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 543 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 544 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 545 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 546 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 547 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
	pokemartlistend

# 552 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 553 "data/maps/SlateportCity/scripts.pory"
	lock
# 554 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 555 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 556 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 557 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 558 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 559 "data/maps/SlateportCity/scripts.pory"
	release
# 560 "data/maps/SlateportCity/scripts.pory"
	end
# 561 "data/maps/SlateportCity/scripts.pory"

# 562 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 563 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 564 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 565 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
	pokemartlistend

# 570 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 571 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 572 "data/maps/SlateportCity/scripts.pory"
	lockall
# 573 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 574 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 575 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 576 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 577 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 579 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 580 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 582 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 583 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 584 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 585 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 586 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 587 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 588 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 589 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 590 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 591 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 593 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 594 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 595 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 596 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 597 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 598 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 599 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 600 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 602 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 604 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 605 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 606 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 607 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 608 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 610 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 611 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 612 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 613 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 614 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 615 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 616 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 618 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 619 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 620 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 621 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 622 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 623 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 624 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 625 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 626 "data/maps/SlateportCity/scripts.pory"
	end
# 627 "data/maps/SlateportCity/scripts.pory"

# 628 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 629 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 630 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 631 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 632 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 633 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 634 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 635 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 636 "data/maps/SlateportCity/scripts.pory"
	step_end
# 637 "data/maps/SlateportCity/scripts.pory"

# 638 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 639 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 640 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 641 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 642 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 643 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 644 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 645 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 646 "data/maps/SlateportCity/scripts.pory"
	step_end
# 647 "data/maps/SlateportCity/scripts.pory"

# 648 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 649 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 650 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 651 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 653 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 654 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 656 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 657 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 658 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 659 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 661 "data/maps/SlateportCity/scripts.pory"
	step_end
# 662 "data/maps/SlateportCity/scripts.pory"

# 663 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 664 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 666 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 667 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 668 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 669 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 670 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 671 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 677 "data/maps/SlateportCity/scripts.pory"
	step_end
# 678 "data/maps/SlateportCity/scripts.pory"

# 679 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 680 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 681 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 682 "data/maps/SlateportCity/scripts.pory"
	step_end
# 683 "data/maps/SlateportCity/scripts.pory"

# 684 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 685 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 686 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 688 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 689 "data/maps/SlateportCity/scripts.pory"
	step_end
# 690 "data/maps/SlateportCity/scripts.pory"

# 691 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 692 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 693 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 694 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 695 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 696 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 697 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 698 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 699 "data/maps/SlateportCity/scripts.pory"
	step_end
# 700 "data/maps/SlateportCity/scripts.pory"

# 701 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 702 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 703 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 704 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 705 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 706 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 707 "data/maps/SlateportCity/scripts.pory"
	step_end
# 708 "data/maps/SlateportCity/scripts.pory"

# 709 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 710 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 711 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 712 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 713 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 714 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 715 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 716 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 717 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 718 "data/maps/SlateportCity/scripts.pory"
	step_end
# 719 "data/maps/SlateportCity/scripts.pory"

# 720 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 721 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 722 "data/maps/SlateportCity/scripts.pory"
	end
# 723 "data/maps/SlateportCity/scripts.pory"

# 724 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 725 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 726 "data/maps/SlateportCity/scripts.pory"
	end
# 727 "data/maps/SlateportCity/scripts.pory"

# 728 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 729 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 730 "data/maps/SlateportCity/scripts.pory"
	end
# 731 "data/maps/SlateportCity/scripts.pory"

# 732 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 733 "data/maps/SlateportCity/scripts.pory"
	lock
# 734 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 735 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 736 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 737 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 738 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 739 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 740 "data/maps/SlateportCity/scripts.pory"
	release
# 741 "data/maps/SlateportCity/scripts.pory"
	end
# 742 "data/maps/SlateportCity/scripts.pory"

# 743 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 744 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 745 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 746 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 747 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 748 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 749 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 750 "data/maps/SlateportCity/scripts.pory"
	end
# 751 "data/maps/SlateportCity/scripts.pory"

# 752 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 753 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 754 "data/maps/SlateportCity/scripts.pory"
	release
# 755 "data/maps/SlateportCity/scripts.pory"
	end
# 756 "data/maps/SlateportCity/scripts.pory"

# 757 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 758 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 759 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 760 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 761 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 762 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 763 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 764 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 765 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 766 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 767 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 768 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 769 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 770 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 771 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 772 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 773 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 774 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 775 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 776 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 777 "data/maps/SlateportCity/scripts.pory"
	end
# 778 "data/maps/SlateportCity/scripts.pory"

# 779 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 780 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 781 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 782 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 783 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 784 "data/maps/SlateportCity/scripts.pory"
	end
# 785 "data/maps/SlateportCity/scripts.pory"

# 786 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 787 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 788 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 789 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 790 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 791 "data/maps/SlateportCity/scripts.pory"
	end
# 792 "data/maps/SlateportCity/scripts.pory"

# 793 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 794 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 795 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 796 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 797 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 798 "data/maps/SlateportCity/scripts.pory"
	end
# 799 "data/maps/SlateportCity/scripts.pory"

# 800 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 801 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 802 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 803 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 804 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 805 "data/maps/SlateportCity/scripts.pory"
	end
# 806 "data/maps/SlateportCity/scripts.pory"

# 807 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 808 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 809 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 810 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 811 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 812 "data/maps/SlateportCity/scripts.pory"
	end
# 813 "data/maps/SlateportCity/scripts.pory"

# 814 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 815 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 816 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 817 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 818 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 819 "data/maps/SlateportCity/scripts.pory"
	end
# 820 "data/maps/SlateportCity/scripts.pory"

# 821 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 822 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 824 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 825 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 826 "data/maps/SlateportCity/scripts.pory"
	end
# 827 "data/maps/SlateportCity/scripts.pory"

# 828 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 829 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 830 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 831 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 832 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 833 "data/maps/SlateportCity/scripts.pory"
	end
# 834 "data/maps/SlateportCity/scripts.pory"

# 835 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 836 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 837 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 838 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 839 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 840 "data/maps/SlateportCity/scripts.pory"
	end
# 841 "data/maps/SlateportCity/scripts.pory"

# 842 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 843 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 844 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 845 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 846 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 847 "data/maps/SlateportCity/scripts.pory"
	end
# 848 "data/maps/SlateportCity/scripts.pory"

# 849 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 850 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 851 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 852 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 853 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 854 "data/maps/SlateportCity/scripts.pory"
	end
# 855 "data/maps/SlateportCity/scripts.pory"

# 856 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 857 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 858 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 859 "data/maps/SlateportCity/scripts.pory"
	release
# 860 "data/maps/SlateportCity/scripts.pory"
	end
# 861 "data/maps/SlateportCity/scripts.pory"

# 862 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 863 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 864 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 865 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 866 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 867 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 868 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 869 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 870 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 871 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 872 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 873 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 874 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 875 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 876 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 877 "data/maps/SlateportCity/scripts.pory"
	release
# 878 "data/maps/SlateportCity/scripts.pory"
	end
# 879 "data/maps/SlateportCity/scripts.pory"

# 880 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 881 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 882 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 883 "data/maps/SlateportCity/scripts.pory"
	release
# 884 "data/maps/SlateportCity/scripts.pory"
	end
# 885 "data/maps/SlateportCity/scripts.pory"

# 886 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 887 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 888 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 889 "data/maps/SlateportCity/scripts.pory"
	end
# 890 "data/maps/SlateportCity/scripts.pory"

# 891 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 892 "data/maps/SlateportCity/scripts.pory"
	lockall
# 893 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 894 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 895 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 896 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 897 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 898 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 899 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 900 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 901 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 902 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 903 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 904 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 905 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 906 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 907 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 908 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 909 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 910 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 911 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 912 "data/maps/SlateportCity/scripts.pory"
	end
# 913 "data/maps/SlateportCity/scripts.pory"

# 914 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 915 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 916 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 917 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 918 "data/maps/SlateportCity/scripts.pory"
	step_end
# 919 "data/maps/SlateportCity/scripts.pory"

# 920 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 921 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 922 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 923 "data/maps/SlateportCity/scripts.pory"
	step_end
# 924 "data/maps/SlateportCity/scripts.pory"

# 925 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 926 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 927 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 928 "data/maps/SlateportCity/scripts.pory"
	step_end
# 929 "data/maps/SlateportCity/scripts.pory"

# 930 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 931 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 932 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 933 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 934 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 935 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 936 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 937 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 938 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 939 "data/maps/SlateportCity/scripts.pory"
	step_end
# 940 "data/maps/SlateportCity/scripts.pory"

# 941 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 942 "data/maps/SlateportCity/scripts.pory"
	lockall
# 943 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 944 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 945 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 946 "data/maps/SlateportCity/scripts.pory"
	end
# 947 "data/maps/SlateportCity/scripts.pory"

# 948 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 949 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 950 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 951 "data/maps/SlateportCity/scripts.pory"

# 952 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 953 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 954 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 955 "data/maps/SlateportCity/scripts.pory"

# 956 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 957 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 958 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 959 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 960 "data/maps/SlateportCity/scripts.pory"

# 961 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 962 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 963 "data/maps/SlateportCity/scripts.pory"

# 964 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 965 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 966 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 967 "data/maps/SlateportCity/scripts.pory"

# 968 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 971 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 972 "data/maps/SlateportCity/scripts.pory"

# 973 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 974 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 975 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 976 "data/maps/SlateportCity/scripts.pory"

# 977 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 979 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 980 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 982 "data/maps/SlateportCity/scripts.pory"

# 983 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 984 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 985 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 987 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 988 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 989 "data/maps/SlateportCity/scripts.pory"

# 990 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 996 "data/maps/SlateportCity/scripts.pory"

# 997 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1001 "data/maps/SlateportCity/scripts.pory"

# 1002 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1003 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1008 "data/maps/SlateportCity/scripts.pory"

# 1009 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1013 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1014 "data/maps/SlateportCity/scripts.pory"

# 1015 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1016 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1019 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1020 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1021 "data/maps/SlateportCity/scripts.pory"

# 1022 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1027 "data/maps/SlateportCity/scripts.pory"

# 1028 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1029 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1031 "data/maps/SlateportCity/scripts.pory"

# 1032 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1035 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1037 "data/maps/SlateportCity/scripts.pory"

# 1038 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1041 "data/maps/SlateportCity/scripts.pory"

# 1042 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1045 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1046 "data/maps/SlateportCity/scripts.pory"

# 1047 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1051 "data/maps/SlateportCity/scripts.pory"

# 1052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1056 "data/maps/SlateportCity/scripts.pory"

# 1057 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1060 "data/maps/SlateportCity/scripts.pory"

# 1061 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1064 "data/maps/SlateportCity/scripts.pory"

# 1065 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1066 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1073 "data/maps/SlateportCity/scripts.pory"

# 1074 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1077 "data/maps/SlateportCity/scripts.pory"

# 1078 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1081 "data/maps/SlateportCity/scripts.pory"

# 1082 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1083 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1084 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1088 "data/maps/SlateportCity/scripts.pory"

# 1089 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1094 "data/maps/SlateportCity/scripts.pory"

# 1095 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1100 "data/maps/SlateportCity/scripts.pory"

# 1101 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1105 "data/maps/SlateportCity/scripts.pory"

# 1106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1111 "data/maps/SlateportCity/scripts.pory"

# 1112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1115 "data/maps/SlateportCity/scripts.pory"

# 1116 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1120 "data/maps/SlateportCity/scripts.pory"

# 1121 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1126 "data/maps/SlateportCity/scripts.pory"

# 1127 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1134 "data/maps/SlateportCity/scripts.pory"

# 1135 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1140 "data/maps/SlateportCity/scripts.pory"

# 1141 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1146 "data/maps/SlateportCity/scripts.pory"

# 1147 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1152 "data/maps/SlateportCity/scripts.pory"

# 1153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1157 "data/maps/SlateportCity/scripts.pory"

# 1158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1161 "data/maps/SlateportCity/scripts.pory"

# 1162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1165 "data/maps/SlateportCity/scripts.pory"

# 1166 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1169 "data/maps/SlateportCity/scripts.pory"

# 1170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1173 "data/maps/SlateportCity/scripts.pory"

# 1174 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1177 "data/maps/SlateportCity/scripts.pory"

# 1178 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1184 "data/maps/SlateportCity/scripts.pory"

# 1185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1189 "data/maps/SlateportCity/scripts.pory"

# 1190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1199 "data/maps/SlateportCity/scripts.pory"

# 1200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1210 "data/maps/SlateportCity/scripts.pory"

# 1211 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1216 "data/maps/SlateportCity/scripts.pory"

# 1217 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1221 "data/maps/SlateportCity/scripts.pory"

# 1222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1225 "data/maps/SlateportCity/scripts.pory"

# 1226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1229 "data/maps/SlateportCity/scripts.pory"

# 1230 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1234 "data/maps/SlateportCity/scripts.pory"

# 1235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1240 "data/maps/SlateportCity/scripts.pory"

# 1241 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1246 "data/maps/SlateportCity/scripts.pory"

# 1247 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1250 "data/maps/SlateportCity/scripts.pory"

# 1251 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1255 "data/maps/SlateportCity/scripts.pory"

# 1256 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1260 "data/maps/SlateportCity/scripts.pory"

# 1261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1264 "data/maps/SlateportCity/scripts.pory"

# 1265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1271 "data/maps/SlateportCity/scripts.pory"

# 1272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1276 "data/maps/SlateportCity/scripts.pory"

# 1277 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1280 "data/maps/SlateportCity/scripts.pory"

# 1281 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1295 "data/maps/SlateportCity/scripts.pory"

# 1296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1306 "data/maps/SlateportCity/scripts.pory"

# 1307 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1310 "data/maps/SlateportCity/scripts.pory"

# 1311 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1314 "data/maps/SlateportCity/scripts.pory"

# 1315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1318 "data/maps/SlateportCity/scripts.pory"

# 1319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1322 "data/maps/SlateportCity/scripts.pory"

# 1323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1328 "data/maps/SlateportCity/scripts.pory"

# 1329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1332 "data/maps/SlateportCity/scripts.pory"

# 1333 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1338 "data/maps/SlateportCity/scripts.pory"

# 1339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1347 "data/maps/SlateportCity/scripts.pory"

# 1348 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1351 "data/maps/SlateportCity/scripts.pory"

# 1352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1358 "data/maps/SlateportCity/scripts.pory"

# 1359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1362 "data/maps/SlateportCity/scripts.pory"

# 1363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1370 "data/maps/SlateportCity/scripts.pory"

# 1371 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

SlateportCity_EventScript_FarmSign::
# 1384 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_FarmSign_Text_0, MSGBOX_SIGN
	end


SlateportCity_EventScript_FarmSign_Text_0:
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "Tunnel to Slateport Farm$"
