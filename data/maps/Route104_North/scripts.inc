# 1 "data/maps/Route104_North/scripts.pory"

# 2 "data/maps/Route104_North/scripts.pory"
Route104_North_MapScripts::
# 3 "data/maps/Route104_North/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_North_OnTransition
# 4 "data/maps/Route104_North/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route104_North_OnLoad
# 5 "data/maps/Route104_North/scripts.pory"
	.byte 0
# 6 "data/maps/Route104_North/scripts.pory"

# 7 "data/maps/Route104_North/scripts.pory"
Route104_North_OnTransition:
# 8 "data/maps/Route104_North/scripts.pory"
	call Route104_North_EventScript_ShowOrHideWhiteHerbFlorist
# 9 "data/maps/Route104_North/scripts.pory"
	end
# 10 "data/maps/Route104_North/scripts.pory"

# 11 "data/maps/Route104_North/scripts.pory"
Route104_North_OnLoad:
# 12 "data/maps/Route104_North/scripts.pory"
	call_if_unset FLAG_VISITED_RUSTBORO_CITY, Route104_North_EventScript_SetBrokenBridge
# 13 "data/maps/Route104_North/scripts.pory"
	end
# 14 "data/maps/Route104_North/scripts.pory"

# 15 "data/maps/Route104_North/scripts.pory"
/*
# 16 "data/maps/Route104_North/scripts.pory"
Route104_North_OnFrame:
# 17 "data/maps/Route104_North/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Route104_North_EventScript_SetBrokenBridge
# 18 "data/maps/Route104_North/scripts.pory"
	.2byte 0
# 19 "data/maps/Route104_North/scripts.pory"
*/
# 20 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ShowOrHideWhiteHerbFlorist::
# 21 "data/maps/Route104_North/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_North_EventScript_HideWhiteHerbFlorist
# 22 "data/maps/Route104_North/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_North_EventScript_HideWhiteHerbFlorist
# 23 "data/maps/Route104_North/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 24 "data/maps/Route104_North/scripts.pory"
	return
# 25 "data/maps/Route104_North/scripts.pory"

# 26 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_HideWhiteHerbFlorist::
# 27 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 28 "data/maps/Route104_North/scripts.pory"
	return
# 29 "data/maps/Route104_North/scripts.pory"

# 30 "data/maps/Route104_North/scripts.pory"

# 31 "data/maps/Route104_North/scripts.pory"

# 32 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedBerry::
# 33 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 34 "data/maps/Route104_North/scripts.pory"
	release
# 35 "data/maps/Route104_North/scripts.pory"
	end
# 36 "data/maps/Route104_North/scripts.pory"

# 37 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_WhiteHerbFlorist::
# 38 "data/maps/Route104_North/scripts.pory"
	lock
# 39 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 40 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_North_EventScript_ReceivedWhiteHerb
# 41 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 42 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 43 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 44 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 45 "data/maps/Route104_North/scripts.pory"
	release
# 46 "data/maps/Route104_North/scripts.pory"
	end
# 47 "data/maps/Route104_North/scripts.pory"

# 48 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedWhiteHerb::
# 49 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 50 "data/maps/Route104_North/scripts.pory"
	release
# 51 "data/maps/Route104_North/scripts.pory"
	end
# 52 "data/maps/Route104_North/scripts.pory"

# 53 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Girl1::
# 54 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 55 "data/maps/Route104_North/scripts.pory"
	end
# 56 "data/maps/Route104_North/scripts.pory"

# 57 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_BugCatcher::
# 58 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 59 "data/maps/Route104_North/scripts.pory"
	end
# 60 "data/maps/Route104_North/scripts.pory"

# 61 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_BrineysCottageSign::
# 62 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 63 "data/maps/Route104_North/scripts.pory"
	end
# 64 "data/maps/Route104_North/scripts.pory"

# 65 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RouteSignPetalburg::
# 66 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 67 "data/maps/Route104_North/scripts.pory"
	end
# 68 "data/maps/Route104_North/scripts.pory"

# 69 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RouteSignRustboro::
# 70 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 71 "data/maps/Route104_North/scripts.pory"
	end
# 72 "data/maps/Route104_North/scripts.pory"

# 73 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_FlowerShopSign::
# 74 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 75 "data/maps/Route104_North/scripts.pory"
	end
# 76 "data/maps/Route104_North/scripts.pory"

# 77 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TrainerTipsDoubleBattles::
# 78 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 79 "data/maps/Route104_North/scripts.pory"
	end
# 80 "data/maps/Route104_North/scripts.pory"

# 81 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Boy1::
# 82 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 83 "data/maps/Route104_North/scripts.pory"
	end
# 84 "data/maps/Route104_North/scripts.pory"

# 85 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Woman::
# 86 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 87 "data/maps/Route104_North/scripts.pory"
	end
# 88 "data/maps/Route104_North/scripts.pory"

# 89 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Boy2::
# 90 "data/maps/Route104_North/scripts.pory"
	lock
