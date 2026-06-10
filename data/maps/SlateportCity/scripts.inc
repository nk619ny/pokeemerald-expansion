# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"

# 3 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 4 "data/maps/SlateportCity/scripts.pory"

# 5 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 6 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 7 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 8 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 9 "data/maps/SlateportCity/scripts.pory"

# 10 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 11 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 12 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 13 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 14 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 15 "data/maps/SlateportCity/scripts.pory"
	end
# 16 "data/maps/SlateportCity/scripts.pory"

# 17 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 18 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 19 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 20 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 21 "data/maps/SlateportCity/scripts.pory"
	return
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 24 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 25 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 26 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 27 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 28 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 29 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 30 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 31 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 32 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 33 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 34 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 36 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 37 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 38 "data/maps/SlateportCity/scripts.pory"
	return
# 39 "data/maps/SlateportCity/scripts.pory"

# 40 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 41 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 42 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 43 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 46 "data/maps/SlateportCity/scripts.pory"
	return
# 47 "data/maps/SlateportCity/scripts.pory"

# 48 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 51 "data/maps/SlateportCity/scripts.pory"
	return
# 52 "data/maps/SlateportCity/scripts.pory"

# 53 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 54 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 55 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 56 "data/maps/SlateportCity/scripts.pory"

# 57 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 58 "data/maps/SlateportCity/scripts.pory"
	lockall
# 59 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 60 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 61 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 62 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 64 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 65 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 68 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 69 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 70 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 72 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 73 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 74 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 75 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 76 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 77 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 78 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 79 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 80 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 81 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 82 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 83 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 85 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 86 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 87 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 88 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 89 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 90 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 91 "data/maps/SlateportCity/scripts.pory"
	end
# 92 "data/maps/SlateportCity/scripts.pory"

# 93 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 94 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 95 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 96 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 97 "data/maps/SlateportCity/scripts.pory"
	step_end
# 98 "data/maps/SlateportCity/scripts.pory"

# 99 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 100 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 101 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 102 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 103 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 104 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 105 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 106 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 107 "data/maps/SlateportCity/scripts.pory"
	step_end
# 108 "data/maps/SlateportCity/scripts.pory"

# 109 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 110 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 111 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 112 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 113 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 114 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 115 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 116 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 117 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 118 "data/maps/SlateportCity/scripts.pory"
	step_end
# 119 "data/maps/SlateportCity/scripts.pory"

# 120 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 121 "data/maps/SlateportCity/scripts.pory"
	lock
# 122 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 123 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 124 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 125 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 126 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 127 "data/maps/SlateportCity/scripts.pory"
	release
# 128 "data/maps/SlateportCity/scripts.pory"
	end
# 129 "data/maps/SlateportCity/scripts.pory"

# 130 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 131 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 132 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 133 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 134 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 135 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 136 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 137 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 138 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 139 "data/maps/SlateportCity/scripts.pory"
	release
# 140 "data/maps/SlateportCity/scripts.pory"
	end
# 141 "data/maps/SlateportCity/scripts.pory"

# 142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 143 "data/maps/SlateportCity/scripts.pory"
	lock
# 144 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 145 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 146 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 147 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 148 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 149 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 150 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 151 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 152 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 154 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 155 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 156 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 157 "data/maps/SlateportCity/scripts.pory"
	release
# 158 "data/maps/SlateportCity/scripts.pory"
	end
# 159 "data/maps/SlateportCity/scripts.pory"

# 160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 161 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 162 "data/maps/SlateportCity/scripts.pory"
	release
# 163 "data/maps/SlateportCity/scripts.pory"
	end
# 164 "data/maps/SlateportCity/scripts.pory"

# 165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 166 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 167 "data/maps/SlateportCity/scripts.pory"
	release
# 168 "data/maps/SlateportCity/scripts.pory"
	end
# 169 "data/maps/SlateportCity/scripts.pory"

# 170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 171 "data/maps/SlateportCity/scripts.pory"
	lock
# 172 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 173 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 174 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 175 "data/maps/SlateportCity/scripts.pory"
	release
# 176 "data/maps/SlateportCity/scripts.pory"
	end
# 177 "data/maps/SlateportCity/scripts.pory"

# 178 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 179 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 180 "data/maps/SlateportCity/scripts.pory"
	release
# 181 "data/maps/SlateportCity/scripts.pory"
	end
