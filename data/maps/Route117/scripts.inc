# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
//.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_0, 25
# 4 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_1, 26
# 5 "data/maps/Route117/scripts.pory"

# 6 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 7 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 8 "data/maps/Route117/scripts.pory"
	.byte 0
# 9 "data/maps/Route117/scripts.pory"

# 10 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 11 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 12 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 13 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 14 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 15 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 16 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 18 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 19 "data/maps/Route117/scripts.pory"
	end
# 20 "data/maps/Route117/scripts.pory"

# 21 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 22 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 23 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 24 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 25 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 26 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 27 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 28 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 29 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 30 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 31 "data/maps/Route117/scripts.pory"
	end
# 32 "data/maps/Route117/scripts.pory"

# 33 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 34 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 35 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 36 "data/maps/Route117/scripts.pory"
	return
# 37 "data/maps/Route117/scripts.pory"

# 38 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 39 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 40 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 41 "data/maps/Route117/scripts.pory"
	return
# 42 "data/maps/Route117/scripts.pory"

# 43 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 44 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 45 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 46 "data/maps/Route117/scripts.pory"
	return
# 47 "data/maps/Route117/scripts.pory"

# 48 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 49 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 50 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 51 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 52 "data/maps/Route117/scripts.pory"
	return
# 53 "data/maps/Route117/scripts.pory"

# 54 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 55 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 56 "data/maps/Route117/scripts.pory"
	end
# 57 "data/maps/Route117/scripts.pory"

# 58 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 59 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 60 "data/maps/Route117/scripts.pory"
	end
# 61 "data/maps/Route117/scripts.pory"

# 62 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 63 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 64 "data/maps/Route117/scripts.pory"
	end
# 65 "data/maps/Route117/scripts.pory"

# 66 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 67 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 68 "data/maps/Route117/scripts.pory"
	end
# 69 "data/maps/Route117/scripts.pory"

# 70 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 71 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 72 "data/maps/Route117/scripts.pory"
	end
# 73 "data/maps/Route117/scripts.pory"

# 74 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 75 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 76 "data/maps/Route117/scripts.pory"
	end
# 77 "data/maps/Route117/scripts.pory"

# 78 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 79 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 80 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 81 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
# 82 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 83 "data/maps/Route117/scripts.pory"
	release
# 84 "data/maps/Route117/scripts.pory"
	end
# 85 "data/maps/Route117/scripts.pory"

# 86 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 87 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 88 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 90 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_ISAAC_1
# 91 "data/maps/Route117/scripts.pory"
	release
# 92 "data/maps/Route117/scripts.pory"
	end
# 93 "data/maps/Route117/scripts.pory"

# 94 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 95 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 96 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route117/scripts.pory"
	end
# 98 "data/maps/Route117/scripts.pory"

# 99 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 100 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 101 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 102 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 103 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 104 "data/maps/Route117/scripts.pory"
	release
# 105 "data/maps/Route117/scripts.pory"
	end
# 106 "data/maps/Route117/scripts.pory"

# 107 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 108 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 109 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 111 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_LYDIA_1
# 112 "data/maps/Route117/scripts.pory"
	release
# 113 "data/maps/Route117/scripts.pory"
	end
# 114 "data/maps/Route117/scripts.pory"

# 115 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 116 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 117 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route117/scripts.pory"
	end
# 119 "data/maps/Route117/scripts.pory"

# 120 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 121 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_TryDylanGiftAfterBattle
# 122 "data/maps/Route117/scripts.pory"
	//specialvar VAR_RESULT, ShouldTryRematchBattle
# 123 "data/maps/Route117/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 124 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 125 "data/maps/Route117/scripts.pory"
	release
# 126 "data/maps/Route117/scripts.pory"
	end
# 127 "data/maps/Route117/scripts.pory"

# 128 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 129 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 130 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 132 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_DYLAN_1
# 133 "data/maps/Route117/scripts.pory"
	release
# 134 "data/maps/Route117/scripts.pory"
	end
# 135 "data/maps/Route117/scripts.pory"

# 136 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 137 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 138 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route117/scripts.pory"
	end
# 140 "data/maps/Route117/scripts.pory"

# 141 "data/maps/Route117/scripts.pory"
/*
# 142 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 143 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 144 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 145 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 146 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 147 "data/maps/Route117/scripts.pory"
	release
# 148 "data/maps/Route117/scripts.pory"
	end
# 149 "data/maps/Route117/scripts.pory"

# 150 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 151 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 152 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 154 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_MARIA_1
# 155 "data/maps/Route117/scripts.pory"
	release
# 156 "data/maps/Route117/scripts.pory"
	end
# 157 "data/maps/Route117/scripts.pory"

# 158 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 159 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 160 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route117/scripts.pory"
	end
# 162 "data/maps/Route117/scripts.pory"
*/
# 163 "data/maps/Route117/scripts.pory"

