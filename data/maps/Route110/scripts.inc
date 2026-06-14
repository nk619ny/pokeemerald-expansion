# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 3 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 4 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 5 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 6 "data/maps/Route110/scripts.pory"
	.byte 0
# 7 "data/maps/Route110/scripts.pory"

# 8 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 9 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 10 "data/maps/Route110/scripts.pory"
	end
# 11 "data/maps/Route110/scripts.pory"

# 12 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 13 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 15 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 16 "data/maps/Route110/scripts.pory"
	end
# 17 "data/maps/Route110/scripts.pory"

# 18 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 19 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 20 "data/maps/Route110/scripts.pory"
	return
# 21 "data/maps/Route110/scripts.pory"

# 22 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 23 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 24 "data/maps/Route110/scripts.pory"
	.2byte 0
# 25 "data/maps/Route110/scripts.pory"

# 26 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 27 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 28 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 29 "data/maps/Route110/scripts.pory"
	return
# 30 "data/maps/Route110/scripts.pory"

# 31 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 32 "data/maps/Route110/scripts.pory"
	lock
# 33 "data/maps/Route110/scripts.pory"
	faceplayer
# 34 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 35 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 36 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route110/scripts.pory"
	release
# 38 "data/maps/Route110/scripts.pory"
	end
# 39 "data/maps/Route110/scripts.pory"

# 40 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 41 "data/maps/Route110/scripts.pory"
	lock
# 42 "data/maps/Route110/scripts.pory"
	faceplayer
# 43 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 44 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 45 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route110/scripts.pory"
	release
# 47 "data/maps/Route110/scripts.pory"
	end
# 48 "data/maps/Route110/scripts.pory"

# 49 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 50 "data/maps/Route110/scripts.pory"
	lock
# 51 "data/maps/Route110/scripts.pory"
	faceplayer
# 52 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 53 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 54 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route110/scripts.pory"
	release
# 56 "data/maps/Route110/scripts.pory"
	end
# 57 "data/maps/Route110/scripts.pory"

# 58 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 59 "data/maps/Route110/scripts.pory"
	lock
# 60 "data/maps/Route110/scripts.pory"
	faceplayer
# 61 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 62 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 63 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route110/scripts.pory"
	release
# 65 "data/maps/Route110/scripts.pory"
	end
# 66 "data/maps/Route110/scripts.pory"

# 67 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 68 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 69 "data/maps/Route110/scripts.pory"
	end
# 70 "data/maps/Route110/scripts.pory"

# 71 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 72 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 73 "data/maps/Route110/scripts.pory"
	end
# 74 "data/maps/Route110/scripts.pory"

# 75 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 76 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 77 "data/maps/Route110/scripts.pory"
	end
# 78 "data/maps/Route110/scripts.pory"

# 79 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 80 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 81 "data/maps/Route110/scripts.pory"
	end
# 82 "data/maps/Route110/scripts.pory"

# 83 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 84 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 85 "data/maps/Route110/scripts.pory"
	end
# 86 "data/maps/Route110/scripts.pory"

# 87 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 88 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 89 "data/maps/Route110/scripts.pory"
	end
# 90 "data/maps/Route110/scripts.pory"

# 91 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 93 "data/maps/Route110/scripts.pory"
	end
# 94 "data/maps/Route110/scripts.pory"

# 95 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 96 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 97 "data/maps/Route110/scripts.pory"
	end
# 98 "data/maps/Route110/scripts.pory"

# 99 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 101 "data/maps/Route110/scripts.pory"
	end
# 102 "data/maps/Route110/scripts.pory"

# 103 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 104 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 105 "data/maps/Route110/scripts.pory"
	end
# 106 "data/maps/Route110/scripts.pory"

# 107 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 109 "data/maps/Route110/scripts.pory"
	end
# 110 "data/maps/Route110/scripts.pory"

# 111 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 112 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 113 "data/maps/Route110/scripts.pory"
	end
# 114 "data/maps/Route110/scripts.pory"

# 115 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 116 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 117 "data/maps/Route110/scripts.pory"
	end
# 118 "data/maps/Route110/scripts.pory"

# 119 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 120 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 121 "data/maps/Route110/scripts.pory"
	end
# 122 "data/maps/Route110/scripts.pory"

# 123 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 124 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 125 "data/maps/Route110/scripts.pory"
	end
# 126 "data/maps/Route110/scripts.pory"

# 127 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 128 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 129 "data/maps/Route110/scripts.pory"
	end
# 130 "data/maps/Route110/scripts.pory"

# 131 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 132 "data/maps/Route110/scripts.pory"
	lockall
# 133 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 134 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 135 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 136 "data/maps/Route110/scripts.pory"
	releaseall
# 137 "data/maps/Route110/scripts.pory"
	end
# 138 "data/maps/Route110/scripts.pory"

# 139 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 140 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 141 "data/maps/Route110/scripts.pory"
	releaseall
# 142 "data/maps/Route110/scripts.pory"
	end
# 143 "data/maps/Route110/scripts.pory"

# 144 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 145 "data/maps/Route110/scripts.pory"
	lock
# 146 "data/maps/Route110/scripts.pory"
	faceplayer
# 147 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 148 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 149 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 150 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 151 "data/maps/Route110/scripts.pory"
	release
# 152 "data/maps/Route110/scripts.pory"
	end
# 153 "data/maps/Route110/scripts.pory"

