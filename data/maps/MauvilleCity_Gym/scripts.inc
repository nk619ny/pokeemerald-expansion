# 1 "data/maps/MauvilleCity_Gym/scripts.pory"

# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"

# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_TEMP_9, 1, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	//call_if_eq VAR_TEMP_1, 1, MauvilleCity_Gym_EventScript_Switch1New
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	//call_if_eq VAR_TEMP_2, 1, MauvilleCity_Gym_EventScript_Switch2New
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	//call_if_eq VAR_TEMP_3, 1, MauvilleCity_Gym_EventScript_Switch3New
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	//call_if_eq VAR_TEMP_4, 1, MauvilleCity_Gym_EventScript_Switch4New
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	//switch VAR_MAUVILLE_GYM_STATE
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	//case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	//case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
	//case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	//case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	//case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 20 "data/maps/MauvilleCity_Gym/scripts.pory"

# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"

# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"

# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"

# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"

# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"

# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"

# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"

# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	//specialvar VAR_RESULT, ShouldTryRematchBattle
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, MauvilleCity_Gym_EventScript_GiveShockWave2
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"

# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
//	addvar VAR_PETALBURG_GYM_STATE, 1
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 4
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems2
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
//	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"

# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"

# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_SetNewLevelCap
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"

# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"

# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"

# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"

# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"

# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"

# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"

# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"

# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"

# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"

# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"

# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"

# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"

# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"

# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"

# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"

# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuideDuringChallenge::
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
//	call MauvilleCity_Gym_EventScript_SetNewLevelCap
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"

# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"

# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"

# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"

# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"

# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"

# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"

# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"

# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"

# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"

# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"

# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"

# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"

# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"

# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"

# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"

# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"

# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"

# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"

# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"

# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"

# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"

# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"

# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"

# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"

# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"

# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"

# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM there contains Charge Beam.\p"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When you attack, you often charge\n"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "more power for next time!\p"
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"

# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"

# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"

# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"

# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"

# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"

# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"

# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"

# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"

# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"

MauvilleCity_Gym_EventScript_Switch1New::
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 0, 15, METATILE_MauvilleGym_PressedSwitch, FALSE
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 450 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_Switch2New::
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 461 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 1
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 464 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 12, METATILE_MauvilleGym_PressedSwitch, FALSE
# 465 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 8, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 466 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 8, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 468 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 470 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 471 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 472 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 476 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_Switch3New::
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 481 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 482 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 1
# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_MauvilleGym_PressedSwitch, FALSE
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_Off, FALSE
# 486 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 487 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 488 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_PoleBottom_Off, FALSE
# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_FloorTile, FALSE
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 492 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 493 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_Switch4New::
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 499 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_4, 1
# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 502 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 9, METATILE_MauvilleGym_PressedSwitch, FALSE
# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 505 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 5, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 506 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 508 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 510 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 512 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 513 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_SetNewLevelCap::
# 519 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 39
# 520 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
	return


MauvilleCity_Gym_EventScript_GymGuide::
# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT, MauvilleCity_Gym_EventScript_GymGuide_1
# 536 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuideDuringChallenge
	return

MauvilleCity_Gym_EventScript_GymGuide_1:
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuideWattsonBusy
	return


MauvilleCity_Gym_EventScript_GymGuideWattsonBusy::
# 541 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 542 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideWattsonBusy, MSGBOX_NPC
# 544 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end


MauvilleCity_Gym_EventScript_HaltPlayerTrigger5::
# 557 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 5
# 558 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger6::
# 562 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 6
# 563 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger7::
# 567 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 7
# 568 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger8::
# 572 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 8
# 573 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger9::
# 577 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 9
# 578 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayer::
# 582 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 583 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT, MauvilleCity_Gym_EventScript_HaltPlayer_2
# 588 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, Common_Movement_ExclamationMark
# 589 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 590 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 591 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_TEMP_6
# 592 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_HaltPlayer_6
# 594 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_HaltPlayer_7
# 596 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 7, MauvilleCity_Gym_EventScript_HaltPlayer_8
# 598 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 8, MauvilleCity_Gym_EventScript_HaltPlayer_9
# 600 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 9, MauvilleCity_Gym_EventScript_HaltPlayer_10
MauvilleCity_Gym_EventScript_HaltPlayer_4:
# 603 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 604 "data/maps/MauvilleCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 605 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 606 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 607 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_E
# 608 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideHaltPlayer, MSGBOX_NPC
# 609 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 610 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuidePushPlayer
# 611 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Gym_Movement_Player_ForcedDown
# 612 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 613 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 10
# 614 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_TEMP_6
# 615 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_HaltPlayer_13
# 617 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_HaltPlayer_14
# 619 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 7, MauvilleCity_Gym_EventScript_HaltPlayer_15
# 621 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 8, MauvilleCity_Gym_EventScript_HaltPlayer_16
# 623 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 9, MauvilleCity_Gym_EventScript_HaltPlayer_17
MauvilleCity_Gym_EventScript_HaltPlayer_11:
# 626 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 627 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 20
# 628 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, Common_Movement_FaceLeft
# 629 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 630 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 631 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_E
# 632 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_HaltPlayer_2:
# 584 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_7, 1
# 585 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_HaltPlayer_6:
# 593 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 5
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_7:
# 595 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer6
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_8:
# 597 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer7
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_9:
# 599 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer8
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_10:
# 601 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer9
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_13:
# 616 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot5
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_14:
# 618 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot6
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_15:
# 620 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot7
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_16:
# 622 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot8
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_17:
# 624 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot9
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11


# 636 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_Player_ForcedDown:
# 637 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_down
	step_end

# 640 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuidePushPlayer:
# 641 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_left
	step_end

# 644 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer6:
# 645 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 648 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer7:
# 649 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 649 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 652 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer8:
# 653 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 653 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 653 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 656 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer9:
# 657 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 657 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 657 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 657 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 660 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot5:
# 661 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 664 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot6:
# 665 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 665 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 668 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot7:
# 669 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 669 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 669 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 672 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot8:
# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 676 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot9:
# 677 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 677 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 677 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 677 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 677 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

MauvilleCity_Gym_EventScript_SoftlockGuard::
# 681 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_9, 1
# 682 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_Text_GymGuideWattsonBusy::
# 548 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson is busy right now.\p"
	.string "You should come back later.\n"
	.string "I recommend checking out Verdanturf\l"
	.string "Town to the West - it's quite lovely!$"

MauvilleCity_Gym_Text_GymGuideHaltPlayer::
# 552 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson, the Gym Leader, is in the\n"
	.string "middle of a battle with another\l"
	.string "challenger already.\p"
	.string "You should come back later.\n"
	.string "Maybe take the chance to explore the\l"
	.string "local area first?$"
