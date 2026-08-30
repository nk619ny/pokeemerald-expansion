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
	goto MauvilleCity_Gym_EventScript_Wattson_PostBadge
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"

# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
//	addvar VAR_PETALBURG_GYM_STATE, 1
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 4
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems2
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
//	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonExplainMegaEvolution, MSGBOX_DEFAULT
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_5, 1
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_MEGA_RING
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_SetNewLevelCap
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"

# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 6
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	//msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"

# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 6
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	//msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"

# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"

# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"

# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"

# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"

# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"

# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"

# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"

# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"

# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"

# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"

# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"

# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"

# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"

# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"

# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"

# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuideDuringChallenge::
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
//	call MauvilleCity_Gym_EventScript_SetNewLevelCap
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"

# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"

# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"

# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"

# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"

# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"

# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type Pokémon.\p"
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon, he'll zap them! Bzzt!\p"
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"

# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"

# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"

# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"

# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon and rock, it's all about heart,\n"
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"

# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"

# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"

# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"

# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"

# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"

# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"

# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my Pokémon's moves,\n"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"

# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"

# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"

# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"

# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"

# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"

# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"

# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"

# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"

# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, Pokémon can\n"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"

# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM there contains Charge Beam.\p"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When you attack, you often charge\n"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "more power for next time!\p"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"

# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"

# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: I swell with optimism, seeing\n"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "a promising young Trainer like you!$"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"

# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"

# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"

# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"

# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my Pokémon!\p"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"

# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"

# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"

# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 432 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my Pokémon!\p"
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one Pokémon with you!\p"
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon, all right?$"

MauvilleCity_Gym_EventScript_Switch1New::
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 0, 15, METATILE_MauvilleGym_PressedSwitch, FALSE
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 458 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 461 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 465 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 466 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_Switch2New::
# 471 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 472 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 473 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, 1
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 12, METATILE_MauvilleGym_PressedSwitch, FALSE
# 476 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 8, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 477 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 8, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 478 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 481 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 482 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 486 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 487 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_Switch3New::
# 491 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 492 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 493 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 1
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_MauvilleGym_PressedSwitch, FALSE
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_Off, FALSE
# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 499 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_PoleBottom_Off, FALSE
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_FloorTile, FALSE
# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 505 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_Switch4New::
# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 510 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 511 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_4, 1
# 512 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 513 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 9, METATILE_MauvilleGym_PressedSwitch, FALSE
# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 515 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 5, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 517 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 518 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 519 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 520 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 524 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 525 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_SetNewLevelCap::
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 39
# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TRAINER_HILL_STATE, 2
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
	return


MauvilleCity_Gym_EventScript_GymGuide::
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 544 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT, MauvilleCity_Gym_EventScript_GymGuide_1
# 548 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuideDuringChallenge
	return

MauvilleCity_Gym_EventScript_GymGuide_1:
# 545 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuideWattsonBusy
	return


MauvilleCity_Gym_EventScript_GymGuideWattsonBusy::
# 553 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 554 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 555 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideWattsonBusy, MSGBOX_NPC
# 556 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end


MauvilleCity_Gym_EventScript_HaltPlayerTrigger5::
# 573 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 5
# 574 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger6::
# 578 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 6
# 579 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger7::
# 583 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 7
# 584 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger8::
# 588 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 8
# 589 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayerTrigger9::
# 593 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_6, 9
# 594 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_HaltPlayer
	return


