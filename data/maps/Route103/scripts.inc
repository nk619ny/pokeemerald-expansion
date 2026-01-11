# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
.set LOCALID_ROUTE103_RIVAL, 2
# 3 "data/maps/Route103/scripts.pory"

# 4 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 5 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 6 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 7 "data/maps/Route103/scripts.pory"
	.byte 0
# 8 "data/maps/Route103/scripts.pory"

# 9 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 10 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route103/scripts.pory"
	end
# 13 "data/maps/Route103/scripts.pory"

# 14 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 15 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 16 "data/maps/Route103/scripts.pory"
	end
# 17 "data/maps/Route103/scripts.pory"

# 18 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 19 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 20 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 21 "data/maps/Route103/scripts.pory"
	return
# 22 "data/maps/Route103/scripts.pory"

# 23 "data/maps/Route103/scripts.pory"
/*
# 24 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 25 "data/maps/Route103/scripts.pory"
	lockall
# 26 "data/maps/Route103/scripts.pory"
	checkplayergender
# 27 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 28 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 29 "data/maps/Route103/scripts.pory"
	end
# 30 "data/maps/Route103/scripts.pory"

# 31 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 32 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 33 "data/maps/Route103/scripts.pory"
	closemessage
# 34 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 35 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 36 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 38 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 40 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 42 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 43 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 44 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 45 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 46 "data/maps/Route103/scripts.pory"
	end
# 47 "data/maps/Route103/scripts.pory"

# 48 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 49 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 50 "data/maps/Route103/scripts.pory"
	closemessage
# 51 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 52 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 53 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 55 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 57 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 59 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 60 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 61 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 62 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 63 "data/maps/Route103/scripts.pory"
	end
# 64 "data/maps/Route103/scripts.pory"

# 65 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 66 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 67 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 68 "data/maps/Route103/scripts.pory"
	end
# 69 "data/maps/Route103/scripts.pory"

# 70 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 71 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 72 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 73 "data/maps/Route103/scripts.pory"
	end
# 74 "data/maps/Route103/scripts.pory"

# 75 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 76 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 77 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 78 "data/maps/Route103/scripts.pory"
	end
# 79 "data/maps/Route103/scripts.pory"

# 80 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 81 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 82 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 83 "data/maps/Route103/scripts.pory"
	end
# 84 "data/maps/Route103/scripts.pory"

# 85 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 86 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 87 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 88 "data/maps/Route103/scripts.pory"
	end
# 89 "data/maps/Route103/scripts.pory"

# 90 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 91 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 92 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 93 "data/maps/Route103/scripts.pory"
	end
# 94 "data/maps/Route103/scripts.pory"

# 95 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 96 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 97 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 98 "data/maps/Route103/scripts.pory"
	end
# 99 "data/maps/Route103/scripts.pory"

# 100 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 101 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 102 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 103 "data/maps/Route103/scripts.pory"
	end
# 104 "data/maps/Route103/scripts.pory"

# 105 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 106 "data/maps/Route103/scripts.pory"
	closemessage
# 107 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 108 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 109 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 110 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 111 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 112 "data/maps/Route103/scripts.pory"
	end
# 113 "data/maps/Route103/scripts.pory"

# 114 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 115 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 116 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 117 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 119 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 120 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 122 "data/maps/Route103/scripts.pory"
	end
# 123 "data/maps/Route103/scripts.pory"

# 124 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 125 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 126 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 127 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 129 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 130 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 132 "data/maps/Route103/scripts.pory"
	end
# 133 "data/maps/Route103/scripts.pory"

# 134 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 135 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 136 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 138 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 139 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 141 "data/maps/Route103/scripts.pory"
	end
# 142 "data/maps/Route103/scripts.pory"

# 143 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 144 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RIVAL
# 145 "data/maps/Route103/scripts.pory"
//	setvar VAR_BIRCH_LAB_STATE, 4
# 146 "data/maps/Route103/scripts.pory"
//	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 147 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 148 "data/maps/Route103/scripts.pory"
//	setvar VAR_OLDALE_RIVAL_STATE, 1
# 149 "data/maps/Route103/scripts.pory"
//	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 150 "data/maps/Route103/scripts.pory"
//	savebgm MUS_DUMMY
# 151 "data/maps/Route103/scripts.pory"
//	fadedefaultbgm
# 152 "data/maps/Route103/scripts.pory"
	releaseall
# 153 "data/maps/Route103/scripts.pory"
	end
# 154 "data/maps/Route103/scripts.pory"

# 155 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 156 "data/maps/Route103/scripts.pory"
	walk_left
# 157 "data/maps/Route103/scripts.pory"
	walk_down
# 158 "data/maps/Route103/scripts.pory"
	step_end
# 159 "data/maps/Route103/scripts.pory"

# 160 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 161 "data/maps/Route103/scripts.pory"
	jump_2_down
# 162 "data/maps/Route103/scripts.pory"
	delay_16
# 163 "data/maps/Route103/scripts.pory"
	walk_down
# 164 "data/maps/Route103/scripts.pory"
	walk_down
# 165 "data/maps/Route103/scripts.pory"
	walk_down
# 166 "data/maps/Route103/scripts.pory"
	walk_down
# 167 "data/maps/Route103/scripts.pory"
	step_end
# 168 "data/maps/Route103/scripts.pory"

# 169 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 170 "data/maps/Route103/scripts.pory"
	delay_16
# 171 "data/maps/Route103/scripts.pory"
	delay_4
# 172 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 173 "data/maps/Route103/scripts.pory"
	delay_16
# 174 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 175 "data/maps/Route103/scripts.pory"
	step_end
# 176 "data/maps/Route103/scripts.pory"

# 177 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 178 "data/maps/Route103/scripts.pory"
	walk_down
# 179 "data/maps/Route103/scripts.pory"
	step_end
# 180 "data/maps/Route103/scripts.pory"

# 181 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 182 "data/maps/Route103/scripts.pory"
	jump_2_down
# 183 "data/maps/Route103/scripts.pory"
	delay_16
# 184 "data/maps/Route103/scripts.pory"
	walk_down
# 185 "data/maps/Route103/scripts.pory"
	walk_down
# 186 "data/maps/Route103/scripts.pory"
	walk_down
# 187 "data/maps/Route103/scripts.pory"
	step_end
# 188 "data/maps/Route103/scripts.pory"

# 189 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 190 "data/maps/Route103/scripts.pory"
	delay_16
# 191 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 192 "data/maps/Route103/scripts.pory"
	step_end
# 193 "data/maps/Route103/scripts.pory"

# 194 "data/maps/Route103/scripts.pory"
	*/