# 164 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 165 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 166 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route117/scripts.pory"
	end
# 168 "data/maps/Route117/scripts.pory"

# 169 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 170 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 171 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 172 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 173 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 174 "data/maps/Route117/scripts.pory"
	release
# 175 "data/maps/Route117/scripts.pory"
	end
# 176 "data/maps/Route117/scripts.pory"

# 177 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 178 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 179 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_ANNA_AND_MEG_1
# 180 "data/maps/Route117/scripts.pory"
	release
# 181 "data/maps/Route117/scripts.pory"
	end
# 182 "data/maps/Route117/scripts.pory"

# 183 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 184 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 185 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route117/scripts.pory"
	end
# 187 "data/maps/Route117/scripts.pory"

# 188 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 189 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 190 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 191 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 192 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 193 "data/maps/Route117/scripts.pory"
	release
# 194 "data/maps/Route117/scripts.pory"
	end
# 195 "data/maps/Route117/scripts.pory"

# 196 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 197 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 198 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_ANNA_AND_MEG_1
# 199 "data/maps/Route117/scripts.pory"
	release
# 200 "data/maps/Route117/scripts.pory"
	end
# 201 "data/maps/Route117/scripts.pory"

# 202 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 203 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 204 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route117/scripts.pory"
	end
# 206 "data/maps/Route117/scripts.pory"

# 207 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 208 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 209 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route117/scripts.pory"
	end
# 211 "data/maps/Route117/scripts.pory"

# 212 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 213 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 214 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/Route117/scripts.pory"
	end
# 216 "data/maps/Route117/scripts.pory"

# 217 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 218 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 219 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route117/scripts.pory"
	end
# 221 "data/maps/Route117/scripts.pory"

# 222 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 223 "data/maps/Route117/scripts.pory"
	.string "I left my Pokémon at the DAY CARE.\p"
# 224 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 225 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 226 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 227 "data/maps/Route117/scripts.pory"

# 228 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 229 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 230 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 231 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 232 "data/maps/Route117/scripts.pory"

# 233 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 234 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 235 "data/maps/Route117/scripts.pory"

# 236 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 237 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 238 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 239 "data/maps/Route117/scripts.pory"

# 240 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 241 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 242 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 243 "data/maps/Route117/scripts.pory"

# 244 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 245 "data/maps/Route117/scripts.pory"
	.string "Pokémon DAY CARE\n"
# 246 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your Pokémon.”$"

Route117_EventScript_TryDylanGiftAfterBattle::
# 251 "data/maps/Route117/scripts.pory"
	lock
# 252 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route117_EventScript_TryDylanGiftAfterBattle_1
# 256 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_TryDylanGiftAfterBattle_Text_1, MSGBOX_NPC
# 257 "data/maps/Route117/scripts.pory"
	waitmessage
# 258 "data/maps/Route117/scripts.pory"
	giveitem ITEM_CARBOS
# 259 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 260 "data/maps/Route117/scripts.pory"
	waitfanfare
# 261 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_TryDylanGiftAfterBattle_1:
# 253 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_TryDylanGiftAfterBattle_Text_0, MSGBOX_NPC
	return


Route117_EventScript_GrassyGlideBoy::
# 267 "data/maps/Route117/scripts.pory"
	lock
# 268 "data/maps/Route117/scripts.pory"
	faceplayer
# 269 "data/maps/Route117/scripts.pory"
	checkitem ITEM_TM_GRASSY_GLIDE
# 270 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route117_EventScript_GrassyGlideBoy_2
# 277 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_LittleBoy
Route117_EventScript_GrassyGlideBoy_1:
# 279 "data/maps/Route117/scripts.pory"
	releaseall
	end

Route117_EventScript_GrassyGlideBoy_2:
# 271 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_GrassyGlideBoy_Text_0, MSGBOX_DEFAULT
# 272 "data/maps/Route117/scripts.pory"
	closemessage
# 273 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_GRASSY_GLIDE
# 274 "data/maps/Route117/scripts.pory"
	waitfanfare
	goto Route117_EventScript_GrassyGlideBoy_1


Route117_EventScript_TryDylanGiftAfterBattle_Text_0:
# 253 "data/maps/Route117/scripts.pory"
	.string "If you beat Wattson, your Pokémon must\n"
	.string "be in peak form.\p"
	.string "Make sure you get enough exercise for\n"
	.string "yourself, too!$"

Route117_EventScript_TryDylanGiftAfterBattle_Text_1:
# 256 "data/maps/Route117/scripts.pory"
	.string "It's important to train your speed!\p"
	.string "Training Pokémon's speed is easier, you\n"
	.string "can just give them this.$"

Route117_EventScript_GrassyGlideBoy_Text_0:
# 271 "data/maps/Route117/scripts.pory"
	.string "I feel like I can run so fast here, so\n"
	.string "easily!\p"
	.string "I bet your Pokémon can, too.$"
