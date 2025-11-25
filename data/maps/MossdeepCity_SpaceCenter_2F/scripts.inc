# 1 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition:
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 3
# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_RICH_BOY, 3, 2
# 17 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_GENTLEMAN, 1, 3
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_GRUNT_6, 11, 2
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_GRUNT_7, 15, 2
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_GRUNT_5, 13, 4
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnFrame:
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerExit
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_GRUNT_5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_GRUNT_6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_GRUNT_7, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_2F_GRUNT_6
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_2F_GRUNT_7
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_2F_GRUNT_5
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_right
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
/*
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 30
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
*/
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_COURTNEY_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_STEVEN
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	//applymovement LOCALID_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	//applymovement LOCALID_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_GRUNT_6
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_GRUNT_7
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_GRUNT_5
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	//removeobject LOCALID_SPACE_CENTER_2F_TABITHA
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_MAXIE
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_SCIENTIST, DIR_SOUTH
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_GENTLEMAN, 11, 8
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_GENTLEMAN, DIR_NORTH
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_RICH_BOY, 6, 2
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_RICH_BOY, DIR_NORTH
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_STEVEN
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#ifdef BUGFIX
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#endif
# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_NORTH
# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_EAST
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MOSSDEEP has mainly sunny weather,\n"
# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "and its winds are stable.\p"
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's an ideal location for launching\n"
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "rockets.$"
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "have liked being an astronaut…\p"
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No… It's not too late!\n"
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can and will try!$"
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "space one day…$"
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's wrong with you?\p"
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're outnumbered three to one,\n"
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "but you still want to take us on?$"
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what a smart person'll do!$"
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Okay, I'll go first!$"
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's too soon to be relieved!\n"
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm up next!$"
# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I bet you want to take a break.\n"
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But I'm not about to let you do that!$"
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what we should've done…$"
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "mess we got ourselves into.$"
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We three losing like this…\n"
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We look worse than usual by triple!$"
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are we being useful to our leader\n"
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "at all?$"
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hehehe!\p"
# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We come all the way here to get some\n"
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel, and we're interfered with again!\p"
# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If you're going to mess with us too,\n"
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we'll take care of you at the same time!$"
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Clear out of the way!\n"
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Don't you dare interfere!$"
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel:
# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: TEAM MAGMA…\p"
# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's the point of stealing rocket\n"
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel?$"
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
# 420 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Fufufu… Since you're so\n"
# 421 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "curious, you deserve an explanation.\p"
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We're going to jettison the entire\n"
# 423 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "load into MT. CHIMNEY!\p"
# 424 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "With GROUDON gone, we have no need\n"
# 425 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "for that slag heap of a mountain!\p"
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "So we'll use the fuel's power to make\n"
# 427 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the volcano erupt!\p"
# 428 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It will be savage!$"
# 429 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 430 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle:
# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 432 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're going to help me?\p"
# 433 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Let's go into battle together!\n"
# 434 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are you ready?$"
# 435 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 436 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly:
# 437 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Then, hurry!\n"
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Get ready quickly!$"
# 439 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 440 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
# 441 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "All I want…\n"
# 442 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I just want to expand the land mass…$"
# 443 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 444 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_Text_TabithaDefeat:
# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm with our leader…$"
# 446 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
# 448 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: We failed to make the volcano\n"
# 449 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "erupt…\p"
# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We failed to control GROUDON after\n"
# 451 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we had awoken it…\p"
# 452 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Is our goal to expand the land\n"
# 453 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "misguided?\p"
# 454 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\n"
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 456 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If…\n"
# 457 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If we, TEAM MAGMA, are wrong…\l"
# 458 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 459 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Then might TEAM AQUA's goal to expand\n"
# 460 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the sea also be equally misguided?$"
# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 462 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
# 463 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: All right…\n"
# 464 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We will give up on the fuel…\p"
# 465 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "There appear to be more important\n"
# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "matters that I must examine…$"
# 467 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 468 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome:
# 469 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Whew, that was too tense.\n"
# 470 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}{KUN}, thank you.\p"
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I have something to give you as\n"
# 472 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "thanks for your support.\p"
# 473 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Please come see me at home\n"
# 474 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "after this.\p"
# 475 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Oh, yes, I don't live in RUSTBORO CITY.\n"
# 476 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I live right here on this island.$"

