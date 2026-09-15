# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
//.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"
//.set LOCALID_DAYCARE_MON_0, 25
# 4 "data/maps/Route117/scripts.pory"
//.set LOCALID_DAYCARE_MON_1, 26
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
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 9
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
/*
# 79 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 80 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 81 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 82 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
# 83 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/Route117/scripts.pory"
	release
# 85 "data/maps/Route117/scripts.pory"
	end
# 86 "data/maps/Route117/scripts.pory"
*/
# 87 "data/maps/Route117/scripts.pory"

# 88 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 89 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 90 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 92 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_ISAAC_1
# 93 "data/maps/Route117/scripts.pory"
	release
# 94 "data/maps/Route117/scripts.pory"
	end
# 95 "data/maps/Route117/scripts.pory"

# 96 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 97 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 98 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route117/scripts.pory"
	end
# 100 "data/maps/Route117/scripts.pory"

# 101 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 102 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 103 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 104 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 105 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 106 "data/maps/Route117/scripts.pory"
	release
# 107 "data/maps/Route117/scripts.pory"
	end
# 108 "data/maps/Route117/scripts.pory"

# 109 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 110 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 111 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 113 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_LYDIA_1
# 114 "data/maps/Route117/scripts.pory"
	release
# 115 "data/maps/Route117/scripts.pory"
	end
# 116 "data/maps/Route117/scripts.pory"

# 117 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 118 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 119 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route117/scripts.pory"
	end
# 121 "data/maps/Route117/scripts.pory"

# 122 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 123 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_TryDylanGiftAfterBattle
# 124 "data/maps/Route117/scripts.pory"
	//specialvar VAR_RESULT, ShouldTryRematchBattle
# 125 "data/maps/Route117/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 126 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 127 "data/maps/Route117/scripts.pory"
	release
# 128 "data/maps/Route117/scripts.pory"
	end
# 129 "data/maps/Route117/scripts.pory"

# 130 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 131 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 132 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 134 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_DYLAN_1
# 135 "data/maps/Route117/scripts.pory"
	release
# 136 "data/maps/Route117/scripts.pory"
	end
# 137 "data/maps/Route117/scripts.pory"

# 138 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 139 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 140 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route117/scripts.pory"
	end
# 142 "data/maps/Route117/scripts.pory"

# 143 "data/maps/Route117/scripts.pory"
/*
# 144 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 145 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 146 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 147 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 148 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 149 "data/maps/Route117/scripts.pory"
	release
# 150 "data/maps/Route117/scripts.pory"
	end
# 151 "data/maps/Route117/scripts.pory"

# 152 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 153 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 154 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 156 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_MARIA_1
# 157 "data/maps/Route117/scripts.pory"
	release
# 158 "data/maps/Route117/scripts.pory"
	end
# 159 "data/maps/Route117/scripts.pory"

# 160 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 161 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 162 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route117/scripts.pory"
	end
# 164 "data/maps/Route117/scripts.pory"
*/
# 165 "data/maps/Route117/scripts.pory"

# 166 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 167 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 168 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route117/scripts.pory"
	end
# 170 "data/maps/Route117/scripts.pory"

# 171 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 172 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 173 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 174 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 175 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 176 "data/maps/Route117/scripts.pory"
	release
# 177 "data/maps/Route117/scripts.pory"
	end
# 178 "data/maps/Route117/scripts.pory"

# 179 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 180 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 181 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_ANNA_AND_MEG_1
# 182 "data/maps/Route117/scripts.pory"
	release
# 183 "data/maps/Route117/scripts.pory"
	end
# 184 "data/maps/Route117/scripts.pory"

# 185 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 186 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 187 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route117/scripts.pory"
	end
# 189 "data/maps/Route117/scripts.pory"

# 190 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 191 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 192 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 193 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 194 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 195 "data/maps/Route117/scripts.pory"
	release
# 196 "data/maps/Route117/scripts.pory"
	end
# 197 "data/maps/Route117/scripts.pory"

# 198 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 199 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 200 "data/maps/Route117/scripts.pory"
	//register_matchcall TRAINER_ANNA_AND_MEG_1
# 201 "data/maps/Route117/scripts.pory"
	release
# 202 "data/maps/Route117/scripts.pory"
	end
# 203 "data/maps/Route117/scripts.pory"

# 204 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 205 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 206 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route117/scripts.pory"
	end
# 208 "data/maps/Route117/scripts.pory"

# 209 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 210 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 211 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route117/scripts.pory"
	end
# 213 "data/maps/Route117/scripts.pory"

# 214 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 215 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 216 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route117/scripts.pory"
	end
# 218 "data/maps/Route117/scripts.pory"

# 219 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 220 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 221 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/Route117/scripts.pory"
	end
# 223 "data/maps/Route117/scripts.pory"

# 224 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 225 "data/maps/Route117/scripts.pory"
	.string "I left my Pokémon at the DAY CARE.\p"
# 226 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 227 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 228 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 229 "data/maps/Route117/scripts.pory"

# 230 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 231 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 232 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 233 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 234 "data/maps/Route117/scripts.pory"

