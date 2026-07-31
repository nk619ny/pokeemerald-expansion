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
/*
# 145 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 146 "data/maps/Route110/scripts.pory"
	lock
# 147 "data/maps/Route110/scripts.pory"
	faceplayer
# 148 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 149 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 150 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 151 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 152 "data/maps/Route110/scripts.pory"
	release
# 153 "data/maps/Route110/scripts.pory"
	end
# 154 "data/maps/Route110/scripts.pory"
*/
# 155 "data/maps/Route110/scripts.pory"

# 156 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 157 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 158 "data/maps/Route110/scripts.pory"
	release
# 159 "data/maps/Route110/scripts.pory"
	end
# 160 "data/maps/Route110/scripts.pory"

# 161 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 162 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 163 "data/maps/Route110/scripts.pory"
	release
# 164 "data/maps/Route110/scripts.pory"
	end
# 165 "data/maps/Route110/scripts.pory"

# 166 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 167 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 168 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route110/scripts.pory"
	end
# 170 "data/maps/Route110/scripts.pory"

# 171 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 172 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 173 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route110/scripts.pory"
	end
# 175 "data/maps/Route110/scripts.pory"

# 176 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 177 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated
# 178 "data/maps/Route110/scripts.pory"
	//specialvar VAR_RESULT, ShouldTryRematchBattle
# 179 "data/maps/Route110/scripts.pory"
	//goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 180 "data/maps/Route110/scripts.pory"
	//msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 181 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_SpindaCollector
# 182 "data/maps/Route110/scripts.pory"
	release
# 183 "data/maps/Route110/scripts.pory"
	end
# 184 "data/maps/Route110/scripts.pory"

# 185 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 186 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 187 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 189 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_EDWIN_1
# 190 "data/maps/Route110/scripts.pory"
	release
# 191 "data/maps/Route110/scripts.pory"
	end
# 192 "data/maps/Route110/scripts.pory"

# 193 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 194 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 195 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 196 "data/maps/Route110/scripts.pory"
	end
# 197 "data/maps/Route110/scripts.pory"

# 198 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 199 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated, Route110_EventScript_TryDaleGiftAfterBattle
# 200 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route110/scripts.pory"
	end
# 202 "data/maps/Route110/scripts.pory"

# 203 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 204 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated, Route110_EventScript_JacobSetFlag
# 205 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/Route110/scripts.pory"
	end
# 207 "data/maps/Route110/scripts.pory"

# 208 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 209 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated, Route110_EventScript_AnthonySetFlag
# 210 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route110/scripts.pory"
	end
# 212 "data/maps/Route110/scripts.pory"

# 213 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 214 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminSetFlag
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
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated, Route110_EventScript_JasmineSetFlag
# 234 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route110/scripts.pory"
	end
# 236 "data/maps/Route110/scripts.pory"

# 237 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 238 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailSetFlag
# 239 "data/maps/Route110/scripts.pory"

# 240 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 241 "data/maps/Route110/scripts.pory"
	release
# 242 "data/maps/Route110/scripts.pory"
	end
# 243 "data/maps/Route110/scripts.pory"

# 244 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 245 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 246 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 248 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_ABIGAIL_1
# 249 "data/maps/Route110/scripts.pory"
	release
# 250 "data/maps/Route110/scripts.pory"
	end
# 251 "data/maps/Route110/scripts.pory"

# 252 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 253 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 254 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/Route110/scripts.pory"
	end
# 256 "data/maps/Route110/scripts.pory"

# 257 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 258 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 259 "data/maps/Route110/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route110/scripts.pory"
	release
# 261 "data/maps/Route110/scripts.pory"
	end
# 262 "data/maps/Route110/scripts.pory"

# 263 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 264 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 265 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 267 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_ISABEL_1
# 268 "data/maps/Route110/scripts.pory"
	release
# 269 "data/maps/Route110/scripts.pory"
	end
# 270 "data/maps/Route110/scripts.pory"

# 271 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 272 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 273 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 274 "data/maps/Route110/scripts.pory"
	end
# 275 "data/maps/Route110/scripts.pory"

# 276 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 277 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 278 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 279 "data/maps/Route110/scripts.pory"
	end
# 280 "data/maps/Route110/scripts.pory"

# 281 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 282 "data/maps/Route110/scripts.pory"
	end
# 283 "data/maps/Route110/scripts.pory"

# 284 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 285 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 286 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route110/scripts.pory"
	end
# 288 "data/maps/Route110/scripts.pory"

# 289 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 290 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 291 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route110/scripts.pory"
	end
# 293 "data/maps/Route110/scripts.pory"

# 294 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 295 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 296 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route110/scripts.pory"
	end
# 298 "data/maps/Route110/scripts.pory"

# 299 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 300 "data/maps/Route110/scripts.pory"
	lockall
# 301 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 302 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 304 "data/maps/Route110/scripts.pory"
	releaseall
# 305 "data/maps/Route110/scripts.pory"
	end
# 306 "data/maps/Route110/scripts.pory"

# 307 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 308 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 309 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 310 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 311 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 312 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 313 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 314 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 315 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 316 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 317 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 318 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 319 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 320 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 321 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 322 "data/maps/Route110/scripts.pory"
	end
# 323 "data/maps/Route110/scripts.pory"

# 324 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 325 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 326 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 327 "data/maps/Route110/scripts.pory"
	end
# 328 "data/maps/Route110/scripts.pory"

# 329 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 330 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 331 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 332 "data/maps/Route110/scripts.pory"
	end
# 333 "data/maps/Route110/scripts.pory"

# 334 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 335 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 336 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 337 "data/maps/Route110/scripts.pory"
	end
# 338 "data/maps/Route110/scripts.pory"

# 339 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 340 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 341 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 342 "data/maps/Route110/scripts.pory"
	end
# 343 "data/maps/Route110/scripts.pory"

# 344 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 345 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 346 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 347 "data/maps/Route110/scripts.pory"
	end
# 348 "data/maps/Route110/scripts.pory"

# 349 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 350 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 351 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 352 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 353 "data/maps/Route110/scripts.pory"
	return