# 154 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 155 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 156 "data/maps/Route110/scripts.pory"
	release
# 157 "data/maps/Route110/scripts.pory"
	end
# 158 "data/maps/Route110/scripts.pory"

# 159 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 161 "data/maps/Route110/scripts.pory"
	release
# 162 "data/maps/Route110/scripts.pory"
	end
# 163 "data/maps/Route110/scripts.pory"

# 164 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 165 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 166 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route110/scripts.pory"
	end
# 168 "data/maps/Route110/scripts.pory"

# 169 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 170 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 171 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route110/scripts.pory"
	end
# 173 "data/maps/Route110/scripts.pory"

# 174 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 175 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated
# 176 "data/maps/Route110/scripts.pory"
	//specialvar VAR_RESULT, ShouldTryRematchBattle
# 177 "data/maps/Route110/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 178 "data/maps/Route110/scripts.pory"
	//msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 179 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_SpindaCollector
# 180 "data/maps/Route110/scripts.pory"
	release
# 181 "data/maps/Route110/scripts.pory"
	end
# 182 "data/maps/Route110/scripts.pory"

# 183 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 184 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 185 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 187 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_EDWIN_1
# 188 "data/maps/Route110/scripts.pory"
	release
# 189 "data/maps/Route110/scripts.pory"
	end
# 190 "data/maps/Route110/scripts.pory"

# 191 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 192 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 193 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route110/scripts.pory"
	end
# 195 "data/maps/Route110/scripts.pory"

# 196 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 197 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated, Route110_EventScript_TryDaleGiftAfterBattle
# 198 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route110/scripts.pory"
	end
# 200 "data/maps/Route110/scripts.pory"

# 201 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 202 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 203 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route110/scripts.pory"
	end
# 205 "data/maps/Route110/scripts.pory"

# 206 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 207 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 208 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route110/scripts.pory"
	end
# 210 "data/maps/Route110/scripts.pory"

# 211 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 212 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 213 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 214 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 215 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 216 "data/maps/Route110/scripts.pory"
	release
# 217 "data/maps/Route110/scripts.pory"
	end
# 218 "data/maps/Route110/scripts.pory"

# 219 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 220 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 221 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 223 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_BENJAMIN_1
# 224 "data/maps/Route110/scripts.pory"
	release
# 225 "data/maps/Route110/scripts.pory"
	end
# 226 "data/maps/Route110/scripts.pory"

# 227 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 228 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 229 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route110/scripts.pory"
	end
# 231 "data/maps/Route110/scripts.pory"

# 232 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 233 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 234 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route110/scripts.pory"
	end
# 236 "data/maps/Route110/scripts.pory"

# 237 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 238 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 239 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 240 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 241 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 242 "data/maps/Route110/scripts.pory"
	release
# 243 "data/maps/Route110/scripts.pory"
	end
# 244 "data/maps/Route110/scripts.pory"

# 245 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 246 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 247 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 249 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_ABIGAIL_1
# 250 "data/maps/Route110/scripts.pory"
	release
# 251 "data/maps/Route110/scripts.pory"
	end
# 252 "data/maps/Route110/scripts.pory"

# 253 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 254 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 255 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route110/scripts.pory"
	end
# 257 "data/maps/Route110/scripts.pory"

# 258 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 259 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 260 "data/maps/Route110/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/Route110/scripts.pory"
	release
# 262 "data/maps/Route110/scripts.pory"
	end
# 263 "data/maps/Route110/scripts.pory"

# 264 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 265 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 266 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 268 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_ISABEL_1
# 269 "data/maps/Route110/scripts.pory"
	release
# 270 "data/maps/Route110/scripts.pory"
	end
# 271 "data/maps/Route110/scripts.pory"

# 272 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 273 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 274 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/Route110/scripts.pory"
	end
# 276 "data/maps/Route110/scripts.pory"

# 277 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 278 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 279 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route110/scripts.pory"
	end
# 281 "data/maps/Route110/scripts.pory"

# 282 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 283 "data/maps/Route110/scripts.pory"
	end
# 284 "data/maps/Route110/scripts.pory"

# 285 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 286 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 287 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route110/scripts.pory"
	end
# 289 "data/maps/Route110/scripts.pory"

# 290 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 291 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 292 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route110/scripts.pory"
	end
# 294 "data/maps/Route110/scripts.pory"

# 295 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 296 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 297 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route110/scripts.pory"
	end
# 299 "data/maps/Route110/scripts.pory"

# 300 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 301 "data/maps/Route110/scripts.pory"
	lockall
# 302 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 303 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 304 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 305 "data/maps/Route110/scripts.pory"
	releaseall
# 306 "data/maps/Route110/scripts.pory"
	end
# 307 "data/maps/Route110/scripts.pory"

# 308 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 309 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 310 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 311 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 312 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 313 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 314 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 315 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 316 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 317 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 318 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 319 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 320 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 321 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 322 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 323 "data/maps/Route110/scripts.pory"
	end
# 324 "data/maps/Route110/scripts.pory"

# 325 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 326 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 327 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 328 "data/maps/Route110/scripts.pory"
	end
# 329 "data/maps/Route110/scripts.pory"

# 330 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 331 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 332 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 333 "data/maps/Route110/scripts.pory"
	end
# 334 "data/maps/Route110/scripts.pory"

# 335 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 336 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 337 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 338 "data/maps/Route110/scripts.pory"
	end