# 182 "data/maps/SlateportCity/scripts.pory"

# 183 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 184 "data/maps/SlateportCity/scripts.pory"
	lock
# 185 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 186 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 187 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 188 "data/maps/SlateportCity/scripts.pory"
	release
# 189 "data/maps/SlateportCity/scripts.pory"
	end
# 190 "data/maps/SlateportCity/scripts.pory"

# 191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 192 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 193 "data/maps/SlateportCity/scripts.pory"
	release
# 194 "data/maps/SlateportCity/scripts.pory"
	end
# 195 "data/maps/SlateportCity/scripts.pory"

# 196 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 197 "data/maps/SlateportCity/scripts.pory"
	lock
# 198 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 199 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 200 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 201 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 202 "data/maps/SlateportCity/scripts.pory"
	release
# 203 "data/maps/SlateportCity/scripts.pory"
	end
# 204 "data/maps/SlateportCity/scripts.pory"

# 205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 206 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 207 "data/maps/SlateportCity/scripts.pory"
	release
# 208 "data/maps/SlateportCity/scripts.pory"
	end
# 209 "data/maps/SlateportCity/scripts.pory"

# 210 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 211 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 212 "data/maps/SlateportCity/scripts.pory"
	release
# 213 "data/maps/SlateportCity/scripts.pory"
	end
# 214 "data/maps/SlateportCity/scripts.pory"

# 215 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 216 "data/maps/SlateportCity/scripts.pory"
	lock
# 217 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 218 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 219 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 220 "data/maps/SlateportCity/scripts.pory"
	release
# 221 "data/maps/SlateportCity/scripts.pory"
	end
# 222 "data/maps/SlateportCity/scripts.pory"

# 223 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 224 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 225 "data/maps/SlateportCity/scripts.pory"
	release
# 226 "data/maps/SlateportCity/scripts.pory"
	end
# 227 "data/maps/SlateportCity/scripts.pory"

# 228 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 229 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 230 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 231 "data/maps/SlateportCity/scripts.pory"
	end
# 232 "data/maps/SlateportCity/scripts.pory"

# 233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 234 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 235 "data/maps/SlateportCity/scripts.pory"
	end
# 236 "data/maps/SlateportCity/scripts.pory"

# 237 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 238 "data/maps/SlateportCity/scripts.pory"
	lock
# 239 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 240 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 241 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 242 "data/maps/SlateportCity/scripts.pory"
	release
# 243 "data/maps/SlateportCity/scripts.pory"
	end
# 244 "data/maps/SlateportCity/scripts.pory"

# 245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 246 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 247 "data/maps/SlateportCity/scripts.pory"
	release
# 248 "data/maps/SlateportCity/scripts.pory"
	end
# 249 "data/maps/SlateportCity/scripts.pory"

# 250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 251 "data/maps/SlateportCity/scripts.pory"
	lock
# 252 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 253 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 254 "data/maps/SlateportCity/scripts.pory"
	release
# 255 "data/maps/SlateportCity/scripts.pory"
	end
# 256 "data/maps/SlateportCity/scripts.pory"

# 257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 258 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 259 "data/maps/SlateportCity/scripts.pory"
	end
# 260 "data/maps/SlateportCity/scripts.pory"

# 261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 262 "data/maps/SlateportCity/scripts.pory"
	lockall
# 263 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 264 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 265 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 266 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 267 "data/maps/SlateportCity/scripts.pory"
	end
# 268 "data/maps/SlateportCity/scripts.pory"

# 269 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 270 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 271 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 272 "data/maps/SlateportCity/scripts.pory"
	end
# 273 "data/maps/SlateportCity/scripts.pory"

# 274 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 275 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 276 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 277 "data/maps/SlateportCity/scripts.pory"
	end
# 278 "data/maps/SlateportCity/scripts.pory"

# 279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 280 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 281 "data/maps/SlateportCity/scripts.pory"
	end
# 282 "data/maps/SlateportCity/scripts.pory"

# 283 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 284 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 285 "data/maps/SlateportCity/scripts.pory"
	end
# 286 "data/maps/SlateportCity/scripts.pory"

# 287 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 288 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 289 "data/maps/SlateportCity/scripts.pory"
	end
# 290 "data/maps/SlateportCity/scripts.pory"

# 291 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 292 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 293 "data/maps/SlateportCity/scripts.pory"
	end
# 294 "data/maps/SlateportCity/scripts.pory"

