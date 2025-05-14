# 1 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_RICH_BOY, 1
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GENTLEMAN, 2
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_SCIENTIST, 3
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_STEVEN, 4
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Grunt names numbered like their Trainer values (which are for the full Space Center)
# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_6, 5
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_5, 6
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_7, 7
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_TABITHA, 8
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_COURTNEY, 8
# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_MAXIE, 9
# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 16 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
# 17 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 18 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition:
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 3
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 3, 2
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GENTLEMAN, 1, 3
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_6, 11, 2
# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_7, 15, 2
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_5, 13, 4
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnFrame:
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerExit
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT_5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT_6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT_7, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_6
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_7
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_5
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_right
# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
/*
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 30
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
*/
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_COURTNEY_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_STEVEN
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_6
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_7
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_5
# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_TABITHA
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_MAXIE
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SCIENTIST, 5, 6
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SCIENTIST, DIR_SOUTH
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_GENTLEMAN, 11, 8
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_GENTLEMAN, DIR_NORTH
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_RICH_BOY, 6, 2
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_RICH_BOY, DIR_NORTH
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_STEVEN
# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 6
# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SCIENTIST
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#ifdef BUGFIX
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#endif
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_NORTH
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_EAST
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MOSSDEEP has mainly sunny weather,\n"
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "and its winds are stable.\p"
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's an ideal location for launching\n"
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "rockets.$"
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "have liked being an astronaut…\p"
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No… It's not too late!\n"
# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can and will try!$"
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "space one day…$"
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's wrong with you?\p"
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're outnumbered three to one,\n"
# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "but you still want to take us on?$"
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what a smart person'll do!$"
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Okay, I'll go first!$"
# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's too soon to be relieved!\n"
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm up next!$"
# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I bet you want to take a break.\n"
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But I'm not about to let you do that!$"
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what we should've done…$"
# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "mess we got ourselves into.$"
# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We three losing like this…\n"
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We look worse than usual by triple!$"
# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are we being useful to our leader\n"
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "at all?$"
# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 420 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
# 421 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hehehe!\p"
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We come all the way here to get some\n"
# 423 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel, and we're interfered with again!\p"
# 424 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If you're going to mess with us too,\n"
# 425 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we'll take care of you at the same time!$"
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 427 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
# 428 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Clear out of the way!\n"
# 429 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Don't you dare interfere!$"
# 430 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel:
# 432 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: TEAM MAGMA…\p"
# 433 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's the point of stealing rocket\n"
# 434 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel?$"
# 435 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 436 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
# 437 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Fufufu… Since you're so\n"
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "curious, you deserve an explanation.\p"
# 439 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We're going to jettison the entire\n"
# 440 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "load into MT. CHIMNEY!\p"
# 441 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "With GROUDON gone, we have no need\n"
# 442 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "for that slag heap of a mountain!\p"
# 443 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "So we'll use the fuel's power to make\n"
# 444 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the volcano erupt!\p"
# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It will be savage!$"
# 446 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle:
# 448 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 449 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're going to help me?\p"
# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Let's go into battle together!\n"
# 451 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are you ready?$"
# 452 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 453 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly:
# 454 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Then, hurry!\n"
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Get ready quickly!$"
# 456 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 457 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
# 458 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "All I want…\n"
# 459 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I just want to expand the land mass…$"
# 460 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_Text_TabithaDefeat:
# 462 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm with our leader…$"
# 463 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 464 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
# 465 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: We failed to make the volcano\n"
# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "erupt…\p"
# 467 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We failed to control GROUDON after\n"
# 468 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we had awoken it…\p"
# 469 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Is our goal to expand the land\n"
# 470 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "misguided?\p"
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\n"
# 472 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 473 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If…\n"
# 474 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If we, TEAM MAGMA, are wrong…\l"
# 475 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 476 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Then might TEAM AQUA's goal to expand\n"
# 477 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the sea also be equally misguided?$"
# 478 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 479 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
# 480 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: All right…\n"
# 481 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We will give up on the fuel…\p"
# 482 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "There appear to be more important\n"
# 483 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "matters that I must examine…$"
# 484 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 485 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome:
# 486 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Whew, that was too tense.\n"
# 487 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}{KUN}, thank you.\p"
# 488 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I have something to give you as\n"
# 489 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "thanks for your support.\p"
# 490 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Please come see me at home\n"
# 491 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "after this.\p"
# 492 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Oh, yes, I don't live in RUSTBORO CITY.\n"
# 493 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I live right here on this island.$"

MossdeepCity_SpaceCenter_2F_EventScript_PlayerLocation1::
# 501 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


MossdeepCity_SpaceCenter_2F_EventScript_PlayerLocation2::
# 506 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_TEMP_3, 2
	return


MossdeepCity_SpaceCenter_2F_EventScript_PlayerLocation3::
# 511 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_TEMP_3, 3
	return


MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle::
# 516 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 517 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_STEVEN
# 518 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_MAXIE
# 519 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieStopThis, MSGBOX_DEFAULT
# 520 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
# 521 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 522 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 523 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_FaceRight
# 524 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 525 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 526 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 527 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenMaxieEnter
# 528 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_StevenMaxieEnter
# 529 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 530 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 531 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 532 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_CourtneyMeteorite, MSGBOX_DEFAULT
# 533 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 534 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 535 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 536 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWereWrong, MSGBOX_DEFAULT
# 537 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 538 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_CourtneySilent, MSGBOX_DEFAULT
# 539 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 540 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 541 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 542 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenArchieKyogre, MSGBOX_DEFAULT
# 543 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 544 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 545 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 546 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 547 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieKyogreLocation, MSGBOX_DEFAULT
# 548 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 549 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_TEMP_3
# 550 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_3
# 552 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_4
# 554 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_5
MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1:
# 557 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 558 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_TEMP_3
# 559 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_8
# 561 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_9
# 563 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_10
MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6:
# 566 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FaceLeft
# 567 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_FaceDown
# 568 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 569 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxiePlayerPursue, MSGBOX_DEFAULT
# 570 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 571 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	giveitem ITEM_HM08, 1
# 572 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitfanfare
# 573 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieExplainDive, MSGBOX_DEFAULT
# 574 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 575 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_TEMP_3
# 576 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_13
# 577 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_13
# 579 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_14
MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_11:
# 582 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 583 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_FaceRight
# 584 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 585 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenInvestigateMeteorite, MSGBOX_DEFAULT
# 586 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 587 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 75
# 588 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 589 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 590 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_SetPostMagmaFlags
# 591 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_3:
# 551 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer1
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_4:
# 553 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer2
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_5:
# 555 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer3
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_8:
# 560 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_9:
# 562 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_10:
# 564 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_13:
# 578 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenApproachCourtney
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_11

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_14:
# 580 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_11


MossdeepCity_SpaceCenter_2F_EventScript_SetPostMagmaFlags::
# 596 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 597 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 598 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 599 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 600 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 601 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 602 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 603 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 604 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 605 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 606 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 607 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 608 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 609 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
	return


MossdeepCity_SpaceCenter_2F_EventScript_Courtney::
# 614 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_CourtneyIntro, MossdeepCity_SpaceCenter_2F_Text_CourtneyDefeat, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle
# 615 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_CourtneyInFreeRoam, MSGBOX_NPC
	end


MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 620 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieInFreeRoam, MSGBOX_NPC
	end


MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 625 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenInFreeRoam, MSGBOX_NPC
	end


# 629 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenMaxieEnter:
# 630 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 630 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 630 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 630 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 630 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 630 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
	step_end

# 633 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer1:
# 634 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 634 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 634 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 634 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 635 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_up
	step_end

# 638 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer2:
# 639 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 639 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
	step_end

# 642 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer3:
# 643 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 643 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 644 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_up
	step_end

# 647 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenApproachCourtney:
# 648 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 648 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
	step_end

MossdeepCity_SpaceCenter_2F_Text_CourtneyIntro::
# 651 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: …You. You infiltrated the\n"
	.string "hideout. You interfered with Maxie\l"
	.string "awakening Groudon. Common\l"
	.string "denominator… you. Necessary condition:\l"
	.string "your removal.$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyDefeat::
# 655 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: Additional data collected.\n"
	.string "Success rate: 0%.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieStopThis::
# 659 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: Courtney! Stop this!$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyMeteorite::
# 663 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: This meteorite. It has a\n"
	.string "connection to a third ancient Pokémon.\l"
	.string "One that can tame the primal Groudon.\l"
	.string "If I obtain it, we can…$"

MossdeepCity_SpaceCenter_2F_Text_MaxieWeWereWrong::
# 667 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: We were wrong. Our models did not\n"
	.string "fully comprehend the implications of\l"
	.string "land creation, and the power and will of\l"
	.string "Groudon was beyond our understanding.\l"
	.string "We need to surrender our ambitions\l"
	.string "before we make things even worse.$"

MossdeepCity_SpaceCenter_2F_Text_CourtneySilent::
# 671 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: ...$"

MossdeepCity_SpaceCenter_2F_Text_StevenArchieKyogre::
# 675 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: Right now, Archie is on his way\n"
	.string "to awaken the ancient undersea\l"
	.string "Pokémon, Kyogre. As dangerous as it is\l"
	.string "to have Groudon wandering Hoenn,\l"
	.string "adding Kyogre to the mix will make the\l"
	.string "situation exponentially worse.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieKyogreLocation::
# 679 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: We will help. Based on weather\n"
	.string "patterns we've observed in our\l"
	.string "research, Kyogre is likely located in a\l"
	.string "seafloor cavern under Route 128.$"

MossdeepCity_SpaceCenter_2F_Text_MaxiePlayerPursue::
# 683 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: However, we shouldn't be the\n"
	.string "ones to pursue them. Our presence will\l"
	.string "only antagonize Archie further, and\l"
	.string "render him even more unpredictable. If\l"
	.string "anyone can get through to him, it's you,\l"
	.string "{PLAYER}. And this HM should let you\l"
	.string "and your Pokémon go after them.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieExplainDive::
# 687 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: HM08 contains the move Dive. It\n"
	.string "will allow you and your Pokémon to\l"
	.string "follow Team Aqua to the seafloor cavern\l"
	.string "where they are searching for Kyogre.$"

MossdeepCity_SpaceCenter_2F_Text_StevenInvestigateMeteorite::
# 691 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: I will investigate this\n"
	.string "meteorite Courtney found. If there is\l"
	.string "some way to pacify Groudon, we'll need\l"
	.string "to find it.$"

MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel::
# 695 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would Team Magma want to steal a\n"
	.string "meteorite in the first place?$"

MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace::
# 699 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Team Magma… Are they just big fans of\n"
	.string "rocks?$"

MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis::
# 703 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "The results of scientific exploration\n"
	.string "belong to all of humanity. Team Magma\l"
	.string "can't just take it for themselves!$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyInFreeRoam::
# 707 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: ...\p"
	.string "All our work...$"

MossdeepCity_SpaceCenter_2F_Text_MaxieInFreeRoam::
# 711 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: After everything, it turned out\n"
	.string "I had much to learn.\p"
	.string "Thank you, {PLAYER}. And good luck.$"

MossdeepCity_SpaceCenter_2F_Text_StevenInFreeRoam::
# 715 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: There is something about this\n"
	.string "meteorite… I can feel it.$"
