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
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 176 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 177 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 178 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 179 "data/maps/Route110/scripts.pory"
	release
# 180 "data/maps/Route110/scripts.pory"
	end
# 181 "data/maps/Route110/scripts.pory"

# 182 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 183 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 184 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 186 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_EDWIN_1
# 187 "data/maps/Route110/scripts.pory"
	release
# 188 "data/maps/Route110/scripts.pory"
	end
# 189 "data/maps/Route110/scripts.pory"

# 190 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 191 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 192 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/Route110/scripts.pory"
	end
# 194 "data/maps/Route110/scripts.pory"

# 195 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 196 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated, Route110_EventScript_TryDaleGiftAfterBattle
# 197 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route110/scripts.pory"
	end
# 199 "data/maps/Route110/scripts.pory"

# 200 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 201 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 202 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route110/scripts.pory"
	end
# 204 "data/maps/Route110/scripts.pory"

# 205 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 206 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 207 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route110/scripts.pory"
	end
# 209 "data/maps/Route110/scripts.pory"

# 210 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 211 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 212 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 213 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 214 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 215 "data/maps/Route110/scripts.pory"
	release
# 216 "data/maps/Route110/scripts.pory"
	end
# 217 "data/maps/Route110/scripts.pory"

# 218 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 219 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 220 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 221 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 222 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_BENJAMIN_1
# 223 "data/maps/Route110/scripts.pory"
	release
# 224 "data/maps/Route110/scripts.pory"
	end
# 225 "data/maps/Route110/scripts.pory"

# 226 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 227 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 228 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/Route110/scripts.pory"
	end
# 230 "data/maps/Route110/scripts.pory"

# 231 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 232 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 233 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route110/scripts.pory"
	end
# 235 "data/maps/Route110/scripts.pory"

# 236 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 237 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 238 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 239 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
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
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 259 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 260 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 261 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 262 "data/maps/Route110/scripts.pory"
	release
# 263 "data/maps/Route110/scripts.pory"
	end
# 264 "data/maps/Route110/scripts.pory"

# 265 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 266 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 267 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 269 "data/maps/Route110/scripts.pory"
	//register_matchcall TRAINER_ISABEL_1
# 270 "data/maps/Route110/scripts.pory"
	release
# 271 "data/maps/Route110/scripts.pory"
	end
# 272 "data/maps/Route110/scripts.pory"

# 273 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 274 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 275 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/Route110/scripts.pory"
	end
# 277 "data/maps/Route110/scripts.pory"

# 278 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 279 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 280 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route110/scripts.pory"
	end
# 282 "data/maps/Route110/scripts.pory"

# 283 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 284 "data/maps/Route110/scripts.pory"
	end
# 285 "data/maps/Route110/scripts.pory"

# 286 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 287 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 288 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route110/scripts.pory"
	end
# 290 "data/maps/Route110/scripts.pory"

# 291 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 292 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 293 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route110/scripts.pory"
	end
# 295 "data/maps/Route110/scripts.pory"

# 296 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 297 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 298 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/Route110/scripts.pory"
	end
# 300 "data/maps/Route110/scripts.pory"

# 301 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 302 "data/maps/Route110/scripts.pory"
	lockall
# 303 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 304 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 306 "data/maps/Route110/scripts.pory"
	releaseall
# 307 "data/maps/Route110/scripts.pory"
	end
# 308 "data/maps/Route110/scripts.pory"

# 309 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 310 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 311 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 312 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 313 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 314 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 315 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 316 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 317 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 318 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 319 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 320 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 321 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 322 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 323 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 324 "data/maps/Route110/scripts.pory"
	end
# 325 "data/maps/Route110/scripts.pory"

# 326 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 327 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 328 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 329 "data/maps/Route110/scripts.pory"
	end
# 330 "data/maps/Route110/scripts.pory"

# 331 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 332 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 333 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 334 "data/maps/Route110/scripts.pory"
	end
# 335 "data/maps/Route110/scripts.pory"

# 336 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 337 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 338 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 339 "data/maps/Route110/scripts.pory"
	end
# 340 "data/maps/Route110/scripts.pory"

# 341 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 342 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 343 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 344 "data/maps/Route110/scripts.pory"
	end
# 345 "data/maps/Route110/scripts.pory"