# 295 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 296 "data/maps/SlateportCity/scripts.pory"
	lockall
# 297 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 298 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 299 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 300 "data/maps/SlateportCity/scripts.pory"
	end
# 301 "data/maps/SlateportCity/scripts.pory"

# 302 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 303 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 304 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 305 "data/maps/SlateportCity/scripts.pory"
	end
# 306 "data/maps/SlateportCity/scripts.pory"

# 307 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 308 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 309 "data/maps/SlateportCity/scripts.pory"
	end
# 310 "data/maps/SlateportCity/scripts.pory"

# 311 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 312 "data/maps/SlateportCity/scripts.pory"
	lock
# 313 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 314 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 315 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 316 "data/maps/SlateportCity/scripts.pory"
	release
# 317 "data/maps/SlateportCity/scripts.pory"
	end
# 318 "data/maps/SlateportCity/scripts.pory"

# 319 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 321 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 322 "data/maps/SlateportCity/scripts.pory"
	release
# 323 "data/maps/SlateportCity/scripts.pory"
	end
# 324 "data/maps/SlateportCity/scripts.pory"

# 325 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 326 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 327 "data/maps/SlateportCity/scripts.pory"
	end
# 328 "data/maps/SlateportCity/scripts.pory"

# 329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 330 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 331 "data/maps/SlateportCity/scripts.pory"
	end
# 332 "data/maps/SlateportCity/scripts.pory"

# 333 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 334 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 335 "data/maps/SlateportCity/scripts.pory"
	end
# 336 "data/maps/SlateportCity/scripts.pory"

# 337 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 338 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 339 "data/maps/SlateportCity/scripts.pory"
	end
# 340 "data/maps/SlateportCity/scripts.pory"

# 341 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 342 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 343 "data/maps/SlateportCity/scripts.pory"
	end
# 344 "data/maps/SlateportCity/scripts.pory"

# 345 "data/maps/SlateportCity/scripts.pory"
/* SlateportCity_EventScript_AquaGrunt1::
# 346 "data/maps/SlateportCity/scripts.pory"
	lock
# 347 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 348 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 349 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 350 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 351 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 352 "data/maps/SlateportCity/scripts.pory"
	release
# 353 "data/maps/SlateportCity/scripts.pory"
	end
# 354 "data/maps/SlateportCity/scripts.pory"

# 355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 356 "data/maps/SlateportCity/scripts.pory"
	lock
# 357 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 358 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 359 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 360 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 361 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 362 "data/maps/SlateportCity/scripts.pory"
	release
# 363 "data/maps/SlateportCity/scripts.pory"
	end
# 364 "data/maps/SlateportCity/scripts.pory"

# 365 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 366 "data/maps/SlateportCity/scripts.pory"
	lock
# 367 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 368 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 369 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 370 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 371 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 372 "data/maps/SlateportCity/scripts.pory"
	release
# 373 "data/maps/SlateportCity/scripts.pory"
	end
# 374 "data/maps/SlateportCity/scripts.pory"

# 375 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 376 "data/maps/SlateportCity/scripts.pory"
	lock
# 377 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 378 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 379 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 380 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 381 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 382 "data/maps/SlateportCity/scripts.pory"
	release
# 383 "data/maps/SlateportCity/scripts.pory"
	end
# 384 "data/maps/SlateportCity/scripts.pory"

# 385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 386 "data/maps/SlateportCity/scripts.pory"
	lock
# 387 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 388 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 389 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 390 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 391 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 392 "data/maps/SlateportCity/scripts.pory"
	release
# 393 "data/maps/SlateportCity/scripts.pory"
	end
# 394 "data/maps/SlateportCity/scripts.pory"

# 395 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 396 "data/maps/SlateportCity/scripts.pory"
	lock
# 397 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 398 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 399 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 400 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 401 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 402 "data/maps/SlateportCity/scripts.pory"
	release
# 403 "data/maps/SlateportCity/scripts.pory"
	end
# 404 "data/maps/SlateportCity/scripts.pory"

# 405 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 406 "data/maps/SlateportCity/scripts.pory"
	lock
# 407 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 408 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 409 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 410 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 411 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 412 "data/maps/SlateportCity/scripts.pory"
	release
# 413 "data/maps/SlateportCity/scripts.pory"
	end
# 414 "data/maps/SlateportCity/scripts.pory"

# 415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 416 "data/maps/SlateportCity/scripts.pory"
	lock
# 417 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 418 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 419 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 420 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 421 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 422 "data/maps/SlateportCity/scripts.pory"
	release
# 423 "data/maps/SlateportCity/scripts.pory"
	end
# 424 "data/maps/SlateportCity/scripts.pory"

# 425 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 426 "data/maps/SlateportCity/scripts.pory"
	lock
# 427 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 428 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 429 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 430 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 431 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 432 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 433 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 434 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 435 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 436 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 437 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 438 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 439 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 440 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 441 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 442 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 443 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 444 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 446 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 447 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 448 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 449 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 450 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 451 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 452 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 453 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 454 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 455 "data/maps/SlateportCity/scripts.pory"
	release
# 456 "data/maps/SlateportCity/scripts.pory"
	end
# 457 "data/maps/SlateportCity/scripts.pory"

# 458 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 459 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 460 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 461 "data/maps/SlateportCity/scripts.pory"
	step_end
# 462 "data/maps/SlateportCity/scripts.pory"

# 463 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 464 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 465 "data/maps/SlateportCity/scripts.pory"
	end
# 466 "data/maps/SlateportCity/scripts.pory"

# 467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 468 "data/maps/SlateportCity/scripts.pory"
	lock
# 469 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 470 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 471 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 472 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 473 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 474 "data/maps/SlateportCity/scripts.pory"
	release
# 475 "data/maps/SlateportCity/scripts.pory"
	end   */
