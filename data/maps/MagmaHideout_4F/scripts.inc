# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
//.set LOCALID_MAGMA_HIDEOUT_4F_GROUDON, 1
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
//.set LOCALID_MAGMA_HIDEOUT_4F_GRUNT_1, 2
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
//.set LOCALID_MAGMA_HIDEOUT_4F_GRUNT_2, 3
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
//.set LOCALID_MAGMA_HIDEOUT_4F_GRUNT_3, 4
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
//.set LOCALID_MAGMA_HIDEOUT_4F_TABITHA, 5
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
//.set LOCALID_MAGMA_HIDEOUT_4F_MAXIE, 6
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
//.set LOCALID_MAGMA_HIDEOUT_4F_GROUDON_SLEEPING, 7
# 9 "data/maps/MagmaHideout_4F/scripts.pory"

# 10 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 12 "data/maps/MagmaHideout_4F/scripts.pory"

# 13 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	faceplayer
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieNewIntro, MSGBOX_DEFAULT
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FaceUp
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 0
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON_SLEEPING
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FaceLeft
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAdmirable, MSGBOX_DEFAULT
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 0
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 67 "data/maps/MagmaHideout_4F/scripts.pory"

# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 81 "data/maps/MagmaHideout_4F/scripts.pory"

# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	call MagmaHideout_4F_EventScript_TabithaReport
# 83 "data/maps/MagmaHideout_4F/scripts.pory"

# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMiscalculated, MSGBOX_DEFAULT
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	//applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FacePlayer
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	//waitmovement 0
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	//call MagmaHideout_4F_EventScript_TabithaReport
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	//msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	//closemessage
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	//trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieNewDeparture, MSGBOX_DEFAULT
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	//clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	//clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	//setvar VAR_SLATEPORT_CITY_STATE, 1
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_ENABLE_STEVEN_CALL_MAGMA_HIDEOUT
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_STEVEN_MAGMA_CALL_STEP_COUNTER, 0
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	//setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_MAXIE
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_1
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_2
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_3
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_TABITHA
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	call Common_EventScript_CheckIfHideoutsComplete
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 117 "data/maps/MagmaHideout_4F/scripts.pory"

# 118 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 130 "data/maps/MagmaHideout_4F/scripts.pory"

# 131 "data/maps/MagmaHideout_4F/scripts.pory"
/*
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	*/
# 137 "data/maps/MagmaHideout_4F/scripts.pory"

# 138 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 149 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 151 "data/maps/MagmaHideout_4F/scripts.pory"

# 152 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 156 "data/maps/MagmaHideout_4F/scripts.pory"

# 157 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 161 "data/maps/MagmaHideout_4F/scripts.pory"

# 162 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 166 "data/maps/MagmaHideout_4F/scripts.pory"

# 167 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 171 "data/maps/MagmaHideout_4F/scripts.pory"

# 172 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 176 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about GROUDON!$"
# 178 "data/maps/MagmaHideout_4F/scripts.pory"

# 179 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 182 "data/maps/MagmaHideout_4F/scripts.pory"

# 183 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"
# 185 "data/maps/MagmaHideout_4F/scripts.pory"

# 186 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 190 "data/maps/MagmaHideout_4F/scripts.pory"

# 191 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 194 "data/maps/MagmaHideout_4F/scripts.pory"

# 195 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 198 "data/maps/MagmaHideout_4F/scripts.pory"

# 199 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"

# 203 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 205 "data/maps/MagmaHideout_4F/scripts.pory"

# 206 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "C-come on, one more match…$"
# 208 "data/maps/MagmaHideout_4F/scripts.pory"

# 209 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 218 "data/maps/MagmaHideout_4F/scripts.pory"

# 219 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 222 "data/maps/MagmaHideout_4F/scripts.pory"

# 223 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE should have awakened GROUDON…$"
# 226 "data/maps/MagmaHideout_4F/scripts.pory"