# 339 "data/maps/Route110/scripts.pory"

# 340 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 341 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 342 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 343 "data/maps/Route110/scripts.pory"
	end
# 344 "data/maps/Route110/scripts.pory"

# 345 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 346 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 347 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 348 "data/maps/Route110/scripts.pory"
	end
# 349 "data/maps/Route110/scripts.pory"

# 350 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 351 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 352 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 353 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 354 "data/maps/Route110/scripts.pory"
	return
# 355 "data/maps/Route110/scripts.pory"

# 356 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 357 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 358 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 359 "data/maps/Route110/scripts.pory"
	end
# 360 "data/maps/Route110/scripts.pory"

# 361 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 362 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 363 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 364 "data/maps/Route110/scripts.pory"
	end
# 365 "data/maps/Route110/scripts.pory"

# 366 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 367 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 368 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 369 "data/maps/Route110/scripts.pory"
	end
# 370 "data/maps/Route110/scripts.pory"

# 371 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 372 "data/maps/Route110/scripts.pory"
	lockall
# 373 "data/maps/Route110/scripts.pory"
	checkplayergender
# 374 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 375 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 376 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 377 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 378 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 379 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 381 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 382 "data/maps/Route110/scripts.pory"
	delay 30
# 383 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 384 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 385 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 386 "data/maps/Route110/scripts.pory"
	checkplayergender
# 387 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 388 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 389 "data/maps/Route110/scripts.pory"
	releaseall
# 390 "data/maps/Route110/scripts.pory"
	end
# 391 "data/maps/Route110/scripts.pory"

# 392 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 393 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 394 "data/maps/Route110/scripts.pory"
	return
# 395 "data/maps/Route110/scripts.pory"

# 396 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 397 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 398 "data/maps/Route110/scripts.pory"
	return
# 399 "data/maps/Route110/scripts.pory"

# 400 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 401 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 402 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 403 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 404 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 405 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 406 "data/maps/Route110/scripts.pory"
	end
# 407 "data/maps/Route110/scripts.pory"

# 408 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 409 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 410 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 411 "data/maps/Route110/scripts.pory"
	end
# 412 "data/maps/Route110/scripts.pory"

# 413 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 414 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 415 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 416 "data/maps/Route110/scripts.pory"
	end
# 417 "data/maps/Route110/scripts.pory"

# 418 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 419 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 420 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 421 "data/maps/Route110/scripts.pory"
	end
# 422 "data/maps/Route110/scripts.pory"

# 423 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 424 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 425 "data/maps/Route110/scripts.pory"
	//call Route110_EventScript_GiveItemfinder
# 426 "data/maps/Route110/scripts.pory"
	//msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 427 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 428 "data/maps/Route110/scripts.pory"
	closemessage
# 429 "data/maps/Route110/scripts.pory"
	delay 30
# 430 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 431 "data/maps/Route110/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 432 "data/maps/Route110/scripts.pory"
	waitfanfare
# 433 "data/maps/Route110/scripts.pory"
	closemessage
# 434 "data/maps/Route110/scripts.pory"
	delay 30
# 435 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 436 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 437 "data/maps/Route110/scripts.pory"
	end
# 438 "data/maps/Route110/scripts.pory"

# 439 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 440 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 441 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 442 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 443 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 444 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 445 "data/maps/Route110/scripts.pory"
	end
# 446 "data/maps/Route110/scripts.pory"

# 447 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 448 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 449 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 450 "data/maps/Route110/scripts.pory"
	end
# 451 "data/maps/Route110/scripts.pory"

# 452 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 453 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 454 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 455 "data/maps/Route110/scripts.pory"
	end
# 456 "data/maps/Route110/scripts.pory"

# 457 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 458 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 459 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 460 "data/maps/Route110/scripts.pory"
	end
# 461 "data/maps/Route110/scripts.pory"

# 462 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 463 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 464 "data/maps/Route110/scripts.pory"
	//call Route110_EventScript_GiveItemfinder
# 465 "data/maps/Route110/scripts.pory"
	//msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 466 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 467 "data/maps/Route110/scripts.pory"
	closemessage
# 468 "data/maps/Route110/scripts.pory"
	delay 30
# 469 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 470 "data/maps/Route110/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 471 "data/maps/Route110/scripts.pory"
	waitfanfare
# 472 "data/maps/Route110/scripts.pory"
	closemessage
# 473 "data/maps/Route110/scripts.pory"
	delay 30
# 474 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 475 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 476 "data/maps/Route110/scripts.pory"
	end
# 477 "data/maps/Route110/scripts.pory"

# 478 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 479 "data/maps/Route110/scripts.pory"
	//giveitem ITEM_DOWSING_MACHINE
# 480 "data/maps/Route110/scripts.pory"
	return
# 481 "data/maps/Route110/scripts.pory"

# 482 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 483 "data/maps/Route110/scripts.pory"
	closemessage
# 484 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 485 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 486 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 487 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 488 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 489 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 490 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 491 "data/maps/Route110/scripts.pory"
	delay 45
# 492 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 493 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 494 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 495 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 496 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 497 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 498 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 499 "data/maps/Route110/scripts.pory"
	setvar VAR_LEVEL_CAP, 31
# 500 "data/maps/Route110/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 501 "data/maps/Route110/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 502 "data/maps/Route110/scripts.pory"
	releaseall
