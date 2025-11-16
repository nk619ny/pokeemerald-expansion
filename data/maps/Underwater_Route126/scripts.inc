# 1 "data/maps/Underwater_Route126/scripts.pory"

# 2 "data/maps/Underwater_Route126/scripts.pory"
Underwater_Route126_MapScripts::
# 3 "data/maps/Underwater_Route126/scripts.pory"
	.byte 0
# 4 "data/maps/Underwater_Route126/scripts.pory"

# 5 "data/maps/Underwater_Route126/scripts.pory"
Route126_EventScript_Nikki::
# 6 "data/maps/Underwater_Route126/scripts.pory"
	trainerbattle_single TRAINER_NIKKI, Route126_Text_NikkiIntro, Route126_Text_NikkiDefeat
# 7 "data/maps/Underwater_Route126/scripts.pory"
	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/Underwater_Route126/scripts.pory"
	end
# 9 "data/maps/Underwater_Route126/scripts.pory"

# 10 "data/maps/Underwater_Route126/scripts.pory"
Route126_EventScript_Brenda::
# 11 "data/maps/Underwater_Route126/scripts.pory"
	trainerbattle_single TRAINER_BRENDA, Route126_Text_BrendaIntro, Route126_Text_BrendaDefeat
# 12 "data/maps/Underwater_Route126/scripts.pory"
	msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/Underwater_Route126/scripts.pory"
	end
# 14 "data/maps/Underwater_Route126/scripts.pory"

# 15 "data/maps/Underwater_Route126/scripts.pory"
Underwater_Route126_EventScript_Leonardo::
# 16 "data/maps/Underwater_Route126/scripts.pory"
	trainerbattle_single TRAINER_LEONARDO, Route126_Text_LeonardoIntro, Route126_Text_LeonardoDefeat
# 17 "data/maps/Underwater_Route126/scripts.pory"
	msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Underwater_Route126/scripts.pory"
	end
# 19 "data/maps/Underwater_Route126/scripts.pory"

# 20 "data/maps/Underwater_Route126/scripts.pory"
Underwater_Route126_EventScript_Dean::
# 21 "data/maps/Underwater_Route126/scripts.pory"
	trainerbattle_single TRAINER_DEAN, Route126_Text_DeanIntro, Route126_Text_DeanDefeat
# 22 "data/maps/Underwater_Route126/scripts.pory"
	msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Underwater_Route126/scripts.pory"
	end

Underwater_Route126_EventScript_DiverBarry::
# 28 "data/maps/Underwater_Route126/scripts.pory"
	trainerbattle_single TRAINER_BARRY, Underwater_Route126_Text_DiverBarryIntro, Underwater_Route126_Text_DiverBarryDefeat, Underwater_Route126_EventScript_ResetDiverMovement
# 29 "data/maps/Underwater_Route126/scripts.pory"
	msgbox Underwater_Route126_Text_DiverBarryPostBattle, MSGBOX_AUTOCLOSE
	end


Underwater_Route126_EventScript_ResetDiverMovement::
	return


Underwater_Route126_Text_DiverBarryIntro::
# 33 "data/maps/Underwater_Route126/scripts.pory"
	.string "Sootopolis City is just ahead!$"

Underwater_Route126_Text_DiverBarryDefeat::
# 36 "data/maps/Underwater_Route126/scripts.pory"
	.string "Wow, you might be as strong as Juan or\n"
	.string "Wallace!$"

Underwater_Route126_Text_DiverBarryPostBattle::
# 39 "data/maps/Underwater_Route126/scripts.pory"
	.string "Growing up in Sootopolis, we all learn to\n"
	.string "dive at a young age.$"