# 354 "data/maps/Route110/scripts.pory"

# 355 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 356 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 357 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 358 "data/maps/Route110/scripts.pory"
	end
# 359 "data/maps/Route110/scripts.pory"

# 360 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 361 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 362 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 363 "data/maps/Route110/scripts.pory"
	end
# 364 "data/maps/Route110/scripts.pory"

# 365 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 366 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 367 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 368 "data/maps/Route110/scripts.pory"
	end
# 369 "data/maps/Route110/scripts.pory"

# 370 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 371 "data/maps/Route110/scripts.pory"
	lockall
# 372 "data/maps/Route110/scripts.pory"
	checkplayergender
# 373 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 374 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 375 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 376 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 377 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 378 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 379 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 380 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route110/scripts.pory"
	delay 30
# 382 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 383 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 384 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 385 "data/maps/Route110/scripts.pory"
	checkplayergender
# 386 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 387 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 388 "data/maps/Route110/scripts.pory"
	releaseall
# 389 "data/maps/Route110/scripts.pory"
	end
# 390 "data/maps/Route110/scripts.pory"

# 391 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 392 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 393 "data/maps/Route110/scripts.pory"
	return
# 394 "data/maps/Route110/scripts.pory"

# 395 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 396 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 397 "data/maps/Route110/scripts.pory"
	return
# 398 "data/maps/Route110/scripts.pory"

# 399 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 400 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 401 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 402 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 403 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 404 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 405 "data/maps/Route110/scripts.pory"
	end
# 406 "data/maps/Route110/scripts.pory"

# 407 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 408 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 409 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 410 "data/maps/Route110/scripts.pory"
	end
# 411 "data/maps/Route110/scripts.pory"

# 412 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 413 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 414 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 415 "data/maps/Route110/scripts.pory"
	end
# 416 "data/maps/Route110/scripts.pory"

# 417 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 418 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 419 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 420 "data/maps/Route110/scripts.pory"
	end
# 421 "data/maps/Route110/scripts.pory"

# 422 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 423 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 424 "data/maps/Route110/scripts.pory"
	//call Route110_EventScript_GiveItemfinder
# 425 "data/maps/Route110/scripts.pory"
	//msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 426 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 427 "data/maps/Route110/scripts.pory"
	closemessage
# 428 "data/maps/Route110/scripts.pory"
	delay 30
# 429 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 430 "data/maps/Route110/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 431 "data/maps/Route110/scripts.pory"
	waitfanfare
# 432 "data/maps/Route110/scripts.pory"
	closemessage
# 433 "data/maps/Route110/scripts.pory"
	delay 30
# 434 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 435 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 436 "data/maps/Route110/scripts.pory"
	end
# 437 "data/maps/Route110/scripts.pory"

# 438 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 439 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 440 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 441 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 442 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 443 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 444 "data/maps/Route110/scripts.pory"
	end
# 445 "data/maps/Route110/scripts.pory"

# 446 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 447 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 448 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 449 "data/maps/Route110/scripts.pory"
	end
# 450 "data/maps/Route110/scripts.pory"

# 451 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 452 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 453 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 454 "data/maps/Route110/scripts.pory"
	end
# 455 "data/maps/Route110/scripts.pory"

# 456 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 457 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 458 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 459 "data/maps/Route110/scripts.pory"
	end
# 460 "data/maps/Route110/scripts.pory"

# 461 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 462 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 463 "data/maps/Route110/scripts.pory"
	//call Route110_EventScript_GiveItemfinder
# 464 "data/maps/Route110/scripts.pory"
	//msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 465 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 466 "data/maps/Route110/scripts.pory"
	closemessage
# 467 "data/maps/Route110/scripts.pory"
	delay 30
# 468 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 469 "data/maps/Route110/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 470 "data/maps/Route110/scripts.pory"
	waitfanfare
# 471 "data/maps/Route110/scripts.pory"
	closemessage
# 472 "data/maps/Route110/scripts.pory"
	delay 30
# 473 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 474 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 475 "data/maps/Route110/scripts.pory"
	end
# 476 "data/maps/Route110/scripts.pory"

# 477 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 478 "data/maps/Route110/scripts.pory"
	//giveitem ITEM_DOWSING_MACHINE
# 479 "data/maps/Route110/scripts.pory"
	return
# 480 "data/maps/Route110/scripts.pory"

# 481 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 482 "data/maps/Route110/scripts.pory"
	closemessage
# 483 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 484 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 485 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 486 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 487 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 488 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 489 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 490 "data/maps/Route110/scripts.pory"
	delay 45
# 491 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 492 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 493 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 494 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 495 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 496 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 497 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 498 "data/maps/Route110/scripts.pory"
	setvar VAR_LEVEL_CAP, 31
# 499 "data/maps/Route110/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 500 "data/maps/Route110/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 501 "data/maps/Route110/scripts.pory"
	releaseall
# 502 "data/maps/Route110/scripts.pory"
	end
# 503 "data/maps/Route110/scripts.pory"

# 504 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 505 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer1
# 506 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 507 "data/maps/Route110/scripts.pory"
	return
# 508 "data/maps/Route110/scripts.pory"

# 509 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 510 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer2
# 511 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 512 "data/maps/Route110/scripts.pory"
	return
# 513 "data/maps/Route110/scripts.pory"

# 514 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 515 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer3
# 516 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 517 "data/maps/Route110/scripts.pory"
	return
# 518 "data/maps/Route110/scripts.pory"

# 519 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 520 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 521 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 522 "data/maps/Route110/scripts.pory"
	return
# 523 "data/maps/Route110/scripts.pory"

# 524 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 525 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 526 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 527 "data/maps/Route110/scripts.pory"
	return
# 528 "data/maps/Route110/scripts.pory"

# 529 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 530 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 531 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 532 "data/maps/Route110/scripts.pory"
	return
# 533 "data/maps/Route110/scripts.pory"

# 534 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 535 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
# 536 "data/maps/Route110/scripts.pory"
	return
# 537 "data/maps/Route110/scripts.pory"