# 503 "data/maps/Route110/scripts.pory"
	end
# 504 "data/maps/Route110/scripts.pory"

# 505 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 506 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer1
# 507 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 508 "data/maps/Route110/scripts.pory"
	return
# 509 "data/maps/Route110/scripts.pory"

# 510 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 511 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer2
# 512 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 513 "data/maps/Route110/scripts.pory"
	return
# 514 "data/maps/Route110/scripts.pory"

# 515 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 516 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer3
# 517 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 518 "data/maps/Route110/scripts.pory"
	return
# 519 "data/maps/Route110/scripts.pory"

# 520 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 521 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 522 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 523 "data/maps/Route110/scripts.pory"
	return
# 524 "data/maps/Route110/scripts.pory"

# 525 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 526 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 527 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 528 "data/maps/Route110/scripts.pory"
	return
# 529 "data/maps/Route110/scripts.pory"

# 530 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 531 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 532 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 533 "data/maps/Route110/scripts.pory"
	return
# 534 "data/maps/Route110/scripts.pory"

# 535 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 536 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
# 537 "data/maps/Route110/scripts.pory"
	return
# 538 "data/maps/Route110/scripts.pory"

# 539 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 540 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
# 541 "data/maps/Route110/scripts.pory"
	return
# 542 "data/maps/Route110/scripts.pory"

# 543 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 544 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
# 545 "data/maps/Route110/scripts.pory"
	return
# 546 "data/maps/Route110/scripts.pory"

# 547 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 548 "data/maps/Route110/scripts.pory"
	walk_down
# 549 "data/maps/Route110/scripts.pory"
	walk_left
# 550 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 551 "data/maps/Route110/scripts.pory"
	step_end
# 552 "data/maps/Route110/scripts.pory"

# 553 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 554 "data/maps/Route110/scripts.pory"
	walk_down
# 555 "data/maps/Route110/scripts.pory"
	step_end
# 556 "data/maps/Route110/scripts.pory"

# 557 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 558 "data/maps/Route110/scripts.pory"
	walk_down
# 559 "data/maps/Route110/scripts.pory"
	walk_right
# 560 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 561 "data/maps/Route110/scripts.pory"
	step_end
# 562 "data/maps/Route110/scripts.pory"

# 563 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 564 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 565 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 566 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 567 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 568 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 569 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 570 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 571 "data/maps/Route110/scripts.pory"
	step_end
# 572 "data/maps/Route110/scripts.pory"

# 573 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 574 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 575 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 576 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 577 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 578 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 579 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 581 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 582 "data/maps/Route110/scripts.pory"
	step_end
# 583 "data/maps/Route110/scripts.pory"

# 584 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 585 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 586 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 587 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 588 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 589 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 590 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 591 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 592 "data/maps/Route110/scripts.pory"
	step_end
# 593 "data/maps/Route110/scripts.pory"

# 594 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 595 "data/maps/Route110/scripts.pory"
	lockall
# 596 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 597 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 598 "data/maps/Route110/scripts.pory"

# 599 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 600 "data/maps/Route110/scripts.pory"
	lockall
# 601 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 602 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 603 "data/maps/Route110/scripts.pory"

# 604 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 605 "data/maps/Route110/scripts.pory"
	lockall
# 606 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 607 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 608 "data/maps/Route110/scripts.pory"

# 609 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 610 "data/maps/Route110/scripts.pory"
	lockall
# 611 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 612 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 613 "data/maps/Route110/scripts.pory"

# 614 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 615 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 616 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchEntrance
# 617 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 618 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 619 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 620 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 621 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 622 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 623 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 624 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 625 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 626 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 627 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 628 "data/maps/Route110/scripts.pory"
	closemessage
# 629 "data/maps/Route110/scripts.pory"
	delay 20
# 630 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 631 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 632 "data/maps/Route110/scripts.pory"
	delay 10
# 633 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 634 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route110/scripts.pory"
	delay 20
# 636 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 637 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 638 "data/maps/Route110/scripts.pory"
	delay 30
# 639 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 640 "data/maps/Route110/scripts.pory"
	closemessage
# 641 "data/maps/Route110/scripts.pory"
	delay 30
# 642 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 643 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 644 "data/maps/Route110/scripts.pory"
	waitfanfare
# 645 "data/maps/Route110/scripts.pory"
	closemessage
# 646 "data/maps/Route110/scripts.pory"
	delay 30
# 647 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 648 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 649 "data/maps/Route110/scripts.pory"
	closemessage
# 650 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 651 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 652 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 653 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 654 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 655 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 656 "data/maps/Route110/scripts.pory"
	releaseall
# 657 "data/maps/Route110/scripts.pory"
	end
# 658 "data/maps/Route110/scripts.pory"

# 659 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 660 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 661 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 662 "data/maps/Route110/scripts.pory"
	return
# 663 "data/maps/Route110/scripts.pory"

# 664 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 665 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 666 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 667 "data/maps/Route110/scripts.pory"
	return
# 668 "data/maps/Route110/scripts.pory"

# 669 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 670 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer3
# 671 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 672 "data/maps/Route110/scripts.pory"
	return
# 673 "data/maps/Route110/scripts.pory"

# 674 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 675 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 676 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 677 "data/maps/Route110/scripts.pory"
	return
# 678 "data/maps/Route110/scripts.pory"

