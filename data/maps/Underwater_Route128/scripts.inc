# 1 "data/maps/Underwater_Route128/scripts.pory"

# 2 "data/maps/Underwater_Route128/scripts.pory"
Underwater_Route128_MapScripts::
# 3 "data/maps/Underwater_Route128/scripts.pory"
	.byte 0

Underwater_Route128_EventScript_Katelyn::
# 9 "data/maps/Underwater_Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Underwater_Route128_Text_KatelynIntro, Underwater_Route128_Text_KatelynDefeat
# 10 "data/maps/Underwater_Route128/scripts.pory"
	msgbox Underwater_Route128_Text_KatelynPostBattle, MSGBOX_NPC
# 11 "data/maps/Underwater_Route128/scripts.pory"
	release
	end


Underwater_Route128_Text_KatelynIntro::
# 15 "data/maps/Underwater_Route128/scripts.pory"
	.string "The ocean is full of mysteries.\p"
	.string "Are you also excited to explore them?$"

Underwater_Route128_Text_KatelynDefeat::
# 18 "data/maps/Underwater_Route128/scripts.pory"
	.string "Clearly you have what it takes to delve\n"
	.string "deeper than me.$"

Underwater_Route128_Text_KatelynPostBattle::
# 21 "data/maps/Underwater_Route128/scripts.pory"
	.string "You have a keen sense for the unknown!$"
