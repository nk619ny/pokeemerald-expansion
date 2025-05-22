# 1 "data/maps/Route104_North/scripts.pory"

# 2 "data/maps/Route104_North/scripts.pory"
Route104_North_MapScripts::
# 3 "data/maps/Route104_North/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_North_OnTransition
# 4 "data/maps/Route104_North/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_North_OnFrame
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
Route104_North_OnFrame:
# 12 "data/maps/Route104_North/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Route104_North_EventScript_SetBrokenBridge
# 13 "data/maps/Route104_North/scripts.pory"
	.2byte 0
# 14 "data/maps/Route104_North/scripts.pory"

# 15 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ShowOrHideWhiteHerbFlorist::
# 16 "data/maps/Route104_North/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_North_EventScript_HideWhiteHerbFlorist
# 17 "data/maps/Route104_North/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_North_EventScript_HideWhiteHerbFlorist
# 18 "data/maps/Route104_North/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 19 "data/maps/Route104_North/scripts.pory"
	return
# 20 "data/maps/Route104_North/scripts.pory"

# 21 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_HideWhiteHerbFlorist::
# 22 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 23 "data/maps/Route104_North/scripts.pory"
	return
# 24 "data/maps/Route104_North/scripts.pory"

# 25 "data/maps/Route104_North/scripts.pory"

# 26 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ExpertF::
# 27 "data/maps/Route104_North/scripts.pory"
	lock
# 28 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 29 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_North_EventScript_ReceivedBerry
# 30 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 31 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 32 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 34 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 35 "data/maps/Route104_North/scripts.pory"
	release
# 36 "data/maps/Route104_North/scripts.pory"
	end
# 37 "data/maps/Route104_North/scripts.pory"

# 38 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedBerry::
# 39 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 40 "data/maps/Route104_North/scripts.pory"
	release
# 41 "data/maps/Route104_North/scripts.pory"
	end
# 42 "data/maps/Route104_North/scripts.pory"

# 43 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_WhiteHerbFlorist::
# 44 "data/maps/Route104_North/scripts.pory"
	lock
# 45 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 46 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_North_EventScript_ReceivedWhiteHerb
# 47 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 48 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 49 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 50 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 51 "data/maps/Route104_North/scripts.pory"
	release
# 52 "data/maps/Route104_North/scripts.pory"
	end
# 53 "data/maps/Route104_North/scripts.pory"

# 54 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedWhiteHerb::
# 55 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 56 "data/maps/Route104_North/scripts.pory"
	release
# 57 "data/maps/Route104_North/scripts.pory"
	end
# 58 "data/maps/Route104_North/scripts.pory"

# 59 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Girl1::
# 60 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 61 "data/maps/Route104_North/scripts.pory"
	end
# 62 "data/maps/Route104_North/scripts.pory"

# 63 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_BugCatcher::
# 64 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 65 "data/maps/Route104_North/scripts.pory"
	end
# 66 "data/maps/Route104_North/scripts.pory"

# 67 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_BrineysCottageSign::
# 68 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 69 "data/maps/Route104_North/scripts.pory"
	end
# 70 "data/maps/Route104_North/scripts.pory"

# 71 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RouteSignPetalburg::
# 72 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 73 "data/maps/Route104_North/scripts.pory"
	end
# 74 "data/maps/Route104_North/scripts.pory"

# 75 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RouteSignRustboro::
# 76 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 77 "data/maps/Route104_North/scripts.pory"
	end
# 78 "data/maps/Route104_North/scripts.pory"

# 79 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_FlowerShopSign::
# 80 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 81 "data/maps/Route104_North/scripts.pory"
	end
# 82 "data/maps/Route104_North/scripts.pory"

# 83 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TrainerTipsDoubleBattles::
# 84 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 85 "data/maps/Route104_North/scripts.pory"
	end
# 86 "data/maps/Route104_North/scripts.pory"

# 87 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Boy1::
# 88 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 89 "data/maps/Route104_North/scripts.pory"
	end
# 90 "data/maps/Route104_North/scripts.pory"

# 91 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Woman::
# 92 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 93 "data/maps/Route104_North/scripts.pory"
	end
# 94 "data/maps/Route104_North/scripts.pory"

# 95 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Boy2::
# 96 "data/maps/Route104_North/scripts.pory"
	lock
# 97 "data/maps/Route104_North/scripts.pory"
	faceplayer