# 346 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 347 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 348 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 349 "data/maps/Route110/scripts.pory"
	end
# 350 "data/maps/Route110/scripts.pory"

# 351 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 352 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 353 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 354 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 355 "data/maps/Route110/scripts.pory"
	return
# 356 "data/maps/Route110/scripts.pory"

# 357 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 358 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 359 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 360 "data/maps/Route110/scripts.pory"
	end
# 361 "data/maps/Route110/scripts.pory"

# 362 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 363 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 364 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 365 "data/maps/Route110/scripts.pory"
	end
# 366 "data/maps/Route110/scripts.pory"

# 367 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 368 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 369 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 370 "data/maps/Route110/scripts.pory"
	end
# 371 "data/maps/Route110/scripts.pory"

# 372 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 373 "data/maps/Route110/scripts.pory"
	lockall
# 374 "data/maps/Route110/scripts.pory"
	checkplayergender
# 375 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 376 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 377 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 378 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 379 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 380 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 382 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route110/scripts.pory"
	delay 30
# 384 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 385 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 386 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 387 "data/maps/Route110/scripts.pory"
	checkplayergender
# 388 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 389 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 390 "data/maps/Route110/scripts.pory"
	releaseall
# 391 "data/maps/Route110/scripts.pory"
	end
# 392 "data/maps/Route110/scripts.pory"

# 393 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 394 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 395 "data/maps/Route110/scripts.pory"
	return
# 396 "data/maps/Route110/scripts.pory"

# 397 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 398 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 399 "data/maps/Route110/scripts.pory"
	return
# 400 "data/maps/Route110/scripts.pory"

# 401 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 402 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 403 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 404 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 405 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 406 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 407 "data/maps/Route110/scripts.pory"
	end
# 408 "data/maps/Route110/scripts.pory"

# 409 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 410 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 411 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 412 "data/maps/Route110/scripts.pory"
	end
# 413 "data/maps/Route110/scripts.pory"

# 414 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 415 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 416 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 417 "data/maps/Route110/scripts.pory"
	end
# 418 "data/maps/Route110/scripts.pory"

# 419 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 420 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 421 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 422 "data/maps/Route110/scripts.pory"
	end
# 423 "data/maps/Route110/scripts.pory"

# 424 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 425 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 426 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 427 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 428 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 429 "data/maps/Route110/scripts.pory"
	closemessage
# 430 "data/maps/Route110/scripts.pory"
	delay 30
# 431 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 432 "data/maps/Route110/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 433 "data/maps/Route110/scripts.pory"
	waitfanfare
# 434 "data/maps/Route110/scripts.pory"
	closemessage
# 435 "data/maps/Route110/scripts.pory"
	delay 30
# 436 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 437 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 438 "data/maps/Route110/scripts.pory"
	end
# 439 "data/maps/Route110/scripts.pory"

# 440 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 441 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 442 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 443 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 444 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 445 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 446 "data/maps/Route110/scripts.pory"
	end
# 447 "data/maps/Route110/scripts.pory"

# 448 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 449 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 450 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 451 "data/maps/Route110/scripts.pory"
	end
# 452 "data/maps/Route110/scripts.pory"

# 453 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 454 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 455 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 456 "data/maps/Route110/scripts.pory"
	end
# 457 "data/maps/Route110/scripts.pory"

# 458 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 459 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 460 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 461 "data/maps/Route110/scripts.pory"
	end
# 462 "data/maps/Route110/scripts.pory"

# 463 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 464 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 465 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 466 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 467 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 468 "data/maps/Route110/scripts.pory"
	closemessage
# 469 "data/maps/Route110/scripts.pory"
	delay 30
# 470 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 471 "data/maps/Route110/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 472 "data/maps/Route110/scripts.pory"
	waitfanfare
# 473 "data/maps/Route110/scripts.pory"
	closemessage
# 474 "data/maps/Route110/scripts.pory"
	delay 30
# 475 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 476 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 477 "data/maps/Route110/scripts.pory"
	end
# 478 "data/maps/Route110/scripts.pory"

# 479 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 480 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 481 "data/maps/Route110/scripts.pory"
	return
# 482 "data/maps/Route110/scripts.pory"

# 483 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 484 "data/maps/Route110/scripts.pory"
	closemessage
