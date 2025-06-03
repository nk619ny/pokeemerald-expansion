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
Route104_North_EventScript_ExpertF::
# 32 "data/maps/Route104_North/scripts.pory"
	lock
# 33 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 34 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_North_EventScript_ReceivedBerry
# 35 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 36 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 37 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 38 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 39 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 40 "data/maps/Route104_North/scripts.pory"
	release
# 41 "data/maps/Route104_North/scripts.pory"
	end
# 42 "data/maps/Route104_North/scripts.pory"

# 43 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedBerry::
# 44 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 45 "data/maps/Route104_North/scripts.pory"
	release
# 46 "data/maps/Route104_North/scripts.pory"
	end
# 47 "data/maps/Route104_North/scripts.pory"

# 48 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_WhiteHerbFlorist::
# 49 "data/maps/Route104_North/scripts.pory"
	lock
# 50 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 51 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_North_EventScript_ReceivedWhiteHerb
# 52 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 53 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 54 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 55 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 56 "data/maps/Route104_North/scripts.pory"
	release
# 57 "data/maps/Route104_North/scripts.pory"
	end
# 58 "data/maps/Route104_North/scripts.pory"

# 59 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedWhiteHerb::
# 60 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 61 "data/maps/Route104_North/scripts.pory"
	release
# 62 "data/maps/Route104_North/scripts.pory"
	end
# 63 "data/maps/Route104_North/scripts.pory"

# 64 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Girl1::
# 65 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 66 "data/maps/Route104_North/scripts.pory"
	end
# 67 "data/maps/Route104_North/scripts.pory"

# 68 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_BugCatcher::
# 69 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 70 "data/maps/Route104_North/scripts.pory"
	end
# 71 "data/maps/Route104_North/scripts.pory"

# 72 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_BrineysCottageSign::
# 73 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 74 "data/maps/Route104_North/scripts.pory"
	end
# 75 "data/maps/Route104_North/scripts.pory"

# 76 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RouteSignPetalburg::
# 77 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 78 "data/maps/Route104_North/scripts.pory"
	end
# 79 "data/maps/Route104_North/scripts.pory"

# 80 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RouteSignRustboro::
# 81 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 82 "data/maps/Route104_North/scripts.pory"
	end
# 83 "data/maps/Route104_North/scripts.pory"

# 84 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_FlowerShopSign::
# 85 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 86 "data/maps/Route104_North/scripts.pory"
	end
# 87 "data/maps/Route104_North/scripts.pory"

# 88 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TrainerTipsDoubleBattles::
# 89 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 90 "data/maps/Route104_North/scripts.pory"
	end
# 91 "data/maps/Route104_North/scripts.pory"

# 92 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Boy1::
# 93 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 94 "data/maps/Route104_North/scripts.pory"
	end
# 95 "data/maps/Route104_North/scripts.pory"

# 96 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Woman::
# 97 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 98 "data/maps/Route104_North/scripts.pory"
	end
# 99 "data/maps/Route104_North/scripts.pory"

# 100 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Boy2::
# 101 "data/maps/Route104_North/scripts.pory"
	lock
# 102 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 103 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_North_EventScript_ReceivedBulletSeed
# 104 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 105 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 106 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 107 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 108 "data/maps/Route104_North/scripts.pory"
	release
# 109 "data/maps/Route104_North/scripts.pory"
	end
# 110 "data/maps/Route104_North/scripts.pory"

# 111 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedBulletSeed::
# 112 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 113 "data/maps/Route104_North/scripts.pory"
	release
# 114 "data/maps/Route104_North/scripts.pory"
	end
# 115 "data/maps/Route104_North/scripts.pory"

# 116 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Girl2::
# 117 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 118 "data/maps/Route104_North/scripts.pory"
	end
# 119 "data/maps/Route104_North/scripts.pory"

# 120 "data/maps/Route104_North/scripts.pory"

# 121 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Ivan::
# 122 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 123 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route104_North/scripts.pory"
	end
# 125 "data/maps/Route104_North/scripts.pory"

# 126 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Billy::
# 127 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 128 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route104_North/scripts.pory"
	end
# 130 "data/maps/Route104_North/scripts.pory"

# 131 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Haley::
# 132 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_North_EventScript_TryRegisterHaleyAfterBattle
# 133 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 134 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchHaley
# 135 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 136 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 137 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterHaley
# 138 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 139 "data/maps/Route104_North/scripts.pory"
	release
# 140 "data/maps/Route104_North/scripts.pory"
	end
# 141 "data/maps/Route104_North/scripts.pory"

# 142 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterHaleyAfterBattle::
# 143 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 144 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterHaleyAfterBattle
# 146 "data/maps/Route104_North/scripts.pory"
	release
# 147 "data/maps/Route104_North/scripts.pory"
	end
# 148 "data/maps/Route104_North/scripts.pory"

# 149 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterHaleyAfterBattle::
# 150 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 151 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_HALEY_1
# 152 "data/maps/Route104_North/scripts.pory"
	release
# 153 "data/maps/Route104_North/scripts.pory"
	end
# 154 "data/maps/Route104_North/scripts.pory"

# 155 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterHaley::
# 156 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterHaley
# 157 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 158 "data/maps/Route104_North/scripts.pory"
	release
# 159 "data/maps/Route104_North/scripts.pory"
	end
# 160 "data/maps/Route104_North/scripts.pory"