# 476 "data/maps/SlateportCity/scripts.pory"

# 477 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 478 "data/maps/SlateportCity/scripts.pory"
	lock
# 479 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 480 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 481 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 482 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 483 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 484 "data/maps/SlateportCity/scripts.pory"
	release
# 485 "data/maps/SlateportCity/scripts.pory"
	end
# 486 "data/maps/SlateportCity/scripts.pory"

# 487 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 488 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 489 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 490 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 491 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 492 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 493 "data/maps/SlateportCity/scripts.pory"
	release
# 494 "data/maps/SlateportCity/scripts.pory"
	end
# 495 "data/maps/SlateportCity/scripts.pory"

# 496 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 497 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 498 "data/maps/SlateportCity/scripts.pory"
	release
# 499 "data/maps/SlateportCity/scripts.pory"
	end
# 500 "data/maps/SlateportCity/scripts.pory"

# 501 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 502 "data/maps/SlateportCity/scripts.pory"
	lock
# 503 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 504 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 505 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 506 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 507 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 508 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 509 "data/maps/SlateportCity/scripts.pory"
	release
# 510 "data/maps/SlateportCity/scripts.pory"
	end
# 511 "data/maps/SlateportCity/scripts.pory"

# 512 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 514 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 515 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 516 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 517 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 518 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 519 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 520 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 521 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 522 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 523 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 524 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 525 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 526 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 527 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 528 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 529 "data/maps/SlateportCity/scripts.pory"
	release
# 530 "data/maps/SlateportCity/scripts.pory"
	end
# 531 "data/maps/SlateportCity/scripts.pory"

# 532 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 533 "data/maps/SlateportCity/scripts.pory"
	lock
# 534 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 535 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 536 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 537 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 538 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 539 "data/maps/SlateportCity/scripts.pory"
	release
# 540 "data/maps/SlateportCity/scripts.pory"
	end
# 541 "data/maps/SlateportCity/scripts.pory"

# 542 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 543 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 544 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 545 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 546 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 547 "data/maps/SlateportCity/scripts.pory"
	release
# 548 "data/maps/SlateportCity/scripts.pory"
	end
# 549 "data/maps/SlateportCity/scripts.pory"

# 550 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 551 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 552 "data/maps/SlateportCity/scripts.pory"
	lockall
# 553 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 554 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 555 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 556 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 557 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 559 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 560 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 562 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 563 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 564 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 565 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 566 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 568 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 569 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 570 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 571 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 573 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 574 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 575 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 576 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 577 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 578 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 579 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 580 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 582 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 583 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 584 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 585 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 586 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 587 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 588 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 590 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 591 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 592 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 593 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 594 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 595 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 596 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 598 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 599 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 600 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 601 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 602 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 603 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 604 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 605 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 606 "data/maps/SlateportCity/scripts.pory"
	end
# 607 "data/maps/SlateportCity/scripts.pory"

