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
	switch VAR_MAUVILLE_GYM_STATE
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"

# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"

# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"

# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"

# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"

# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"

# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"

# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"

# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, MauvilleCity_Gym_EventScript_GiveShockWave2
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"

# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
//	addvar VAR_PETALBURG_GYM_STATE, 1
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 4
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems2
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
//	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"

# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"

# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_SetNewLevelCap
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"

# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"

# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"

# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"

# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"

# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"

# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"

# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"

# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"

# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"

# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"

# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"

# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"

# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"

# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"

# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"

# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuideDuringChallenge::
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
//	call MauvilleCity_Gym_EventScript_SetNewLevelCap
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"

# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"

# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"

# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"

# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"

# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"

# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"

# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"

# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"

# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"

# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"

# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"

# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"

# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"

# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"

# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"

# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"

# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"

# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"

# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"

# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"

# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"

# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"

# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"

# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"

# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"

# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"

# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM there contains Charge Beam.\p"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When you attack, you often charge\n"
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "more power for next time!\p"
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"

# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"

# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"

# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"

# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"

# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"

# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"

# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"

# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"

# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"

MauvilleCity_Gym_EventScript_Switch1New::
# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 0, 15, METATILE_MauvilleGym_PressedSwitch, FALSE
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_Switch2New::
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 458 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 1
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 461 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 12, METATILE_MauvilleGym_PressedSwitch, FALSE
# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 8, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 8, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 464 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 465 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 466 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 468 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 471 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 472 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 473 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_Switch3New::
# 477 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 478 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 1
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 481 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_MauvilleGym_PressedSwitch, FALSE
# 482 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_Off, FALSE
# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_PoleBottom_Off, FALSE
# 486 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_FloorTile, FALSE
# 487 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 491 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_Switch4New::
# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_4, 1
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 499 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 9, METATILE_MauvilleGym_PressedSwitch, FALSE
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 502 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 5, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 505 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 506 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 510 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 511 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_SetNewLevelCap::
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 45
# 517 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 518 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
	return


MauvilleCity_Gym_EventScript_GymGuide::
# 528 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 529 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT, MauvilleCity_Gym_EventScript_GymGuide_1
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuideDuringChallenge
	return

MauvilleCity_Gym_EventScript_GymGuide_1:
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuideWattsonBusy
	return


MauvilleCity_Gym_EventScript_GymGuideWattsonBusy::
# 538 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 539 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 540 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideWattsonBusy, MSGBOX_NPC
# 541 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end


MauvilleCity_Gym_EventScript_HaltPlayerTrigger5::
# 554 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 5
# 555 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger6::
# 559 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 6
# 560 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger7::
# 564 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 7
# 565 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger8::
# 569 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 8
# 570 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger9::
# 574 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 9
# 575 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayer::
# 579 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 580 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT, MauvilleCity_Gym_EventScript_HaltPlayer_2
# 585 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, Common_Movement_ExclamationMark
# 586 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 587 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 588 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_TEMP_6
# 589 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_HaltPlayer_6
# 591 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_HaltPlayer_7
# 593 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 7, MauvilleCity_Gym_EventScript_HaltPlayer_8
# 595 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 8, MauvilleCity_Gym_EventScript_HaltPlayer_9
# 597 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 9, MauvilleCity_Gym_EventScript_HaltPlayer_10
MauvilleCity_Gym_EventScript_HaltPlayer_4:
# 600 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 601 "data/maps/MauvilleCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 602 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 603 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 604 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_E
# 605 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideHaltPlayer, MSGBOX_NPC
# 606 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 607 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuidePushPlayer
# 608 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Gym_Movement_Player_ForcedDown
# 609 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 610 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 10
# 611 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_TEMP_6
# 612 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_HaltPlayer_13
# 614 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_HaltPlayer_14
# 616 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 7, MauvilleCity_Gym_EventScript_HaltPlayer_15
# 618 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 8, MauvilleCity_Gym_EventScript_HaltPlayer_16
# 620 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 9, MauvilleCity_Gym_EventScript_HaltPlayer_17
MauvilleCity_Gym_EventScript_HaltPlayer_11:
# 623 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 624 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 20
# 625 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, Common_Movement_FaceLeft
# 626 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 627 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 628 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_E
# 629 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_HaltPlayer_2:
# 581 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_7, 1
# 582 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_HaltPlayer_6:
# 590 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 5
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_7:
# 592 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer6
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_8:
# 594 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer7
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_9:
# 596 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer8
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_10:
# 598 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer9
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_13:
# 613 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot5
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_14:
# 615 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot6
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_15:
# 617 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot7
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_16:
# 619 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot8
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_17:
# 621 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot9
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11


# 633 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_Player_ForcedDown:
# 634 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_down
	step_end

# 637 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuidePushPlayer:
# 638 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_left
	step_end

# 641 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer6:
# 642 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 645 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer7:
# 646 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 646 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 649 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer8:
# 650 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 650 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 650 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 653 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer9:
# 654 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 654 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 654 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 654 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 657 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot5:
# 658 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 661 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot6:
# 662 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 662 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 665 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot7:
# 666 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 666 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 666 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 669 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot8:
# 670 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 670 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 670 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 670 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot9:
# 674 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 674 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 674 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 674 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 674 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

MauvilleCity_Gym_Text_GymGuideWattsonBusy::
# 545 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson is busy right now.\p"
	.string "You should come back later.\n"
	.string "I recommend checking out Verdanturf\l"
	.string "Town to the West - it's quite lovely!$"

MauvilleCity_Gym_Text_GymGuideHaltPlayer::
# 549 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson, the Gym Leader, is in the\n"
	.string "middle of a battle with another\l"
	.string "challenger already.\p"
	.string "You should come back later.\n"
	.string "Maybe take the chance to explore the\l"
	.string "local area first?$"