# 485 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 486 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 487 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 488 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 489 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 490 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 491 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 492 "data/maps/Route110/scripts.pory"
	delay 45
# 493 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 494 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 495 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 496 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 497 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 498 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 499 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 500 "data/maps/Route110/scripts.pory"
	releaseall
# 501 "data/maps/Route110/scripts.pory"
	end
# 502 "data/maps/Route110/scripts.pory"

# 503 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 504 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer1
# 505 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 506 "data/maps/Route110/scripts.pory"
	return
# 507 "data/maps/Route110/scripts.pory"

# 508 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 509 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer2
# 510 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 511 "data/maps/Route110/scripts.pory"
	return
# 512 "data/maps/Route110/scripts.pory"

# 513 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 514 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer3
# 515 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 516 "data/maps/Route110/scripts.pory"
	return
# 517 "data/maps/Route110/scripts.pory"

# 518 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 519 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 520 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 521 "data/maps/Route110/scripts.pory"
	return
# 522 "data/maps/Route110/scripts.pory"

# 523 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 524 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 525 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 526 "data/maps/Route110/scripts.pory"
	return
# 527 "data/maps/Route110/scripts.pory"

# 528 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 529 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 530 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 531 "data/maps/Route110/scripts.pory"
	return
# 532 "data/maps/Route110/scripts.pory"

# 533 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 534 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
# 535 "data/maps/Route110/scripts.pory"
	return
# 536 "data/maps/Route110/scripts.pory"

# 537 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 538 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
# 539 "data/maps/Route110/scripts.pory"
	return
# 540 "data/maps/Route110/scripts.pory"

# 541 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 542 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
# 543 "data/maps/Route110/scripts.pory"
	return
# 544 "data/maps/Route110/scripts.pory"

# 545 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 546 "data/maps/Route110/scripts.pory"
	walk_down
# 547 "data/maps/Route110/scripts.pory"
	walk_left
# 548 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 549 "data/maps/Route110/scripts.pory"
	step_end
# 550 "data/maps/Route110/scripts.pory"

# 551 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 552 "data/maps/Route110/scripts.pory"
	walk_down
# 553 "data/maps/Route110/scripts.pory"
	step_end
# 554 "data/maps/Route110/scripts.pory"

# 555 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 556 "data/maps/Route110/scripts.pory"
	walk_down
# 557 "data/maps/Route110/scripts.pory"
	walk_right
# 558 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 559 "data/maps/Route110/scripts.pory"
	step_end
# 560 "data/maps/Route110/scripts.pory"

# 561 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 562 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 570 "data/maps/Route110/scripts.pory"

# 571 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	walk_fast_down
# 580 "data/maps/Route110/scripts.pory"
	step_end
# 581 "data/maps/Route110/scripts.pory"

# 582 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 583 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 591 "data/maps/Route110/scripts.pory"

# 592 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 593 "data/maps/Route110/scripts.pory"
	lockall
# 594 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 595 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 596 "data/maps/Route110/scripts.pory"

# 597 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 598 "data/maps/Route110/scripts.pory"
	lockall
# 599 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 600 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 601 "data/maps/Route110/scripts.pory"

# 602 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 603 "data/maps/Route110/scripts.pory"
	lockall
# 604 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 605 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 606 "data/maps/Route110/scripts.pory"

# 607 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 608 "data/maps/Route110/scripts.pory"
	lockall
# 609 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 610 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 611 "data/maps/Route110/scripts.pory"

# 612 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 613 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 614 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchEntrance
# 615 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 616 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 617 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 618 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 619 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 620 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 621 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 622 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 623 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 624 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 625 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 626 "data/maps/Route110/scripts.pory"
	closemessage
# 627 "data/maps/Route110/scripts.pory"
	delay 20
# 628 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 629 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 630 "data/maps/Route110/scripts.pory"
	delay 10
# 631 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 632 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 633 "data/maps/Route110/scripts.pory"
	delay 20
# 634 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 635 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 636 "data/maps/Route110/scripts.pory"
	delay 30
# 637 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 638 "data/maps/Route110/scripts.pory"
	closemessage
# 639 "data/maps/Route110/scripts.pory"
	delay 30
# 640 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 641 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 642 "data/maps/Route110/scripts.pory"
	waitfanfare
# 643 "data/maps/Route110/scripts.pory"
	closemessage