# 608 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 609 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 610 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 611 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 612 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 613 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 614 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 615 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 616 "data/maps/SlateportCity/scripts.pory"
	step_end
# 617 "data/maps/SlateportCity/scripts.pory"

# 618 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 619 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 620 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 621 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 622 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 623 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 624 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 625 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 626 "data/maps/SlateportCity/scripts.pory"
	step_end
# 627 "data/maps/SlateportCity/scripts.pory"

# 628 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 629 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 630 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 631 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 632 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 633 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 634 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 635 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 636 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 637 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 638 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 639 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 640 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 641 "data/maps/SlateportCity/scripts.pory"
	step_end
# 642 "data/maps/SlateportCity/scripts.pory"

# 643 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 644 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 645 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 646 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 647 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 648 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 649 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 650 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 651 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 653 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 654 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 656 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 657 "data/maps/SlateportCity/scripts.pory"
	step_end
# 658 "data/maps/SlateportCity/scripts.pory"

# 659 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 661 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 662 "data/maps/SlateportCity/scripts.pory"
	step_end
# 663 "data/maps/SlateportCity/scripts.pory"

# 664 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 666 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 667 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 668 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 669 "data/maps/SlateportCity/scripts.pory"
	step_end
# 670 "data/maps/SlateportCity/scripts.pory"

# 671 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 672 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 673 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 674 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 675 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 676 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 679 "data/maps/SlateportCity/scripts.pory"
	step_end
# 680 "data/maps/SlateportCity/scripts.pory"

# 681 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 682 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 683 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 684 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 685 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 686 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 687 "data/maps/SlateportCity/scripts.pory"
	step_end
# 688 "data/maps/SlateportCity/scripts.pory"

# 689 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 690 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 691 "data/maps/SlateportCity/scripts.pory"
	delay_16
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
	walk_in_place_faster_down
# 698 "data/maps/SlateportCity/scripts.pory"
	step_end
# 699 "data/maps/SlateportCity/scripts.pory"

# 700 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 701 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 702 "data/maps/SlateportCity/scripts.pory"
	end
# 703 "data/maps/SlateportCity/scripts.pory"

# 704 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 705 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 706 "data/maps/SlateportCity/scripts.pory"
	end
# 707 "data/maps/SlateportCity/scripts.pory"

# 708 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 709 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 710 "data/maps/SlateportCity/scripts.pory"
	end
# 711 "data/maps/SlateportCity/scripts.pory"

# 712 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 713 "data/maps/SlateportCity/scripts.pory"
	lock
# 714 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 715 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 716 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 717 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 718 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 719 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 720 "data/maps/SlateportCity/scripts.pory"
	release
# 721 "data/maps/SlateportCity/scripts.pory"
	end
# 722 "data/maps/SlateportCity/scripts.pory"

# 723 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 724 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 725 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 726 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 727 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 728 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 729 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 730 "data/maps/SlateportCity/scripts.pory"
	end
# 731 "data/maps/SlateportCity/scripts.pory"

# 732 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 733 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 734 "data/maps/SlateportCity/scripts.pory"
	release
# 735 "data/maps/SlateportCity/scripts.pory"
	end
# 736 "data/maps/SlateportCity/scripts.pory"

# 737 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 738 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 739 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 740 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 741 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 742 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 743 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 744 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 745 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 746 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 747 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 748 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 749 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 750 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 751 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 752 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 753 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 754 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 755 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 756 "data/maps/SlateportCity/scripts.pory"
	end
# 757 "data/maps/SlateportCity/scripts.pory"

# 758 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 759 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 760 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 761 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 762 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 763 "data/maps/SlateportCity/scripts.pory"
	end
# 764 "data/maps/SlateportCity/scripts.pory"

# 765 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 766 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 767 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 768 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 769 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 770 "data/maps/SlateportCity/scripts.pory"
	end
# 771 "data/maps/SlateportCity/scripts.pory"

# 772 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 773 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 774 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 775 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 776 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 777 "data/maps/SlateportCity/scripts.pory"
	end
# 778 "data/maps/SlateportCity/scripts.pory"

# 779 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 780 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 781 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 782 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 783 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 784 "data/maps/SlateportCity/scripts.pory"
	end
# 785 "data/maps/SlateportCity/scripts.pory"

# 786 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 787 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 788 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 789 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 790 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 791 "data/maps/SlateportCity/scripts.pory"
	end