# 679 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 680 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 681 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 682 "data/maps/Route110/scripts.pory"
	return
# 683 "data/maps/Route110/scripts.pory"

# 684 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 685 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit2
# 686 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 687 "data/maps/Route110/scripts.pory"
	return
# 688 "data/maps/Route110/scripts.pory"

# 689 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 690 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit3
# 691 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 692 "data/maps/Route110/scripts.pory"
	return
# 693 "data/maps/Route110/scripts.pory"

# 694 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 695 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit4
# 696 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 697 "data/maps/Route110/scripts.pory"
	return
# 698 "data/maps/Route110/scripts.pory"

# 699 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 700 "data/maps/Route110/scripts.pory"
	walk_down
# 701 "data/maps/Route110/scripts.pory"
	walk_down
# 702 "data/maps/Route110/scripts.pory"
	walk_down
# 703 "data/maps/Route110/scripts.pory"
	step_end
# 704 "data/maps/Route110/scripts.pory"

# 705 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 706 "data/maps/Route110/scripts.pory"
	walk_down
# 707 "data/maps/Route110/scripts.pory"
	walk_left
# 708 "data/maps/Route110/scripts.pory"
	walk_left
# 709 "data/maps/Route110/scripts.pory"
	walk_down
# 710 "data/maps/Route110/scripts.pory"
	step_end
# 711 "data/maps/Route110/scripts.pory"

# 712 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 713 "data/maps/Route110/scripts.pory"
	walk_down
# 714 "data/maps/Route110/scripts.pory"
	walk_left
# 715 "data/maps/Route110/scripts.pory"
	walk_down
# 716 "data/maps/Route110/scripts.pory"
	step_end
# 717 "data/maps/Route110/scripts.pory"

# 718 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 719 "data/maps/Route110/scripts.pory"
	walk_down
# 720 "data/maps/Route110/scripts.pory"
	walk_down
# 721 "data/maps/Route110/scripts.pory"
	step_end
# 722 "data/maps/Route110/scripts.pory"

# 723 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 724 "data/maps/Route110/scripts.pory"
	walk_down
# 725 "data/maps/Route110/scripts.pory"
	walk_right
# 726 "data/maps/Route110/scripts.pory"
	walk_down
# 727 "data/maps/Route110/scripts.pory"
	step_end
# 728 "data/maps/Route110/scripts.pory"

# 729 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 730 "data/maps/Route110/scripts.pory"
	walk_up
# 731 "data/maps/Route110/scripts.pory"
	walk_up
# 732 "data/maps/Route110/scripts.pory"
	walk_right
# 733 "data/maps/Route110/scripts.pory"
	walk_up
# 734 "data/maps/Route110/scripts.pory"
	walk_up
# 735 "data/maps/Route110/scripts.pory"
	walk_up
# 736 "data/maps/Route110/scripts.pory"
	step_end
# 737 "data/maps/Route110/scripts.pory"

# 738 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 739 "data/maps/Route110/scripts.pory"
	walk_up
# 740 "data/maps/Route110/scripts.pory"
	walk_up
# 741 "data/maps/Route110/scripts.pory"
	walk_up
# 742 "data/maps/Route110/scripts.pory"
	walk_up
# 743 "data/maps/Route110/scripts.pory"
	walk_up
# 744 "data/maps/Route110/scripts.pory"
	step_end
# 745 "data/maps/Route110/scripts.pory"

# 746 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 747 "data/maps/Route110/scripts.pory"
	walk_up
# 748 "data/maps/Route110/scripts.pory"
	walk_up
# 749 "data/maps/Route110/scripts.pory"
	walk_up
# 750 "data/maps/Route110/scripts.pory"
	walk_up
# 751 "data/maps/Route110/scripts.pory"
	walk_up
# 752 "data/maps/Route110/scripts.pory"
	step_end
# 753 "data/maps/Route110/scripts.pory"

# 754 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 755 "data/maps/Route110/scripts.pory"
	walk_up
# 756 "data/maps/Route110/scripts.pory"
	walk_up
# 757 "data/maps/Route110/scripts.pory"
	walk_up
# 758 "data/maps/Route110/scripts.pory"
	walk_up
# 759 "data/maps/Route110/scripts.pory"
	walk_up
# 760 "data/maps/Route110/scripts.pory"
	step_end
# 761 "data/maps/Route110/scripts.pory"

# 762 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 763 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 764 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 765 "data/maps/Route110/scripts.pory"

# 766 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 767 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 768 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 769 "data/maps/Route110/scripts.pory"

# 770 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 771 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 772 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 773 "data/maps/Route110/scripts.pory"

# 774 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 775 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 776 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 777 "data/maps/Route110/scripts.pory"

# 778 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 779 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 780 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 781 "data/maps/Route110/scripts.pory"
	.string "Pokémon, my Pokémon grew stronger.\p"
# 782 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 783 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 784 "data/maps/Route110/scripts.pory"

# 785 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 786 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 787 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 788 "data/maps/Route110/scripts.pory"

# 789 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 790 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 791 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?$"
# 792 "data/maps/Route110/scripts.pory"

# 793 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 794 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 795 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 796 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 797 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 798 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 799 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 800 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 801 "data/maps/Route110/scripts.pory"

# 802 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 803 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 804 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 805 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 806 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your Pokémon?\n"
# 807 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 808 "data/maps/Route110/scripts.pory"