# 538 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 539 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
# 540 "data/maps/Route110/scripts.pory"
	return
# 541 "data/maps/Route110/scripts.pory"

# 542 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 543 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
# 544 "data/maps/Route110/scripts.pory"
	return
# 545 "data/maps/Route110/scripts.pory"

# 546 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 547 "data/maps/Route110/scripts.pory"
	walk_down
# 548 "data/maps/Route110/scripts.pory"
	walk_left
# 549 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 550 "data/maps/Route110/scripts.pory"
	step_end
# 551 "data/maps/Route110/scripts.pory"

# 552 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 553 "data/maps/Route110/scripts.pory"
	walk_down
# 554 "data/maps/Route110/scripts.pory"
	step_end
# 555 "data/maps/Route110/scripts.pory"

# 556 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 557 "data/maps/Route110/scripts.pory"
	walk_down
# 558 "data/maps/Route110/scripts.pory"
	walk_right
# 559 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 560 "data/maps/Route110/scripts.pory"
	step_end
# 561 "data/maps/Route110/scripts.pory"

# 562 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 563 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 571 "data/maps/Route110/scripts.pory"

# 572 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 573 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	walk_fast_down
# 581 "data/maps/Route110/scripts.pory"
	step_end
# 582 "data/maps/Route110/scripts.pory"

# 583 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 584 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 592 "data/maps/Route110/scripts.pory"

# 593 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 594 "data/maps/Route110/scripts.pory"
	lockall
# 595 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 596 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 597 "data/maps/Route110/scripts.pory"

# 598 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 599 "data/maps/Route110/scripts.pory"
	lockall
# 600 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 601 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 602 "data/maps/Route110/scripts.pory"

# 603 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 604 "data/maps/Route110/scripts.pory"
	lockall
# 605 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 606 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 607 "data/maps/Route110/scripts.pory"

# 608 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 609 "data/maps/Route110/scripts.pory"
	lockall
# 610 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 611 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 612 "data/maps/Route110/scripts.pory"

# 613 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 614 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 615 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchEntrance
# 616 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 617 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 618 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 619 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 620 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 621 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 622 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 623 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 624 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 625 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 626 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 627 "data/maps/Route110/scripts.pory"
	closemessage
# 628 "data/maps/Route110/scripts.pory"
	delay 20
# 629 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 630 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 631 "data/maps/Route110/scripts.pory"
	delay 10
# 632 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 633 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 634 "data/maps/Route110/scripts.pory"
	delay 20
# 635 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 636 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 637 "data/maps/Route110/scripts.pory"
	delay 30
# 638 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 639 "data/maps/Route110/scripts.pory"
	closemessage
# 640 "data/maps/Route110/scripts.pory"
	delay 30
# 641 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 642 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 643 "data/maps/Route110/scripts.pory"
	waitfanfare
# 644 "data/maps/Route110/scripts.pory"
	closemessage
# 645 "data/maps/Route110/scripts.pory"
	delay 30
# 646 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 647 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 648 "data/maps/Route110/scripts.pory"
	closemessage
# 649 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 650 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 651 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 652 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 653 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 654 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 655 "data/maps/Route110/scripts.pory"
	releaseall
# 656 "data/maps/Route110/scripts.pory"
	end
# 657 "data/maps/Route110/scripts.pory"

# 658 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 659 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 660 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 661 "data/maps/Route110/scripts.pory"
	return
# 662 "data/maps/Route110/scripts.pory"

# 663 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 664 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 665 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 666 "data/maps/Route110/scripts.pory"
	return
# 667 "data/maps/Route110/scripts.pory"

# 668 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 669 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer3
# 670 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 671 "data/maps/Route110/scripts.pory"
	return
# 672 "data/maps/Route110/scripts.pory"

# 673 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 674 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 675 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 676 "data/maps/Route110/scripts.pory"
	return
# 677 "data/maps/Route110/scripts.pory"

# 678 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 679 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 680 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 681 "data/maps/Route110/scripts.pory"
	return
# 682 "data/maps/Route110/scripts.pory"

# 683 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 684 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit2
# 685 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 686 "data/maps/Route110/scripts.pory"
	return
# 687 "data/maps/Route110/scripts.pory"

# 688 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 689 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit3
# 690 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 691 "data/maps/Route110/scripts.pory"
	return
# 692 "data/maps/Route110/scripts.pory"

# 693 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 694 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit4
# 695 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 696 "data/maps/Route110/scripts.pory"
	return
# 697 "data/maps/Route110/scripts.pory"

# 698 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 699 "data/maps/Route110/scripts.pory"
	walk_down
# 700 "data/maps/Route110/scripts.pory"
	walk_down
# 701 "data/maps/Route110/scripts.pory"
	walk_down
# 702 "data/maps/Route110/scripts.pory"
	step_end
# 703 "data/maps/Route110/scripts.pory"

# 704 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 705 "data/maps/Route110/scripts.pory"
	walk_down
# 706 "data/maps/Route110/scripts.pory"
	walk_left
# 707 "data/maps/Route110/scripts.pory"
	walk_left
# 708 "data/maps/Route110/scripts.pory"
	walk_down
# 709 "data/maps/Route110/scripts.pory"
	step_end
# 710 "data/maps/Route110/scripts.pory"

# 711 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 712 "data/maps/Route110/scripts.pory"
	walk_down
# 713 "data/maps/Route110/scripts.pory"
	walk_left
# 714 "data/maps/Route110/scripts.pory"
	walk_down
# 715 "data/maps/Route110/scripts.pory"
	step_end
# 716 "data/maps/Route110/scripts.pory"

# 717 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 718 "data/maps/Route110/scripts.pory"
	walk_down
# 719 "data/maps/Route110/scripts.pory"
	walk_down
# 720 "data/maps/Route110/scripts.pory"
	step_end
# 721 "data/maps/Route110/scripts.pory"

# 722 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 723 "data/maps/Route110/scripts.pory"
	walk_down
# 724 "data/maps/Route110/scripts.pory"
	walk_right
# 725 "data/maps/Route110/scripts.pory"
	walk_down