# 161 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterHaley::
# 162 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 163 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_HALEY_1
# 164 "data/maps/Route104_North/scripts.pory"
	release
# 165 "data/maps/Route104_North/scripts.pory"
	end
# 166 "data/maps/Route104_North/scripts.pory"

# 167 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchHaley::
# 168 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 169 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route104_North/scripts.pory"
	end
# 171 "data/maps/Route104_North/scripts.pory"

# 172 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Winston::
# 173 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_North_EventScript_TryRegisterWinstonAfterBattle
# 174 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 175 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchWinston
# 176 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 177 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 178 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterWinston
# 179 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 180 "data/maps/Route104_North/scripts.pory"
	release
# 181 "data/maps/Route104_North/scripts.pory"
	end
# 182 "data/maps/Route104_North/scripts.pory"

# 183 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterWinstonAfterBattle::
# 184 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 185 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterWinstonAfterBattle
# 187 "data/maps/Route104_North/scripts.pory"
	release
# 188 "data/maps/Route104_North/scripts.pory"
	end
# 189 "data/maps/Route104_North/scripts.pory"

# 190 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterWinstonAfterBattle::
# 191 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 192 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_WINSTON_1
# 193 "data/maps/Route104_North/scripts.pory"
	release
# 194 "data/maps/Route104_North/scripts.pory"
	end
# 195 "data/maps/Route104_North/scripts.pory"

# 196 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterWinston::
# 197 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterWinston
# 198 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 199 "data/maps/Route104_North/scripts.pory"
	release
# 200 "data/maps/Route104_North/scripts.pory"
	end
# 201 "data/maps/Route104_North/scripts.pory"

# 202 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterWinston::
# 203 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 204 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_WINSTON_1
# 205 "data/maps/Route104_North/scripts.pory"
	release
# 206 "data/maps/Route104_North/scripts.pory"
	end
# 207 "data/maps/Route104_North/scripts.pory"

# 208 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchWinston::
# 209 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 210 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route104_North/scripts.pory"
	end
# 212 "data/maps/Route104_North/scripts.pory"

# 213 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Cindy::
# 214 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_North_EventScript_TryRegisterCindyAfterBattle
# 215 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 216 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchCindy
# 217 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 218 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 219 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterCindy
# 220 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 221 "data/maps/Route104_North/scripts.pory"
	release
# 222 "data/maps/Route104_North/scripts.pory"
	end
# 223 "data/maps/Route104_North/scripts.pory"

# 224 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterCindyAfterBattle::
# 225 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 226 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterCindyAfterBattle
# 228 "data/maps/Route104_North/scripts.pory"
	release
# 229 "data/maps/Route104_North/scripts.pory"
	end
# 230 "data/maps/Route104_North/scripts.pory"

# 231 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterCindyAfterBattle::
# 232 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 233 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_CINDY_1
# 234 "data/maps/Route104_North/scripts.pory"
	release
# 235 "data/maps/Route104_North/scripts.pory"
	end
# 236 "data/maps/Route104_North/scripts.pory"

# 237 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterCindy::
# 238 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterCindy
# 239 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 240 "data/maps/Route104_North/scripts.pory"
	release
# 241 "data/maps/Route104_North/scripts.pory"
	end
# 242 "data/maps/Route104_North/scripts.pory"

# 243 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterCindy::
# 244 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 245 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_CINDY_1
# 246 "data/maps/Route104_North/scripts.pory"
	release
# 247 "data/maps/Route104_North/scripts.pory"
	end
# 248 "data/maps/Route104_North/scripts.pory"

# 249 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchCindy::
# 250 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 251 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 252 "data/maps/Route104_North/scripts.pory"
	end
# 253 "data/maps/Route104_North/scripts.pory"

# 254 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Gina::
# 255 "data/maps/Route104_North/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 256 "data/maps/Route104_North/scripts.pory"
	special GetPlayerBigGuyGirlString
# 257 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 258 "data/maps/Route104_North/scripts.pory"
	release
# 259 "data/maps/Route104_North/scripts.pory"
	end
# 260 "data/maps/Route104_North/scripts.pory"

# 261 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Mia::
# 262 "data/maps/Route104_North/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 263 "data/maps/Route104_North/scripts.pory"
	special GetPlayerBigGuyGirlString
# 264 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 265 "data/maps/Route104_North/scripts.pory"
	release
# 266 "data/maps/Route104_North/scripts.pory"
	end
# 267 "data/maps/Route104_North/scripts.pory"

# 268 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Darian::
# 269 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 270 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 271 "data/maps/Route104_North/scripts.pory"
	end

Route104_North_EventScript_SetBrokenBridge::
# 275 "data/maps/Route104_North/scripts.pory"
	setmetatile 28, 15, 0x20D, TRUE
# 276 "data/maps/Route104_North/scripts.pory"
	setmetatile 28, 16, 0x20E, TRUE
# 277 "data/maps/Route104_North/scripts.pory"
	setmetatile 28, 17, 0x20F, TRUE
# 278 "data/maps/Route104_North/scripts.pory"
	setmetatile 27, 15, 0x20E, TRUE
# 279 "data/maps/Route104_North/scripts.pory"
	setmetatile 27, 16, 0x20F, TRUE
# 280 "data/maps/Route104_North/scripts.pory"
	setmetatile 27, 17, 0x208, TRUE
	return