MauvilleCity_Gym_EventScript_HaltPlayer::
# 598 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 599 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT, MauvilleCity_Gym_EventScript_HaltPlayer_2
# 604 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, Common_Movement_ExclamationMark
# 605 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 606 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 607 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_TEMP_6
# 608 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_HaltPlayer_6
# 610 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_HaltPlayer_7
# 612 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 7, MauvilleCity_Gym_EventScript_HaltPlayer_8
# 614 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 8, MauvilleCity_Gym_EventScript_HaltPlayer_9
# 616 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 9, MauvilleCity_Gym_EventScript_HaltPlayer_10
MauvilleCity_Gym_EventScript_HaltPlayer_4:
# 619 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 620 "data/maps/MauvilleCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 621 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 622 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 623 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_E
# 624 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideHaltPlayer, MSGBOX_NPC
# 625 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 626 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuidePushPlayer
# 627 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Gym_Movement_Player_ForcedDown
# 628 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 629 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 10
# 630 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_TEMP_6
# 631 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_HaltPlayer_13
# 633 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_HaltPlayer_14
# 635 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 7, MauvilleCity_Gym_EventScript_HaltPlayer_15
# 637 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 8, MauvilleCity_Gym_EventScript_HaltPlayer_16
# 639 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 9, MauvilleCity_Gym_EventScript_HaltPlayer_17
MauvilleCity_Gym_EventScript_HaltPlayer_11:
# 642 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 643 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 20
# 644 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, Common_Movement_FaceLeft
# 645 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmovement 0
# 646 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 647 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_E
# 648 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_HaltPlayer_2:
# 600 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_7, 1
# 601 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_HaltPlayer_6:
# 609 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 5
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_7:
# 611 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer6
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_8:
# 613 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer7
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_9:
# 615 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer8
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_10:
# 617 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideHaltPlayer9
	goto MauvilleCity_Gym_EventScript_HaltPlayer_4

MauvilleCity_Gym_EventScript_HaltPlayer_13:
# 632 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot5
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_14:
# 634 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot6
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_15:
# 636 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot7
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_16:
# 638 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot8
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11

MauvilleCity_Gym_EventScript_HaltPlayer_17:
# 640 "data/maps/MauvilleCity_Gym/scripts.pory"
	applymovement LOCALID_MAUVILLEGYM_GUIDE, MauvilleCity_Gym_Movement_GymGuideReturnToSpot9
	goto MauvilleCity_Gym_EventScript_HaltPlayer_11


# 652 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_Player_ForcedDown:
# 653 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_down
	step_end

# 656 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuidePushPlayer:
# 657 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_left
	step_end

# 660 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer6:
# 661 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 664 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer7:
# 665 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 665 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 668 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer8:
# 669 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 669 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 669 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 672 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideHaltPlayer9:
# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_fast_left
	step_end

# 676 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot5:
# 677 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 680 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot6:
# 681 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 681 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 684 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot7:
# 685 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 685 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 685 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 688 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot8:
# 689 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 689 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 689 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 689 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

# 692 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_GymGuideReturnToSpot9:
# 693 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 693 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 693 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 693 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
# 693 "data/maps/MauvilleCity_Gym/scripts.pory"
	walk_right
	step_end

MauvilleCity_Gym_EventScript_SoftlockGuard::
# 697 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_9, 1
# 698 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	return


MauvilleCity_Gym_EventScript_CallFromProfBirch::
# 703 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 704 "data/maps/MauvilleCity_Gym/scripts.pory"
	pokenavcall MauvilleCity_Gym_Text_ProfBirchCall
# 705 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 706 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 707 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_5, 0
# 708 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end


MauvilleCity_Gym_EventScript_Wattson_PostBadge::
# 720 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_PostBadge_2
MauvilleCity_Gym_EventScript_Wattson_PostBadge_1:
# 725 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_TEMP_8
# 726 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Wattson_PostBadge_6
# 729 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Wattson_PostBadge_7
# 732 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Wattson_PostBadge_8
# 735 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Wattson_PostBadge_9
# 738 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_Wattson_PostBadge_10
# 742 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_Wattson_PostBadge_2:
# 721 "data/maps/MauvilleCity_Gym/scripts.pory"
	random 3
# 722 "data/maps/MauvilleCity_Gym/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
# 723 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_TEMP_8, 1
	goto MauvilleCity_Gym_EventScript_Wattson_PostBadge_1

MauvilleCity_Gym_EventScript_Wattson_PostBadge_4:
# 745 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 746 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
	end

MauvilleCity_Gym_EventScript_Wattson_PostBadge_6:
# 727 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_Wattson_Mauville, MSGBOX_NPC
# 728 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_TEMP_8, 1
	goto MauvilleCity_Gym_EventScript_Wattson_PostBadge_4

