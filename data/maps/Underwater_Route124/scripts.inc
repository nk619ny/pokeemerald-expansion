# 1 "data/maps/Underwater_Route124/scripts.pory"

# 2 "data/maps/Underwater_Route124/scripts.pory"
Underwater_Route124_MapScripts::
# 3 "data/maps/Underwater_Route124/scripts.pory"
	.byte 0
# 4 "data/maps/Underwater_Route124/scripts.pory"

# 5 "data/maps/Underwater_Route124/scripts.pory"
Underwater_Route124_EventScript_Nolen::
# 6 "data/maps/Underwater_Route124/scripts.pory"
	trainerbattle_single TRAINER_NOLEN, Route125_Text_NolenIntro, Route125_Text_NolenDefeat
# 7 "data/maps/Underwater_Route124/scripts.pory"
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/Underwater_Route124/scripts.pory"
	end
# 9 "data/maps/Underwater_Route124/scripts.pory"

# 10 "data/maps/Underwater_Route124/scripts.pory"
Underwater_Route124_EventScript_Tanya::
# 11 "data/maps/Underwater_Route124/scripts.pory"
	trainerbattle_single TRAINER_TANYA, Route125_Text_TanyaIntro, Route125_Text_TanyaDefeat
# 12 "data/maps/Underwater_Route124/scripts.pory"
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/Underwater_Route124/scripts.pory"
	end
# 14 "data/maps/Underwater_Route124/scripts.pory"

# 15 "data/maps/Underwater_Route124/scripts.pory"
Underwater_Route124_EventScript_Stan::
# 16 "data/maps/Underwater_Route124/scripts.pory"
	trainerbattle_single TRAINER_STAN, Route125_Text_StanIntro, Route125_Text_StanDefeat
# 17 "data/maps/Underwater_Route124/scripts.pory"
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Underwater_Route124/scripts.pory"
	end

Underwater_Route124_EventScript_Isabella::
# 23 "data/maps/Underwater_Route124/scripts.pory"
	trainerbattle_single TRAINER_ISABELLA, Underwater_Route124_Text_IsabellaIntro, Underwater_Route124_Text_IsabellaDefeat
# 24 "data/maps/Underwater_Route124/scripts.pory"
	msgbox Underwater_Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
	end


Underwater_Route124_Text_IsabellaIntro::
# 28 "data/maps/Underwater_Route124/scripts.pory"
	.string "I'm not going to lose to some Trainer\n"
	.string "that needs Pokémon to Dive.$"

Underwater_Route124_Text_IsabellaDefeat::
# 31 "data/maps/Underwater_Route124/scripts.pory"
	.string "Good thing my goggles hide my tears!$"

Underwater_Route124_Text_IsabellaPostBattle::
# 34 "data/maps/Underwater_Route124/scripts.pory"
	.string "You can find lots of interesting things\n"
	.string "on the Ocean floor.$"
