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
//	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"

# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"

# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_SetNewLevelCap
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"

# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"

# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"

# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"

# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"

# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"

# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"

# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"

# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"

# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"

# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"

# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"

# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"

# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"

# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"

# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"

# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuideDuringChallenge::
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
//	call MauvilleCity_Gym_EventScript_SetNewLevelCap
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"

# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"

# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"

# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"

# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"

# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"

# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"

# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"

# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"

# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"

# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"

# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"

# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"

# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"

# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"

# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"

# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"

# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"

# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"

# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"

# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"

# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"

# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"

# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"

# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"

# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"

# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"

# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"

# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"

# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"

# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"

# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"

# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"

# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"

# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"

# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"

# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"

MauvilleCity_Gym_EventScript_SetNewLevelCap::
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 45
# 432 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
	return


MauvilleCity_Gym_EventScript_GymGuide::
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT, MauvilleCity_Gym_EventScript_GymGuide_1
# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuideDuringChallenge
	return

MauvilleCity_Gym_EventScript_GymGuide_1:
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuideWattsonBusy
	return


MauvilleCity_Gym_EventScript_GymGuideWattsonBusy::
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideWattsonBusy, MSGBOX_NPC
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end


MauvilleCity_Gym_EventScript_HaltPlayerTrigger5::
# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 5
# 470 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger6::
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 6
# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger7::
# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 7
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger8::
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 8
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger9::
# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 9
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayer::
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT, MauvilleCity_Gym_EventScript_HaltPlayer_2
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 502 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_TEMP_2
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_HaltPlayer_6
# 506 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_HaltPlayer_7
# 508 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 7, MauvilleCity_Gym_EventScript_HaltPlayer_8
# 510 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 8, MauvilleCity_Gym_EventScript_HaltPlayer_9
# 512 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 9, MauvilleCity_Gym_EventScript_HaltPlayer_10
MauvilleCity_Gym_EventScript_HaltPlayer_4:
# 515 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 517 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 518 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 519 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_E
# 520 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideHaltPlayer, MSGBOX_NPC
# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 522 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuidePushPlayer
# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Gym_Movement_Player_ForcedDown
# 524 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 525 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 10
# 526 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_TEMP_2
# 527 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_HaltPlayer_13
# 529 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_HaltPlayer_14
# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 7, MauvilleCity_Gym_EventScript_HaltPlayer_15
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 8, MauvilleCity_Gym_EventScript_HaltPlayer_16
# 535 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 9, MauvilleCity_Gym_EventScript_HaltPlayer_17
MauvilleCity_Gym_EventScript_HaltPlayer_11:
# 538 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 539 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 20
# 540 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 541 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 542 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_E
# 544 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_HaltPlayer_2:
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 1
# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_HaltPlayer_6:
# 505 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 5
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_7:
# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuideHaltPlayer6
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_8:
# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuideHaltPlayer7
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_9:
# 511 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuideHaltPlayer8
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_10:
# 513 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuideHaltPlayer9
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_13:
# 528 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuideReturnToSpot5
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_14:
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuideReturnToSpot6
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_15:
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuideReturnToSpot7
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_16:
# 534 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuideReturnToSpot8
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_17:
# 536 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement 6, MauvilleCity_Gym_Movement_GymGuideReturnToSpot9
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11


# 548 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_Player_ForcedDown:
# 549 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_down
	step_end

# 552 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuidePushPlayer:
# 553 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_left
	step_end

# 556 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer6:
# 557 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 560 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer7:
# 561 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 561 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 564 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer8:
# 565 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 565 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 565 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 568 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer9:
# 569 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 569 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 569 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 569 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 572 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot5:
# 573 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 576 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot6:
# 577 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 577 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 580 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot7:
# 581 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 581 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 581 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 584 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot8:
# 585 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 585 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 585 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 585 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 588 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot9:
# 589 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 589 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 589 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 589 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 589 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

MauvilleCity_Gym_Text_GymGuideWattsonBusy::
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson is busy right now.\p"
	.string "You should come back later.\n"
	.string "I recommend checking out Verdanturf\l"
	.string "Town to the West - it's quite lovely!$"

MauvilleCity_Gym_Text_GymGuideHaltPlayer::
# 464 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson, the Gym Leader, is in the\n"
	.string "middle of a battle with another\l"
	.string "challenger already.\p"
	.string "You should come back later.\n"
	.string "Maybe take the chance to explore the\l"
	.string "local area first?$"