# 726 "data/maps/Route110/scripts.pory"
	step_end
# 727 "data/maps/Route110/scripts.pory"

# 728 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 729 "data/maps/Route110/scripts.pory"
	walk_up
# 730 "data/maps/Route110/scripts.pory"
	walk_up
# 731 "data/maps/Route110/scripts.pory"
	walk_right
# 732 "data/maps/Route110/scripts.pory"
	walk_up
# 733 "data/maps/Route110/scripts.pory"
	walk_up
# 734 "data/maps/Route110/scripts.pory"
	walk_up
# 735 "data/maps/Route110/scripts.pory"
	step_end
# 736 "data/maps/Route110/scripts.pory"

# 737 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 738 "data/maps/Route110/scripts.pory"
	walk_up
# 739 "data/maps/Route110/scripts.pory"
	walk_up
# 740 "data/maps/Route110/scripts.pory"
	walk_up
# 741 "data/maps/Route110/scripts.pory"
	walk_up
# 742 "data/maps/Route110/scripts.pory"
	walk_up
# 743 "data/maps/Route110/scripts.pory"
	step_end
# 744 "data/maps/Route110/scripts.pory"

# 745 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 746 "data/maps/Route110/scripts.pory"
	walk_up
# 747 "data/maps/Route110/scripts.pory"
	walk_up
# 748 "data/maps/Route110/scripts.pory"
	walk_up
# 749 "data/maps/Route110/scripts.pory"
	walk_up
# 750 "data/maps/Route110/scripts.pory"
	walk_up
# 751 "data/maps/Route110/scripts.pory"
	step_end
# 752 "data/maps/Route110/scripts.pory"

# 753 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 754 "data/maps/Route110/scripts.pory"
	walk_up
# 755 "data/maps/Route110/scripts.pory"
	walk_up
# 756 "data/maps/Route110/scripts.pory"
	walk_up
# 757 "data/maps/Route110/scripts.pory"
	walk_up
# 758 "data/maps/Route110/scripts.pory"
	walk_up
# 759 "data/maps/Route110/scripts.pory"
	step_end
# 760 "data/maps/Route110/scripts.pory"

# 761 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 762 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 763 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 764 "data/maps/Route110/scripts.pory"

# 765 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 766 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 767 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 768 "data/maps/Route110/scripts.pory"

# 769 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 770 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 771 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 772 "data/maps/Route110/scripts.pory"

# 773 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 774 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 775 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 776 "data/maps/Route110/scripts.pory"

# 777 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 778 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 779 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 780 "data/maps/Route110/scripts.pory"
	.string "Pokémon, my Pokémon grew stronger.\p"
# 781 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 782 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 783 "data/maps/Route110/scripts.pory"

# 784 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 785 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 786 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 787 "data/maps/Route110/scripts.pory"

# 788 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 789 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 790 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?$"
# 791 "data/maps/Route110/scripts.pory"

# 792 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 793 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 794 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 795 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 796 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 797 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 798 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 799 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 800 "data/maps/Route110/scripts.pory"

# 801 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 802 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 803 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 804 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 805 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your Pokémon?\n"
# 806 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 807 "data/maps/Route110/scripts.pory"

# 808 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 809 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 810 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 811 "data/maps/Route110/scripts.pory"

# 812 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 813 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 814 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 815 "data/maps/Route110/scripts.pory"
	.string "Good enough!$"
# 816 "data/maps/Route110/scripts.pory"

# 817 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 818 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 819 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 820 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 821 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 822 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 823 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 824 "data/maps/Route110/scripts.pory"
	.string "Pokémon.$"
# 825 "data/maps/Route110/scripts.pory"

# 826 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 827 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 828 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 829 "data/maps/Route110/scripts.pory"

# 830 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 831 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 832 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 833 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 834 "data/maps/Route110/scripts.pory"

# 835 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 836 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 837 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 838 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 839 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 840 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 841 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 842 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 843 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 844 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 845 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 846 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 847 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 848 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 849 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 850 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 851 "data/maps/Route110/scripts.pory"

# 852 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 853 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 854 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 855 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 856 "data/maps/Route110/scripts.pory"

# 857 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 858 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 859 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 860 "data/maps/Route110/scripts.pory"

# 861 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 862 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 863 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 864 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 865 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 866 "data/maps/Route110/scripts.pory"

# 867 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 868 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 869 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 870 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 871 "data/maps/Route110/scripts.pory"
	.string "and look for Pokémon?$"
# 872 "data/maps/Route110/scripts.pory"

# 873 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 874 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 875 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 876 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 877 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 878 "data/maps/Route110/scripts.pory"

# 879 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 880 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 881 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 882 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 883 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 884 "data/maps/Route110/scripts.pory"

# 885 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 886 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 887 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 888 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 889 "data/maps/Route110/scripts.pory"

# 890 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 891 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 892 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 893 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 894 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 895 "data/maps/Route110/scripts.pory"

# 896 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 897 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 898 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 899 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 900 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 901 "data/maps/Route110/scripts.pory"

# 902 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 903 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 904 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 905 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 906 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 907 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 908 "data/maps/Route110/scripts.pory"

# 909 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 910 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 911 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 912 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 913 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 914 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 915 "data/maps/Route110/scripts.pory"

# 916 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 917 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 918 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 919 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 920 "data/maps/Route110/scripts.pory"

# 921 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 922 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 923 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 924 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 925 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 926 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 927 "data/maps/Route110/scripts.pory"

# 928 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 929 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 930 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 931 "data/maps/Route110/scripts.pory"

# 932 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 933 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 934 "data/maps/Route110/scripts.pory"

# 935 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 936 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 937 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 938 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 939 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 940 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 941 "data/maps/Route110/scripts.pory"

# 942 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 943 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 944 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 945 "data/maps/Route110/scripts.pory"

# 946 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 947 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 948 "data/maps/Route110/scripts.pory"

# 949 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 950 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 951 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 952 "data/maps/Route110/scripts.pory"

# 953 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 954 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 955 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 956 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 957 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 958 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 959 "data/maps/Route110/scripts.pory"