# 227 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON…\p"
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This BLUE ORB is what you sought.\n"
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't it?\p"
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the BLUE ORB.\n"
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And show me…\n"
# 236 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Show me the full extent of your power!$"
# 237 "data/maps/MagmaHideout_4F/scripts.pory"

# 238 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Groudon!\n"
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 241 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the Red Orb the key?\p"
# 242 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon!\n"
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 244 "data/maps/MagmaHideout_4F/scripts.pory"

# 245 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Oh, so it was you?\p"
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've seen you poking around uninvited\n"
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "here and there…\p"
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I get it now!\n"
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You must have pulled a cheap stunt!$"
# 251 "data/maps/MagmaHideout_4F/scripts.pory"

# 252 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 253 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
# 254 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Pokémon?$"
# 255 "data/maps/MagmaHideout_4F/scripts.pory"

# 256 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 257 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: There has to be some reason\n"
# 258 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "why GROUDON fled…\p"
# 259 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's what you're trying to say,\n"
# 260 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "aren't you?\p"
# 261 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
# 262 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 263 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Humph…\n"
# 264 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You think I didn't know that?\p"
# 265 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With GROUDON gone, there is no longer\n"
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "any need for this blasted volcano.\p"
# 267 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after GROUDON, so this\n"
# 268 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is where we part!$"

MagmaHideout_4F_EventScript_StevenCallTrigger::
# 280 "data/maps/MagmaHideout_4F/scripts.pory"
	lock
# 281 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 282 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_unset FLAG_STEVEN_CALLED_MAGMA_HIDEOUT, MagmaHideout_4F_EventScript_StevenCallTrigger_2
MagmaHideout_4F_EventScript_StevenCallTrigger_1:
# 286 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 287 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 288 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	return

MagmaHideout_4F_EventScript_StevenCallTrigger_2:
# 283 "data/maps/MagmaHideout_4F/scripts.pory"
	pokenavcall MagmaHideout_4F_Text_StevenFirstCall
# 284 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_STEVEN_CALLED_MAGMA_HIDEOUT
	goto MagmaHideout_4F_EventScript_StevenCallTrigger_1


MagmaHideout_4F_EventScript_StevenCallOutro::
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	lock
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_set FLAG_BOTH_HIDEOUTS_COMPLETE, MagmaHideout_4F_EventScript_StevenCallOutro_2
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	pokenavcall MagmaHideout_4F_Text_StevenSecondCall_AquaRemaining
MagmaHideout_4F_EventScript_StevenCallOutro_1:
# 303 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 305 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_ENABLE_STEVEN_CALL_MAGMA_HIDEOUT
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	return

MagmaHideout_4F_EventScript_StevenCallOutro_2:
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	pokenavcall MagmaHideout_4F_Text_StevenSecondCall_BothHideoutsDone
	goto MagmaHideout_4F_EventScript_StevenCallOutro_1


MagmaHideout_4F_EventScript_TabithaReport::
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	lock
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_MAGMA_HIDEOUT_4F_TABITHA, 7, 21
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_MAGMA_HIDEOUT_4F_TABITHA
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_TABITHA, MagmaHideout_4F_EventScript_TabithaApproach
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FaceLeft
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaReport, MSGBOX_DEFAULT
# 338 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
	return


# 342 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_TabithaApproach:
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_right
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_right
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_right
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_right
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_right
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_right
	step_end

# 362 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
	step_end

MagmaHideout_4F_Text_MaxieNewIntro::
# 273 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Ah, {PLAYER}. Have you come to\n"
	.string "witness the miracle of Groudon?\l"
	.string "No? I shouldn't be surprised.\p"
	.string "Like Steven Stone and many others,\n"
	.string "despite my efforts to educate, you\l"
	.string "still do not see it.\p"
	.string "No matter.\n"
	.string "You should be grateful, you are\l"
	.string "fortunate to see this.\p"
	.string "Behold - years of planning have led to\n"
	.string "this moment!$"