# 809 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 810 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 811 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 812 "data/maps/Route110/scripts.pory"

# 813 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 814 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 815 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 816 "data/maps/Route110/scripts.pory"
	.string "Good enough!$"
# 817 "data/maps/Route110/scripts.pory"

# 818 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 819 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 820 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 821 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 822 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 823 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 824 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 825 "data/maps/Route110/scripts.pory"
	.string "Pokémon.$"
# 826 "data/maps/Route110/scripts.pory"

# 827 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 828 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 829 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 830 "data/maps/Route110/scripts.pory"

# 831 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 832 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 833 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 834 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 835 "data/maps/Route110/scripts.pory"

# 836 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 837 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 838 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 839 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 840 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 841 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 842 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 843 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 844 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 845 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 846 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 847 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 848 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 849 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 850 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 851 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 852 "data/maps/Route110/scripts.pory"

# 853 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 854 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 855 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 856 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 857 "data/maps/Route110/scripts.pory"

# 858 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 859 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 860 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 861 "data/maps/Route110/scripts.pory"

# 862 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 863 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 864 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 865 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 866 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 867 "data/maps/Route110/scripts.pory"

# 868 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 869 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 870 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 871 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 872 "data/maps/Route110/scripts.pory"
	.string "and look for Pokémon?$"
# 873 "data/maps/Route110/scripts.pory"

# 874 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 875 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 876 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 877 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 878 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 879 "data/maps/Route110/scripts.pory"

# 880 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 881 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 882 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 883 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 884 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 885 "data/maps/Route110/scripts.pory"

# 886 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 887 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 888 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 889 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 890 "data/maps/Route110/scripts.pory"

# 891 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 892 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 893 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 894 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 895 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 896 "data/maps/Route110/scripts.pory"

# 897 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 898 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 899 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 900 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 901 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 902 "data/maps/Route110/scripts.pory"

# 903 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 904 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 905 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 906 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 907 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 908 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 909 "data/maps/Route110/scripts.pory"

# 910 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 911 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 912 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 913 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 914 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 915 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 916 "data/maps/Route110/scripts.pory"

# 917 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 918 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 919 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 920 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 921 "data/maps/Route110/scripts.pory"

# 922 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 923 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 924 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 925 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 926 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 927 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 928 "data/maps/Route110/scripts.pory"

# 929 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 930 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 931 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 932 "data/maps/Route110/scripts.pory"

# 933 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 934 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 935 "data/maps/Route110/scripts.pory"

# 936 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 937 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 938 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 939 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 940 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 941 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 942 "data/maps/Route110/scripts.pory"

# 943 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 944 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 945 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 946 "data/maps/Route110/scripts.pory"

# 947 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 948 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 949 "data/maps/Route110/scripts.pory"

# 950 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 951 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 952 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 953 "data/maps/Route110/scripts.pory"

# 954 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 955 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 956 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 957 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 958 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 959 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 960 "data/maps/Route110/scripts.pory"

# 961 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 962 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 963 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 964 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 965 "data/maps/Route110/scripts.pory"

# 966 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 967 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 968 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 969 "data/maps/Route110/scripts.pory"

# 970 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 971 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 972 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 973 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 974 "data/maps/Route110/scripts.pory"

# 975 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 976 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 977 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 978 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 979 "data/maps/Route110/scripts.pory"

# 980 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 981 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 982 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 983 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 984 "data/maps/Route110/scripts.pory"

# 985 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 986 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 987 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 988 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 989 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 990 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 991 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 992 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 993 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 994 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 995 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 996 "data/maps/Route110/scripts.pory"

# 997 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 998 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 999 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 1000 "data/maps/Route110/scripts.pory"

# 1001 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1002 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1003 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1004 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1005 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1006 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"

Route110_EventScript_TryDaleGiftAfterBattle::
# 1019 "data/maps/Route110/scripts.pory"
	lock
# 1020 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route110_EventScript_TryDaleGiftAfterBattle_1
# 1024 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_TryDaleGiftAfterBattle_Text_1, MSGBOX_NPC
# 1025 "data/maps/Route110/scripts.pory"
	waitmessage
# 1026 "data/maps/Route110/scripts.pory"
	giveitem ITEM_HP_UP
# 1027 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 1028 "data/maps/Route110/scripts.pory"
	waitfanfare
# 1029 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_TryDaleGiftAfterBattle_1:
# 1021 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_TryDaleGiftAfterBattle_Text_0, MSGBOX_NPC
	return


Route109_EventScript_FlameChargeCyclist::
# 1035 "data/maps/Route110/scripts.pory"
	lock
# 1036 "data/maps/Route110/scripts.pory"
	faceplayer
# 1037 "data/maps/Route110/scripts.pory"
	msgbox Route109_EventScript_FlameChargeCyclist_Text_0, MSGBOX_DEFAULT
# 1038 "data/maps/Route110/scripts.pory"
	checkitem ITEM_TM_FLAME_CHARGE
# 1039 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route109_EventScript_FlameChargeCyclist_2
Route109_EventScript_FlameChargeCyclist_1:
# 1045 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route109_EventScript_FlameChargeCyclist_2:
# 1040 "data/maps/Route110/scripts.pory"
	msgbox Route109_EventScript_FlameChargeCyclist_Text_1, MSGBOX_DEFAULT
# 1041 "data/maps/Route110/scripts.pory"
	closemessage