# 960 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 961 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 962 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 963 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 964 "data/maps/Route110/scripts.pory"

# 965 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 966 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 967 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 968 "data/maps/Route110/scripts.pory"

# 969 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 970 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 971 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 972 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 973 "data/maps/Route110/scripts.pory"

# 974 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 975 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 976 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 977 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 978 "data/maps/Route110/scripts.pory"

# 979 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 980 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 981 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 982 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 983 "data/maps/Route110/scripts.pory"

# 984 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 985 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 986 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 987 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 988 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 989 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 990 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 991 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 992 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 993 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 994 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 995 "data/maps/Route110/scripts.pory"

# 996 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 997 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 998 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 999 "data/maps/Route110/scripts.pory"

# 1000 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1001 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1002 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1003 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1004 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1005 "data/maps/Route110/scripts.pory"
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
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route110_EventScript_SpindaCollector_5
# 1079 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 1080 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1081 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1082 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, SPECIES_SPINDA
	goto_if_ne Route110_EventScript_SpindaCollector_8
# 1087 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorChoose, MSGBOX_DEFAULT
# 1088 "data/maps/Route110/scripts.pory"
	dynmultichoice 20, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route110_EventScript_SpindaCollector_Text_0, Route110_EventScript_SpindaCollector_Text_1, Route110_EventScript_SpindaCollector_Text_2
# 1089 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 1090 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_SpindaCollector_12
# 1093 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_SpindaCollector_13
# 1096 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_SpindaCollector_14
# 1100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorChangedMind, MSGBOX_DEFAULT
# 1101 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_2:
# 1069 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorDecline, MSGBOX_DEFAULT
# 1070 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_5:
# 1075 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorNoChoice, MSGBOX_DEFAULT
# 1076 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_8:
# 1083 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorWrongSpecies, MSGBOX_DEFAULT
# 1084 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_10:
# 1104 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x8004, VAR_0x800A
# 1105 "data/maps/Route110/scripts.pory"
	special BufferMonNickname
# 1106 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorConfirmTrade, MSGBOX_YESNO
# 1107 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_EventScript_SpindaCollector_17
# 1112 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8003, 1
# 1113 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1114 "data/maps/Route110/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 1115 "data/maps/Route110/scripts.pory"
	special CreateInGameTradePokemon
# 1116 "data/maps/Route110/scripts.pory"
	special DoInGameTradeScene
# 1117 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorPostTrade, MSGBOX_DEFAULT
# 1118 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_SpindaCollector_12:
# 1091 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8009, INGAME_TRADE_INKAY
# 1092 "data/maps/Route110/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_INKAY
	goto Route110_EventScript_SpindaCollector_10

Route110_EventScript_SpindaCollector_13:
# 1094 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8009, INGAME_TRADE_FOMANTIS
# 1095 "data/maps/Route110/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_FOMANTIS
	goto Route110_EventScript_SpindaCollector_10

Route110_EventScript_SpindaCollector_14:
# 1097 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8009, INGAME_TRADE_DOTTLER
# 1098 "data/maps/Route110/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DOTTLER
	goto Route110_EventScript_SpindaCollector_10

Route110_EventScript_SpindaCollector_17:
# 1108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpindaCollectorChangedMind, MSGBOX_DEFAULT
# 1109 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_Theodore::
# 1156 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_THEODORE, Route110_Text_TheodoreIntro, Route110_Text_TheodoreDefeat
# 1157 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TheodorePostBattle, MSGBOX_NPC
# 1158 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_Chuck::
# 1176 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_CHUCK, Route110_Text_ChuckIntro, Route110_Text_ChuckDefeat
# 1177 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChuckPostBattle, MSGBOX_NPC
# 1178 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_ResetCyclingRoad::
# 1196 "data/maps/Route110/scripts.pory"
	cleartrainerflag TRAINER_JACOB
# 1197 "data/maps/Route110/scripts.pory"
	cleartrainerflag TRAINER_ANTHONY
# 1198 "data/maps/Route110/scripts.pory"
	cleartrainerflag TRAINER_BENJAMIN_1
# 1199 "data/maps/Route110/scripts.pory"
	cleartrainerflag TRAINER_ABIGAIL_1
# 1200 "data/maps/Route110/scripts.pory"
	cleartrainerflag TRAINER_JASMINE
	end


Route110_EventScript_CheckCyclingRoadDoneForReset::
# 1206 "data/maps/Route110/scripts.pory"
	lock
# 1207 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_JACOB, Route110_EventScript_ResetCyclingRoad
# 1208 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_ANTHONY, Route110_EventScript_ResetCyclingRoad
# 1209 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_BENJAMIN_1, Route110_EventScript_ResetCyclingRoad
# 1210 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_ABIGAIL_1, Route110_EventScript_ResetCyclingRoad
# 1211 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_JASMINE, Route110_EventScript_ResetCyclingRoad
	return


Route110_EventScript_CheckCyclingRoadDone::
# 1217 "data/maps/Route110/scripts.pory"
	lock
# 1218 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_JACOB, Route110_EventScript_CheckCyclingRoadUnfinished
# 1219 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_ANTHONY, Route110_EventScript_CheckCyclingRoadUnfinished
# 1220 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_BENJAMIN_1, Route110_EventScript_CheckCyclingRoadUnfinished
# 1221 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_ABIGAIL_1, Route110_EventScript_CheckCyclingRoadUnfinished
# 1222 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_JASMINE, Route110_EventScript_CheckCyclingRoadUnfinished
# 1224 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYCLING_ROAD_HEART_SCALE, Route110_EventScript_CheckCyclingRoadUnfinished
# 1225 "data/maps/Route110/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route110_EventScript_GiveCyclingRoadHeartScale
# 1226 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_CheckCyclingRoadUnfinished::
# 1231 "data/maps/Route110/scripts.pory"
	releaseall
# 1232 "data/maps/Route110/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


Route110_EventScript_GiveCyclingRoadHeartScale::
# 1237 "data/maps/Route110/scripts.pory"
	lock