# 91 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 92 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_North_EventScript_ReceivedBulletSeed
# 93 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 94 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 95 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 96 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 97 "data/maps/Route104_North/scripts.pory"
	release
# 98 "data/maps/Route104_North/scripts.pory"
	end
# 99 "data/maps/Route104_North/scripts.pory"

# 100 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedBulletSeed::
# 101 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 102 "data/maps/Route104_North/scripts.pory"
	release
# 103 "data/maps/Route104_North/scripts.pory"
	end
# 104 "data/maps/Route104_North/scripts.pory"

# 105 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Girl2::
# 106 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 107 "data/maps/Route104_North/scripts.pory"
	end
# 108 "data/maps/Route104_North/scripts.pory"

# 109 "data/maps/Route104_North/scripts.pory"

# 110 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Ivan::
# 111 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 112 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route104_North/scripts.pory"
	end
# 114 "data/maps/Route104_North/scripts.pory"

# 115 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Billy::
# 116 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 117 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route104_North/scripts.pory"
	end
# 119 "data/maps/Route104_North/scripts.pory"

# 120 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Haley::
# 121 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_North_EventScript_TryRegisterHaleyAfterBattle
# 122 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 123 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchHaley
# 124 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 125 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 126 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterHaley
# 127 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 128 "data/maps/Route104_North/scripts.pory"
	release
# 129 "data/maps/Route104_North/scripts.pory"
	end
# 130 "data/maps/Route104_North/scripts.pory"

# 131 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterHaleyAfterBattle::
# 132 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 133 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterHaleyAfterBattle
# 135 "data/maps/Route104_North/scripts.pory"
	release
# 136 "data/maps/Route104_North/scripts.pory"
	end
# 137 "data/maps/Route104_North/scripts.pory"

# 138 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterHaleyAfterBattle::
# 139 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 140 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_HALEY_1
# 141 "data/maps/Route104_North/scripts.pory"
	release
# 142 "data/maps/Route104_North/scripts.pory"
	end
# 143 "data/maps/Route104_North/scripts.pory"

# 144 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterHaley::
# 145 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterHaley
# 146 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 147 "data/maps/Route104_North/scripts.pory"
	release
# 148 "data/maps/Route104_North/scripts.pory"
	end
# 149 "data/maps/Route104_North/scripts.pory"

# 150 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterHaley::
# 151 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 152 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_HALEY_1
# 153 "data/maps/Route104_North/scripts.pory"
	release
# 154 "data/maps/Route104_North/scripts.pory"
	end
# 155 "data/maps/Route104_North/scripts.pory"

# 156 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchHaley::
# 157 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 158 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route104_North/scripts.pory"
	end
# 160 "data/maps/Route104_North/scripts.pory"

# 161 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Winston::
# 162 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_North_EventScript_TryRegisterWinstonAfterBattle
# 163 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 164 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchWinston
# 165 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 166 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 167 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterWinston
# 168 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 169 "data/maps/Route104_North/scripts.pory"
	release
# 170 "data/maps/Route104_North/scripts.pory"
	end
# 171 "data/maps/Route104_North/scripts.pory"

# 172 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterWinstonAfterBattle::
# 173 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 174 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterWinstonAfterBattle
# 176 "data/maps/Route104_North/scripts.pory"
	release
# 177 "data/maps/Route104_North/scripts.pory"
	end
# 178 "data/maps/Route104_North/scripts.pory"

# 179 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterWinstonAfterBattle::
# 180 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 181 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_WINSTON_1
# 182 "data/maps/Route104_North/scripts.pory"
	release
# 183 "data/maps/Route104_North/scripts.pory"
	end
# 184 "data/maps/Route104_North/scripts.pory"

# 185 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterWinston::
# 186 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterWinston
# 187 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 188 "data/maps/Route104_North/scripts.pory"
	release
# 189 "data/maps/Route104_North/scripts.pory"
	end
# 190 "data/maps/Route104_North/scripts.pory"

# 191 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterWinston::
# 192 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 193 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_WINSTON_1
# 194 "data/maps/Route104_North/scripts.pory"
	release
# 195 "data/maps/Route104_North/scripts.pory"
	end
# 196 "data/maps/Route104_North/scripts.pory"

# 197 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchWinston::
# 198 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 199 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route104_North/scripts.pory"
	end
# 201 "data/maps/Route104_North/scripts.pory"

# 202 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Cindy::
# 203 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_North_EventScript_TryRegisterCindyAfterBattle
# 204 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 205 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchCindy
# 206 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 207 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 208 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterCindy
# 209 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 210 "data/maps/Route104_North/scripts.pory"
	release
# 211 "data/maps/Route104_North/scripts.pory"
	end
# 212 "data/maps/Route104_North/scripts.pory"

# 213 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterCindyAfterBattle::
# 214 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 215 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterCindyAfterBattle
# 217 "data/maps/Route104_North/scripts.pory"
	release
