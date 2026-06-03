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
	giveitem ITEM_TM_EXPANDING_FORCE
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 73
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_TRAINER_HILL_STATE, 7
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems7PreSurf
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	//call Common_EventScript_RemoveOptionalItems7PostSurf //leave these available until post Juan
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"

# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitemspace ITEM_CALCIUM
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitemspace ITEM_ZINC
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_HP_UP, 3
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 3
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"

# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitemspace ITEM_CALCIUM
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitemspace ITEM_ZINC
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_HP_UP, 3
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 3
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"

# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"

# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"

# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"

# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"

# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"

# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"

# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"

# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"

# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"

# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"

# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"

# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"

# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"

# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"

# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"

# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"

# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"

# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"

# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"

# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"

# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"

# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"

# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"

# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdviceNew, MSGBOX_DEFAULT
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"

# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"

# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"

# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"

# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"

# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"

# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"

# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	//goto_if_unset FLAG_MOSSDEEP_GYM_B2B_1, MossdeepCity_Gym_EventScript_FirstBackToBack
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"

# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"

# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"

# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"

# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"

# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type Pokémon.\p"
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type Pokémon,\l"
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon. Go for it!$"
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"

# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"

# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"

# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"

# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"

# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"

# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"

# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"

# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
/*
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"

# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My Pokémon battling skills are out\n"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"

# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
*/
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"

# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"

# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"

# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"

# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"

# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"

# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"

# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"

# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"

# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"

# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"

# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"

# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"

# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"

# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"

# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"

# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"

# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 531 "data/maps/MossdeepCity_Gym/scripts.pory"

# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"

# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"

# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"

# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"

# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"

# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"

# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"

# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon hard-battling power!$"
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"

# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"

# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible Pokémon power next.$"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"

# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
/*
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	*/
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"

# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"

# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"

# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
/*
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of Pokémon.\p"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
*/
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"

# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM contains…\n"
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: EXPANDING FORCE!\p"
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: In Psychic Terrain…\n"
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It hits all enemies!\p"
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC Pokémon!\p"
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"

# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"

# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your Pokémon can even rival\l"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"

# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Pokémon that can battle.\p"
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more Pokémon.$"
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"

# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 639 "data/maps/MossdeepCity_Gym/scripts.pory"

# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"

# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Pokémon…\n"
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Pokémon…\p"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"

# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your Pokémon…\n"
# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"

# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"

# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 674 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one Pokémon!\n"
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one Pokémon!\p"
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 677 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two Pokémon when you come back.$"

MossdeepCity_Gym_Text_TateAndLizaIntro::
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
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
# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE lets you use the\n"
	.string "HM move DIVE outside of battle.\p"
	.string "LIZA: You should also take this, too.$"

MossdeepCity_Gym_Text_BlakeIntro::
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate your held\n"
	.string "items telekinetically!\p"
	.string "Wrooooooooaaaar!$"

MossdeepCity_Gym_Text_BlakeDefeat::
# 693 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Alright, alright, I'll put them back!$"

MossdeepCity_Gym_Text_BlakePostBattle::
# 697 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My mental powers are exhausted...$"

MossdeepCity_Gym_Text_GymGuideAdviceNew::
# 701 "data/maps/MossdeepCity_Gym/scripts.pory"
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