# 1238 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceRight
# 1239 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1240 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1241 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_GiveCyclingRoadHeartScale_Text_0, MSGBOX_NPC
# 1242 "data/maps/Route110/scripts.pory"
	closemessage
# 1243 "data/maps/Route110/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 1244 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 1245 "data/maps/Route110/scripts.pory"
	setflag FLAG_RECEIVED_CYCLING_ROAD_HEART_SCALE
# 1246 "data/maps/Route110/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1247 "data/maps/Route110/scripts.pory"
	waitfanfare
# 1248 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JACOB, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1249 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ANTHONY, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1250 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_BENJAMIN, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1251 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ABIGAIL, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1252 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JASMINE, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1253 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_ChallengeGuy::
# 1258 "data/maps/Route110/scripts.pory"
	lock
# 1259 "data/maps/Route110/scripts.pory"
	faceplayer
# 1260 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYCLING_ROAD_HEART_SCALE, Route110_EventScript_ChallengeGuy_2
# 1265 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route110_EventScript_ChallengeGuy_5
# 1270 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CheckCyclingRoadDoneDialogue
	return

Route110_EventScript_ChallengeGuy_2:
# 1261 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeGuy_Text_0, MSGBOX_NPC
# 1262 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_ChallengeGuy_5:
# 1266 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeGuy_Text_1, MSGBOX_NPC
# 1267 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_CheckCyclingRoadDoneDialogue::
# 1276 "data/maps/Route110/scripts.pory"
	lock
# 1277 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_JACOB, Route110_EventScript_CyclingRoadUnfinishedDialogue
# 1278 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_ANTHONY, Route110_EventScript_CyclingRoadUnfinishedDialogue
# 1279 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_BENJAMIN_1, Route110_EventScript_CyclingRoadUnfinishedDialogue
# 1280 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_ABIGAIL_1, Route110_EventScript_CyclingRoadUnfinishedDialogue
# 1281 "data/maps/Route110/scripts.pory"
	goto_if_not_defeated TRAINER_JASMINE, Route110_EventScript_CyclingRoadUnfinishedDialogue
# 1283 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_GiveCyclingRoadHeartScale_Text_0, MSGBOX_NPC
# 1284 "data/maps/Route110/scripts.pory"
	closemessage
# 1285 "data/maps/Route110/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 1286 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 1287 "data/maps/Route110/scripts.pory"
	setflag FLAG_RECEIVED_CYCLING_ROAD_HEART_SCALE
# 1288 "data/maps/Route110/scripts.pory"
	waitfanfare
# 1289 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JACOB, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1290 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ANTHONY, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1291 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_BENJAMIN, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1292 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ABIGAIL, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1293 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JASMINE, Route110_EventScript_AlsoGiveIndividualTrainerRewards
# 1294 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_CyclingRoadUnfinishedDialogue::
# 1299 "data/maps/Route110/scripts.pory"
	lock
# 1300 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_CyclingRoadUnfinishedDialogue_Text_0, MSGBOX_NPC
# 1301 "data/maps/Route110/scripts.pory"
	closemessage
# 1302 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JACOB, Route110_EventScript_GiveIndividualTrainerRewards
# 1303 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ANTHONY, Route110_EventScript_GiveIndividualTrainerRewards
# 1304 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_BENJAMIN, Route110_EventScript_GiveIndividualTrainerRewards
# 1305 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ABIGAIL, Route110_EventScript_GiveIndividualTrainerRewards
# 1306 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JASMINE, Route110_EventScript_GiveIndividualTrainerRewards
# 1307 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_CyclingRoadEntranceIntro::
# 1312 "data/maps/Route110/scripts.pory"
	goto_if_unset FLAG_TEMP_5, Route110_EventScript_CyclingRoadEntranceIntro_3
Route110_EventScript_CyclingRoadEntranceIntro_1:
# 1320 "data/maps/Route110/scripts.pory"
	setflag FLAG_TEMP_5
	return

Route110_EventScript_CyclingRoadEntranceIntro_2:
# 1313 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_CyclingRoadEntranceIntro_Text_0, MSGBOX_NPC
# 1314 "data/maps/Route110/scripts.pory"
	closemessage
# 1315 "data/maps/Route110/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route110_EventScript_CyclingRoadEntranceIntro_7
	goto Route110_EventScript_CyclingRoadEntranceIntro_1

Route110_EventScript_CyclingRoadEntranceIntro_3:
# 1312 "data/maps/Route110/scripts.pory"
	goto_if_unset FLAG_SYS_CYCLING_ROAD, Route110_EventScript_CyclingRoadEntranceIntro_2
	goto Route110_EventScript_CyclingRoadEntranceIntro_1

Route110_EventScript_CyclingRoadEntranceIntro_6:
# 1316 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_CyclingRoadEntranceIntro_Text_1, MSGBOX_NPC
# 1317 "data/maps/Route110/scripts.pory"
	closemessage
	goto Route110_EventScript_CyclingRoadEntranceIntro_1

Route110_EventScript_CyclingRoadEntranceIntro_7:
# 1315 "data/maps/Route110/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYCLING_ROAD_HEART_SCALE, Route110_EventScript_CyclingRoadEntranceIntro_6
	goto Route110_EventScript_CyclingRoadEntranceIntro_1


Route110_EventScript_JacobSetFlag::
# 1325 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_JACOB
# 1326 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_AnthonySetFlag::
# 1331 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_ANTHONY
# 1332 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_BenjaminSetFlag::
# 1337 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_BENJAMIN
# 1338 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_AbigailSetFlag::
# 1343 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_ABIGAIL
# 1344 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_JasmineSetFlag::
# 1349 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_JASMINE
# 1350 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_AlsoGiveIndividualTrainerRewards::
# 1355 "data/maps/Route110/scripts.pory"
	lock
# 1356 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_AlsoGiveIndividualTrainerRewards_Text_0, MSGBOX_NPC
# 1357 "data/maps/Route110/scripts.pory"
	closemessage