# 792 "data/maps/SlateportCity/scripts.pory"

# 793 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 794 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 795 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 796 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 797 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 798 "data/maps/SlateportCity/scripts.pory"
	end
# 799 "data/maps/SlateportCity/scripts.pory"

# 800 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 801 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 802 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 803 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 804 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 805 "data/maps/SlateportCity/scripts.pory"
	end
# 806 "data/maps/SlateportCity/scripts.pory"

# 807 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 808 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 809 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 810 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 811 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 812 "data/maps/SlateportCity/scripts.pory"
	end
# 813 "data/maps/SlateportCity/scripts.pory"

# 814 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 815 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 816 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 817 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 818 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 819 "data/maps/SlateportCity/scripts.pory"
	end
# 820 "data/maps/SlateportCity/scripts.pory"

# 821 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 822 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 824 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 825 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 826 "data/maps/SlateportCity/scripts.pory"
	end
# 827 "data/maps/SlateportCity/scripts.pory"

# 828 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 829 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 830 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 831 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 832 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 833 "data/maps/SlateportCity/scripts.pory"
	end
# 834 "data/maps/SlateportCity/scripts.pory"

# 835 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 836 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 837 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 838 "data/maps/SlateportCity/scripts.pory"
	release
# 839 "data/maps/SlateportCity/scripts.pory"
	end
# 840 "data/maps/SlateportCity/scripts.pory"

# 841 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 842 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 843 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 844 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 845 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 846 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 847 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 848 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 849 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 850 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 851 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 852 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 853 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 854 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 855 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 856 "data/maps/SlateportCity/scripts.pory"
	release
# 857 "data/maps/SlateportCity/scripts.pory"
	end
# 858 "data/maps/SlateportCity/scripts.pory"

# 859 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 860 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 861 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 862 "data/maps/SlateportCity/scripts.pory"
	release
# 863 "data/maps/SlateportCity/scripts.pory"
	end
# 864 "data/maps/SlateportCity/scripts.pory"

# 865 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 866 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 867 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 868 "data/maps/SlateportCity/scripts.pory"
	end
# 869 "data/maps/SlateportCity/scripts.pory"

# 870 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 871 "data/maps/SlateportCity/scripts.pory"
	lockall
# 872 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 873 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 874 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 875 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 876 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 877 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 878 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 879 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 880 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 881 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 882 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 883 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 884 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 885 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 886 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 887 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 888 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 889 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 890 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 891 "data/maps/SlateportCity/scripts.pory"
	end
# 892 "data/maps/SlateportCity/scripts.pory"

# 893 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 894 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 895 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 896 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 897 "data/maps/SlateportCity/scripts.pory"
	step_end
# 898 "data/maps/SlateportCity/scripts.pory"

# 899 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 900 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 901 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 902 "data/maps/SlateportCity/scripts.pory"
	step_end
# 903 "data/maps/SlateportCity/scripts.pory"

# 904 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 905 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 906 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 907 "data/maps/SlateportCity/scripts.pory"
	step_end
# 908 "data/maps/SlateportCity/scripts.pory"

# 909 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 910 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 911 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 912 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 913 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 914 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 915 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 916 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 917 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 918 "data/maps/SlateportCity/scripts.pory"
	step_end
# 919 "data/maps/SlateportCity/scripts.pory"

# 920 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 921 "data/maps/SlateportCity/scripts.pory"
	lockall
# 922 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 923 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 924 "data/maps/SlateportCity/scripts.pory"
	end
# 925 "data/maps/SlateportCity/scripts.pory"

# 926 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 927 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 928 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 929 "data/maps/SlateportCity/scripts.pory"

# 930 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 931 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 932 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 933 "data/maps/SlateportCity/scripts.pory"

# 934 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 935 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 936 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 937 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 938 "data/maps/SlateportCity/scripts.pory"

# 939 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 940 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 941 "data/maps/SlateportCity/scripts.pory"

# 942 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 943 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 944 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 945 "data/maps/SlateportCity/scripts.pory"

# 946 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 947 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 948 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your Pokémon\n"
# 949 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 950 "data/maps/SlateportCity/scripts.pory"

# 951 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 952 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 953 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 954 "data/maps/SlateportCity/scripts.pory"

# 955 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 956 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 957 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 958 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle Pokémon\n"
# 959 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 960 "data/maps/SlateportCity/scripts.pory"