# 644 "data/maps/Route110/scripts.pory"
	delay 30
# 645 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 646 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 647 "data/maps/Route110/scripts.pory"
	closemessage
# 648 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 649 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 650 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 651 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 652 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 653 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 654 "data/maps/Route110/scripts.pory"
	releaseall
# 655 "data/maps/Route110/scripts.pory"
	end
# 656 "data/maps/Route110/scripts.pory"

# 657 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 658 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 659 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 660 "data/maps/Route110/scripts.pory"
	return
# 661 "data/maps/Route110/scripts.pory"

# 662 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 663 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 664 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route110/scripts.pory"
	return
# 666 "data/maps/Route110/scripts.pory"

# 667 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 668 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer3
# 669 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 670 "data/maps/Route110/scripts.pory"
	return
# 671 "data/maps/Route110/scripts.pory"

# 672 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 673 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 674 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 675 "data/maps/Route110/scripts.pory"
	return
# 676 "data/maps/Route110/scripts.pory"

# 677 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 678 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 679 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 680 "data/maps/Route110/scripts.pory"
	return
# 681 "data/maps/Route110/scripts.pory"

# 682 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 683 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit2
# 684 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 685 "data/maps/Route110/scripts.pory"
	return
# 686 "data/maps/Route110/scripts.pory"

# 687 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 688 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit3
# 689 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 690 "data/maps/Route110/scripts.pory"
	return
# 691 "data/maps/Route110/scripts.pory"

# 692 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 693 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit4
# 694 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 695 "data/maps/Route110/scripts.pory"
	return
# 696 "data/maps/Route110/scripts.pory"

# 697 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 698 "data/maps/Route110/scripts.pory"
	walk_down
# 699 "data/maps/Route110/scripts.pory"
	walk_down
# 700 "data/maps/Route110/scripts.pory"
	walk_down
# 701 "data/maps/Route110/scripts.pory"
	step_end
# 702 "data/maps/Route110/scripts.pory"

# 703 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 704 "data/maps/Route110/scripts.pory"
	walk_down
# 705 "data/maps/Route110/scripts.pory"
	walk_left
# 706 "data/maps/Route110/scripts.pory"
	walk_left
# 707 "data/maps/Route110/scripts.pory"
	walk_down
# 708 "data/maps/Route110/scripts.pory"
	step_end
# 709 "data/maps/Route110/scripts.pory"

# 710 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 711 "data/maps/Route110/scripts.pory"
	walk_down
# 712 "data/maps/Route110/scripts.pory"
	walk_left
# 713 "data/maps/Route110/scripts.pory"
	walk_down
# 714 "data/maps/Route110/scripts.pory"
	step_end
# 715 "data/maps/Route110/scripts.pory"

# 716 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 717 "data/maps/Route110/scripts.pory"
	walk_down
# 718 "data/maps/Route110/scripts.pory"
	walk_down
# 719 "data/maps/Route110/scripts.pory"
	step_end
# 720 "data/maps/Route110/scripts.pory"

# 721 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 722 "data/maps/Route110/scripts.pory"
	walk_down
# 723 "data/maps/Route110/scripts.pory"
	walk_right
# 724 "data/maps/Route110/scripts.pory"
	walk_down
# 725 "data/maps/Route110/scripts.pory"
	step_end
# 726 "data/maps/Route110/scripts.pory"

# 727 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 728 "data/maps/Route110/scripts.pory"
	walk_up
# 729 "data/maps/Route110/scripts.pory"
	walk_up
# 730 "data/maps/Route110/scripts.pory"
	walk_right
# 731 "data/maps/Route110/scripts.pory"
	walk_up
# 732 "data/maps/Route110/scripts.pory"
	walk_up
# 733 "data/maps/Route110/scripts.pory"
	walk_up
# 734 "data/maps/Route110/scripts.pory"
	step_end
# 735 "data/maps/Route110/scripts.pory"

# 736 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 737 "data/maps/Route110/scripts.pory"
	walk_up
# 738 "data/maps/Route110/scripts.pory"
	walk_up
# 739 "data/maps/Route110/scripts.pory"
	walk_up
# 740 "data/maps/Route110/scripts.pory"
	walk_up
# 741 "data/maps/Route110/scripts.pory"
	walk_up