# 1358 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JACOB, Route110_EventScript_AlsoGiveIndividualTrainerRewards_2
Route110_EventScript_AlsoGiveIndividualTrainerRewards_1:
# 1364 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ANTHONY, Route110_EventScript_AlsoGiveIndividualTrainerRewards_5
Route110_EventScript_AlsoGiveIndividualTrainerRewards_4:
# 1370 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_BENJAMIN, Route110_EventScript_AlsoGiveIndividualTrainerRewards_8
Route110_EventScript_AlsoGiveIndividualTrainerRewards_7:
# 1376 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ABIGAIL, Route110_EventScript_AlsoGiveIndividualTrainerRewards_11
Route110_EventScript_AlsoGiveIndividualTrainerRewards_10:
# 1382 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JASMINE, Route110_EventScript_AlsoGiveIndividualTrainerRewards_14
Route110_EventScript_AlsoGiveIndividualTrainerRewards_13:
# 1388 "data/maps/Route110/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1389 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_AlsoGiveIndividualTrainerRewards_2:
# 1359 "data/maps/Route110/scripts.pory"
	giveitem ITEM_PP_MAX
# 1360 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1361 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_JACOB
# 1362 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_AlsoGiveIndividualTrainerRewards_1

Route110_EventScript_AlsoGiveIndividualTrainerRewards_5:
# 1365 "data/maps/Route110/scripts.pory"
	giveitem ITEM_HP_UP
# 1366 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1367 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_ANTHONY
# 1368 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_AlsoGiveIndividualTrainerRewards_4

Route110_EventScript_AlsoGiveIndividualTrainerRewards_8:
# 1371 "data/maps/Route110/scripts.pory"
	giveitem ITEM_CARBOS
# 1372 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1373 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_BENJAMIN
# 1374 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_AlsoGiveIndividualTrainerRewards_7

Route110_EventScript_AlsoGiveIndividualTrainerRewards_11:
# 1377 "data/maps/Route110/scripts.pory"
	giveitem ITEM_IRON
# 1378 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1379 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_ABIGAIL
# 1380 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_AlsoGiveIndividualTrainerRewards_10

Route110_EventScript_AlsoGiveIndividualTrainerRewards_14:
# 1383 "data/maps/Route110/scripts.pory"
	giveitem ITEM_ZINC
# 1384 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1385 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_JASMINE
# 1386 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_AlsoGiveIndividualTrainerRewards_13


Route110_EventScript_GiveIndividualTrainerRewards::
# 1395 "data/maps/Route110/scripts.pory"
	lock
# 1396 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_GiveIndividualTrainerRewards_Text_0, MSGBOX_NPC
# 1397 "data/maps/Route110/scripts.pory"
	closemessage
# 1398 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JACOB, Route110_EventScript_GiveIndividualTrainerRewards_2
Route110_EventScript_GiveIndividualTrainerRewards_1:
# 1404 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ANTHONY, Route110_EventScript_GiveIndividualTrainerRewards_5
Route110_EventScript_GiveIndividualTrainerRewards_4:
# 1410 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_BENJAMIN, Route110_EventScript_GiveIndividualTrainerRewards_8
Route110_EventScript_GiveIndividualTrainerRewards_7:
# 1416 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_ABIGAIL, Route110_EventScript_GiveIndividualTrainerRewards_11
Route110_EventScript_GiveIndividualTrainerRewards_10:
# 1422 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_CR_REWARD_AVAILABLE_JASMINE, Route110_EventScript_GiveIndividualTrainerRewards_14
Route110_EventScript_GiveIndividualTrainerRewards_13:
# 1428 "data/maps/Route110/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1429 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_GiveIndividualTrainerRewards_2:
# 1399 "data/maps/Route110/scripts.pory"
	giveitem ITEM_PP_MAX
# 1400 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1401 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_JACOB
# 1402 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_GiveIndividualTrainerRewards_1

Route110_EventScript_GiveIndividualTrainerRewards_5:
# 1405 "data/maps/Route110/scripts.pory"
	giveitem ITEM_HP_UP
# 1406 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1407 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_ANTHONY
# 1408 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_GiveIndividualTrainerRewards_4

Route110_EventScript_GiveIndividualTrainerRewards_8:
# 1411 "data/maps/Route110/scripts.pory"
	giveitem ITEM_CARBOS
# 1412 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1413 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_BENJAMIN
# 1414 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_GiveIndividualTrainerRewards_7

Route110_EventScript_GiveIndividualTrainerRewards_11:
# 1417 "data/maps/Route110/scripts.pory"
	giveitem ITEM_IRON
# 1418 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1419 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_ABIGAIL
# 1420 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_GiveIndividualTrainerRewards_10

Route110_EventScript_GiveIndividualTrainerRewards_14:
# 1423 "data/maps/Route110/scripts.pory"
	giveitem ITEM_ZINC
# 1424 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_CyclingRoadComeBackForReward
# 1425 "data/maps/Route110/scripts.pory"
	setflag FLAG_CR_REWARD_AVAILABLE_JASMINE
# 1426 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route110_EventScript_GiveIndividualTrainerRewards_13


Route110_EventScript_CyclingRoadComeBackForReward::
# 1435 "data/maps/Route110/scripts.pory"
	lock
# 1436 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_CyclingRoadComeBackForReward_Text_0, MSGBOX_NPC
# 1437 "data/maps/Route110/scripts.pory"
	closemessage
# 1438 "data/maps/Route110/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1439 "data/maps/Route110/scripts.pory"
	releaseall
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
# 1088 "data/maps/Route110/scripts.pory"
	.string "Inkay$"

Route110_EventScript_SpindaCollector_Text_1:
# 1088 "data/maps/Route110/scripts.pory"
	.string "Fomantis$"

Route110_EventScript_SpindaCollector_Text_2:
# 1088 "data/maps/Route110/scripts.pory"
	.string "Dottler$"

Route110_EventScript_GiveCyclingRoadHeartScale_Text_0:
# 1241 "data/maps/Route110/scripts.pory"
	.string "Wow, you defeated every trainer on\n"
	.string "cycling road in one go!\p"
	.string "As a reward for completing the Cycling\n"
	.string "Road Challenge, please take this.$"