# 961 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 962 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 963 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 964 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 965 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 966 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 967 "data/maps/SlateportCity/scripts.pory"

# 968 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 971 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 972 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 973 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 974 "data/maps/SlateportCity/scripts.pory"

# 975 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 976 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 979 "data/maps/SlateportCity/scripts.pory"

# 980 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 984 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 985 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 986 "data/maps/SlateportCity/scripts.pory"

# 987 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 988 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 990 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "some Pokémon!$"
# 992 "data/maps/SlateportCity/scripts.pory"

# 993 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 997 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 999 "data/maps/SlateportCity/scripts.pory"

# 1000 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1003 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1005 "data/maps/SlateportCity/scripts.pory"

# 1006 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1009 "data/maps/SlateportCity/scripts.pory"

# 1010 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1013 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1015 "data/maps/SlateportCity/scripts.pory"

# 1016 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1019 "data/maps/SlateportCity/scripts.pory"

# 1020 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1024 "data/maps/SlateportCity/scripts.pory"

# 1025 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1028 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1029 "data/maps/SlateportCity/scripts.pory"

# 1030 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1032 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1034 "data/maps/SlateportCity/scripts.pory"

# 1035 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1038 "data/maps/SlateportCity/scripts.pory"

# 1039 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1042 "data/maps/SlateportCity/scripts.pory"

# 1043 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1045 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1047 "data/maps/SlateportCity/scripts.pory"

# 1048 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1051 "data/maps/SlateportCity/scripts.pory"

# 1052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1055 "data/maps/SlateportCity/scripts.pory"

# 1056 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1059 "data/maps/SlateportCity/scripts.pory"

# 1060 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1061 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1065 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1066 "data/maps/SlateportCity/scripts.pory"

# 1067 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1070 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1072 "data/maps/SlateportCity/scripts.pory"

# 1073 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1078 "data/maps/SlateportCity/scripts.pory"

# 1079 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by Pokémon?$"
# 1083 "data/maps/SlateportCity/scripts.pory"

# 1084 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for Pokémon.$"
# 1089 "data/maps/SlateportCity/scripts.pory"

# 1090 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1093 "data/maps/SlateportCity/scripts.pory"

# 1094 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your Pokémon's\n"
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1098 "data/maps/SlateportCity/scripts.pory"

# 1099 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade,\n"
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon is in the nickname.$"
# 1104 "data/maps/SlateportCity/scripts.pory"

# 1105 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough Pokémon\n"
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1118 "data/maps/SlateportCity/scripts.pory"

# 1119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1124 "data/maps/SlateportCity/scripts.pory"

# 1125 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1130 "data/maps/SlateportCity/scripts.pory"

# 1131 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1135 "data/maps/SlateportCity/scripts.pory"

# 1136 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1139 "data/maps/SlateportCity/scripts.pory"

# 1140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1143 "data/maps/SlateportCity/scripts.pory"

# 1144 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1147 "data/maps/SlateportCity/scripts.pory"

# 1148 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1151 "data/maps/SlateportCity/scripts.pory"

# 1152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1155 "data/maps/SlateportCity/scripts.pory"

# 1156 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1167 "data/maps/SlateportCity/scripts.pory"

# 1168 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a Pokémon\n"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1177 "data/maps/SlateportCity/scripts.pory"

# 1178 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1188 "data/maps/SlateportCity/scripts.pory"

# 1189 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1194 "data/maps/SlateportCity/scripts.pory"

# 1195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1199 "data/maps/SlateportCity/scripts.pory"

# 1200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1203 "data/maps/SlateportCity/scripts.pory"

# 1204 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY CONTEST HALL\n"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "Not accepting new entrants.$"
# 1207 "data/maps/SlateportCity/scripts.pory"

# 1208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1212 "data/maps/SlateportCity/scripts.pory"

# 1213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1218 "data/maps/SlateportCity/scripts.pory"

# 1219 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1224 "data/maps/SlateportCity/scripts.pory"

# 1225 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon FAN CLUB\n"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of Pokémon!”$"
# 1228 "data/maps/SlateportCity/scripts.pory"

# 1229 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1233 "data/maps/SlateportCity/scripts.pory"

# 1234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and Pokémon\n"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1238 "data/maps/SlateportCity/scripts.pory"

# 1239 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1242 "data/maps/SlateportCity/scripts.pory"