# 1042 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_FLAME_CHARGE
# 1043 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route109_EventScript_FlameChargeCyclist_1


Route109_EventScript_FlingCyclist::
# 1050 "data/maps/Route110/scripts.pory"
	lock
# 1051 "data/maps/Route110/scripts.pory"
	faceplayer
# 1052 "data/maps/Route110/scripts.pory"
	checkitem ITEM_TM_FLING
# 1053 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route109_EventScript_FlingCyclist_2
Route109_EventScript_FlingCyclist_1:
# 1059 "data/maps/Route110/scripts.pory"
	msgbox Route109_EventScript_FlingCyclist_Text_1, MSGBOX_DEFAULT
# 1060 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route109_EventScript_FlingCyclist_2:
# 1054 "data/maps/Route110/scripts.pory"
	msgbox Route109_EventScript_FlingCyclist_Text_0, MSGBOX_DEFAULT
# 1055 "data/maps/Route110/scripts.pory"
	closemessage
# 1056 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_FLING
# 1057 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route109_EventScript_FlingCyclist_1


Route110_EventScript_SpindaCollector::
# 1065 "data/maps/Route110/scripts.pory"
	lock
# 1066 "data/maps/Route110/scripts.pory"
	faceplayer
# 1067 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorGreeting, MSGBOX_YESNO
# 1068 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_EventScript_SpindaCollector_2
# 1073 "data/maps/Route110/scripts.pory"
	special ChoosePartyMon
# 1074 "data/maps/Route110/scripts.pory"
	waitstate
# 1075 "data/maps/Route110/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route110_EventScript_SpindaCollector_5
# 1080 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 1081 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1082 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1083 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, SPECIES_SPINDA
	goto_if_ne Route110_EventScript_SpindaCollector_8
# 1088 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorChoose, MSGBOX_DEFAULT
# 1089 "data/maps/Route110/scripts.pory"
	dynmultichoice 20, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route110_EventScript_SpindaCollector_Text_0, Route110_EventScript_SpindaCollector_Text_1, Route110_EventScript_SpindaCollector_Text_2
# 1090 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 1091 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_SpindaCollector_12
# 1094 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_SpindaCollector_13
# 1097 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_SpindaCollector_14
# 1101 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorChangedMind, MSGBOX_DEFAULT
# 1102 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_2:
# 1069 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorDecline, MSGBOX_DEFAULT
# 1070 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_5:
# 1076 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorNoChoice, MSGBOX_DEFAULT
# 1077 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_8:
# 1084 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorWrongSpecies, MSGBOX_DEFAULT
# 1085 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_10:
# 1105 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x8004, VAR_0x800A
# 1106 "data/maps/Route110/scripts.pory"
	special BufferMonNickname
# 1107 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorConfirmTrade, MSGBOX_YESNO
# 1108 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_EventScript_SpindaCollector_17
# 1113 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8003, 1
# 1114 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1115 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 1116 "data/maps/Route110/scripts.pory"
	special CreateInGameTradePokemon
# 1117 "data/maps/Route110/scripts.pory"
	special DoInGameTradeScene
# 1118 "data/maps/Route110/scripts.pory"
	waitstate
# 1119 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorPostTrade, MSGBOX_DEFAULT
# 1120 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_12:
# 1092 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8009, INGAME_TRADE_INKAY
# 1093 "data/maps/Route110/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_INKAY
	goto Route110_EventScript_SpindaCollector_10

Route110_EventScript_SpindaCollector_13:
# 1095 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8009, INGAME_TRADE_FOMANTIS
# 1096 "data/maps/Route110/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_FOMANTIS
	goto Route110_EventScript_SpindaCollector_10

Route110_EventScript_SpindaCollector_14:
# 1098 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8009, INGAME_TRADE_DOTTLER
# 1099 "data/maps/Route110/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DOTTLER
	goto Route110_EventScript_SpindaCollector_10

Route110_EventScript_SpindaCollector_17:
# 1109 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorChangedMind, MSGBOX_DEFAULT
# 1110 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_Theodore::
# 1158 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_THEODORE, Route110_Text_TheodoreIntro, Route110_Text_TheodoreDefeat
# 1159 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TheodorePostBattle, MSGBOX_NPC
# 1160 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_Chuck::
# 1178 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_CHUCK, Route110_Text_ChuckIntro, Route110_Text_ChuckDefeat
# 1179 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChuckPostBattle, MSGBOX_NPC
# 1180 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_TryDaleGiftAfterBattle_Text_0:
# 1021 "data/maps/Route110/scripts.pory"
	.string "A little while ago, I fished up some sort\n"
	.string "of Pokémon treat. Didn't need it,\l"
	.string "though.\p"
	.string "If you came a little sooner, I would've\n"
	.string "just given it to you, but I already\l"
	.string "threw it away.$"

Route110_EventScript_TryDaleGiftAfterBattle_Text_1:
# 1024 "data/maps/Route110/scripts.pory"
	.string "I just fished up some kind of medicine\n"
	.string "or treat or something, for Pokémon.\p"
	.string "Mine don't seem interested, so you can\n"
	.string "have it.$"

Route109_EventScript_FlameChargeCyclist_Text_0:
# 1037 "data/maps/Route110/scripts.pory"
	.string "I love racing full speed up and down\n"
	.string "cycling road, with my hair blowing in the\l"
	.string "wind!$"