# 742 "data/maps/Route110/scripts.pory"
	step_end
# 743 "data/maps/Route110/scripts.pory"

# 744 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 745 "data/maps/Route110/scripts.pory"
	walk_up
# 746 "data/maps/Route110/scripts.pory"
	walk_up
# 747 "data/maps/Route110/scripts.pory"
	walk_up
# 748 "data/maps/Route110/scripts.pory"
	walk_up
# 749 "data/maps/Route110/scripts.pory"
	walk_up
# 750 "data/maps/Route110/scripts.pory"
	step_end
# 751 "data/maps/Route110/scripts.pory"

# 752 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 753 "data/maps/Route110/scripts.pory"
	walk_up
# 754 "data/maps/Route110/scripts.pory"
	walk_up
# 755 "data/maps/Route110/scripts.pory"
	walk_up
# 756 "data/maps/Route110/scripts.pory"
	walk_up
# 757 "data/maps/Route110/scripts.pory"
	walk_up
# 758 "data/maps/Route110/scripts.pory"
	step_end
# 759 "data/maps/Route110/scripts.pory"

# 760 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 761 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 762 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 763 "data/maps/Route110/scripts.pory"

# 764 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 765 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 766 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 767 "data/maps/Route110/scripts.pory"

# 768 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 769 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 770 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 771 "data/maps/Route110/scripts.pory"

# 772 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 773 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 774 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 775 "data/maps/Route110/scripts.pory"

# 776 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 777 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 778 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 779 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 780 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 781 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 782 "data/maps/Route110/scripts.pory"

# 783 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 784 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 785 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 786 "data/maps/Route110/scripts.pory"

# 787 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 788 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 789 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 790 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 791 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
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
	.string "Have you been raising your POKéMON?\n"
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
	.string "Good enough!\n"
# 817 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 818 "data/maps/Route110/scripts.pory"

# 819 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 820 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 821 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 822 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 823 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 824 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 825 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 826 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 827 "data/maps/Route110/scripts.pory"

# 828 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 829 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 830 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 831 "data/maps/Route110/scripts.pory"

# 832 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 833 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 834 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 835 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 836 "data/maps/Route110/scripts.pory"

# 837 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 838 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 839 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 840 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
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
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 848 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 849 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 850 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 851 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 852 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 853 "data/maps/Route110/scripts.pory"

# 854 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 855 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 856 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 857 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 858 "data/maps/Route110/scripts.pory"

# 859 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 860 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 861 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 862 "data/maps/Route110/scripts.pory"

# 863 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 864 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 865 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 866 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 867 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 868 "data/maps/Route110/scripts.pory"

# 869 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 870 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 871 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 872 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 873 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 874 "data/maps/Route110/scripts.pory"

# 875 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 876 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 877 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 878 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 879 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 880 "data/maps/Route110/scripts.pory"

# 881 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 882 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 883 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 884 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 885 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 886 "data/maps/Route110/scripts.pory"

# 887 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 888 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 889 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 890 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 891 "data/maps/Route110/scripts.pory"

# 892 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 893 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 894 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 895 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 896 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 897 "data/maps/Route110/scripts.pory"

# 898 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 899 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 900 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 901 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 902 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 903 "data/maps/Route110/scripts.pory"

# 904 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 905 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 906 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 907 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 908 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 909 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 910 "data/maps/Route110/scripts.pory"

# 911 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 912 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 913 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 914 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 915 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 916 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 917 "data/maps/Route110/scripts.pory"

# 918 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 919 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 920 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 921 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 922 "data/maps/Route110/scripts.pory"

# 923 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 924 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 925 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 926 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 927 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 928 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 929 "data/maps/Route110/scripts.pory"

# 930 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 931 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 932 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 933 "data/maps/Route110/scripts.pory"

# 934 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 935 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 936 "data/maps/Route110/scripts.pory"

# 937 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 938 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 939 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 940 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 941 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 942 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 943 "data/maps/Route110/scripts.pory"

# 944 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 945 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 946 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 947 "data/maps/Route110/scripts.pory"

# 948 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 949 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 950 "data/maps/Route110/scripts.pory"

# 951 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 952 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 953 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 954 "data/maps/Route110/scripts.pory"

# 955 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 956 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 957 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 958 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 959 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 960 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 961 "data/maps/Route110/scripts.pory"