# 1243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1249 "data/maps/SlateportCity/scripts.pory"

# 1250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1254 "data/maps/SlateportCity/scripts.pory"

# 1255 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "“Pokémon nicknames rated.”$"
# 1258 "data/maps/SlateportCity/scripts.pory"

# 1259 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1273 "data/maps/SlateportCity/scripts.pory"

# 1274 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon CENTERS for crushing BERRIES.\p"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1284 "data/maps/SlateportCity/scripts.pory"

# 1285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1288 "data/maps/SlateportCity/scripts.pory"

# 1289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1292 "data/maps/SlateportCity/scripts.pory"

# 1293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1296 "data/maps/SlateportCity/scripts.pory"

# 1297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1300 "data/maps/SlateportCity/scripts.pory"

# 1301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1306 "data/maps/SlateportCity/scripts.pory"

# 1307 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1310 "data/maps/SlateportCity/scripts.pory"

# 1311 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1316 "data/maps/SlateportCity/scripts.pory"

# 1317 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1325 "data/maps/SlateportCity/scripts.pory"

# 1326 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1329 "data/maps/SlateportCity/scripts.pory"

# 1330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1336 "data/maps/SlateportCity/scripts.pory"

# 1337 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1340 "data/maps/SlateportCity/scripts.pory"

# 1341 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1348 "data/maps/SlateportCity/scripts.pory"

# 1349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

SlateportCity_EventScript_FarmSign::
# 1362 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_FarmSign_Text_0, MSGBOX_SIGN
	end


SlateportCity_EventScript_EnergyGuruNew::
# 1367 "data/maps/SlateportCity/scripts.pory"
	lock
# 1368 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1369 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_EnergyGuruNew_Text_0, MSGBOX_NPC
# 1370 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AerialAce::
# 1375 "data/maps/SlateportCity/scripts.pory"
	lock
# 1376 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1377 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AerialAce_Text_0, MSGBOX_NPC
# 1378 "data/maps/SlateportCity/scripts.pory"
	checkitem ITEM_TM_AERIAL_ACE
# 1379 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_AerialAce_2
SlateportCity_EventScript_AerialAce_1:
# 1385 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end

SlateportCity_EventScript_AerialAce_2:
# 1380 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AerialAce_Text_1, MSGBOX_NPC
# 1381 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1382 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 1383 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
	goto SlateportCity_EventScript_AerialAce_1


Route111_EventScript_DrainingKissSailor::
# 1391 "data/maps/SlateportCity/scripts.pory"
	lock
# 1392 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1393 "data/maps/SlateportCity/scripts.pory"
	checkitem ITEM_TM_DRAINING_KISS
# 1394 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_DrainingKissSailor_2
# 1401 "data/maps/SlateportCity/scripts.pory"
	msgbox Route111_EventScript_DrainingKissSailor_Text_1, MSGBOX_DEFAULT
Route111_EventScript_DrainingKissSailor_1:
# 1403 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1404 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end

Route111_EventScript_DrainingKissSailor_2:
# 1395 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1396 "data/maps/SlateportCity/scripts.pory"
	msgbox Route111_EventScript_DrainingKissSailor_Text_0, MSGBOX_DEFAULT
# 1397 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 1398 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
	goto Route111_EventScript_DrainingKissSailor_1


SlateportCity_EventScript_FarmSign_Text_0:
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "Tunnel to Slateport Farm$"

SlateportCity_EventScript_EnergyGuruNew_Text_0:
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "I used to sell special vitamins for\n"
	.string "Pokémon.\p"
	.string "But they've gotten harder to find, so\n"
	.string "I've closed my store for now.$"

SlateportCity_EventScript_AerialAce_Text_0:
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "I use bird Pokémon to deliver mail out\n"
	.string "to the rest of Hoenn.\p"
	.string "Their flight speed is really incredible.$"

SlateportCity_EventScript_AerialAce_Text_1:
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "You should use this TM to make your bird\n"
	.string "Pokémon stronger.$"

Route111_EventScript_DrainingKissSailor_Text_0:
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "Listen here, youngster.\p"
	.string "If you let yourself get caught up with\n"
	.string "the wrong person, they can sap the\l"
	.string "light right out of your life.\p"
	.string "Take this, so you can learn from my\n"
	.string "mistakes.$"

Route111_EventScript_DrainingKissSailor_Text_1:
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "Don't forget what I've told you, now...$"