# 218 "data/maps/Route104_North/scripts.pory"
	end
# 219 "data/maps/Route104_North/scripts.pory"

# 220 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterCindyAfterBattle::
# 221 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 222 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_CINDY_1
# 223 "data/maps/Route104_North/scripts.pory"
	release
# 224 "data/maps/Route104_North/scripts.pory"
	end
# 225 "data/maps/Route104_North/scripts.pory"

# 226 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterCindy::
# 227 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterCindy
# 228 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 229 "data/maps/Route104_North/scripts.pory"
	release
# 230 "data/maps/Route104_North/scripts.pory"
	end
# 231 "data/maps/Route104_North/scripts.pory"

# 232 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterCindy::
# 233 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 234 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_CINDY_1
# 235 "data/maps/Route104_North/scripts.pory"
	release
# 236 "data/maps/Route104_North/scripts.pory"
	end
# 237 "data/maps/Route104_North/scripts.pory"

# 238 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchCindy::
# 239 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 240 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route104_North/scripts.pory"
	end
# 242 "data/maps/Route104_North/scripts.pory"

# 243 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Gina::
# 244 "data/maps/Route104_North/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 245 "data/maps/Route104_North/scripts.pory"
	special GetPlayerBigGuyGirlString
# 246 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 247 "data/maps/Route104_North/scripts.pory"
	release
# 248 "data/maps/Route104_North/scripts.pory"
	end
# 249 "data/maps/Route104_North/scripts.pory"

# 250 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Mia::
# 251 "data/maps/Route104_North/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 252 "data/maps/Route104_North/scripts.pory"
	special GetPlayerBigGuyGirlString
# 253 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 254 "data/maps/Route104_North/scripts.pory"
	release
# 255 "data/maps/Route104_North/scripts.pory"
	end
# 256 "data/maps/Route104_North/scripts.pory"

# 257 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Darian::
# 258 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 259 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route104_North/scripts.pory"
	end
# 261 "data/maps/Route104_North/scripts.pory"

# 262 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Bruce::
# 263 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_BRUCE, Route104_Text_BruceIntro, Route104_Text_BruceDefeat
# 264 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_BrucePostBattle, MSGBOX_AUTOCLOSE
# 265 "data/maps/Route104_North/scripts.pory"
	end

Route104_North_EventScript_SetBrokenBridge::
# 270 "data/maps/Route104_North/scripts.pory"
	setmetatile 28, 15, 0x20D, TRUE
# 271 "data/maps/Route104_North/scripts.pory"
	setmetatile 28, 16, 0x20E, TRUE
# 272 "data/maps/Route104_North/scripts.pory"
	setmetatile 28, 17, 0x20F, TRUE
# 273 "data/maps/Route104_North/scripts.pory"
	setmetatile 27, 15, 0x20E, TRUE
# 274 "data/maps/Route104_North/scripts.pory"
	setmetatile 27, 16, 0x20F, TRUE
# 275 "data/maps/Route104_North/scripts.pory"
	setmetatile 27, 17, 0x208, TRUE
	return


Route104_North_EventScript_ExpertF::
# 292 "data/maps/Route104_North/scripts.pory"
	lock
# 293 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 294 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_North_EventScript_ReceivedVitamin
# 295 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_North_Text_ExpertVitamin, MSGBOX_DEFAULT
# 296 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_CALCIUM
# 297 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 298 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 299 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_North_Text_ExpertYouAlreadyKnow, MSGBOX_DEFAULT
# 300 "data/maps/Route104_North/scripts.pory"
	release
	end


Route104_North_EventScript_ReceivedVitamin::
# 306 "data/maps/Route104_North/scripts.pory"
	lock
# 307 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 308 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_North_EventScript_ReceivedVitamin_Text_0, MSGBOX_DEFAULT
# 309 "data/maps/Route104_North/scripts.pory"
	release
	end


Route104_North_EventScript_ReceivedVitamin_Text_0:
# 308 "data/maps/Route104_North/scripts.pory"
	.string "It's important to always be intentional\n"
	.string "about developing your Pokémon.$"

Route104_Text_BruceIntro::
# 279 "data/maps/Route104_North/scripts.pory"
	.string "Shh! You'll scare away the birds!$"

Route104_Text_BruceDefeat::
# 283 "data/maps/Route104_North/scripts.pory"
	.string "You really ruffled my feathers...$"

Route104_Text_BrucePostBattle::
# 287 "data/maps/Route104_North/scripts.pory"
	.string "Bird watching takes a lot of patience,\n"
	.string "and quiet.$"

Route104_North_Text_ExpertVitamin::
# 313 "data/maps/Route104_North/scripts.pory"
	.string "You look like a very promising young\n"
	.string "trainer.\p"
	.string "Here, take this.$"

Route104_North_Text_ExpertYouAlreadyKnow::
# 317 "data/maps/Route104_North/scripts.pory"
	.string "Use that wisely, young one.$"