# 235 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 236 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 237 "data/maps/Route117/scripts.pory"

# 238 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 239 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 240 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 241 "data/maps/Route117/scripts.pory"

# 242 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 243 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 244 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 245 "data/maps/Route117/scripts.pory"

# 246 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 247 "data/maps/Route117/scripts.pory"
	.string "Pokémon DAY CARE\n"
# 248 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your Pokémon.”$"

Route117_EventScript_TryDylanGiftAfterBattle::
# 253 "data/maps/Route117/scripts.pory"
	lock
# 254 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route117_EventScript_TryDylanGiftAfterBattle_1
# 258 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_TryDylanGiftAfterBattle_Text_1, MSGBOX_NPC
# 259 "data/maps/Route117/scripts.pory"
	waitmessage
# 260 "data/maps/Route117/scripts.pory"
	giveitem ITEM_CARBOS
# 261 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 262 "data/maps/Route117/scripts.pory"
	waitfanfare
# 263 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_TryDylanGiftAfterBattle_1:
# 255 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_TryDylanGiftAfterBattle_Text_0, MSGBOX_NPC
	return


Route117_EventScript_GrassyGlideBoy::
# 269 "data/maps/Route117/scripts.pory"
	lock
# 270 "data/maps/Route117/scripts.pory"
	faceplayer
# 271 "data/maps/Route117/scripts.pory"
	checkitem ITEM_TM_GRASSY_GLIDE
# 272 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route117_EventScript_GrassyGlideBoy_2
# 279 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_LittleBoy
Route117_EventScript_GrassyGlideBoy_1:
# 281 "data/maps/Route117/scripts.pory"
	releaseall
	end

Route117_EventScript_GrassyGlideBoy_2:
# 273 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_GrassyGlideBoy_Text_0, MSGBOX_DEFAULT
# 274 "data/maps/Route117/scripts.pory"
	closemessage
# 275 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_GRASSY_GLIDE
# 276 "data/maps/Route117/scripts.pory"
	waitfanfare
	goto Route117_EventScript_GrassyGlideBoy_1


Route117_EventScript_Isaac::
# 286 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_IsaacTryGiveVitamin
# 287 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_TEMP_A, Route117_EventScript_IsaacTryGiveVitamin
# 288 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_NPC
# 289 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_IsaacTryGiveVitamin::
# 294 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route117_EventScript_IsaacTryGiveVitamin_2
# 298 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Route117_EventScript_IsaacTryGiveVitamin_5
# 302 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_IsaacTryGiveVitamin_Text_1, MSGBOX_NPC
Route117_EventScript_IsaacTryGiveVitamin_4:
# 304 "data/maps/Route117/scripts.pory"
	checkitemspace ITEM_PROTEIN
# 305 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_IsaacTryGiveVitamin_9
# 310 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_A
# 311 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_IsaacTryGiveVitamin_Text_2, MSGBOX_NPC
Route117_EventScript_IsaacTryGiveVitamin_8:
# 313 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_IsaacTryGiveVitamin_2:
# 295 "data/maps/Route117/scripts.pory"
	releaseall
	end

Route117_EventScript_IsaacTryGiveVitamin_5:
# 299 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_IsaacTryGiveVitamin_Text_0, MSGBOX_NPC
	goto Route117_EventScript_IsaacTryGiveVitamin_4

Route117_EventScript_IsaacTryGiveVitamin_9:
# 306 "data/maps/Route117/scripts.pory"
	giveitem ITEM_PROTEIN
# 307 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_A
	goto Route117_EventScript_IsaacTryGiveVitamin_8


Route117_EventScript_TryDylanGiftAfterBattle_Text_0:
# 255 "data/maps/Route117/scripts.pory"
	.string "If you beat Wattson, your Pokémon must\n"
	.string "be in peak form.\p"
	.string "Make sure you get enough exercise for\n"
	.string "yourself, too!$"

Route117_EventScript_TryDylanGiftAfterBattle_Text_1:
# 258 "data/maps/Route117/scripts.pory"
	.string "It's important to train your speed!\p"
	.string "Training Pokémon's speed is easier, you\n"
	.string "can just give them this.$"

Route117_EventScript_GrassyGlideBoy_Text_0:
# 273 "data/maps/Route117/scripts.pory"
	.string "I feel like I can run so fast here, so\n"
	.string "easily!\p"
	.string "I bet your Pokémon can, too.$"

Route117_EventScript_IsaacTryGiveVitamin_Text_0:
# 299 "data/maps/Route117/scripts.pory"
	.string "Vitamins can help your Pokémon grow big\n"
	.string "and strong!$"

Route117_EventScript_IsaacTryGiveVitamin_Text_1:
# 302 "data/maps/Route117/scripts.pory"
	.string "I'm glad you understand the importance\n"
	.string "of proper nutrients!$"

Route117_EventScript_IsaacTryGiveVitamin_Text_2:
# 311 "data/maps/Route117/scripts.pory"
	.string "I promise, these vitamins are\n"
	.string "completely safe. Come back if you\l"
	.string "change your mind.$"