Route110_EventScript_ChallengeGuy_Text_0:
# 1261 "data/maps/Route110/scripts.pory"
	.string "Excellent job cycling and battling!$"

Route110_EventScript_ChallengeGuy_Text_1:
# 1266 "data/maps/Route110/scripts.pory"
	.string "Unfortunately, we're already had\n"
	.string "another trainer win the Cycling Road\l"
	.string "Challenge.$"

Route110_EventScript_CyclingRoadUnfinishedDialogue_Text_0:
# 1300 "data/maps/Route110/scripts.pory"
	.string "It looks like you haven't beaten all the\n"
	.string "trainers on Cycling Road yet.\p"
	.string "If you can beat them all in one trip,\n"
	.string "you'll receive a special reward!$"

Route110_EventScript_CyclingRoadEntranceIntro_Text_0:
# 1313 "data/maps/Route110/scripts.pory"
	.string "Welcome to Cycling Road!\n"
	.string "We have two rules you need to be aware\l"
	.string "of.\p"
	.string "First, you must remain on your bike at\n"
	.string "all times.\p"
	.string "Second, use of any mobile PC devices is\n"
	.string "strictly prohibited. Distracted driving\l"
	.string "is unsafe.$"

Route110_EventScript_CyclingRoadEntranceIntro_Text_1:
# 1316 "data/maps/Route110/scripts.pory"
	.string "Additionally, the Cycling Road\n"
	.string "challenge is currently going on.\p"
	.string "The first trainer to defeat all trainers\n"
	.string "on Cycling Road in a single trip will\l"
	.string "receive a special reward.\p"
	.string "But be warned, if you leave before\n"
	.string "defeating all the other trainers, you\l"
	.string "will have to beat them again to claim\l"
	.string "the prize.$"

Route110_EventScript_AlsoGiveIndividualTrainerRewards_Text_0:
# 1356 "data/maps/Route110/scripts.pory"
	.string "Additionally, you get a reward for each\n"
	.string "trainer you defeated.$"

Route110_EventScript_GiveIndividualTrainerRewards_Text_0:
# 1396 "data/maps/Route110/scripts.pory"
	.string "However, you do receive some smaller\n"
	.string "rewards for each trainer you've beaten\l"
	.string "for the first time.$"

Route110_EventScript_CyclingRoadComeBackForReward_Text_0:
# 1436 "data/maps/Route110/scripts.pory"
	.string "It seems you don't have enough room in\n"
	.string "your bag.\p"
	.string "Come back to receive your rewards once\n"
	.string "you've made space.$"

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
# 1122 "data/maps/Route110/scripts.pory"
	.string "I've collected hundreds of Spinda with\n"
	.string "unique spot patterns.\p"
	.string "But I'm always interested in finding new\n"
	.string "ones. If you find any, I'd be willing to\l"
	.string "make a trade.\p"
	.string "Do you think you have a Spinda with a\n"
	.string "spot pattern I've never seen before?$"

Route110_Text_SpindaCollectorDecline::
# 1126 "data/maps/Route110/scripts.pory"
	.string "Aw, that's too bad…\n"
	.string "If you ever catch a Spinda, come find\l"
	.string "me!$"

Route110_Text_SpindaCollectorNoChoice::
# 1130 "data/maps/Route110/scripts.pory"
	.string "Changed your mind?\n"
	.string "No worries!\p"
	.string "If you find a Spinda with a pattern\n"
	.string "that catches your eye, bring it my way!$"

Route110_Text_SpindaCollectorWrongSpecies::
# 1134 "data/maps/Route110/scripts.pory"
	.string "Hmm… That's not a Spinda!\n"
	.string "That's a totally different Pokémon!$"

Route110_Text_SpindaCollectorChoose::
# 1138 "data/maps/Route110/scripts.pory"
	.string "Let me see if I've seen that pattern\n"
	.string "before…\n"
	.string "Woah, that's a new one! What a\l"
	.string "magnificent design!!\p"
	.string "I simply must add it to my collection!\p"
	.string "I've got some other Pokémon I could\n"
	.string "offer you in exchange.\p"
	.string "Which one catches your eye?$"

Route110_Text_SpindaCollectorConfirmTrade::
# 1142 "data/maps/Route110/scripts.pory"
	.string "Will you trade your {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"

Route110_Text_SpindaCollectorChangedMind::
# 1146 "data/maps/Route110/scripts.pory"
	.string "What, you're backing out??\p"
	.string "Maybe you'd prefer one of my other\n"
	.string "Pokémon instead?\p"
	.string "I'm dying to add that Spinda to my\n"
	.string "collection!$"

Route110_Text_SpindaCollectorPostTrade::
# 1150 "data/maps/Route110/scripts.pory"
	.string "Oh, wonderful! Just look at those\n"
	.string "spots! What a beauty!\p"
	.string "…\n"
	.string "You know, I say I'm only looking for new\l"
	.string "Spinda patterns, but I've never\l"
	.string "actually seen two with the exact same\l"
	.string "design, so I end up keeping every\l"
	.string "Spinda I find…$"

Route110_Text_TheodoreIntro::
# 1163 "data/maps/Route110/scripts.pory"
	.string "Hey, you! Let's battle!$"

Route110_Text_TheodoreDefeat::
# 1167 "data/maps/Route110/scripts.pory"
	.string "No fair!$"

Route110_Text_TheodorePostBattle::
# 1171 "data/maps/Route110/scripts.pory"
	.string "My dad keeps telling me to stop\n"
	.string "fighting with my friends, but I just\l"
	.string "can't help it! I want to use my\l"
	.string "Pokémon's cool moves!$"

Route110_Text_ChuckIntro::
# 1183 "data/maps/Route110/scripts.pory"
	.string "You gotta pay a tax if you want to pass\n"
	.string "through here, you know.$"

Route110_Text_ChuckDefeat::
# 1187 "data/maps/Route110/scripts.pory"
	.string "Alright, geez, go on through!$"

Route110_Text_ChuckPostBattle::
# 1191 "data/maps/Route110/scripts.pory"
	.string "If you ever want extra protection, I\n"
	.string "offer a fee for my services.$"