MossdeepCity_SpaceCenter_2F_EventScript_PlayerLocation1::
# 484 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


MossdeepCity_SpaceCenter_2F_EventScript_PlayerLocation2::
# 489 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_TEMP_3, 2
	return


MossdeepCity_SpaceCenter_2F_EventScript_PlayerLocation3::
# 494 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_TEMP_3, 3
	return


MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle::
# 499 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 500 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_STEVEN
# 501 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_MAXIE
# 502 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieStopThis, MSGBOX_DEFAULT
# 503 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_ExclamationMark
# 504 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 505 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 506 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_FaceRight
# 507 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 508 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 509 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 510 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenMaxieEnter
# 511 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_StevenMaxieEnter
# 512 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 513 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 514 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 515 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_CourtneyMeteorite, MSGBOX_DEFAULT
# 516 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 517 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 518 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 519 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWereWrong, MSGBOX_DEFAULT
# 520 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 521 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_CourtneySilent, MSGBOX_DEFAULT
# 522 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 523 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 524 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 525 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenArchieKyogre, MSGBOX_DEFAULT
# 526 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 527 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 528 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 529 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 530 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieKyogreLocation, MSGBOX_DEFAULT
# 531 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 532 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_TEMP_3
# 533 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_3
# 535 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_4
# 537 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_5
MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1:
# 540 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 541 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_TEMP_3
# 542 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_8
# 544 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_9
# 546 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_10
MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6:
# 549 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, Common_Movement_FaceLeft
# 550 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_FaceDown
# 551 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 552 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxiePlayerPursue, MSGBOX_DEFAULT
# 553 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 554 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	giveitem ITEM_HM08, 1
# 555 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitfanfare
# 556 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieExplainDive, MSGBOX_DEFAULT
# 557 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 558 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_TEMP_3
# 559 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_13
# 560 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_13
# 562 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_14
MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_11:
# 565 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 566 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_FaceRight
# 567 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 568 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenInvestigateMeteorite, MSGBOX_DEFAULT
# 569 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 570 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 75
# 571 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 572 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 573 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_SetPostMagmaFlags
# 574 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_3:
# 534 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer1
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_4:
# 536 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer2
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_5:
# 538 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer3
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_8:
# 543 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_9:
# 545 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_10:
# 547 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_13:
# 561 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenApproachCourtney
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_11

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_14:
# 563 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, Common_Movement_WalkInPlaceFasterLeft
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_11


MossdeepCity_SpaceCenter_2F_EventScript_SetPostMagmaFlags::
# 579 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 580 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 581 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 582 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 583 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 584 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 585 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 586 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 587 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 588 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 589 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 590 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 591 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 592 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
	return


MossdeepCity_SpaceCenter_2F_EventScript_Courtney::
# 597 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_CourtneyIntro, MossdeepCity_SpaceCenter_2F_Text_CourtneyDefeat, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle
# 598 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_CourtneyInFreeRoam, MSGBOX_NPC
	end


MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 603 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieInFreeRoam, MSGBOX_NPC
	end


MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 608 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenInFreeRoam, MSGBOX_NPC
	end


# 612 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenMaxieEnter:
# 613 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 613 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 613 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 613 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 613 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 613 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
	step_end

# 616 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer1:
# 617 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 617 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 617 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 617 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 618 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_up
	step_end

# 621 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer2:
# 622 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 622 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
	step_end

# 625 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer3:
# 626 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 626 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 627 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_up
	step_end

# 630 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenApproachCourtney:
# 631 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 631 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 704 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 705 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 706 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkitem ITEM_TM_METEOR_BEAM
# 707 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_2
# 716 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 717 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_1:
# 719 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_2:
# 708 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_Text_0, MSGBOX_DEFAULT
# 709 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 710 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	giveitem ITEM_TM_METEOR_BEAM
# 711 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitfanfare
# 712 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_Text_1, MSGBOX_DEFAULT
# 713 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_1


MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_Text_0:
# 708 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You look like a Pokémon trainer.\n"
	.string "Look at this new TM we've developed\l"
	.string "through our studies.$"

MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_Text_1:
# 712 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "By channeling the power of outer space,\n"
	.string "a Pokémon can power itself up and\l"
	.string "attack.$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyIntro::
# 634 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: …You. You infiltrated the\n"
	.string "hideout. You interfered with Maxie\l"
	.string "awakening Groudon. Common\l"
	.string "denominator… you. Necessary condition:\l"
	.string "your removal.$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyDefeat::
# 638 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: Additional data collected.\n"
	.string "Success rate: 0%.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieStopThis::
# 642 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: Courtney! Stop this!$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyMeteorite::
# 646 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: This meteorite. It has a\n"
	.string "connection to a third ancient Pokémon.\l"
	.string "One that can tame the primal Groudon.\l"
	.string "If I obtain it, we can…$"

MossdeepCity_SpaceCenter_2F_Text_MaxieWeWereWrong::
# 650 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: We were wrong. Our models did not\n"
	.string "fully comprehend the implications of\l"
	.string "land creation, and the power and will of\l"
	.string "Groudon was beyond our understanding.\l"
	.string "We need to surrender our ambitions\l"
	.string "before we make things even worse.$"

MossdeepCity_SpaceCenter_2F_Text_CourtneySilent::
# 654 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: ...$"

MossdeepCity_SpaceCenter_2F_Text_StevenArchieKyogre::
# 658 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: Right now, Archie is on his way\n"
	.string "to awaken the ancient undersea\l"
	.string "Pokémon, Kyogre. As dangerous as it is\l"
	.string "to have Groudon wandering Hoenn,\l"
	.string "adding Kyogre to the mix will make the\l"
	.string "situation exponentially worse.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieKyogreLocation::
# 662 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: We will help. Based on weather\n"
	.string "patterns we've observed in our\l"
	.string "research, Kyogre is likely located in a\l"
	.string "seafloor cavern under Route 128.$"

MossdeepCity_SpaceCenter_2F_Text_MaxiePlayerPursue::
# 666 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: However, we shouldn't be the\n"
	.string "ones to pursue them. Our presence will\l"
	.string "only antagonize Archie further, and\l"
	.string "render him even more unpredictable. If\l"
	.string "anyone can get through to him, it's you,\l"
	.string "{PLAYER}. And this HM should let you\l"
	.string "and your Pokémon go after them.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieExplainDive::
# 670 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: HM08 contains the move Dive. It\n"
	.string "will allow you and your Pokémon to\l"
	.string "follow Team Aqua to the seafloor cavern\l"
	.string "where they are searching for Kyogre.$"

MossdeepCity_SpaceCenter_2F_Text_StevenInvestigateMeteorite::
# 674 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: I will investigate this\n"
	.string "meteorite Courtney found. If there is\l"
	.string "some way to pacify Groudon, we'll need\l"
	.string "to find it.$"

MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel::
# 678 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would Team Magma want to steal a\n"
	.string "meteorite in the first place?$"

MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace::
# 682 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Team Magma… Are they just big fans of\n"
	.string "rocks?$"

MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis::
# 686 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "The results of scientific exploration\n"
	.string "belong to all of humanity. Team Magma\l"
	.string "can't just take it for themselves!$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyInFreeRoam::
# 690 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: ...\p"
	.string "All our work...$"

MossdeepCity_SpaceCenter_2F_Text_MaxieInFreeRoam::
# 694 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: After everything, it turned out\n"
	.string "I had much to learn.\p"
	.string "Thank you, {PLAYER}. And good luck.$"

MossdeepCity_SpaceCenter_2F_Text_StevenInFreeRoam::
# 698 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: There is something about this\n"
	.string "meteorite… I can feel it.$"