MauvilleCity_Gym_EventScript_Wattson_PostBadge_7:
# 730 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_Wattson_SeaMauville, MSGBOX_NPC
# 731 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_TEMP_8, 1
	goto MauvilleCity_Gym_EventScript_Wattson_PostBadge_4

MauvilleCity_Gym_EventScript_Wattson_PostBadge_8:
# 733 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_Wattson_NewMauville, MSGBOX_NPC
# 734 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_TEMP_8, 1
	goto MauvilleCity_Gym_EventScript_Wattson_PostBadge_4

MauvilleCity_Gym_EventScript_Wattson_PostBadge_9:
# 736 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_NPC
# 737 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_TEMP_8, 1
	goto MauvilleCity_Gym_EventScript_Wattson_PostBadge_4

MauvilleCity_Gym_EventScript_Wattson_PostBadge_10:
# 739 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_NPC
# 740 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_TEMP_8, 1
	goto MauvilleCity_Gym_EventScript_Wattson_PostBadge_4


MauvilleCity_Gym_Text_GymGuideWattsonBusy::
# 560 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson is busy right now.\p"
	.string "You should come back later.\n"
	.string "I recommend checking out Verdanturf\l"
	.string "Town to the West - it's quite lovely!$"

MauvilleCity_Gym_Text_WattsonExplainMegaEvolution::
# 564 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: One last thing. You may have\n"
	.string "noticed my Manectric Mega Evolved\l"
	.string "during our battle.\p"
	.string "All Gym Leaders after a Trainer's first\n"
	.string "will use a Mega Evolution in battle.\p"
	.string "You should collect Mega Stones so you\n"
	.string "can, too!$"

MauvilleCity_Gym_Text_GymGuideHaltPlayer::
# 568 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson, the Gym Leader, is in the\n"
	.string "middle of a battle with another\l"
	.string "challenger already.\p"
	.string "You should come back later.\n"
	.string "Maybe take the chance to explore the\l"
	.string "local area first?$"

MauvilleCity_Gym_Text_ProfBirchCall::
# 712 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Prof. Birch: Hello, {PLAYER}!\p"
	.string "I just saw a Mega Ring registered to\n"
	.string "you come online.\p"
	.string "To celebrate, I'd like to give you a Mega\n"
	.string "Stone!\p"
	.string "Please swing by my lab when you have a\n"
	.string "chance.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

MauvilleCity_Gym_Text_Wattson_Mauville::
# 750 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: Mauville City is in an\n"
	.string "extremely important location,\l"
	.string "connecting several major routes in\l"
	.string "Hoenn.\p"
	.string "But rivers, incomplete tunnels, and\n"
	.string "inhospitable desert limit people from\l"
	.string "traveling through.\p"
	.string "I have a vision of developing the area,\n"
	.string "so Mauville can one day be a major\l"
	.string "metropolis and transit hub for the\l"
	.string "region.$"

MauvilleCity_Gym_Text_Wattson_SeaMauville::
# 754 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: I once worked with Maxie on a\n"
	.string "project to create a new artificial city\l"
	.string "in the Ocean.\p"
	.string "It was a really promising project, but it\n"
	.string "had to be canceled after an accident\l"
	.string "almost killed a worker.\p"
	.string "The foreman of the project - a very\n"
	.string "charismatic guy! - fortunately rescued\l"
	.string "the worker.\p"
	.string "The foreman then got the project shut\n"
	.string "down, and the construction ship\l"
	.string "converted to a habitat for the Pokémon\l"
	.string "that moved in.\p"
	.string "I'm glad that some good for Pokémon\n"
	.string "came out of it.$"

MauvilleCity_Gym_Text_Wattson_NewMauville::
# 758 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: Maxie and I worked on\n"
	.string "developing an underground expansion\l"
	.string "for Mauville, to accommodate everyone\l"
	.string "as the city grows.\p"
	.string "The project has been put on hold after\n"
	.string "the backlash to the Slateport land\l"
	.string "project, but we were still able to\l"
	.string "install some large generators which\l"
	.string "provide power to Mauville and the\l"
	.string "surrounding towns.$"