# 195 "data/maps/Route103/scripts.pory"

# 196 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 197 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 198 "data/maps/Route103/scripts.pory"
	end
# 199 "data/maps/Route103/scripts.pory"

# 200 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 201 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 202 "data/maps/Route103/scripts.pory"
	end
# 203 "data/maps/Route103/scripts.pory"

# 204 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 205 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 206 "data/maps/Route103/scripts.pory"
	end
# 207 "data/maps/Route103/scripts.pory"

# 208 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 209 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 210 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route103/scripts.pory"
	end
# 212 "data/maps/Route103/scripts.pory"

# 213 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 214 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 215 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 216 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 217 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route103/scripts.pory"
	end
# 219 "data/maps/Route103/scripts.pory"

# 220 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 221 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 222 "data/maps/Route103/scripts.pory"
	//register_matchcall TRAINER_AMY_AND_LIV_1
# 223 "data/maps/Route103/scripts.pory"
	release
# 224 "data/maps/Route103/scripts.pory"
	end
# 225 "data/maps/Route103/scripts.pory"

# 226 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 227 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 228 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/Route103/scripts.pory"
	end
# 230 "data/maps/Route103/scripts.pory"

# 231 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 232 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 233 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 234 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 235 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route103/scripts.pory"
	end
# 237 "data/maps/Route103/scripts.pory"

# 238 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 239 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 240 "data/maps/Route103/scripts.pory"
	//register_matchcall TRAINER_AMY_AND_LIV_1
# 241 "data/maps/Route103/scripts.pory"
	release
# 242 "data/maps/Route103/scripts.pory"
	end
# 243 "data/maps/Route103/scripts.pory"

# 244 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 245 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 246 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 247 "data/maps/Route103/scripts.pory"
	end
# 248 "data/maps/Route103/scripts.pory"

# 249 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 250 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 251 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/Route103/scripts.pory"
	end
# 253 "data/maps/Route103/scripts.pory"

# 254 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 255 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 256 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 257 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 258 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 259 "data/maps/Route103/scripts.pory"
	release
# 260 "data/maps/Route103/scripts.pory"
	end
# 261 "data/maps/Route103/scripts.pory"

# 262 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 263 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 264 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 266 "data/maps/Route103/scripts.pory"
	//register_matchcall TRAINER_MIGUEL_1
# 267 "data/maps/Route103/scripts.pory"
	release
# 268 "data/maps/Route103/scripts.pory"
	end
# 269 "data/maps/Route103/scripts.pory"

# 270 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 271 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 272 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 273 "data/maps/Route103/scripts.pory"
	end
# 274 "data/maps/Route103/scripts.pory"

# 275 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 276 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 277 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route103/scripts.pory"
	end
# 279 "data/maps/Route103/scripts.pory"

# 280 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 281 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 282 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route103/scripts.pory"
	end
# 284 "data/maps/Route103/scripts.pory"

# 285 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 286 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 287 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route103/scripts.pory"
	end
# 289 "data/maps/Route103/scripts.pory"

# 290 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 291 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 292 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route103/scripts.pory"
	end
# 294 "data/maps/Route103/scripts.pory"

# 295 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 296 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The Pokémon found\n"
# 297 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 298 "data/maps/Route103/scripts.pory"

# 299 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 300 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 301 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 302 "data/maps/Route103/scripts.pory"
	.string "a Pokémon as a gift.\p"
# 303 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 304 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 305 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 306 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 307 "data/maps/Route103/scripts.pory"

# 308 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 309 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 310 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 311 "data/maps/Route103/scripts.pory"

# 312 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 313 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 314 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 315 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that Pokémon,\n"
# 316 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 317 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 318 "data/maps/Route103/scripts.pory"
	.string "kind of Pokémon easily.\p"
# 319 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 320 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 321 "data/maps/Route103/scripts.pory"

# 322 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 323 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 324 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 325 "data/maps/Route103/scripts.pory"

# 326 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 327 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 328 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a Pokémon.\p"
# 329 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 330 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 331 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 332 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 333 "data/maps/Route103/scripts.pory"

# 334 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 335 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 336 "data/maps/Route103/scripts.pory"

# 337 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 338 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 339 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 340 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 341 "data/maps/Route103/scripts.pory"
	.string "Look, your Pokémon already likes you,\n"
# 342 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 343 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 344 "data/maps/Route103/scripts.pory"
	.string "could befriend any Pokémon with ease.\p"
# 345 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 346 "data/maps/Route103/scripts.pory"

# 347 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 348 "data/maps/Route103/scripts.pory"
	.string "My Pokémon is staggeringly tired…\n"
# 349 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 350 "data/maps/Route103/scripts.pory"

# 351 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 352 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 353 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 354 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 355 "data/maps/Route103/scripts.pory"

# 356 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 357 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 358 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"
