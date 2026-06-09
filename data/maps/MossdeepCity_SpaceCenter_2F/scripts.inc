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
	releaseall
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_GRUNT_5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_GRUNT_6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_GRUNT_7, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_2F_GRUNT_6
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_2F_GRUNT_7
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_2F_GRUNT_5
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_right
# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
/*
# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 30
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
*/
# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_COURTNEY_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_STEVEN
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	//applymovement LOCALID_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	//applymovement LOCALID_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_GRUNT_6
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_GRUNT_7
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_GRUNT_5
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	//removeobject LOCALID_SPACE_CENTER_2F_TABITHA
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_MAXIE
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_SCIENTIST, DIR_SOUTH
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_GENTLEMAN, 11, 8
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_GENTLEMAN, DIR_NORTH
# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_RICH_BOY, 6, 2
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_RICH_BOY, DIR_NORTH
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_STEVEN
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#ifdef BUGFIX
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#endif
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_NORTH
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_EAST
# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MOSSDEEP has mainly sunny weather,\n"
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "and its winds are stable.\p"
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's an ideal location for launching\n"
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "rockets.$"
# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "have liked being an astronaut…\p"
# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No… It's not too late!\n"
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can and will try!$"
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "space one day…$"
# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's wrong with you?\p"
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're outnumbered three to one,\n"
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "but you still want to take us on?$"
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what a smart person'll do!$"
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Okay, I'll go first!$"
# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's too soon to be relieved!\n"
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm up next!$"
# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I bet you want to take a break.\n"
# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But I'm not about to let you do that!$"
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what we should've done…$"
# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "mess we got ourselves into.$"
# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We three losing like this…\n"
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We look worse than usual by triple!$"
# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are we being useful to our leader\n"
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "at all?$"
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hehehe!\p"
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We come all the way here to get some\n"
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel, and we're interfered with again!\p"
# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If you're going to mess with us too,\n"
# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we'll take care of you at the same time!$"
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Clear out of the way!\n"
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Don't you dare interfere!$"
# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel:
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: TEAM MAGMA…\p"
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's the point of stealing rocket\n"
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel?$"
# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Fufufu… Since you're so\n"
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "curious, you deserve an explanation.\p"
# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We're going to jettison the entire\n"
# 420 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "load into MT. CHIMNEY!\p"
# 421 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "With GROUDON gone, we have no need\n"
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "for that slag heap of a mountain!\p"
# 423 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "So we'll use the fuel's power to make\n"
# 424 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the volcano erupt!\p"
# 425 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It will be savage!$"
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 427 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle:
# 428 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 429 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're going to help me?\p"
# 430 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Let's go into battle together!\n"
# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are you ready?$"
# 432 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 433 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly:
# 434 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Then, hurry!\n"
# 435 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Get ready quickly!$"
# 436 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 437 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "All I want…\n"
# 439 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I just want to expand the land mass…$"
# 440 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 441 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_Text_TabithaDefeat:
# 442 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm with our leader…$"
# 443 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 444 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: We failed to make the volcano\n"
# 446 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "erupt…\p"
# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We failed to control GROUDON after\n"
# 448 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we had awoken it…\p"
# 449 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Is our goal to expand the land\n"
# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "misguided?\p"
# 451 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\n"
# 452 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 453 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If…\n"
# 454 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If we, TEAM MAGMA, are wrong…\l"
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 456 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Then might TEAM AQUA's goal to expand\n"
# 457 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the sea also be equally misguided?$"
# 458 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 459 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
# 460 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: All right…\n"
# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We will give up on the fuel…\p"
# 462 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "There appear to be more important\n"
# 463 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "matters that I must examine…$"
# 464 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 465 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome:
# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Whew, that was too tense.\n"
# 467 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}{KUN}, thank you.\p"
# 468 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I have something to give you as\n"
# 469 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "thanks for your support.\p"
# 470 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Please come see me at home\n"
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "after this.\p"
# 472 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Oh, yes, I don't live in RUSTBORO CITY.\n"
# 473 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I live right here on this island.$"

MossdeepCity_SpaceCenter_2F_EventScript_PlayerLocation1::
# 481 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


MossdeepCity_SpaceCenter_2F_EventScript_PlayerLocation2::
# 486 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_TEMP_3, 2
	return


