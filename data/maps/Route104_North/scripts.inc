# 1 "data/maps/Route104_North/scripts.pory"

# 2 "data/maps/Route104_North/scripts.pory"
Route104_North_MapScripts::
# 3 "data/maps/Route104_North/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_North_OnTransition
# 4 "data/maps/Route104_North/scripts.pory"
	.byte 0
# 5 "data/maps/Route104_North/scripts.pory"

# 6 "data/maps/Route104_North/scripts.pory"
Route104_North_OnTransition:
# 7 "data/maps/Route104_North/scripts.pory"
	call Route104_North_EventScript_ShowOrHideWhiteHerbFlorist
# 8 "data/maps/Route104_North/scripts.pory"
	end
# 9 "data/maps/Route104_North/scripts.pory"

# 10 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ShowOrHideWhiteHerbFlorist::
# 11 "data/maps/Route104_North/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_North_EventScript_HideWhiteHerbFlorist
# 12 "data/maps/Route104_North/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_North_EventScript_HideWhiteHerbFlorist
# 13 "data/maps/Route104_North/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 14 "data/maps/Route104_North/scripts.pory"
	return
# 15 "data/maps/Route104_North/scripts.pory"

# 16 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_HideWhiteHerbFlorist::
# 17 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 18 "data/maps/Route104_North/scripts.pory"
	return
# 19 "data/maps/Route104_North/scripts.pory"

# 20 "data/maps/Route104_North/scripts.pory"

# 21 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ExpertF::
# 22 "data/maps/Route104_North/scripts.pory"
	lock
# 23 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 24 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_North_EventScript_ReceivedBerry
# 25 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 26 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 27 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 28 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 29 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 30 "data/maps/Route104_North/scripts.pory"
	release
# 31 "data/maps/Route104_North/scripts.pory"
	end
# 32 "data/maps/Route104_North/scripts.pory"

# 33 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedBerry::
# 34 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 35 "data/maps/Route104_North/scripts.pory"
	release
# 36 "data/maps/Route104_North/scripts.pory"
	end
# 37 "data/maps/Route104_North/scripts.pory"

# 38 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_WhiteHerbFlorist::
# 39 "data/maps/Route104_North/scripts.pory"
	lock
# 40 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 41 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_North_EventScript_ReceivedWhiteHerb
# 42 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 43 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 44 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 45 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 46 "data/maps/Route104_North/scripts.pory"
	release
# 47 "data/maps/Route104_North/scripts.pory"
	end
# 48 "data/maps/Route104_North/scripts.pory"

# 49 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedWhiteHerb::
# 50 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 51 "data/maps/Route104_North/scripts.pory"
	release
# 52 "data/maps/Route104_North/scripts.pory"
	end
# 53 "data/maps/Route104_North/scripts.pory"

# 54 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Girl1::
# 55 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 56 "data/maps/Route104_North/scripts.pory"
	end
# 57 "data/maps/Route104_North/scripts.pory"

# 58 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_BugCatcher::
# 59 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 60 "data/maps/Route104_North/scripts.pory"
	end
# 61 "data/maps/Route104_North/scripts.pory"

# 62 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_BrineysCottageSign::
# 63 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 64 "data/maps/Route104_North/scripts.pory"
	end
# 65 "data/maps/Route104_North/scripts.pory"

# 66 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RouteSignPetalburg::
# 67 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 68 "data/maps/Route104_North/scripts.pory"
	end
# 69 "data/maps/Route104_North/scripts.pory"

# 70 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RouteSignRustboro::
# 71 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 72 "data/maps/Route104_North/scripts.pory"
	end
# 73 "data/maps/Route104_North/scripts.pory"

# 74 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_FlowerShopSign::
# 75 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 76 "data/maps/Route104_North/scripts.pory"
	end
# 77 "data/maps/Route104_North/scripts.pory"

# 78 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TrainerTipsDoubleBattles::
# 79 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 80 "data/maps/Route104_North/scripts.pory"
	end
# 81 "data/maps/Route104_North/scripts.pory"

# 82 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Boy1::
# 83 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 84 "data/maps/Route104_North/scripts.pory"
	end
# 85 "data/maps/Route104_North/scripts.pory"

# 86 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Woman::
# 87 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 88 "data/maps/Route104_North/scripts.pory"
	end
# 89 "data/maps/Route104_North/scripts.pory"

# 90 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Boy2::
# 91 "data/maps/Route104_North/scripts.pory"
	lock
# 92 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 93 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_North_EventScript_ReceivedBulletSeed
# 94 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 95 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 96 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 97 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 98 "data/maps/Route104_North/scripts.pory"
	release
# 99 "data/maps/Route104_North/scripts.pory"
	end
# 100 "data/maps/Route104_North/scripts.pory"

# 101 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedBulletSeed::
# 102 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 103 "data/maps/Route104_North/scripts.pory"
	release
# 104 "data/maps/Route104_North/scripts.pory"
	end
# 105 "data/maps/Route104_North/scripts.pory"

# 106 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Girl2::
# 107 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 108 "data/maps/Route104_North/scripts.pory"
	end
# 109 "data/maps/Route104_North/scripts.pory"

# 110 "data/maps/Route104_North/scripts.pory"

# 111 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Ivan::
# 112 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 113 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route104_North/scripts.pory"
	end
# 115 "data/maps/Route104_North/scripts.pory"

# 116 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Billy::
# 117 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 118 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route104_North/scripts.pory"
	end
# 120 "data/maps/Route104_North/scripts.pory"

# 121 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Haley::
# 122 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_North_EventScript_TryRegisterHaleyAfterBattle
# 123 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 124 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchHaley
# 125 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 126 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 127 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterHaley
# 128 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 129 "data/maps/Route104_North/scripts.pory"
	release