# 962 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 963 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 964 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 965 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 966 "data/maps/Route110/scripts.pory"

# 967 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 968 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 969 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 970 "data/maps/Route110/scripts.pory"

# 971 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 972 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 973 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 974 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 975 "data/maps/Route110/scripts.pory"

# 976 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 977 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 978 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 979 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 980 "data/maps/Route110/scripts.pory"

# 981 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 982 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 983 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 984 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 985 "data/maps/Route110/scripts.pory"

# 986 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 987 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 988 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 989 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 990 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 991 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 992 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 993 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 994 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 995 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 996 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 997 "data/maps/Route110/scripts.pory"

# 998 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 999 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1000 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 1001 "data/maps/Route110/scripts.pory"

# 1002 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1003 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1004 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1005 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1006 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1007 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"

Route110_EventScript_TryDaleGiftAfterBattle::
# 1020 "data/maps/Route110/scripts.pory"
	lock
# 1021 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route110_EventScript_TryDaleGiftAfterBattle_1
# 1025 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_TryDaleGiftAfterBattle_Text_1, MSGBOX_NPC
# 1026 "data/maps/Route110/scripts.pory"
	waitmessage
# 1027 "data/maps/Route110/scripts.pory"
	giveitem ITEM_HP_UP
# 1028 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 1029 "data/maps/Route110/scripts.pory"
	waitfanfare
# 1030 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_TryDaleGiftAfterBattle_1:
# 1022 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_TryDaleGiftAfterBattle_Text_0, MSGBOX_NPC
	return


Route109_EventScript_FlameChargeCyclist::
# 1036 "data/maps/Route110/scripts.pory"
	lock
# 1037 "data/maps/Route110/scripts.pory"
	faceplayer
# 1038 "data/maps/Route110/scripts.pory"
	msgbox Route109_EventScript_FlameChargeCyclist_Text_0, MSGBOX_DEFAULT
# 1039 "data/maps/Route110/scripts.pory"
	checkitem ITEM_TM_FLAME_CHARGE
# 1040 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route109_EventScript_FlameChargeCyclist_2
Route109_EventScript_FlameChargeCyclist_1:
# 1046 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route109_EventScript_FlameChargeCyclist_2:
# 1041 "data/maps/Route110/scripts.pory"
	msgbox Route109_EventScript_FlameChargeCyclist_Text_1, MSGBOX_DEFAULT
# 1042 "data/maps/Route110/scripts.pory"
	closemessage
# 1043 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_FLAME_CHARGE
# 1044 "data/maps/Route110/scripts.pory"
	waitfanfare
	goto Route109_EventScript_FlameChargeCyclist_1


Route110_EventScript_TryDaleGiftAfterBattle_Text_0:
# 1022 "data/maps/Route110/scripts.pory"
	.string "A little while ago, I fished up some sort\n"
	.string "of Pokémon treat. Didn't need it,\l"
	.string "though.\p"
	.string "If you came a little sooner, I would've\n"
	.string "just given it to you, but I already\l"
	.string "threw it away.$"

Route110_EventScript_TryDaleGiftAfterBattle_Text_1:
# 1025 "data/maps/Route110/scripts.pory"
	.string "I just fished up some kind of medicine\n"
	.string "or treat or something, for Pokémon.\p"
	.string "Mine don't seem interested, so you can\n"
	.string "have it.$"

Route109_EventScript_FlameChargeCyclist_Text_0:
# 1038 "data/maps/Route110/scripts.pory"
	.string "I love racing full speed up and down\n"
	.string "cycling road, with my hair blowing in the\l"
	.string "wind!$"

Route109_EventScript_FlameChargeCyclist_Text_1:
# 1041 "data/maps/Route110/scripts.pory"
	.string "Your Pokémon can race at full speed\n"
	.string "too!$"

Route110_Text_MayHiLetsRegister::
# 1011 "data/maps/Route110/scripts.pory"
	.string "May: Let's register each other in your\n"
	.string "POKéNAV so that we can contact one\l"
	.string "another anytime!$"

Route110_Text_BrendanHiLetsRegister::
# 1015 "data/maps/Route110/scripts.pory"
	.string "Brendan: Let's register each other in\n"
	.string "your POKéNAV so that we can get in\l"
	.string "touch anytime!$"
