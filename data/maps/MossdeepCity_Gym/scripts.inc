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
	setflag FLAG_HIDE_SWIMMER_BLOCKING_SOOTOPOLIS
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_127_TRAINERS
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 73
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_TRAINER_HILL_STATE, 7
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems7PreSurf
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	//call Common_EventScript_RemoveOptionalItems7PostSurf //leave these available until post Juan
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"

# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitemspace ITEM_CALCIUM
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitemspace ITEM_ZINC
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_HP_UP, 3
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 3
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"

# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitemspace ITEM_CALCIUM
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitemspace ITEM_ZINC
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_HP_UP, 3
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_CARBOS, 3
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"

# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"

# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"

# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"

# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"

# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"

# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"

# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"

# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"

# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"

# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"

# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"

# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"

# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"

# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"

# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"

# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"

# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"

# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"

# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"

# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"

# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"

# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"

# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"

# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdviceNew, MSGBOX_DEFAULT
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"

# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"

# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"

# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"

# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"

# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"

# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"

# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	//goto_if_unset FLAG_MOSSDEEP_GYM_B2B_1, MossdeepCity_Gym_EventScript_FirstBackToBack
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"

# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"

# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"

# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"

# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"

# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type Pokémon.\p"
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type Pokémon,\l"
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon. Go for it!$"
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"

# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"

# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"

# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"

# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"

# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"

# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"

# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"

# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
/*
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"

# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My Pokémon battling skills are out\n"
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"

# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
*/
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"

# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"

# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"

# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"

# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"

# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"

# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"

# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"

# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"

# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"

# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"

# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"

# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"

# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"

# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"

# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"

# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"

# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"

# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"

# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"

# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"

# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"

# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"

# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"

# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"

# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon hard-battling power!$"
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"

# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"

# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible Pokémon power next.$"
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"

# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
/*
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
	*/
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"

# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"

# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"

# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
/*
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of Pokémon.\p"
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
*/
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"

# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM contains…\n"
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: EXPANDING FORCE!\p"
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: In Psychic Terrain…\n"
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It hits all enemies!\p"
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC Pokémon!\p"
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"

# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"

# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your Pokémon can even rival\l"
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"

# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Pokémon that can battle.\p"
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more Pokémon.$"
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"

# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"

# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"

# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Pokémon…\n"
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Pokémon…\p"
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"

# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your Pokémon…\n"
# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"

# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"

# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 674 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one Pokémon!\n"
# 677 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one Pokémon!\p"
# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 679 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two Pokémon when you come back.$"

MossdeepCity_Gym_Text_TateAndLizaIntro::
# 682 "data/maps/MossdeepCity_Gym/scripts.pory"
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
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE lets you use the\n"
	.string "HM move DIVE outside of battle.\p"
	.string "LIZA: You should also take this, too.$"

MossdeepCity_Gym_Text_BlakeIntro::
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate your held\n"
	.string "items telekinetically!\p"
	.string "Wrooooooooaaaar!$"

MossdeepCity_Gym_Text_BlakeDefeat::
# 695 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Alright, alright, I'll put them back!$"

MossdeepCity_Gym_Text_BlakePostBattle::
# 699 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My mental powers are exhausted...$"

MossdeepCity_Gym_Text_GymGuideAdviceNew::
# 703 "data/maps/MossdeepCity_Gym/scripts.pory"
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