MagmaHideout_4F_Text_StevenFirstCall::
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Steven: {PLAYER}, I just visited\n"
	.string "the scientists at the Weather\l"
	.string "Institute. It looks like the\l"
	.string "ancient Pokémon Groudon is living\l"
	.string "within Mt. Chimney - Team Magma\l"
	.string "built their Hideout right beside it!\p"
	.string "You need to hurry - they could\n"
	.string "awaken Groudon at any moment!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

MagmaHideout_4F_Text_StevenSecondCall_BothHideoutsDone::
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Steven: I could feel the earth\n"
	.string "rumbling from here… it seems Maxie\l"
	.string "successfully revived Groudon.\p"
	.string "{PLAYER}, you defeated him? But\n"
	.string "he couldn't control Groudon, and it\l"
	.string "escaped?\l"
	.string "Who knows what effects this\l"
	.string "could have…\p"
	.string "I'm heading home to Mossdeep to do\n"
	.string "further research. You should meet\l"
	.string "me there.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

MagmaHideout_4F_Text_StevenSecondCall_AquaRemaining::
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Steven: I could feel the earth\n"
	.string "rumbling from here… it seems Maxie\l"
	.string "successfully revived Groudon.\p"
	.string "{PLAYER}, you defeated him? But\n"
	.string "he couldn't control Groudon, and it\l"
	.string "escaped?\l"
	.string "Who knows what effects this\l"
	.string "could have…\p"
	.string "You should hurry to Team Aqua's\n"
	.string "hideout east of Lilycove.\p"
	.string "We can still stop Archie before\n"
	.string "this gets any worse.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

MagmaHideout_4F_Text_MattIntro::
# 317 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Matt: Shelly looked through the\n"
	.string "documents from the Weather Institute,\l"
	.string "Archie grabbed the Blue Orb, and I took\l"
	.string "this submarine.\p"
	.string "Everything is working according to\n"
	.string "Archie's plan.\p"
	.string "And now, my last job is to stop you,\n"
	.string "right here!\p"
	.string "This won't be like last time.\n"
	.string "I've collected the strongest and most\l"
	.string "fearsome Pokémon around.\p"
	.string "You'll see our strength!$"

MagmaHideout_4F_Text_MattPostBattle::
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I still can't beat you.\n"
	.string "But I held you back long enough for\l"
	.string "Archie and Shelly to take off.\p"
	.string "You can't stop us now…$"

MagmaHideout_4F_Text_OurBossGotThroughHisPreparations::
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ah… hah… Archie, man, it's all on you\n"
	.string "now…$"

MagmaHideout_4F_Text_TabithaReport::
# 346 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Maxie, sir!\p"
	.string "We're getting reports from outside that\n"
	.string "the intensity of the sun has become\l"
	.string "nearly unbearable outside! Earthquakes\l"
	.string "and fissures are occurring all over\l"
	.string "Hoenn!\p"
	.string "What is happening!?$"

MagmaHideout_4F_Text_MaxieMiscalculated::
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Is it possible… have I\n"
	.string "miscalculated…?\p"
	.string "None of our simulations projected this\n"
	.string "possibility…\p"
	.string "This is a serious risk to our base, and\n"
	.string "our safety, and it has only just awoken!$"

MagmaHideout_4F_Text_MaxieAdmirable::
# 354 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Splendid, truly.\p"
	.string "Obviously you are a fool, but there is\n"
	.string "something admirable about your\l"
	.string "ignorance.\p"
	.string "You believe until the very end that\n"
	.string "humanity, Pokémon, and nature can\l"
	.string "coexist as-is.\p"
	.string "You reject all science and reason, and\n"
	.string "struggle with every fiber of yourself in\l"
	.string "futility.\p"
	.string "And yet, futile it remains. For now,\n"
	.string "Groudon-$"

MagmaHideout_4F_Text_MaxieNewDeparture::
# 358 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: We need to evacuate immediately.\p"
	.string "And we need to get to the bottom of\n"
	.string "this… urgently.$"