Route109_EventScript_FlameChargeCyclist_Text_1:
# 1040 "data/maps/Route110/scripts.pory"
	.string "Your Pokémon can race at full speed\n"
	.string "too!$"

Route109_EventScript_FlingCyclist_Text_0:
# 1054 "data/maps/Route110/scripts.pory"
	.string "I got in trouble for littering.\p"
	.string "It's just so easy to toss your trash\n"
	.string "when cycling, but that doesn't make it\l"
	.string "okay.\p"
	.string "I really want to get rid of this TM\n"
	.string "though...\l"
	.string "I know! Why don't you take it?$"

Route109_EventScript_FlingCyclist_Text_1:
# 1059 "data/maps/Route110/scripts.pory"
	.string "Somehow it's not a problem when a\n"
	.string "Pokémon flings whatever they're\l"
	.string "carrying.$"

Route110_EventScript_SpindaCollector_Text_0:
# 1089 "data/maps/Route110/scripts.pory"
	.string "Inkay$"

Route110_EventScript_SpindaCollector_Text_1:
# 1089 "data/maps/Route110/scripts.pory"
	.string "Fomantis$"

Route110_EventScript_SpindaCollector_Text_2:
# 1089 "data/maps/Route110/scripts.pory"
	.string "Dottler$"

Route110_Text_MayHiLetsRegister::
# 1010 "data/maps/Route110/scripts.pory"
	.string "May: Let's register each other in your\n"
	.string "POKéNAV so that we can contact one\l"
	.string "another anytime!$"

Route110_Text_BrendanHiLetsRegister::
# 1014 "data/maps/Route110/scripts.pory"
	.string "Brendan: Let's register each other in\n"
	.string "your POKéNAV so that we can get in\l"
	.string "touch anytime!$"

Route110_Text_SpindaCollectorGreeting::
# 1124 "data/maps/Route110/scripts.pory"
	.string "I've collected hundreds of Spinda with\n"
	.string "unique spot patterns.\p"
	.string "But I'm always interested in finding new\n"
	.string "ones. If you find any, I'd be willing to\l"
	.string "make a trade.\p"
	.string "Do you think you have a Spinda with a\n"
	.string "spot pattern I've never seen before?$"

Route110_Text_SpindaCollectorDecline::
# 1128 "data/maps/Route110/scripts.pory"
	.string "Aw, that's too bad…\n"
	.string "If you ever catch a Spinda, come find\l"
	.string "me!$"

Route110_Text_SpindaCollectorNoChoice::
# 1132 "data/maps/Route110/scripts.pory"
	.string "Changed your mind?\n"
	.string "No worries!\p"
	.string "If you find a Spinda with a pattern\n"
	.string "that catches your eye, bring it my way!$"

Route110_Text_SpindaCollectorWrongSpecies::
# 1136 "data/maps/Route110/scripts.pory"
	.string "Hmm… That's not a Spinda!\n"
	.string "That's a totally different Pokémon!$"

Route110_Text_SpindaCollectorChoose::
# 1140 "data/maps/Route110/scripts.pory"
	.string "Let me see if I've seen that pattern\n"
	.string "before…\n"
	.string "Woah, that's a new one! What a\l"
	.string "magnificent design!!\p"
	.string "I simply must add it to my collection!\p"
	.string "I've got some other Pokémon I could\n"
	.string "offer you in exchange.\p"
	.string "Which one catches your eye?$"

Route110_Text_SpindaCollectorConfirmTrade::
# 1144 "data/maps/Route110/scripts.pory"
	.string "Will you trade your {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"

Route110_Text_SpindaCollectorChangedMind::
# 1148 "data/maps/Route110/scripts.pory"
	.string "What, you're backing out??\p"
	.string "Maybe you'd prefer one of my other\n"
	.string "Pokémon instead?\p"
	.string "I'm dying to add that Spinda to my\n"
	.string "collection!$"

Route110_Text_SpindaCollectorPostTrade::
# 1152 "data/maps/Route110/scripts.pory"
	.string "Oh, wonderful! Just look at those\n"
	.string "spots! What a beauty!\p"
	.string "…\n"
	.string "You know, I say I'm only looking for new\l"
	.string "Spinda patterns, but I've never\l"
	.string "actually seen two with the exact same\l"
	.string "design, so I end up keeping every\l"
	.string "Spinda I find…$"

Route110_Text_TheodoreIntro::
# 1165 "data/maps/Route110/scripts.pory"
	.string "Hey, you! Let's battle!$"

Route110_Text_TheodoreDefeat::
# 1169 "data/maps/Route110/scripts.pory"
	.string "No fair!$"

Route110_Text_TheodorePostBattle::
# 1173 "data/maps/Route110/scripts.pory"
	.string "My dad keeps telling me to stop\n"
	.string "fighting with my friends, but I just\l"
	.string "can't help it! I want to use my\l"
	.string "Pokémon's cool moves!$"

Route110_Text_ChuckIntro::
# 1185 "data/maps/Route110/scripts.pory"
	.string "You gotta pay a tax if you want to pass\n"
	.string "through here, you know.$"

Route110_Text_ChuckDefeat::
# 1189 "data/maps/Route110/scripts.pory"
	.string "Alright, geez, go on through!$"

Route110_Text_ChuckPostBattle::
# 1193 "data/maps/Route110/scripts.pory"
	.string "If you ever want extra protection, I\n"
	.string "offer a fee for my services.$"