# 130 "data/maps/Route104_North/scripts.pory"
	end
# 131 "data/maps/Route104_North/scripts.pory"

# 132 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterHaleyAfterBattle::
# 133 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 134 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterHaleyAfterBattle
# 136 "data/maps/Route104_North/scripts.pory"
	release
# 137 "data/maps/Route104_North/scripts.pory"
	end
# 138 "data/maps/Route104_North/scripts.pory"

# 139 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterHaleyAfterBattle::
# 140 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 141 "data/maps/Route104_North/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 142 "data/maps/Route104_North/scripts.pory"
	release
# 143 "data/maps/Route104_North/scripts.pory"
	end
# 144 "data/maps/Route104_North/scripts.pory"

# 145 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterHaley::
# 146 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterHaley
# 147 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 148 "data/maps/Route104_North/scripts.pory"
	release
# 149 "data/maps/Route104_North/scripts.pory"
	end
# 150 "data/maps/Route104_North/scripts.pory"

# 151 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterHaley::
# 152 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 153 "data/maps/Route104_North/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 154 "data/maps/Route104_North/scripts.pory"
	release
# 155 "data/maps/Route104_North/scripts.pory"
	end
# 156 "data/maps/Route104_North/scripts.pory"

# 157 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchHaley::
# 158 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 159 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 160 "data/maps/Route104_North/scripts.pory"
	end
# 161 "data/maps/Route104_North/scripts.pory"

# 162 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Winston::
# 163 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_North_EventScript_TryRegisterWinstonAfterBattle
# 164 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 165 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchWinston
# 166 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 167 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 168 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterWinston
# 169 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 170 "data/maps/Route104_North/scripts.pory"
	release
# 171 "data/maps/Route104_North/scripts.pory"
	end
# 172 "data/maps/Route104_North/scripts.pory"

# 173 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterWinstonAfterBattle::
# 174 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 175 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterWinstonAfterBattle
# 177 "data/maps/Route104_North/scripts.pory"
	release
# 178 "data/maps/Route104_North/scripts.pory"
	end
# 179 "data/maps/Route104_North/scripts.pory"

# 180 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterWinstonAfterBattle::
# 181 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 182 "data/maps/Route104_North/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 183 "data/maps/Route104_North/scripts.pory"
	release
# 184 "data/maps/Route104_North/scripts.pory"
	end
# 185 "data/maps/Route104_North/scripts.pory"

# 186 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterWinston::
# 187 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterWinston
# 188 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 189 "data/maps/Route104_North/scripts.pory"
	release
# 190 "data/maps/Route104_North/scripts.pory"
	end
# 191 "data/maps/Route104_North/scripts.pory"

# 192 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterWinston::
# 193 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 194 "data/maps/Route104_North/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 195 "data/maps/Route104_North/scripts.pory"
	release
# 196 "data/maps/Route104_North/scripts.pory"
	end
# 197 "data/maps/Route104_North/scripts.pory"

# 198 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchWinston::
# 199 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 200 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route104_North/scripts.pory"
	end
# 202 "data/maps/Route104_North/scripts.pory"

# 203 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Cindy::
# 204 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_North_EventScript_TryRegisterCindyAfterBattle
# 205 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 206 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchCindy
# 207 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 208 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 209 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterCindy
# 210 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 211 "data/maps/Route104_North/scripts.pory"
	release
# 212 "data/maps/Route104_North/scripts.pory"
	end
# 213 "data/maps/Route104_North/scripts.pory"

# 214 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterCindyAfterBattle::
# 215 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 216 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterCindyAfterBattle
# 218 "data/maps/Route104_North/scripts.pory"
	release
# 219 "data/maps/Route104_North/scripts.pory"
	end
# 220 "data/maps/Route104_North/scripts.pory"

# 221 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterCindyAfterBattle::
# 222 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 223 "data/maps/Route104_North/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 224 "data/maps/Route104_North/scripts.pory"
	release
# 225 "data/maps/Route104_North/scripts.pory"
	end
# 226 "data/maps/Route104_North/scripts.pory"

# 227 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterCindy::
# 228 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterCindy
# 229 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 230 "data/maps/Route104_North/scripts.pory"
	release
# 231 "data/maps/Route104_North/scripts.pory"
	end
# 232 "data/maps/Route104_North/scripts.pory"

# 233 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterCindy::
# 234 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 235 "data/maps/Route104_North/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 236 "data/maps/Route104_North/scripts.pory"
	release
# 237 "data/maps/Route104_North/scripts.pory"
	end
# 238 "data/maps/Route104_North/scripts.pory"

# 239 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchCindy::
# 240 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 241 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 242 "data/maps/Route104_North/scripts.pory"
	end
# 243 "data/maps/Route104_North/scripts.pory"

# 244 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Gina::
# 245 "data/maps/Route104_North/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 246 "data/maps/Route104_North/scripts.pory"
	special GetPlayerBigGuyGirlString
# 247 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 248 "data/maps/Route104_North/scripts.pory"
	release
# 249 "data/maps/Route104_North/scripts.pory"
	end
# 250 "data/maps/Route104_North/scripts.pory"

# 251 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Mia::
# 252 "data/maps/Route104_North/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 253 "data/maps/Route104_North/scripts.pory"
	special GetPlayerBigGuyGirlString
# 254 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 255 "data/maps/Route104_North/scripts.pory"
	release
# 256 "data/maps/Route104_North/scripts.pory"
	end
# 257 "data/maps/Route104_North/scripts.pory"

# 258 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Darian::
# 259 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 260 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/Route104_North/scripts.pory"
	end