MossdeepCity_SpaceCenter_2F_EventScript_PlayerLocation3::
# 491 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_TEMP_3, 3
	return


MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle::
# 496 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 497 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_STEVEN
# 498 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_MAXIE
# 499 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieStopThis, MSGBOX_DEFAULT
# 500 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_ExclamationMark
# 501 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 502 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 503 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_FaceRight
# 504 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 505 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 506 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 507 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenMaxieEnter
# 508 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_StevenMaxieEnter
# 509 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 510 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 511 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 512 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_CourtneyMeteorite, MSGBOX_DEFAULT
# 513 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 514 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 515 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 516 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWereWrong, MSGBOX_DEFAULT
# 517 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 518 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_CourtneySilent, MSGBOX_DEFAULT
# 519 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 520 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 521 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 522 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenArchieKyogre, MSGBOX_DEFAULT
# 523 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 524 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 525 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 526 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 527 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieKyogreLocation, MSGBOX_DEFAULT
# 528 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 529 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_TEMP_3
# 530 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_3
# 532 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_4
# 534 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_5
MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1:
# 537 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 538 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_TEMP_3
# 539 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_8
# 541 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_9
# 543 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_10
MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6:
# 546 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, Common_Movement_FaceLeft
# 547 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_FaceDown
# 548 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 549 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxiePlayerPursue, MSGBOX_DEFAULT
# 550 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 551 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	giveitem ITEM_HM08, 1
# 552 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitfanfare
# 553 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieExplainDive, MSGBOX_DEFAULT
# 554 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieExplainMasterBall, MSGBOX_DEFAULT
# 555 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 556 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
# 557 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitfanfare
# 558 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 559 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_TEMP_3
# 560 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_13
# 561 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_13
# 563 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_14
MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_11:
# 566 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 567 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_COURTNEY, Common_Movement_FaceRight
# 568 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 569 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenInvestigateMeteorite, MSGBOX_DEFAULT
# 570 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 571 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 75
# 572 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 573 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 574 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_SetPostMagmaFlags
# 575 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_3:
# 531 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer1
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_4:
# 533 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer2
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_5:
# 535 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_MAXIE, MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer3
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_1

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_8:
# 540 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_9:
# 542 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_10:
# 544 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_6

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_13:
# 562 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenApproachCourtney
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_11

MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_14:
# 564 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, Common_Movement_WalkInPlaceFasterLeft
	goto MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle_11


MossdeepCity_SpaceCenter_2F_EventScript_SetPostMagmaFlags::
# 580 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 581 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 582 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addvar VAR_WEATHER_INSTITUTE_STATE, 1
# 583 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 584 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 585 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 586 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 587 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 588 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 589 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 590 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 591 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 592 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 593 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 594 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
	return


MossdeepCity_SpaceCenter_2F_EventScript_Courtney::
# 599 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_CourtneyIntro, MossdeepCity_SpaceCenter_2F_Text_CourtneyDefeat, MossdeepCity_SpaceCenter_2F_EventScript_CourtneyPostBattle
# 600 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_CourtneyInFreeRoam, MSGBOX_NPC
	end


MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 605 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieInFreeRoam, MSGBOX_NPC
	end


MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 610 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenInFreeRoam, MSGBOX_NPC
	end


# 614 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenMaxieEnter:
# 615 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 615 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 615 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 615 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 615 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 615 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
	step_end

# 618 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer1:
# 619 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 619 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 619 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 619 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 620 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_up
	step_end

# 623 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer2:
# 624 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 624 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
	step_end

# 627 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_MaxieApproachPlayer3:
# 628 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 628 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 629 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_up
	step_end

# 632 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenApproachCourtney:
# 633 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 633 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 710 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 711 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 712 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkitem ITEM_TM_METEOR_BEAM
# 713 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_2
# 722 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 723 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_1:
# 725 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_2:
# 714 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_Text_0, MSGBOX_DEFAULT
# 715 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 716 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	giveitem ITEM_TM_METEOR_BEAM
# 717 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitfanfare
# 718 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_Text_1, MSGBOX_DEFAULT
# 719 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_1


MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_Text_0:
# 714 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You look like a Pokémon trainer.\n"
	.string "Look at this new TM we've developed\l"
	.string "through our studies.$"

MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal_Text_1:
# 718 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "By channeling the power of outer space,\n"
	.string "a Pokémon can power itself up and\l"
	.string "attack.$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyIntro::
# 636 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: …You. You infiltrated the\n"
	.string "hideout. You interfered with Maxie\l"
	.string "awakening Groudon. Common\l"
	.string "denominator… you. Necessary condition:\l"
	.string "your removal.$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyDefeat::
# 640 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: Additional data collected.\n"
	.string "Success rate: 0%.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieStopThis::
# 644 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: Courtney! Stop this!$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyMeteorite::
# 648 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: This meteorite. It has a\n"
	.string "connection to a third ancient Pokémon.\l"
	.string "One that can tame the primal Groudon.\l"
	.string "If I obtain it, we can…$"

MossdeepCity_SpaceCenter_2F_Text_MaxieWeWereWrong::
# 652 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: We were wrong. Our models did not\n"
	.string "fully comprehend the implications of\l"
	.string "land creation, and the power and will of\l"
	.string "Groudon was beyond our understanding.\l"
	.string "We need to surrender our ambitions\l"
	.string "before we make things even worse.$"

MossdeepCity_SpaceCenter_2F_Text_CourtneySilent::
# 656 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: ...$"

MossdeepCity_SpaceCenter_2F_Text_StevenArchieKyogre::
# 660 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: Right now, Archie is on his way\n"
	.string "to awaken the ancient undersea\l"
	.string "Pokémon, Kyogre. As dangerous as it is\l"
	.string "to have Groudon wandering Hoenn,\l"
	.string "adding Kyogre to the mix will make the\l"
	.string "situation exponentially worse.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieKyogreLocation::
# 664 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: We will help. Based on weather\n"
	.string "patterns we've observed in our\l"
	.string "research, Kyogre is likely located in a\l"
	.string "seafloor cavern under Route 128.$"

MossdeepCity_SpaceCenter_2F_Text_MaxiePlayerPursue::
# 668 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: However, we shouldn't be the\n"
	.string "ones to pursue them. Our presence will\l"
	.string "only antagonize Archie further, and\l"
	.string "render him even more unpredictable. If\l"
	.string "anyone can get through to him, it's you,\l"
	.string "{PLAYER}. And this HM should let you\l"
	.string "and your Pokémon go after them.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieExplainDive::
# 672 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: HM08 contains the move Dive. It\n"
	.string "will allow you and your Pokémon to\l"
	.string "follow Team Aqua to the seafloor cavern\l"
	.string "where they are searching for Kyogre.$"

MossdeepCity_SpaceCenter_2F_Text_MaxieExplainMasterBall::
# 676 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: You should also take this rare\n"
	.string "Master Ball.\p"
	.string "It is capable of capturing any Pokémon\n"
	.string "without fail.\p"
	.string "I had used it in my misguided attempt to\n"
	.string "control Groudon.\p"
	.string "I am confident you will use it with more\n"
	.string "prudence than I had.$"

MossdeepCity_SpaceCenter_2F_Text_StevenInvestigateMeteorite::
# 680 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: I will investigate this\n"
	.string "meteorite Courtney found. If there is\l"
	.string "some way to pacify Groudon, we'll need\l"
	.string "to find it.$"

MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel::
# 684 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would Team Magma want to steal a\n"
	.string "meteorite in the first place?$"

MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace::
# 688 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Team Magma… Are they just big fans of\n"
	.string "rocks?$"

MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis::
# 692 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "The results of scientific exploration\n"
	.string "belong to all of humanity. Team Magma\l"
	.string "can't just take it for themselves!$"

MossdeepCity_SpaceCenter_2F_Text_CourtneyInFreeRoam::
# 696 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: ...\p"
	.string "All our work...$"

MossdeepCity_SpaceCenter_2F_Text_MaxieInFreeRoam::
# 700 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: After everything, it turned out\n"
	.string "I had much to learn.\p"
	.string "Thank you, {PLAYER}. And good luck.$"

MossdeepCity_SpaceCenter_2F_Text_StevenInFreeRoam::
# 704 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: There is something about this\n"
	.string "meteorite… I can feel it.$"
