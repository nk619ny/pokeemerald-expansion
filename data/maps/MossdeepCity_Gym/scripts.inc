# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_Gym/scripts.pory"

# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"

# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"

# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad:
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"

# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"

# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"

# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"

# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"

# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"

# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"

# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"

# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	//setvar VAR_STARTING_TERRAIN, STARTING_STATUS_PSYCHIC_TERRAIN
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	//specialvar VAR_RESULT, ShouldTryRematchBattle
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"

# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 73
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_TRAINER_HILL_STATE, 7
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems7PreSurf
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	//call Common_EventScript_RemoveOptionalItems7PostSurf //leave these available until post Juan
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"

# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"

# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"

# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"

# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"

# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"

# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"

# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"

# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"

# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"

# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"

# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"

# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"

# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"

# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"

# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"

# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"

# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"

# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"

# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"

# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"

# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"

# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"

# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"

# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"

# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"

# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdviceNew, MSGBOX_DEFAULT
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"

# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"

# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"

# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"

# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"

# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"

# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"

# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	//goto_if_unset FLAG_MOSSDEEP_GYM_B2B_1, MossdeepCity_Gym_EventScript_FirstBackToBack
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"

# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"

# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"

# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"

# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"

# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type Pokémon.\p"
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type Pokémon,\l"
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon. Go for it!$"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"

# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"

# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"

# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"

# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"

# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"

# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"

# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"

# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
/*
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"

# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My Pokémon battling skills are out\n"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"

# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
*/
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"

# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"

# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"

# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"

# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"

# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"

# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"

# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"

# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"

# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"

# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"

# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"

# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"

# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"

# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"

# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"

# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"

# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"

# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"

# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"

# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"

# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"

# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"

# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"

# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"

# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon hard-battling power!$"
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"

# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"

# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible Pokémon power next.$"
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"

# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
/*
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	*/
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"

# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"

# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"

# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
/*
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of Pokémon.\p"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
*/
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"

# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM contains…\n"
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: EXPANDING FORCE!\p"
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: In Psychic Terrain…\n"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It hits all enemies!\p"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC Pokémon!\p"
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"

# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"

# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your Pokémon can even rival\l"
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"

# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Pokémon that can battle.\p"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more Pokémon.$"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"

# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"

# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"

# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Pokémon…\n"
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Pokémon…\p"
# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"

# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your Pokémon…\n"
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"

# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"

# 658 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one Pokémon!\n"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one Pokémon!\p"
# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two Pokémon when you come back.$"

MossdeepCity_Gym_Text_TateAndLizaIntro::
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We were the first to master\n"
	.string "double battles…\p"
	.string "LIZA: Fighting perfectly in sync!\p"
	.string "TATE: Then the Hoenn League made it a\n"
	.string "rule!\p"
	.string "LIZA: So we had to advance further…\p"
	.string "TATE: We looked to the Science Center…\p"
	.string "LIZA: And devoted our psychic abilities\n"
	.string "to controlling Time…\p"
	.string "TATE: And Space!\p"
	.string "LIZA: Can you defeat this…\p"
	.string "TATE: Supernatural combination?$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis::
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE lets you use the\n"
	.string "HM move DIVE outside of battle.\p"
	.string "LIZA: You should also take this, too.$"

MossdeepCity_Gym_Text_BlakeIntro::
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate your held\n"
	.string "items telekinetically!\p"
	.string "Wrooooooooaaaar!$"

MossdeepCity_Gym_Text_BlakeDefeat::
# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Alright, alright, I'll put them back!$"

MossdeepCity_Gym_Text_BlakePostBattle::
# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My mental powers are exhausted...$"

MossdeepCity_Gym_Text_GymGuideAdviceNew::
# 692 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
	.string "{PLAYER}?\p"
	.string "The GYM LEADERS here use PSYCHIC-type\n"
	.string "Pokémon.\p"
	.string "But the trainers in this gym, including\n"
	.string "the Leaders, often possess strange\l"
	.string "abilities that distort normal battle\l"
	.string "conditions.\p"
	.string "And on top of that, all the trainers\n"
	.string "before the Leaders will face you in\l"
	.string "back-to-back battles.\p"
	.string "You'll need to be prepared for anything!$"