# 98 "data/maps/Route104_North/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_North_EventScript_ReceivedBulletSeed
# 99 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 100 "data/maps/Route104_North/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 101 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 102 "data/maps/Route104_North/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 103 "data/maps/Route104_North/scripts.pory"
	release
# 104 "data/maps/Route104_North/scripts.pory"
	end
# 105 "data/maps/Route104_North/scripts.pory"

# 106 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_ReceivedBulletSeed::
# 107 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 108 "data/maps/Route104_North/scripts.pory"
	release
# 109 "data/maps/Route104_North/scripts.pory"
	end
# 110 "data/maps/Route104_North/scripts.pory"

# 111 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Girl2::
# 112 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 113 "data/maps/Route104_North/scripts.pory"
	end
# 114 "data/maps/Route104_North/scripts.pory"

# 115 "data/maps/Route104_North/scripts.pory"

# 116 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Ivan::
# 117 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 118 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route104_North/scripts.pory"
	end
# 120 "data/maps/Route104_North/scripts.pory"

# 121 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Billy::
# 122 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 123 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route104_North/scripts.pory"
	end
# 125 "data/maps/Route104_North/scripts.pory"

# 126 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Haley::
# 127 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_North_EventScript_TryRegisterHaleyAfterBattle
# 128 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 129 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchHaley
# 130 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 131 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 132 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterHaley
# 133 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 134 "data/maps/Route104_North/scripts.pory"
	release
# 135 "data/maps/Route104_North/scripts.pory"
	end
# 136 "data/maps/Route104_North/scripts.pory"

# 137 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterHaleyAfterBattle::
# 138 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 139 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterHaleyAfterBattle
# 141 "data/maps/Route104_North/scripts.pory"
	release
# 142 "data/maps/Route104_North/scripts.pory"
	end
# 143 "data/maps/Route104_North/scripts.pory"

# 144 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterHaleyAfterBattle::
# 145 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 146 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_HALEY_1
# 147 "data/maps/Route104_North/scripts.pory"
	release
# 148 "data/maps/Route104_North/scripts.pory"
	end
# 149 "data/maps/Route104_North/scripts.pory"

# 150 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterHaley::
# 151 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterHaley
# 152 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 153 "data/maps/Route104_North/scripts.pory"
	release
# 154 "data/maps/Route104_North/scripts.pory"
	end
# 155 "data/maps/Route104_North/scripts.pory"

# 156 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterHaley::
# 157 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 158 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_HALEY_1
# 159 "data/maps/Route104_North/scripts.pory"
	release
# 160 "data/maps/Route104_North/scripts.pory"
	end
# 161 "data/maps/Route104_North/scripts.pory"

# 162 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchHaley::
# 163 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 164 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 165 "data/maps/Route104_North/scripts.pory"
	end
# 166 "data/maps/Route104_North/scripts.pory"

# 167 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Winston::
# 168 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_North_EventScript_TryRegisterWinstonAfterBattle
# 169 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 170 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchWinston
# 171 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 172 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 173 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterWinston
# 174 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 175 "data/maps/Route104_North/scripts.pory"
	release
# 176 "data/maps/Route104_North/scripts.pory"
	end
# 177 "data/maps/Route104_North/scripts.pory"

# 178 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterWinstonAfterBattle::
# 179 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 180 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 181 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterWinstonAfterBattle
# 182 "data/maps/Route104_North/scripts.pory"
	release
# 183 "data/maps/Route104_North/scripts.pory"
	end
# 184 "data/maps/Route104_North/scripts.pory"

# 185 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterWinstonAfterBattle::
# 186 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 187 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_WINSTON_1
# 188 "data/maps/Route104_North/scripts.pory"
	release
# 189 "data/maps/Route104_North/scripts.pory"
	end
# 190 "data/maps/Route104_North/scripts.pory"

# 191 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterWinston::
# 192 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterWinston
# 193 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 194 "data/maps/Route104_North/scripts.pory"
	release
# 195 "data/maps/Route104_North/scripts.pory"
	end
# 196 "data/maps/Route104_North/scripts.pory"

# 197 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterWinston::
# 198 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 199 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_WINSTON_1
# 200 "data/maps/Route104_North/scripts.pory"
	release
# 201 "data/maps/Route104_North/scripts.pory"
	end
# 202 "data/maps/Route104_North/scripts.pory"

# 203 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchWinston::
# 204 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 205 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 206 "data/maps/Route104_North/scripts.pory"
	end
# 207 "data/maps/Route104_North/scripts.pory"

# 208 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Cindy::
# 209 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_North_EventScript_TryRegisterCindyAfterBattle
# 210 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 211 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_North_EventScript_RematchCindy
# 212 "data/maps/Route104_North/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 213 "data/maps/Route104_North/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 214 "data/maps/Route104_North/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_North_EventScript_TryRegisterCindy
# 215 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 216 "data/maps/Route104_North/scripts.pory"
	release
# 217 "data/maps/Route104_North/scripts.pory"
	end
# 218 "data/maps/Route104_North/scripts.pory"

# 219 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterCindyAfterBattle::
# 220 "data/maps/Route104_North/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 221 "data/maps/Route104_North/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterCindyAfterBattle
# 223 "data/maps/Route104_North/scripts.pory"
	release
# 224 "data/maps/Route104_North/scripts.pory"
	end
# 225 "data/maps/Route104_North/scripts.pory"

# 226 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterCindyAfterBattle::
# 227 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 228 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_CINDY_1
# 229 "data/maps/Route104_North/scripts.pory"
	release
# 230 "data/maps/Route104_North/scripts.pory"
	end
# 231 "data/maps/Route104_North/scripts.pory"

# 232 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_TryRegisterCindy::
# 233 "data/maps/Route104_North/scripts.pory"
	//goto_if_set FLAG_HAS_MATCH_CALL, Route104_North_EventScript_RegisterCindy
# 234 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 235 "data/maps/Route104_North/scripts.pory"
	release
# 236 "data/maps/Route104_North/scripts.pory"
	end
# 237 "data/maps/Route104_North/scripts.pory"

# 238 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RegisterCindy::
# 239 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 240 "data/maps/Route104_North/scripts.pory"
	//register_matchcall TRAINER_CINDY_1
# 241 "data/maps/Route104_North/scripts.pory"
	release
# 242 "data/maps/Route104_North/scripts.pory"
	end
# 243 "data/maps/Route104_North/scripts.pory"

# 244 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_RematchCindy::
# 245 "data/maps/Route104_North/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 246 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 247 "data/maps/Route104_North/scripts.pory"
	end
# 248 "data/maps/Route104_North/scripts.pory"

# 249 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Gina::
# 250 "data/maps/Route104_North/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 251 "data/maps/Route104_North/scripts.pory"
	special GetPlayerBigGuyGirlString
# 252 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 253 "data/maps/Route104_North/scripts.pory"
	release
# 254 "data/maps/Route104_North/scripts.pory"
	end
# 255 "data/maps/Route104_North/scripts.pory"

# 256 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Mia::
# 257 "data/maps/Route104_North/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 258 "data/maps/Route104_North/scripts.pory"
	special GetPlayerBigGuyGirlString
# 259 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 260 "data/maps/Route104_North/scripts.pory"
	release
# 261 "data/maps/Route104_North/scripts.pory"
	end
# 262 "data/maps/Route104_North/scripts.pory"

# 263 "data/maps/Route104_North/scripts.pory"
Route104_North_EventScript_Darian::
# 264 "data/maps/Route104_North/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 265 "data/maps/Route104_North/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 266 "data/maps/Route104_North/scripts.pory"
	end

Route104_North_EventScript_SetBrokenBridge::
# 270 "data/maps/Route104_North/scripts.pory"
	goto_if_unset FLAG_VISITED_RUSTBORO_CITY, Route104_North_EventScript_SetBrokenBridge_2
Route104_North_EventScript_SetBrokenBridge_1:
# 278 "data/maps/Route104_North/scripts.pory"
	special DrawWholeMapView
# 279 "data/maps/Route104_North/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

Route104_North_EventScript_SetBrokenBridge_2:
# 271 "data/maps/Route104_North/scripts.pory"
	setmetatile 28, 15, 0x20D, TRUE
# 272 "data/maps/Route104_North/scripts.pory"
	setmetatile 28, 16, 0x20E, TRUE
# 273 "data/maps/Route104_North/scripts.pory"
	setmetatile 28, 17, 0x20F, TRUE
# 274 "data/maps/Route104_North/scripts.pory"
	setmetatile 27, 15, 0x20E, TRUE
# 275 "data/maps/Route104_North/scripts.pory"
	setmetatile 27, 16, 0x20F, TRUE
# 276 "data/maps/Route104_North/scripts.pory"
	setmetatile 27, 17, 0x208, TRUE
	goto Route104_North_EventScript_SetBrokenBridge_1

