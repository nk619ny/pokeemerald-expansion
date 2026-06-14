# 1 "data/maps/TradeCenter/scripts.pory"

# 2 "data/maps/TradeCenter/scripts.pory"
TradeCenter_MapScripts::
# 3 "data/maps/TradeCenter/scripts.pory"
	.byte 0
# 4 "data/maps/TradeCenter/scripts.pory"

# 5 "data/maps/TradeCenter/scripts.pory"

# 6 "data/maps/TradeCenter/scripts.pory"
Common_Text_PlayerReceivedEevee:
# 7 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} received Eevee!$"
# 8 "data/maps/TradeCenter/scripts.pory"

# 9 "data/maps/TradeCenter/scripts.pory"
Common_Text_PlayerReceivedCosplayPikachu:
# 10 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} received Cosplay Pikachu!$"
# 11 "data/maps/TradeCenter/scripts.pory"

# 12 "data/maps/TradeCenter/scripts.pory"
/*
# 13 "data/maps/TradeCenter/scripts.pory"
script PokemonCenter_2F_BasicMoveTutor1 {
# 14 "data/maps/TradeCenter/scripts.pory"
	lock
# 15 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Fire Punch",1)
# 16 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Ice Punch",2)
# 17 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Dragon Dance",3)
# 18 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT)
# 19 "data/maps/TradeCenter/scripts.pory"
	dynmultistack(0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE)
# 20 "data/maps/TradeCenter/scripts.pory"
	switch(var(VAR_RESULT)) {
# 21 "data/maps/TradeCenter/scripts.pory"
		case 1:
# 22 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_FIRE_PUNCH)
# 23 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Fire Punch")
# 24 "data/maps/TradeCenter/scripts.pory"
		case 2:
# 25 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_ICE_PUNCH)
# 26 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Ice Punch")
# 27 "data/maps/TradeCenter/scripts.pory"
		case 3:
# 28 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_DRAGON_DANCE)
# 29 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Dragon Dance")
# 30 "data/maps/TradeCenter/scripts.pory"
		default:
# 31 "data/maps/TradeCenter/scripts.pory"
			releaseall
# 32 "data/maps/TradeCenter/scripts.pory"
			return
# 33 "data/maps/TradeCenter/scripts.pory"
	}
# 34 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT)
# 35 "data/maps/TradeCenter/scripts.pory"
	special(ChooseMonForMoveTutor)
# 36 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 37 "data/maps/TradeCenter/scripts.pory"
	lock
# 38 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 39 "data/maps/TradeCenter/scripts.pory"
	releaseall
# 40 "data/maps/TradeCenter/scripts.pory"
	return
# 41 "data/maps/TradeCenter/scripts.pory"
}
# 42 "data/maps/TradeCenter/scripts.pory"

# 43 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_FullTutorList {
# 44 "data/maps/TradeCenter/scripts.pory"
	//physical
# 45 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Blaze Kick",1)
# 46 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Body Press",2)
# 47 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Body Slam",3)
# 48 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Bounce",4)
# 49 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Brutal Swing",5)
# 50 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Bug Bite",6)
# 51 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Bulldoze",7)
# 52 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Darkest Lariat",8)
# 53 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Endeavor",9)
# 54 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Explosion",10)
# 55 "data/maps/TradeCenter/scripts.pory"
	False Swipe
# 56 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fire Fang",11)
# 57 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Focus Punch",12)
# 58 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Giga Impact",13)
# 59 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Gyro Ball",14)
# 60 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Hard Press",15)
# 61 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Headbutt",16)
# 62 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Heavy Slam",17)
# 63 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Ice Fang",18)
# 64 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Icicle Spear",19)
# 65 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Iron Tail",20)
# 66 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Lash Out",21)
# 67 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Leaf Blade",22)
# 68 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Low Kick",23)
# 69 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Megahorn",24)
# 70 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Metal Claw",25)
# 71 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Phantom Force",26)
# 72 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Poison Tail",27)
# 73 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Poltergeist",28)
# 74 "data/maps/TradeCenter/scripts.pory"
	Pounce
# 75 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Power Whip",29)
# 76 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Power-Up Punch",30)
# 77 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Razor Shell",31)
# 78 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Retaliate",32)
# 79 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Rock Blast",33)
# 80 "data/maps/TradeCenter/scripts.pory"
	Rock Climb
# 81 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Rollout",34)
# 82 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sand Tomb",35)
# 83 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Secret Power",36)
# 84 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Self-Destruct",37)
# 85 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sky Drop",38)
# 86 "data/maps/TradeCenter/scripts.pory"
	Smart Strike
# 87 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Super Fang",39)
# 88 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Tail Slap",40)
# 89 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Take Down",41)
# 90 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Thunder Fang",42)
# 91 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Trailblaze",43)
# 92 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Triple Axel",44)
# 93 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Upper Hand",45)
# 94 "data/maps/TradeCenter/scripts.pory"

# 95 "data/maps/TradeCenter/scripts.pory"

# 96 "data/maps/TradeCenter/scripts.pory"
   // special
# 97 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Air Cutter",1)
# 98 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Alluring Voice",2)
# 99 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Aura Sphere",3)
# 100 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Blast Burn",4)
# 101 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Brine",5)
# 102 "data/maps/TradeCenter/scripts.pory"
	Burning Jealousy
# 103 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Disarming Voice",6)
# 104 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Dream Eater",7)
# 105 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Echoed Voice",8)
# 106 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Electro Ball",9)
# 107 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Electroweb",10)
# 108 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fire Pledge",11)
# 109 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fire Spin",12)
# 110 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Focus Blast",13)
# 111 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Frenzy Plant",14)
# 112 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Frost Breath",15)
# 113 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Future Sight",16)
# 114 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Grass Pledge",17)
# 115 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Hydro Cannon",18)
# 116 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Incinerate",19)
# 117 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Infestation",20)
# 118 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Magical Leaf",21)
# 119 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Misty Explosion",22)
# 120 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Mud Shot",23)
# 121 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Mud-Slap",24)
# 122 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Mystical Fire",25)
# 123 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Night Shade",26)
# 124 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Pollen Puff",27)
# 125 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psybeam",28)
# 126 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psychic Noise",29)
# 127 "data/maps/TradeCenter/scripts.pory"
	Psycho Boost
# 128 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Round",30)
# 129 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Shock Wave",31)
# 130 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Silver Wind",32)
# 131 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Stored Power",33)
# 132 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Tri Attack",34)
# 133 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Uproar",35)
# 134 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Water Pledge",36)
# 135 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Whirlpool",37)
# 136 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Zap Cannon",38)
# 137 "data/maps/TradeCenter/scripts.pory"

# 138 "data/maps/TradeCenter/scripts.pory"

# 139 "data/maps/TradeCenter/scripts.pory"

# 140 "data/maps/TradeCenter/scripts.pory"

# 141 "data/maps/TradeCenter/scripts.pory"

# 142 "data/maps/TradeCenter/scripts.pory"
    // status/other (alphabetical, numbering restarts at 1)
# 143 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Agility",1)
# 144 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Ally Switch",2)
# 145 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Aurora Veil",3)
# 146 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Charge",4)
# 147 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Coaching",5)
# 148 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Confuse Ray",6)
# 149 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Cosmic Power",7)
# 150 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Curse",8)
# 151 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Dragon Cheer",9)
# 152 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Dragon Dance",10)
# 153 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Electric Terrain",11)
# 154 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Embargo",12)
# 155 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fake Tears",13)
# 156 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Feather Dance",14)
# 157 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Grassy Terrain",15)
# 158 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Gravity",16)
# 159 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Hone Claws",17)
# 160 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Imprison",18)
# 161 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Iron Defense",19)
# 162 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Magic Room",20)
# 163 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Metal Sound",21)
# 164 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Metronome",22)
# 165 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Misty Terrain",23)
# 166 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Nature Power",24)
# 167 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Pain Split",25)
# 168 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psych Up",26)
# 169 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psychic Terrain",27)
# 170 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Quash",28)
# 171 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Rain Dance",29)
# 172 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Recycle",30)
# 173 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sandstorm",31)
# 174 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Scary Face",32)
# 175 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Snatch",33)
# 176 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Snowscape",34)
# 177 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Spikes",35)
# 178 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Spite",36)
# 179 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Stealth Rock",37)
# 180 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sunny Day",38)
# 181 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Swagger",39)
# 182 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Toxic Spikes",40)
# 183 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Trick",41)
# 184 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Venom Drench",42)
# 185 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Wonder Room",43)
# 186 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Work Up",44)
# 187 "data/maps/TradeCenter/scripts.pory"

# 188 "data/maps/TradeCenter/scripts.pory"
    return
# 189 "data/maps/TradeCenter/scripts.pory"
}
# 190 "data/maps/TradeCenter/scripts.pory"

# 191 "data/maps/TradeCenter/scripts.pory"

# 192 "data/maps/TradeCenter/scripts.pory"
*/
# 193 "data/maps/TradeCenter/scripts.pory"

# 194 "data/maps/TradeCenter/scripts.pory"
/*
# 195 "data/maps/TradeCenter/scripts.pory"
script PokemonCenter_2F_BasicMoveTutor2 {
# 196 "data/maps/TradeCenter/scripts.pory"
	lock
# 197 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Power-Up Punch",1)
# 198 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Brutal Swing",2)
# 199 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Stealth Rock",3)
# 200 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT)
# 201 "data/maps/TradeCenter/scripts.pory"
	dynmultistack(0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE)
# 202 "data/maps/TradeCenter/scripts.pory"
	switch(var(VAR_RESULT)) {
# 203 "data/maps/TradeCenter/scripts.pory"
		case 1:
# 204 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_POWER_UP_PUNCH)
# 205 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Power-Up Punch")
# 206 "data/maps/TradeCenter/scripts.pory"
		case 2:
# 207 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_BRUTAL_SWING)
# 208 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Brutal Swing")
# 209 "data/maps/TradeCenter/scripts.pory"
		case 3:
# 210 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_STEALTH_ROCK)
# 211 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Stealth Rock")
# 212 "data/maps/TradeCenter/scripts.pory"
		default:
# 213 "data/maps/TradeCenter/scripts.pory"
			releaseall
# 214 "data/maps/TradeCenter/scripts.pory"
			return
# 215 "data/maps/TradeCenter/scripts.pory"
	}
# 216 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT)
# 217 "data/maps/TradeCenter/scripts.pory"
	special(ChooseMonForMoveTutor)
# 218 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 219 "data/maps/TradeCenter/scripts.pory"
	lock
# 220 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 221 "data/maps/TradeCenter/scripts.pory"
	releaseall
# 222 "data/maps/TradeCenter/scripts.pory"
	return
# 223 "data/maps/TradeCenter/scripts.pory"
}
# 224 "data/maps/TradeCenter/scripts.pory"
*/
# 225 "data/maps/TradeCenter/scripts.pory"

# 226 "data/maps/TradeCenter/scripts.pory"
/*
# 227 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_PhysicalMoves {
# 228 "data/maps/TradeCenter/scripts.pory"
	lock
# 229 "data/maps/TradeCenter/scripts.pory"
	if(flag(FLAG_SORT_TUTOR_ALPHABETICALLY)) {
# 230 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_PhysicalMoves_Alphabetical)
# 231 "data/maps/TradeCenter/scripts.pory"
	}
# 232 "data/maps/TradeCenter/scripts.pory"
	elif(flag(FLAG_SORT_TUTOR_BY_BASE_POWER)) {
# 233 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_PhysicalMoves_ByBasePower)
# 234 "data/maps/TradeCenter/scripts.pory"
	}
# 235 "data/maps/TradeCenter/scripts.pory"
	else {
# 236 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_PhysicalMoves_RecentlyUnlocked)
# 237 "data/maps/TradeCenter/scripts.pory"
	}
# 238 "data/maps/TradeCenter/scripts.pory"
}
# 239 "data/maps/TradeCenter/scripts.pory"

# 240 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_SpecialMoves {
# 241 "data/maps/TradeCenter/scripts.pory"
	lock
# 242 "data/maps/TradeCenter/scripts.pory"
	if(flag(FLAG_SORT_TUTOR_ALPHABETICALLY)) {
# 243 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_SpecialMoves_Alphabetical)
# 244 "data/maps/TradeCenter/scripts.pory"
	}
# 245 "data/maps/TradeCenter/scripts.pory"
	elif(flag(FLAG_SORT_TUTOR_BY_BASE_POWER)) {
# 246 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_SpecialMoves_ByBasePower)
# 247 "data/maps/TradeCenter/scripts.pory"
	}
# 248 "data/maps/TradeCenter/scripts.pory"
	else {
# 249 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_SpecialMoves_RecentlyUnlocked)
# 250 "data/maps/TradeCenter/scripts.pory"
	}
# 251 "data/maps/TradeCenter/scripts.pory"
}
# 252 "data/maps/TradeCenter/scripts.pory"

# 253 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_StatusMoves {
# 254 "data/maps/TradeCenter/scripts.pory"
	lock
# 255 "data/maps/TradeCenter/scripts.pory"
	if(flag(FLAG_SORT_TUTOR_ALPHABETICALLY)) {
# 256 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_StatusMoves_Alphabetical)
# 257 "data/maps/TradeCenter/scripts.pory"
	}
# 258 "data/maps/TradeCenter/scripts.pory"
	elif(flag(FLAG_SORT_TUTOR_BY_BASE_POWER)) {
# 259 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_StatusMoves_ByBasePower)
# 260 "data/maps/TradeCenter/scripts.pory"
	}
# 261 "data/maps/TradeCenter/scripts.pory"
	else {
# 262 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_StatusMoves_RecentlyUnlocked)
# 263 "data/maps/TradeCenter/scripts.pory"
	}
# 264 "data/maps/TradeCenter/scripts.pory"
}
# 265 "data/maps/TradeCenter/scripts.pory"

# 266 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_PhysicalMoves_ByBasePower {
# 267 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 268 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_PhysicalMoves_Alphabetical)
# 269 "data/maps/TradeCenter/scripts.pory"
}
# 270 "data/maps/TradeCenter/scripts.pory"

# 271 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_PhysicalMoves_RecentlyUnlocked {
# 272 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 273 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_PhysicalMoves_Alphabetical)
# 274 "data/maps/TradeCenter/scripts.pory"
}
# 275 "data/maps/TradeCenter/scripts.pory"

# 276 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_SpecialMoves_ByBasePower {
# 277 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 278 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_SpecialMoves_Alphabetical)
# 279 "data/maps/TradeCenter/scripts.pory"
}
# 280 "data/maps/TradeCenter/scripts.pory"

# 281 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_SpecialMoves_RecentlyUnlocked {
# 282 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 283 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_SpecialMoves_Alphabetical)
# 284 "data/maps/TradeCenter/scripts.pory"
}
# 285 "data/maps/TradeCenter/scripts.pory"

# 286 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_StatusMoves_ByBasePower {
# 287 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 288 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_StatusMoves_Alphabetical)
# 289 "data/maps/TradeCenter/scripts.pory"
}
# 290 "data/maps/TradeCenter/scripts.pory"

# 291 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_StatusMoves_RecentlyUnlocked {
# 292 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 293 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_StatusMoves_Alphabetical)
# 294 "data/maps/TradeCenter/scripts.pory"
}
# 295 "data/maps/TradeCenter/scripts.pory"
*/

Common_EventScript_LevelCapUpdate::
# 301 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_CAP
# 302 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_LevelCapUpdate_Text_0, MSGBOX_DEFAULT
# 303 "data/maps/TradeCenter/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 304 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
# 305 "data/maps/TradeCenter/scripts.pory"
	closemessage
	return


Common_EventScript_SetStartingFlagStates::
# 310 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_BY_DEFAULT
# 311 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_CABLE_CAR_ATTENDANT
# 312 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 313 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 314 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_TRAINER_HILL_AUDIENCE
# 315 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 316 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_ROUTE_120_STEVEN
# 317 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
# 318 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_FUSION_TUTOR
# 319 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 320 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


Common_EventScript_ApplyHandicap::
# 325 "data/maps/TradeCenter/scripts.pory"
	switch VAR_LEVEL_HANDICAP
# 326 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_ApplyHandicap_3
# 328 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_ApplyHandicap_4
# 330 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_ApplyHandicap_5
# 332 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_ApplyHandicap_6
# 334 "data/maps/TradeCenter/scripts.pory"
	case 4, Common_EventScript_ApplyHandicap_7
# 336 "data/maps/TradeCenter/scripts.pory"
	case 5, Common_EventScript_ApplyHandicap_8
# 338 "data/maps/TradeCenter/scripts.pory"
	case 6, Common_EventScript_ApplyHandicap_9
# 340 "data/maps/TradeCenter/scripts.pory"
	case 7, Common_EventScript_ApplyHandicap_10
# 342 "data/maps/TradeCenter/scripts.pory"
	case 8, Common_EventScript_ApplyHandicap_11
# 344 "data/maps/TradeCenter/scripts.pory"
	case 9, Common_EventScript_ApplyHandicap_12
# 346 "data/maps/TradeCenter/scripts.pory"
	case 10, Common_EventScript_ApplyHandicap_13
	return

Common_EventScript_ApplyHandicap_1:
# 351 "data/maps/TradeCenter/scripts.pory"
	compare VAR_LEVEL_CAP, 100
	goto_if_gt Common_EventScript_ApplyHandicap_16
Common_EventScript_ApplyHandicap_15:
	return

Common_EventScript_ApplyHandicap_3:
	return

Common_EventScript_ApplyHandicap_4:
# 329 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 1
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_5:
# 331 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 2
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_6:
# 333 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 3
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_7:
# 335 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 4
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_8:
# 337 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 5
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_9:
# 339 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 6
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_10:
# 341 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 7
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_11:
# 343 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 8
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_12:
# 345 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 9
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_13:
# 347 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 10
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_16:
# 352 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 100
	goto Common_EventScript_ApplyHandicap_15


# 365 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkDownOneStep:
# 366 "data/maps/TradeCenter/scripts.pory"
	walk_down
	step_end

# 369 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkUpOneStep:
# 370 "data/maps/TradeCenter/scripts.pory"
	walk_up
	step_end

# 373 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkLeftOneStep:
# 374 "data/maps/TradeCenter/scripts.pory"
	walk_left
	step_end

# 377 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkRightOneStep:
# 378 "data/maps/TradeCenter/scripts.pory"
	walk_right
	step_end

# 381 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkDownOneStepFast:
# 382 "data/maps/TradeCenter/scripts.pory"
	walk_fast_down
	step_end

# 385 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkUpOneStepFast:
# 386 "data/maps/TradeCenter/scripts.pory"
	walk_fast_up
	step_end

Common_EventScript_SetFlashTest::
# 390 "data/maps/TradeCenter/scripts.pory"
	lock
# 391 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_SetFlashTest_Text_0, MSGBOX_YESNO
# 392 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_SetFlashTest_2
# 395 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_SetFlashTest_3
Common_EventScript_SetFlashTest_1:
# 398 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

Common_EventScript_SetFlashTest_2:
# 393 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
	goto Common_EventScript_SetFlashTest_1

Common_EventScript_SetFlashTest_3:
# 396 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_RECEIVED_HM_FLASH
	goto Common_EventScript_SetFlashTest_1


Common_EventScript_CheckIfHideoutsComplete::
# 403 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, Common_EventScript_CheckIfHideoutsComplete_4
Common_EventScript_CheckIfHideoutsComplete_3:
# 410 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 66
Common_EventScript_CheckIfHideoutsComplete_1:
	return

Common_EventScript_CheckIfHideoutsComplete_2:
# 404 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_BOTH_HIDEOUTS_COMPLETE
# 405 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 68
# 406 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
# 407 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_RemoveOptionalItems7PreSurf
	goto Common_EventScript_CheckIfHideoutsComplete_1

Common_EventScript_CheckIfHideoutsComplete_4:
# 403 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, Common_EventScript_CheckIfHideoutsComplete_2
	goto Common_EventScript_CheckIfHideoutsComplete_3


# 415 "data/maps/TradeCenter/scripts.pory"
Common_Movement_EliteFourNewEntranceLeft:
# 417 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 417 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 418 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 418 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 418 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 418 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 419 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 419 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 420 "data/maps/TradeCenter/scripts.pory"
	walk_in_place_fast_up
	step_end

# 423 "data/maps/TradeCenter/scripts.pory"
Common_Movement_EliteFourNewEntranceRight:
# 425 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 425 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 426 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 426 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 426 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 426 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 427 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 427 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 428 "data/maps/TradeCenter/scripts.pory"
	walk_in_place_fast_up
	step_end

Common_EventScript_CheckIfEliteFourComplete::
# 433 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, Common_EventScript_CheckIfEliteFourComplete_5
Common_EventScript_CheckIfEliteFourComplete_3:
# 437 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_ALL_ELITE_FOUR_BEATEN
Common_EventScript_CheckIfEliteFourComplete_1:
	return

Common_EventScript_CheckIfEliteFourComplete_2:
# 434 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ALL_ELITE_FOUR_BEATEN
	goto Common_EventScript_CheckIfEliteFourComplete_1

Common_EventScript_CheckIfEliteFourComplete_4:
# 433 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, Common_EventScript_CheckIfEliteFourComplete_8
	goto Common_EventScript_CheckIfEliteFourComplete_3

Common_EventScript_CheckIfEliteFourComplete_5:
# 433 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, Common_EventScript_CheckIfEliteFourComplete_4
	goto Common_EventScript_CheckIfEliteFourComplete_3

Common_EventScript_CheckIfEliteFourComplete_8:
# 433 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, Common_EventScript_CheckIfEliteFourComplete_2
	goto Common_EventScript_CheckIfEliteFourComplete_3


MauvilleCity_EventScript_Temporary::
# 443 "data/maps/TradeCenter/scripts.pory"
	lock
# 500 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScipt_CheckForBerryTreeEncounter::
# 505 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_PREVENT_WILD_ENCOUNTERS, Common_EventScipt_CheckForBerryTreeEncounter_1
# 509 "data/maps/TradeCenter/scripts.pory"
	random 100
# 510 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_lt Common_EventScipt_CheckForBerryTreeEncounter_4
	return

Common_EventScipt_CheckForBerryTreeEncounter_1:
	return

Common_EventScipt_CheckForBerryTreeEncounter_4:
# 511 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounter
	return


Common_EventScript_BerryTreeEncounter::
# 520 "data/maps/TradeCenter/scripts.pory"
	lock
# 521 "data/maps/TradeCenter/scripts.pory"
	switch VAR_0x8004
# 522 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_SPROUTED, Common_EventScript_BerryTreeEncounter_3
# 528 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_TALLER, Common_EventScript_BerryTreeEncounter_4
# 534 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_FLOWERING, Common_EventScript_BerryTreeEncounter_5
# 540 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_BERRIES, Common_EventScript_BerryTreeEncounter_6
# 547 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_BerryTreeEncounter_1:
# 550 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_BerryTreeEncounter_3:
# 523 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeSproutedEncounter
# 524 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeSproutEncounter, MSGBOX_DEFAULT
# 525 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 526 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 527 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1

Common_EventScript_BerryTreeEncounter_4:
# 529 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeTallEncounter
# 530 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeTallEncounter, MSGBOX_DEFAULT
# 531 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 532 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 533 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1

Common_EventScript_BerryTreeEncounter_5:
# 535 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeFlowersEncounter
# 536 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeFlowersEncounter, MSGBOX_DEFAULT
# 537 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 538 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 539 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1

Common_EventScript_BerryTreeEncounter_6:
# 541 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeBerriesEncounter
# 542 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeBerriesEncounter, MSGBOX_DEFAULT
# 543 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 544 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 545 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1


Common_EventScript_BerryTreeSproutedEncounter::
# 556 "data/maps/TradeCenter/scripts.pory"
	random 100
# 557 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_2
# 560 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 28
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_3
# 563 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 42
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_4
# 566 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 56
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_5
# 569 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_6
# 573 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_7
# 576 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_8
# 579 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_9
# 583 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeSproutedEncounter_19
# 587 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
Common_EventScript_BerryTreeSproutedEncounter_1:
	return

Common_EventScript_BerryTreeSproutedEncounter_2:
# 558 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CATERPIE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_3:
# 561 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_WEEDLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_4:
# 564 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_WURMPLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_5:
# 567 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_BURMY, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_6:
# 571 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeSproutedEncounter_Scatterbug
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_7:
# 574 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_LEDYBA, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_8:
# 577 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SPINARAK, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_9:
# 580 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SHROOMISH, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_19:
# 584 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_HERACROSS, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1


Common_EventScript_BerryTreeTallEncounter::
# 594 "data/maps/TradeCenter/scripts.pory"
	random 100
# 595 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_2
# 598 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 28
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_3
# 601 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 42
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_4
# 604 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 56
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_5
# 607 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_6
# 610 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_7
# 613 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_8
# 616 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_9
# 620 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeTallEncounter_19
# 624 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
Common_EventScript_BerryTreeTallEncounter_1:
	return

Common_EventScript_BerryTreeTallEncounter_2:
# 596 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SPEAROW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_3:
# 599 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_HOOTHOOT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_4:
# 602 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_TAILLOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_5:
# 605 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_STARLY, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_6:
# 608 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PIKIPEK, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_7:
# 611 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_VENONAT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_8:
# 614 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_9:
# 617 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SLAKOTH, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_19:
# 621 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_EMOLGA, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1


Common_EventScript_BerryTreeFlowersEncounter::
# 631 "data/maps/TradeCenter/scripts.pory"
	random 100
# 632 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_2
# 635 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_3
# 638 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_4
# 641 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 60
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_5
# 644 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_6
# 647 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_7
# 650 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_8
# 654 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_9
# 663 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeFlowersEncounter_22
# 667 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
Common_EventScript_BerryTreeFlowersEncounter_1:
	return

Common_EventScript_BerryTreeFlowersEncounter_2:
# 633 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_COMBEE, 12, ITEM_HONEY
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_3:
# 636 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CHERUBI, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_4:
# 639 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CUTIEFLY, 12, ITEM_HONEY
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_5:
# 642 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PINECO, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_6:
# 645 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_EXEGGCUTE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_7:
# 648 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SEEDOT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_8:
# 651 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeFlowersEncounterFlabebe
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_9:
# 655 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeFlowersEncounter_19
# 659 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_19:
# 656 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_ILLUMISE, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_22:
# 664 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_VOLBEAT, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1


Common_EventScript_BerryTreeBerriesEncounter::
# 674 "data/maps/TradeCenter/scripts.pory"
	random 100
# 675 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_2
# 678 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_3
# 681 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 60
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_4
# 684 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_5
# 687 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_6
# 690 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_7
# 693 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_8
# 697 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_MUNCHLAX, 12, ITEM_BERRY_JUICE
Common_EventScript_BerryTreeBerriesEncounter_1:
	return

Common_EventScript_BerryTreeBerriesEncounter_2:
# 676 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CRABRAWLER, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_3:
# 679 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SKWOVET, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_4:
# 682 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_AIPOM, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_5:
# 685 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PANSAGE, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_6:
# 688 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PANSEAR, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_7:
# 691 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PANPOUR, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_8:
# 694 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_APPLIN, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1


Common_EventScript_BerryTreeSproutedEncounter_Scatterbug::
# 703 "data/maps/TradeCenter/scripts.pory"
	random 20
# 704 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 705 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_3
# 707 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_4
# 709 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_5
# 711 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_6
# 713 "data/maps/TradeCenter/scripts.pory"
	case 4, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_7
# 715 "data/maps/TradeCenter/scripts.pory"
	case 5, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_8
# 717 "data/maps/TradeCenter/scripts.pory"
	case 6, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_9
# 719 "data/maps/TradeCenter/scripts.pory"
	case 7, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_10
# 721 "data/maps/TradeCenter/scripts.pory"
	case 8, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_11
# 723 "data/maps/TradeCenter/scripts.pory"
	case 9, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_12
# 725 "data/maps/TradeCenter/scripts.pory"
	case 10, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_13
# 727 "data/maps/TradeCenter/scripts.pory"
	case 11, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_14
# 729 "data/maps/TradeCenter/scripts.pory"
	case 12, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_15
# 731 "data/maps/TradeCenter/scripts.pory"
	case 13, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_16
# 733 "data/maps/TradeCenter/scripts.pory"
	case 14, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_17
# 735 "data/maps/TradeCenter/scripts.pory"
	case 15, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_18
# 737 "data/maps/TradeCenter/scripts.pory"
	case 16, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_19
# 739 "data/maps/TradeCenter/scripts.pory"
	case 17, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_20
# 741 "data/maps/TradeCenter/scripts.pory"
	case 18, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_21
# 743 "data/maps/TradeCenter/scripts.pory"
	case 19, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_22
Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1:
	return

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_3:
# 706 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_ICY_SNOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_4:
# 708 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_POLAR, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_5:
# 710 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_TUNDRA, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_6:
# 712 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_CONTINENTAL, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_7:
# 714 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_GARDEN, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_8:
# 716 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_ELEGANT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_9:
# 718 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_MEADOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_10:
# 720 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_MODERN, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_11:
# 722 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_MARINE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_12:
# 724 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_ARCHIPELAGO, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_13:
# 726 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_HIGH_PLAINS, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_14:
# 728 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_SANDSTORM, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_15:
# 730 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_RIVER, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_16:
# 732 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_MONSOON, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_17:
# 734 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_SAVANNA, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_18:
# 736 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_SUN, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_19:
# 738 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_OCEAN, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_20:
# 740 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_JUNGLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_21:
# 742 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_FANCY, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_22:
# 744 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_POKEBALL, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1


Common_EventScript_BerryTreeEncounterFled::
# 750 "data/maps/TradeCenter/scripts.pory"
	lock
# 751 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_BerryTreeEncounterFled_Text_0, MSGBOX_DEFAULT
# 752 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 753 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 754 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_BerryTreeFlowersEncounterFlabebe::
# 775 "data/maps/TradeCenter/scripts.pory"
	random 4
# 776 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 777 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_BerryTreeFlowersEncounterFlabebe_3
# 779 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_BerryTreeFlowersEncounterFlabebe_4
# 781 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_BerryTreeFlowersEncounterFlabebe_5
# 783 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_BerryTreeFlowersEncounterFlabebe_6
# 786 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_WHITE, 12, ITEM_NONE
Common_EventScript_BerryTreeFlowersEncounterFlabebe_1:
	return

Common_EventScript_BerryTreeFlowersEncounterFlabebe_3:
# 778 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_RED, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1

Common_EventScript_BerryTreeFlowersEncounterFlabebe_4:
# 780 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_BLUE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1

Common_EventScript_BerryTreeFlowersEncounterFlabebe_5:
# 782 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_YELLOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1

Common_EventScript_BerryTreeFlowersEncounterFlabebe_6:
# 784 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_ORANGE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1


Common_EventScript_RemoveOptionalItems0::
# 792 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 794 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_X_ACCURACY
# 795 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_NORTH_NEW
# 796 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE
# 798 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE
# 799 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL
# 800 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION
# 803 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_PETALBURG_WOODS_PARALYZE_HEAL
# 804 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_POKE_BALL
	return


Common_EventScript_RemoveOptionalItems1::
# 809 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
# 810 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL
# 811 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_ETHER
# 812 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE
# 813 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL
# 814 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1
# 815 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2
# 816 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_HAUNTED_MANOR_1F_HP_UP
# 817 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_HAUNTED_MANOR_1F_PP_MAX
# 818 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_110_RARE_CANDY
	return


Common_EventScript_RemoveOptionalItems2::
# 823 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_110_ELIXIR
# 824 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL
# 825 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE
# 826 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_110_DIRE_HIT
# 827 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_103_PP_UP
# 828 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_103_GUARD_SPEC
# 829 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE
# 830 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_118_VITAMIN
# 831 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MAUVILLE_CITY_X_SPEED
# 832 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_117_REPEL
# 833 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_117_GREAT_BALL
# 834 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_117_REVIVE
# 835 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_HP_UP
# 836 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES
# 837 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_ELIXIR
# 838 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_PETALBURG_WOODS_X_ATTACK
# 839 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL
# 840 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_1_QUICK_CLAW
	return


Common_EventScript_RemoveOptionalItems3::
# 846 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_HP_UP
# 847 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_CARBOS
# 848 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_SUPER_REPEL
# 849 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_113_TM_DOUBLE_TEAM
# 850 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_113_ETHER
# 851 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET
# 852 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_MAX_ETHER
# 853 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_HYPER_POTION
# 854 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_ENERGY_POWDER
# 855 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_RARE_CANDY
# 856 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_114_REVIVE
# 857 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS
# 858 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_PROTEIN
# 859 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL
# 860 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_JAGGED_PASS_BURN_HEAL
# 861 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL
# 862 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_135_PROTEIN
# 863 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_135_CALCIUM
# 864 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL
# 865 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL
# 866 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_CHIMNEY_HP_UP
# 867 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_CHIMNEY_CALCIUM
	return


Common_EventScript_RemoveOptionalItems4::
# 872 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_PP_UP
# 874 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_GREAT_BALL
# 875 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_SUPER_POTION
# 876 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_REPEL
# 877 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_ETHER
# 878 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_116_SUPER_POTION
# 879 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_POTION
# 880 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_X_SPECIAL
# 881 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL
# 882 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST
# 883 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY
# 884 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_STARDUST
# 885 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_TM_SANDSTORM
# 886 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ICE_CAVE_IRON
# 887 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL
# 888 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL
	return


Common_EventScript_RemoveOptionalItems5::
# 893 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL
# 894 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_4_LOADED_DICE
	return


Common_EventScript_RemoveOptionalItems6::
# 899 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_118_IRON
# 900 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_118_HYPER_POTION
# 901 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_ULTRA_BALL
# 902 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE
# 903 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_SUPER_REPEL
# 904 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL
# 905 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_HYPER_POTION_1
# 908 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_HYPER_POTION_2
# 909 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_ELIXIR_1
# 910 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_ELIXIR_2
# 912 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_RARE_CANDY
# 913 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_NUGGET
# 914 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1
# 915 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_NEST_BALL
# 916 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_5_HEART_SCALE
# 917 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_HEART_SCALE
# 918 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_HEAL_POWDER
# 919 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_IRON
	return


Common_EventScript_RemoveOptionalItemsSurfing::
# 924 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL
# 925 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE
# 926 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_105_IRON
# 927 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_106_PROTEIN
# 928 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_108_STAR_PIECE
# 929 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY
# 930 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3
# 931 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_109_PP_UP
# 932 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_109_POTION
# 933 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL
# 934 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE
# 935 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_REVIVE
# 936 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ABANDONED_SHIP_VITAMIN
# 937 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_108_VITAMIN
	return


Common_EventScript_RemoveOptionalItems7PreSurf::
# 942 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1
# 943 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_NEST_BALL
# 944 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_REVIVE
# 945 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2
# 946 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_NUGGET
# 947 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_ZINC
# 948 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_HYPER_POTION
# 949 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_FULL_HEAL
# 950 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP
# 951 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_121_CARBOS
# 952 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE
# 953 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET
# 954 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL
# 955 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_121_REVIVE
# 956 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_121_ZINC
# 964 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_CALCIUM
# 965 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_PP_UP
# 966 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_REVIVAL_HERB
# 967 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_PROTEIN
# 968 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL
# 969 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION
# 970 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP
# 971 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY
# 972 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_ELIXIR
# 974 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL
# 975 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL
# 976 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE
# 977 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE
	return


Common_EventScript_RemoveOptionalItems7PostSurf::
# 983 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_125_BIG_PEARL
# 984 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_127_ZINC
# 985 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_127_CARBOS
# 986 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_127_RARE_CANDY
# 987 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2
# 988 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1
# 989 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3
# 990 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_132_PROTEIN
# 991 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_132_RARE_CANDY
# 992 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_133_BIG_PEARL
# 993 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_133_STAR_PIECE
# 994 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_133_MAX_REVIVE
# 995 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_134_CARBOS
# 996 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_134_STAR_PIECE
# 997 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL
# 998 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_6_COVERT_CLOAK
	return


Common_EventScript_RemoveOptionalItems8::
# 1003 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_124_RED_SHARD
# 1004 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_124_YELLOW_SHARD
# 1005 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_124_BLUE_SHARD
# 1006 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_126_GREEN_SHARD
# 1007 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_CALCIUM
# 1008 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_GREEN_SHARD
# 1009 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_2
# 1010 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_1
# 1011 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL
# 1012 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_PEARL
# 1013 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_CARBOS
# 1016 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_BLUE_SHARD
# 1017 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_ULTRA_BALL
# 1018 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_IRON
# 1019 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD
# 1020 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_PEARL
# 1021 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_HEART_SCALE
# 1022 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_STARDUST
# 1023 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL
# 1024 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_128_PROTEIN
# 1026 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_HP_UP
# 1027 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD
# 1028 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_STAR_PIECE
# 1029 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_HEART_SCALE
# 1030 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL
	return


Common_EventScript_BasicMoveTutor::
# 1036 "data/maps/TradeCenter/scripts.pory"
	lock
# 1037 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1038 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_NotReadyYet
# 1039 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_BasicMoveTutor_2
Common_EventScript_BasicMoveTutor_1:
# 1042 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_1
# 1043 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1044 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_SelectMoveCategory
# 1045 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

Common_EventScript_BasicMoveTutor_2:
# 1040 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_BasicMoveTutor_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_BasicMoveTutor_1


MoveTutor_EventScript_NotReadyYet::
# 1050 "data/maps/TradeCenter/scripts.pory"
	lock
# 1051 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_NotReadyYet_Text_0, MSGBOX_DEFAULT
# 1052 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1053 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return


MoveTutor_EventScript_SetSorting::
# 1071 "data/maps/TradeCenter/scripts.pory"
	lock
# 1072 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1073 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_B, MoveTutor_EventScript_SetSorting_2
MoveTutor_EventScript_SetSorting_1:
# 1076 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_B
# 1077 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_1, MSGBOX_DEFAULT
# 1078 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 8, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_EventScript_SetSorting_Text_2, MoveTutor_EventScript_SetSorting_Text_3
# 1079 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1080 "data/maps/TradeCenter/scripts.pory"
	case 0, MoveTutor_EventScript_SetSorting_6
# 1084 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_SetSorting_7
# 1089 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_6, MSGBOX_DEFAULT
MoveTutor_EventScript_SetSorting_4:
# 1091 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1092 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_SetSorting_2:
# 1074 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_0, MSGBOX_DEFAULT
	goto MoveTutor_EventScript_SetSorting_1

MoveTutor_EventScript_SetSorting_6:
# 1081 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_SORT_TUTOR_ALPHABETICALLY
# 1082 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_SORT_TUTOR_BY_BASE_POWER
# 1083 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_4, MSGBOX_DEFAULT
	goto MoveTutor_EventScript_SetSorting_4

MoveTutor_EventScript_SetSorting_7:
# 1085 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_SORT_TUTOR_ALPHABETICALLY
# 1086 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_SORT_TUTOR_BY_BASE_POWER
# 1087 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_5, MSGBOX_DEFAULT
	goto MoveTutor_EventScript_SetSorting_4


PokemonCenter_2F_EventScript_ExplainTutors::
# 1097 "data/maps/TradeCenter/scripts.pory"
	lock
# 1098 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1099 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_A, PokemonCenter_2F_EventScript_ExplainTutors_2
PokemonCenter_2F_EventScript_ExplainTutors_1:
# 1103 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_A
# 1104 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_1, MSGBOX_DEFAULT
# 1105 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonCenter_2F_EventScript_ExplainTutors_Text_2, PokemonCenter_2F_EventScript_ExplainTutors_Text_3, PokemonCenter_2F_EventScript_ExplainTutors_Text_4, PokemonCenter_2F_EventScript_ExplainTutors_Text_5, PokemonCenter_2F_EventScript_ExplainTutors_Text_6, PokemonCenter_2F_EventScript_ExplainTutors_Text_7
# 1106 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1107 "data/maps/TradeCenter/scripts.pory"
	case 0, PokemonCenter_2F_EventScript_ExplainTutors_6
# 1109 "data/maps/TradeCenter/scripts.pory"
	case 1, PokemonCenter_2F_EventScript_ExplainTutors_7
# 1115 "data/maps/TradeCenter/scripts.pory"
	case 2, PokemonCenter_2F_EventScript_ExplainTutors_8
# 1121 "data/maps/TradeCenter/scripts.pory"
	case 3, PokemonCenter_2F_EventScript_ExplainTutors_9
# 1123 "data/maps/TradeCenter/scripts.pory"
	case 4, PokemonCenter_2F_EventScript_ExplainTutors_10
# 1126 "data/maps/TradeCenter/scripts.pory"
	closemessage
PokemonCenter_2F_EventScript_ExplainTutors_4:
# 1128 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

PokemonCenter_2F_EventScript_ExplainTutors_2:
# 1100 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_0, MSGBOX_DEFAULT
# 1101 "data/maps/TradeCenter/scripts.pory"
	closemessage
	goto PokemonCenter_2F_EventScript_ExplainTutors_1

PokemonCenter_2F_EventScript_ExplainTutors_6:
# 1108 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_8, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_7:
# 1110 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_9, MSGBOX_DEFAULT
# 1111 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1112 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PokemonCenter_2F_EventScript_ExplainTutors_12
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_8:
# 1116 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_11, MSGBOX_DEFAULT
# 1117 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1118 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PokemonCenter_2F_EventScript_ExplainTutors_14
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_9:
# 1122 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_13, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_10:
# 1124 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_14, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_12:
# 1113 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_10, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_14:
# 1119 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_12, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4


MoveTutor_EventScript_SelectMoveCategory::
# 1133 "data/maps/TradeCenter/scripts.pory"
	lock
# 1134 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1135 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SelectMoveCategory_Text_0, MSGBOX_DEFAULT
# 1136 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 6, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_EventScript_SelectMoveCategory_Text_1, MoveTutor_EventScript_SelectMoveCategory_Text_2, MoveTutor_EventScript_SelectMoveCategory_Text_3
# 1137 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1138 "data/maps/TradeCenter/scripts.pory"
	case 0, MoveTutor_EventScript_SelectMoveCategory_3
# 1140 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_SelectMoveCategory_4
# 1142 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_SelectMoveCategory_5
# 1145 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_SelectMoveCategory_1:
# 1147 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1148 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_SelectMoveCategory_3:
# 1139 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_GetPhysicalMoveList
	goto MoveTutor_EventScript_SelectMoveCategory_1

MoveTutor_EventScript_SelectMoveCategory_4:
# 1141 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_GetSpecialMoveList
	goto MoveTutor_EventScript_SelectMoveCategory_1

MoveTutor_EventScript_SelectMoveCategory_5:
# 1143 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_GetStatusMoveList
	goto MoveTutor_EventScript_SelectMoveCategory_1


MoveTutor_EventScript_GetPhysicalMoveList::
# 1153 "data/maps/TradeCenter/scripts.pory"
	lock
# 1154 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MoveTutor_EventScript_GetPhysicalMoveList_2
MoveTutor_EventScript_GetPhysicalMoveList_1:
# 1158 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MoveTutor_EventScript_GetPhysicalMoveList_5
MoveTutor_EventScript_GetPhysicalMoveList_4:
# 1162 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MoveTutor_EventScript_GetPhysicalMoveList_8
MoveTutor_EventScript_GetPhysicalMoveList_7:
# 1169 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MoveTutor_EventScript_GetPhysicalMoveList_11
MoveTutor_EventScript_GetPhysicalMoveList_10:
# 1177 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MoveTutor_EventScript_GetPhysicalMoveList_14
MoveTutor_EventScript_GetPhysicalMoveList_13:
# 1188 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MoveTutor_EventScript_GetPhysicalMoveList_17
MoveTutor_EventScript_GetPhysicalMoveList_16:
# 1198 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MoveTutor_EventScript_GetPhysicalMoveList_20
MoveTutor_EventScript_GetPhysicalMoveList_19:
# 1206 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MoveTutor_EventScript_GetPhysicalMoveList_23
MoveTutor_EventScript_GetPhysicalMoveList_22:
# 1214 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetPhysicalMoveList_26
MoveTutor_EventScript_GetPhysicalMoveList_25:
# 1220 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_48, 11
# 1221 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_TeachPhysicalMove
	return

MoveTutor_EventScript_GetPhysicalMoveList_2:
# 1155 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_0, 2
# 1156 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_1, 48
	goto MoveTutor_EventScript_GetPhysicalMoveList_1

MoveTutor_EventScript_GetPhysicalMoveList_5:
# 1159 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_2, 29
# 1160 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_3, 41
	goto MoveTutor_EventScript_GetPhysicalMoveList_4

MoveTutor_EventScript_GetPhysicalMoveList_8:
# 1163 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_4, 10
# 1164 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_5, 25
# 1165 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_6, 31
# 1166 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_7, 23
# 1167 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_8, 49
	goto MoveTutor_EventScript_GetPhysicalMoveList_7

MoveTutor_EventScript_GetPhysicalMoveList_11:
# 1170 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_9, 9
# 1171 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_10, 27
# 1172 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_11, 8
# 1173 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_12, 34
# 1174 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_13, 5
# 1175 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_14, 32
	goto MoveTutor_EventScript_GetPhysicalMoveList_10

MoveTutor_EventScript_GetPhysicalMoveList_14:
# 1178 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_15, 15
# 1179 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_16, 18
# 1180 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_17, 14
# 1181 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_18, 3
# 1182 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_19, 22
# 1183 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_20, 33
# 1184 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_21, 20
# 1185 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_22, 35
# 1186 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_23, 44
	goto MoveTutor_EventScript_GetPhysicalMoveList_13

MoveTutor_EventScript_GetPhysicalMoveList_17:
# 1189 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_24, 16
# 1190 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_25, 40
# 1191 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_26, 36
# 1192 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_27, 45
# 1193 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_28, 1
# 1194 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_29, 4
# 1195 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_30, 39
# 1196 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_31, 47
	goto MoveTutor_EventScript_GetPhysicalMoveList_16

MoveTutor_EventScript_GetPhysicalMoveList_20:
# 1199 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_32, 21
# 1200 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_33, 17
# 1201 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_34, 42
# 1202 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_35, 12
# 1203 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_36, 19
# 1204 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_37, 46
	goto MoveTutor_EventScript_GetPhysicalMoveList_19

MoveTutor_EventScript_GetPhysicalMoveList_23:
# 1207 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_38, 24
# 1208 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_39, 13
# 1209 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_40, 6
# 1210 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_41, 7
# 1211 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_42, 38
# 1212 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_43, 37
	goto MoveTutor_EventScript_GetPhysicalMoveList_22

MoveTutor_EventScript_GetPhysicalMoveList_26:
# 1215 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_44, 43
# 1216 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_45, 26
# 1217 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_46, 28
# 1218 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_47, 30
	goto MoveTutor_EventScript_GetPhysicalMoveList_25


MoveTutor_EventScript_GetSpecialMoveList::
# 1225 "data/maps/TradeCenter/scripts.pory"
	lock
# 1226 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MoveTutor_EventScript_GetSpecialMoveList_2
MoveTutor_EventScript_GetSpecialMoveList_1:
# 1229 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MoveTutor_EventScript_GetSpecialMoveList_5
MoveTutor_EventScript_GetSpecialMoveList_4:
# 1236 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MoveTutor_EventScript_GetSpecialMoveList_8
MoveTutor_EventScript_GetSpecialMoveList_7:
# 1241 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MoveTutor_EventScript_GetSpecialMoveList_11
MoveTutor_EventScript_GetSpecialMoveList_10:
# 1250 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MoveTutor_EventScript_GetSpecialMoveList_14
MoveTutor_EventScript_GetSpecialMoveList_13:
# 1255 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MoveTutor_EventScript_GetSpecialMoveList_17
MoveTutor_EventScript_GetSpecialMoveList_16:
# 1262 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MoveTutor_EventScript_GetSpecialMoveList_20
MoveTutor_EventScript_GetSpecialMoveList_19:
# 1270 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MoveTutor_EventScript_GetSpecialMoveList_23
MoveTutor_EventScript_GetSpecialMoveList_22:
# 1279 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetSpecialMoveList_26
MoveTutor_EventScript_GetSpecialMoveList_25:
# 1285 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_TeachSpecialMove
	return

MoveTutor_EventScript_GetSpecialMoveList_2:
# 1227 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_0, 2
	goto MoveTutor_EventScript_GetSpecialMoveList_1

MoveTutor_EventScript_GetSpecialMoveList_5:
# 1230 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_1, 17
# 1231 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_2, 3
# 1232 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_3, 26
# 1233 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_4, 30
# 1234 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_5, 36
	goto MoveTutor_EventScript_GetSpecialMoveList_4

MoveTutor_EventScript_GetSpecialMoveList_8:
# 1237 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_6, 10
# 1238 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_7, 23
# 1239 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_8, 28
	goto MoveTutor_EventScript_GetSpecialMoveList_7

MoveTutor_EventScript_GetSpecialMoveList_11:
# 1242 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_9, 4
# 1243 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_10, 15
# 1244 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_11, 19
# 1245 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_12, 14
# 1246 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_13, 12
# 1247 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_14, 18
# 1248 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_15, 39
	goto MoveTutor_EventScript_GetSpecialMoveList_10

MoveTutor_EventScript_GetSpecialMoveList_14:
# 1251 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_16, 31
# 1252 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_17, 8
# 1253 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_18, 37
	goto MoveTutor_EventScript_GetSpecialMoveList_13

MoveTutor_EventScript_GetSpecialMoveList_17:
# 1256 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_19, 41
# 1257 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_20, 38
# 1258 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_21, 29
# 1259 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_22, 6
# 1260 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_23, 20
	goto MoveTutor_EventScript_GetSpecialMoveList_16

MoveTutor_EventScript_GetSpecialMoveList_20:
# 1263 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_24, 27
# 1264 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_25, 34
# 1265 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_26, 5
# 1266 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_27, 16
# 1267 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_28, 33
# 1268 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_29, 35
	goto MoveTutor_EventScript_GetSpecialMoveList_19

MoveTutor_EventScript_GetSpecialMoveList_23:
# 1271 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_30, 1
# 1272 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_31, 22
# 1273 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_32, 32
# 1274 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_33, 11
# 1275 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_34, 24
# 1276 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_35, 13
# 1277 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_36, 40
	goto MoveTutor_EventScript_GetSpecialMoveList_22

MoveTutor_EventScript_GetSpecialMoveList_26:
# 1280 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_37, 7
# 1281 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_38, 9
# 1282 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_39, 21
# 1283 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_40, 25
	goto MoveTutor_EventScript_GetSpecialMoveList_25


MoveTutor_EventScript_GetStatusMoveList::
# 1289 "data/maps/TradeCenter/scripts.pory"
	lock
# 1291 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MoveTutor_EventScript_GetStatusMoveList_2
MoveTutor_EventScript_GetStatusMoveList_1:
# 1301 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MoveTutor_EventScript_GetStatusMoveList_5
MoveTutor_EventScript_GetStatusMoveList_4:
# 1304 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MoveTutor_EventScript_GetStatusMoveList_8
MoveTutor_EventScript_GetStatusMoveList_7:
# 1311 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MoveTutor_EventScript_GetStatusMoveList_11
MoveTutor_EventScript_GetStatusMoveList_10:
# 1316 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MoveTutor_EventScript_GetStatusMoveList_14
MoveTutor_EventScript_GetStatusMoveList_13:
# 1324 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MoveTutor_EventScript_GetStatusMoveList_17
MoveTutor_EventScript_GetStatusMoveList_16:
# 1330 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MoveTutor_EventScript_GetStatusMoveList_20
MoveTutor_EventScript_GetStatusMoveList_19:
# 1337 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MoveTutor_EventScript_GetStatusMoveList_23
MoveTutor_EventScript_GetStatusMoveList_22:
# 1345 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MoveTutor_EventScript_GetStatusMoveList_26
MoveTutor_EventScript_GetStatusMoveList_25:
# 1349 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetStatusMoveList_29
MoveTutor_EventScript_GetStatusMoveList_28:
# 1357 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_TeachStatusMove
	return

MoveTutor_EventScript_GetStatusMoveList_2:
# 1292 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_0, 11
# 1293 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_1, 15
# 1294 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_2, 23
# 1295 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_3, 27
# 1296 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_4, 29
# 1297 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_5, 31
# 1298 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_6, 34
# 1299 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_7, 39
	goto MoveTutor_EventScript_GetStatusMoveList_1

MoveTutor_EventScript_GetStatusMoveList_5:
# 1302 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_8, 3
	goto MoveTutor_EventScript_GetStatusMoveList_4

MoveTutor_EventScript_GetStatusMoveList_8:
# 1305 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_9, 2
# 1306 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_10, 7
# 1307 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_11, 16
# 1308 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_12, 18
# 1309 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_13, 20
	goto MoveTutor_EventScript_GetStatusMoveList_7

MoveTutor_EventScript_GetStatusMoveList_11:
# 1312 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_14, 9
# 1313 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_15, 10
# 1314 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_16, 14
	goto MoveTutor_EventScript_GetStatusMoveList_10

MoveTutor_EventScript_GetStatusMoveList_14:
# 1317 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_17, 13
# 1318 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_18, 25
# 1319 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_19, 26
# 1320 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_20, 41
# 1321 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_21, 42
# 1322 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_22, 43
	goto MoveTutor_EventScript_GetStatusMoveList_13

MoveTutor_EventScript_GetStatusMoveList_17:
# 1325 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_23, 8
# 1326 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_24, 19
# 1327 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_25, 37
# 1328 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_26, 44
	goto MoveTutor_EventScript_GetStatusMoveList_16

MoveTutor_EventScript_GetStatusMoveList_20:
# 1331 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_27, 1
# 1332 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_28, 21
# 1333 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_29, 24
# 1334 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_30, 38
# 1335 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_31, 33
	goto MoveTutor_EventScript_GetStatusMoveList_19

MoveTutor_EventScript_GetStatusMoveList_23:
# 1338 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_32, 4
# 1339 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_33, 6
# 1340 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_34, 12
# 1341 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_35, 22
# 1342 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_36, 30
# 1343 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_37, 35
	goto MoveTutor_EventScript_GetStatusMoveList_22

MoveTutor_EventScript_GetStatusMoveList_26:
# 1346 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_38, 5
# 1347 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_39, 17
	goto MoveTutor_EventScript_GetStatusMoveList_25

MoveTutor_EventScript_GetStatusMoveList_29:
# 1350 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_40, 28
# 1351 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_41, 32
# 1352 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_42, 36
# 1353 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_43, 40
# 1354 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_44, 45
	goto MoveTutor_EventScript_GetStatusMoveList_28


MoveTutor_EventScript_TeachPhysicalMove::
# 1362 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 1363 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_SORT_TUTOR_ALPHABETICALLY, MoveTutor_EventScript_TeachPhysicalMove_2
# 1367 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
MoveTutor_EventScript_TeachPhysicalMove_1:
# 1370 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1371 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_TeachPhysicalMove_7
# 1374 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_TeachPhysicalMove_8
# 1377 "data/maps/TradeCenter/scripts.pory"
	case 3, MoveTutor_EventScript_TeachPhysicalMove_9
# 1380 "data/maps/TradeCenter/scripts.pory"
	case 4, MoveTutor_EventScript_TeachPhysicalMove_10
# 1383 "data/maps/TradeCenter/scripts.pory"
	case 5, MoveTutor_EventScript_TeachPhysicalMove_11
# 1386 "data/maps/TradeCenter/scripts.pory"
	case 6, MoveTutor_EventScript_TeachPhysicalMove_12
# 1389 "data/maps/TradeCenter/scripts.pory"
	case 7, MoveTutor_EventScript_TeachPhysicalMove_13
# 1392 "data/maps/TradeCenter/scripts.pory"
	case 8, MoveTutor_EventScript_TeachPhysicalMove_14
# 1395 "data/maps/TradeCenter/scripts.pory"
	case 9, MoveTutor_EventScript_TeachPhysicalMove_15
# 1398 "data/maps/TradeCenter/scripts.pory"
	case 10, MoveTutor_EventScript_TeachPhysicalMove_16
# 1401 "data/maps/TradeCenter/scripts.pory"
	case 11, MoveTutor_EventScript_TeachPhysicalMove_17
# 1404 "data/maps/TradeCenter/scripts.pory"
	case 12, MoveTutor_EventScript_TeachPhysicalMove_18
# 1407 "data/maps/TradeCenter/scripts.pory"
	case 13, MoveTutor_EventScript_TeachPhysicalMove_19
# 1410 "data/maps/TradeCenter/scripts.pory"
	case 14, MoveTutor_EventScript_TeachPhysicalMove_20
# 1413 "data/maps/TradeCenter/scripts.pory"
	case 15, MoveTutor_EventScript_TeachPhysicalMove_21
# 1416 "data/maps/TradeCenter/scripts.pory"
	case 16, MoveTutor_EventScript_TeachPhysicalMove_22
# 1419 "data/maps/TradeCenter/scripts.pory"
	case 17, MoveTutor_EventScript_TeachPhysicalMove_23
# 1422 "data/maps/TradeCenter/scripts.pory"
	case 18, MoveTutor_EventScript_TeachPhysicalMove_24
# 1425 "data/maps/TradeCenter/scripts.pory"
	case 19, MoveTutor_EventScript_TeachPhysicalMove_25
# 1428 "data/maps/TradeCenter/scripts.pory"
	case 20, MoveTutor_EventScript_TeachPhysicalMove_26
# 1431 "data/maps/TradeCenter/scripts.pory"
	case 21, MoveTutor_EventScript_TeachPhysicalMove_27
# 1434 "data/maps/TradeCenter/scripts.pory"
	case 22, MoveTutor_EventScript_TeachPhysicalMove_28
# 1437 "data/maps/TradeCenter/scripts.pory"
	case 23, MoveTutor_EventScript_TeachPhysicalMove_29
# 1440 "data/maps/TradeCenter/scripts.pory"
	case 24, MoveTutor_EventScript_TeachPhysicalMove_30
# 1443 "data/maps/TradeCenter/scripts.pory"
	case 25, MoveTutor_EventScript_TeachPhysicalMove_31
# 1446 "data/maps/TradeCenter/scripts.pory"
	case 26, MoveTutor_EventScript_TeachPhysicalMove_32
# 1449 "data/maps/TradeCenter/scripts.pory"
	case 27, MoveTutor_EventScript_TeachPhysicalMove_33
# 1452 "data/maps/TradeCenter/scripts.pory"
	case 28, MoveTutor_EventScript_TeachPhysicalMove_34
# 1455 "data/maps/TradeCenter/scripts.pory"
	case 29, MoveTutor_EventScript_TeachPhysicalMove_35
# 1458 "data/maps/TradeCenter/scripts.pory"
	case 30, MoveTutor_EventScript_TeachPhysicalMove_36
# 1461 "data/maps/TradeCenter/scripts.pory"
	case 31, MoveTutor_EventScript_TeachPhysicalMove_37
# 1464 "data/maps/TradeCenter/scripts.pory"
	case 32, MoveTutor_EventScript_TeachPhysicalMove_38
# 1467 "data/maps/TradeCenter/scripts.pory"
	case 33, MoveTutor_EventScript_TeachPhysicalMove_39
# 1470 "data/maps/TradeCenter/scripts.pory"
	case 34, MoveTutor_EventScript_TeachPhysicalMove_40
# 1473 "data/maps/TradeCenter/scripts.pory"
	case 35, MoveTutor_EventScript_TeachPhysicalMove_41
# 1476 "data/maps/TradeCenter/scripts.pory"
	case 36, MoveTutor_EventScript_TeachPhysicalMove_42
# 1479 "data/maps/TradeCenter/scripts.pory"
	case 37, MoveTutor_EventScript_TeachPhysicalMove_43
# 1482 "data/maps/TradeCenter/scripts.pory"
	case 38, MoveTutor_EventScript_TeachPhysicalMove_44
# 1485 "data/maps/TradeCenter/scripts.pory"
	case 39, MoveTutor_EventScript_TeachPhysicalMove_45
# 1488 "data/maps/TradeCenter/scripts.pory"
	case 40, MoveTutor_EventScript_TeachPhysicalMove_46
# 1491 "data/maps/TradeCenter/scripts.pory"
	case 41, MoveTutor_EventScript_TeachPhysicalMove_47
# 1494 "data/maps/TradeCenter/scripts.pory"
	case 42, MoveTutor_EventScript_TeachPhysicalMove_48
# 1497 "data/maps/TradeCenter/scripts.pory"
	case 43, MoveTutor_EventScript_TeachPhysicalMove_49
# 1500 "data/maps/TradeCenter/scripts.pory"
	case 44, MoveTutor_EventScript_TeachPhysicalMove_50
# 1503 "data/maps/TradeCenter/scripts.pory"
	case 45, MoveTutor_EventScript_TeachPhysicalMove_51
# 1506 "data/maps/TradeCenter/scripts.pory"
	case 46, MoveTutor_EventScript_TeachPhysicalMove_52
# 1509 "data/maps/TradeCenter/scripts.pory"
	case 47, MoveTutor_EventScript_TeachPhysicalMove_53
# 1512 "data/maps/TradeCenter/scripts.pory"
	case 48, MoveTutor_EventScript_TeachPhysicalMove_54
# 1515 "data/maps/TradeCenter/scripts.pory"
	case 49, MoveTutor_EventScript_TeachPhysicalMove_55
# 1519 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_TeachPhysicalMove_5:
# 1521 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1522 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 1523 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 1524 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1525 "data/maps/TradeCenter/scripts.pory"
	lock
# 1526 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1527 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_TeachPhysicalMove_2:
# 1364 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
	goto MoveTutor_EventScript_TeachPhysicalMove_1

MoveTutor_EventScript_TeachPhysicalMove_7:
# 1372 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAZE_KICK
# 1373 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_28
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_8:
# 1375 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_PRESS
# 1376 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_0
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_9:
# 1378 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 1379 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_18
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_10:
# 1381 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BOUNCE
# 1382 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_29
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_11:
# 1384 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BRUTAL_SWING
# 1385 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_13
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_12:
# 1387 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BUG_BITE
# 1388 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_40
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_13:
# 1390 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLDOZE
# 1391 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_41
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_14:
# 1393 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DARKEST_LARIAT
# 1394 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_11
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_15:
# 1396 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDEAVOR
# 1397 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_9
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_16:
# 1399 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 1400 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_4
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_17:
# 1402 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FALSE_SWIPE
# 1403 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_48
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_18:
# 1405 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 1406 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_35
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_19:
# 1408 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_PUNCH
# 1409 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_39
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_20:
# 1411 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GIGA_IMPACT
# 1412 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_17
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_21:
# 1414 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GYRO_BALL
# 1415 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_15
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_22:
# 1417 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HARD_PRESS
# 1418 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_24
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_23:
# 1420 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HEADBUTT
# 1421 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_33
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_24:
# 1423 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAVY_SLAM
# 1424 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_16
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_25:
# 1426 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 1427 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_36
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_26:
# 1429 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
# 1430 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_21
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_27:
# 1432 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_TAIL
# 1433 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_32
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_28:
# 1435 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_LASH_OUT
# 1436 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_19
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_29:
# 1438 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_BLADE
# 1439 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_7
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_30:
# 1441 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
# 1442 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_38
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_31:
# 1444 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGAHORN
# 1445 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_5
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_32:
# 1447 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_CLAW
# 1448 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_45
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_33:
# 1450 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PHANTOM_FORCE
# 1451 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_10
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_34:
# 1453 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_TAIL
# 1454 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_46
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_35:
# 1456 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POLTERGEIST
# 1457 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_2
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_36:
# 1459 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POUNCE
# 1460 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_47
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_37:
# 1462 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_WHIP
# 1463 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_6
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_38:
# 1465 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_UP_PUNCH
# 1466 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_14
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_39:
# 1468 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RAZOR_SHELL
# 1469 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_20
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_40:
# 1471 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RETALIATE
# 1472 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_12
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_41:
# 1474 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
# 1475 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_22
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_42:
# 1477 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_CLIMB
# 1478 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_26
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_43:
# 1480 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROLLOUT
# 1481 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_43
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_44:
# 1483 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SAND_TOMB
# 1484 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_42
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_45:
# 1486 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SECRET_POWER
# 1487 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_30
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_46:
# 1489 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SELF_DESTRUCT
# 1490 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_25
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_47:
# 1492 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SKY_DROP
# 1493 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_3
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_48:
# 1495 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SMART_STRIKE
# 1496 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_34
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_49:
# 1498 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPER_FANG
# 1499 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_44
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_50:
# 1501 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TAIL_SLAP
# 1502 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_23
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_51:
# 1504 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TAKE_DOWN
# 1505 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_27
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_52:
# 1507 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 1508 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_37
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_53:
# 1510 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRAILBLAZE
# 1511 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_31
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_54:
# 1513 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRIPLE_AXEL
# 1514 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_1
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_55:
# 1516 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_UPPER_HAND
# 1517 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_8
	goto MoveTutor_EventScript_TeachPhysicalMove_5


MoveTutor_EventScript_TeachSpecialMove::
# 1533 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 1534 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_SORT_TUTOR_ALPHABETICALLY, MoveTutor_EventScript_TeachSpecialMove_2
# 1538 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
MoveTutor_EventScript_TeachSpecialMove_1:
# 1541 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1542 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_TeachSpecialMove_7
# 1545 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_TeachSpecialMove_8
# 1548 "data/maps/TradeCenter/scripts.pory"
	case 3, MoveTutor_EventScript_TeachSpecialMove_9
# 1551 "data/maps/TradeCenter/scripts.pory"
	case 4, MoveTutor_EventScript_TeachSpecialMove_10
# 1554 "data/maps/TradeCenter/scripts.pory"
	case 5, MoveTutor_EventScript_TeachSpecialMove_11
# 1557 "data/maps/TradeCenter/scripts.pory"
	case 6, MoveTutor_EventScript_TeachSpecialMove_12
# 1560 "data/maps/TradeCenter/scripts.pory"
	case 7, MoveTutor_EventScript_TeachSpecialMove_13
# 1563 "data/maps/TradeCenter/scripts.pory"
	case 8, MoveTutor_EventScript_TeachSpecialMove_14
# 1566 "data/maps/TradeCenter/scripts.pory"
	case 9, MoveTutor_EventScript_TeachSpecialMove_15
# 1569 "data/maps/TradeCenter/scripts.pory"
	case 10, MoveTutor_EventScript_TeachSpecialMove_16
# 1572 "data/maps/TradeCenter/scripts.pory"
	case 11, MoveTutor_EventScript_TeachSpecialMove_17
# 1575 "data/maps/TradeCenter/scripts.pory"
	case 12, MoveTutor_EventScript_TeachSpecialMove_18
# 1578 "data/maps/TradeCenter/scripts.pory"
	case 13, MoveTutor_EventScript_TeachSpecialMove_19
# 1581 "data/maps/TradeCenter/scripts.pory"
	case 14, MoveTutor_EventScript_TeachSpecialMove_20
# 1584 "data/maps/TradeCenter/scripts.pory"
	case 15, MoveTutor_EventScript_TeachSpecialMove_21
# 1587 "data/maps/TradeCenter/scripts.pory"
	case 16, MoveTutor_EventScript_TeachSpecialMove_22
# 1590 "data/maps/TradeCenter/scripts.pory"
	case 17, MoveTutor_EventScript_TeachSpecialMove_23
# 1593 "data/maps/TradeCenter/scripts.pory"
	case 18, MoveTutor_EventScript_TeachSpecialMove_24
# 1596 "data/maps/TradeCenter/scripts.pory"
	case 19, MoveTutor_EventScript_TeachSpecialMove_25
# 1599 "data/maps/TradeCenter/scripts.pory"
	case 20, MoveTutor_EventScript_TeachSpecialMove_26
# 1602 "data/maps/TradeCenter/scripts.pory"
	case 21, MoveTutor_EventScript_TeachSpecialMove_27
# 1605 "data/maps/TradeCenter/scripts.pory"
	case 22, MoveTutor_EventScript_TeachSpecialMove_28
# 1608 "data/maps/TradeCenter/scripts.pory"
	case 23, MoveTutor_EventScript_TeachSpecialMove_29
# 1611 "data/maps/TradeCenter/scripts.pory"
	case 24, MoveTutor_EventScript_TeachSpecialMove_30
# 1614 "data/maps/TradeCenter/scripts.pory"
	case 25, MoveTutor_EventScript_TeachSpecialMove_31
# 1617 "data/maps/TradeCenter/scripts.pory"
	case 26, MoveTutor_EventScript_TeachSpecialMove_32
# 1620 "data/maps/TradeCenter/scripts.pory"
	case 27, MoveTutor_EventScript_TeachSpecialMove_33
# 1623 "data/maps/TradeCenter/scripts.pory"
	case 28, MoveTutor_EventScript_TeachSpecialMove_34
# 1626 "data/maps/TradeCenter/scripts.pory"
	case 29, MoveTutor_EventScript_TeachSpecialMove_35
# 1629 "data/maps/TradeCenter/scripts.pory"
	case 30, MoveTutor_EventScript_TeachSpecialMove_36
# 1632 "data/maps/TradeCenter/scripts.pory"
	case 31, MoveTutor_EventScript_TeachSpecialMove_37
# 1635 "data/maps/TradeCenter/scripts.pory"
	case 32, MoveTutor_EventScript_TeachSpecialMove_38
# 1638 "data/maps/TradeCenter/scripts.pory"
	case 33, MoveTutor_EventScript_TeachSpecialMove_39
# 1641 "data/maps/TradeCenter/scripts.pory"
	case 34, MoveTutor_EventScript_TeachSpecialMove_40
# 1644 "data/maps/TradeCenter/scripts.pory"
	case 35, MoveTutor_EventScript_TeachSpecialMove_41
# 1647 "data/maps/TradeCenter/scripts.pory"
	case 36, MoveTutor_EventScript_TeachSpecialMove_42
# 1650 "data/maps/TradeCenter/scripts.pory"
	case 37, MoveTutor_EventScript_TeachSpecialMove_43
# 1653 "data/maps/TradeCenter/scripts.pory"
	case 38, MoveTutor_EventScript_TeachSpecialMove_44
# 1656 "data/maps/TradeCenter/scripts.pory"
	case 39, MoveTutor_EventScript_TeachSpecialMove_45
# 1659 "data/maps/TradeCenter/scripts.pory"
	case 40, MoveTutor_EventScript_TeachSpecialMove_46
# 1662 "data/maps/TradeCenter/scripts.pory"
	case 41, MoveTutor_EventScript_TeachSpecialMove_47
# 1666 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_TeachSpecialMove_5:
# 1668 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1669 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 1670 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 1671 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1672 "data/maps/TradeCenter/scripts.pory"
	lock
# 1673 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1674 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_TeachSpecialMove_2:
# 1535 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
	goto MoveTutor_EventScript_TeachSpecialMove_1

MoveTutor_EventScript_TeachSpecialMove_7:
# 1543 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AIR_CUTTER
# 1544 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_30
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_8:
# 1546 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ALLURING_VOICE
# 1547 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_0
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_9:
# 1549 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AURA_SPHERE
# 1550 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_2
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_10:
# 1552 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
# 1553 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_9
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_11:
# 1555 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BRINE
# 1556 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_26
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_12:
# 1558 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BURNING_JEALOUSY
# 1559 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_22
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_13:
# 1561 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DISARMING_VOICE
# 1562 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_37
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_14:
# 1564 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DREAM_EATER
# 1565 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_17
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_15:
# 1567 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ECHOED_VOICE
# 1568 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_38
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_16:
# 1570 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRO_BALL
# 1571 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_6
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_17:
# 1573 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTROWEB
# 1574 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_33
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_18:
# 1576 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
# 1577 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_13
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_19:
# 1579 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_SPIN
# 1580 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_35
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_20:
# 1582 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_BLAST
# 1583 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_12
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_21:
# 1585 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
# 1586 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_10
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_22:
# 1588 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FROST_BREATH
# 1589 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_27
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_23:
# 1591 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FUTURE_SIGHT
# 1592 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_1
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_24:
# 1594 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
# 1595 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_14
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_25:
# 1597 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
# 1598 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_11
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_26:
# 1600 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_INCINERATE
# 1601 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_23
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_27:
# 1603 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_INFESTATION
# 1604 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_39
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_28:
# 1606 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGICAL_LEAF
# 1607 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_31
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_29:
# 1609 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_EXPLOSION
# 1610 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_7
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_30:
# 1612 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SHOT
# 1613 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_34
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_31:
# 1615 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SLAP
# 1616 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_40
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_32:
# 1618 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
# 1619 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_3
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_33:
# 1621 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SHADE
# 1622 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_24
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_34:
# 1624 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
# 1625 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_8
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_35:
# 1627 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYBEAM
# 1628 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_21
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_36:
# 1630 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_NOISE
# 1631 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_4
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_37:
# 1633 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHO_BOOST
# 1634 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_16
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_38:
# 1636 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROUND
# 1637 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_32
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_39:
# 1639 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
# 1640 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_28
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_40:
# 1642 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
# 1643 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_25
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_41:
# 1645 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SILVER_WIND
# 1646 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_29
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_42:
# 1648 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_STORED_POWER
# 1649 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_5
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_43:
# 1651 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRI_ATTACK
# 1652 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_18
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_44:
# 1654 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_UPROAR
# 1655 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_20
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_45:
# 1657 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
# 1658 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_15
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_46:
# 1660 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WHIRLPOOL
# 1661 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_36
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_47:
# 1663 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ZAP_CANNON
# 1664 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_19
	goto MoveTutor_EventScript_TeachSpecialMove_5


MoveTutor_EventScript_TeachStatusMove::
# 1680 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 1681 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_SORT_TUTOR_ALPHABETICALLY, MoveTutor_EventScript_TeachStatusMove_2
# 1685 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
MoveTutor_EventScript_TeachStatusMove_1:
# 1688 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1689 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_TeachStatusMove_7
# 1692 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_TeachStatusMove_8
# 1695 "data/maps/TradeCenter/scripts.pory"
	case 3, MoveTutor_EventScript_TeachStatusMove_9
# 1698 "data/maps/TradeCenter/scripts.pory"
	case 4, MoveTutor_EventScript_TeachStatusMove_10
# 1701 "data/maps/TradeCenter/scripts.pory"
	case 5, MoveTutor_EventScript_TeachStatusMove_11
# 1704 "data/maps/TradeCenter/scripts.pory"
	case 6, MoveTutor_EventScript_TeachStatusMove_12
# 1707 "data/maps/TradeCenter/scripts.pory"
	case 7, MoveTutor_EventScript_TeachStatusMove_13
# 1710 "data/maps/TradeCenter/scripts.pory"
	case 8, MoveTutor_EventScript_TeachStatusMove_14
# 1713 "data/maps/TradeCenter/scripts.pory"
	case 9, MoveTutor_EventScript_TeachStatusMove_15
# 1716 "data/maps/TradeCenter/scripts.pory"
	case 10, MoveTutor_EventScript_TeachStatusMove_16
# 1719 "data/maps/TradeCenter/scripts.pory"
	case 11, MoveTutor_EventScript_TeachStatusMove_17
# 1722 "data/maps/TradeCenter/scripts.pory"
	case 12, MoveTutor_EventScript_TeachStatusMove_18
# 1725 "data/maps/TradeCenter/scripts.pory"
	case 13, MoveTutor_EventScript_TeachStatusMove_19
# 1728 "data/maps/TradeCenter/scripts.pory"
	case 14, MoveTutor_EventScript_TeachStatusMove_20
# 1731 "data/maps/TradeCenter/scripts.pory"
	case 15, MoveTutor_EventScript_TeachStatusMove_21
# 1734 "data/maps/TradeCenter/scripts.pory"
	case 16, MoveTutor_EventScript_TeachStatusMove_22
# 1737 "data/maps/TradeCenter/scripts.pory"
	case 17, MoveTutor_EventScript_TeachStatusMove_23
# 1740 "data/maps/TradeCenter/scripts.pory"
	case 18, MoveTutor_EventScript_TeachStatusMove_24
# 1743 "data/maps/TradeCenter/scripts.pory"
	case 19, MoveTutor_EventScript_TeachStatusMove_25
# 1746 "data/maps/TradeCenter/scripts.pory"
	case 20, MoveTutor_EventScript_TeachStatusMove_26
# 1749 "data/maps/TradeCenter/scripts.pory"
	case 21, MoveTutor_EventScript_TeachStatusMove_27
# 1752 "data/maps/TradeCenter/scripts.pory"
	case 22, MoveTutor_EventScript_TeachStatusMove_28
# 1755 "data/maps/TradeCenter/scripts.pory"
	case 23, MoveTutor_EventScript_TeachStatusMove_29
# 1758 "data/maps/TradeCenter/scripts.pory"
	case 24, MoveTutor_EventScript_TeachStatusMove_30
# 1761 "data/maps/TradeCenter/scripts.pory"
	case 25, MoveTutor_EventScript_TeachStatusMove_31
# 1764 "data/maps/TradeCenter/scripts.pory"
	case 26, MoveTutor_EventScript_TeachStatusMove_32
# 1767 "data/maps/TradeCenter/scripts.pory"
	case 27, MoveTutor_EventScript_TeachStatusMove_33
# 1770 "data/maps/TradeCenter/scripts.pory"
	case 28, MoveTutor_EventScript_TeachStatusMove_34
# 1773 "data/maps/TradeCenter/scripts.pory"
	case 29, MoveTutor_EventScript_TeachStatusMove_35
# 1776 "data/maps/TradeCenter/scripts.pory"
	case 30, MoveTutor_EventScript_TeachStatusMove_36
# 1779 "data/maps/TradeCenter/scripts.pory"
	case 31, MoveTutor_EventScript_TeachStatusMove_37
# 1782 "data/maps/TradeCenter/scripts.pory"
	case 32, MoveTutor_EventScript_TeachStatusMove_38
# 1785 "data/maps/TradeCenter/scripts.pory"
	case 33, MoveTutor_EventScript_TeachStatusMove_39
# 1788 "data/maps/TradeCenter/scripts.pory"
	case 34, MoveTutor_EventScript_TeachStatusMove_40
# 1791 "data/maps/TradeCenter/scripts.pory"
	case 35, MoveTutor_EventScript_TeachStatusMove_41
# 1794 "data/maps/TradeCenter/scripts.pory"
	case 36, MoveTutor_EventScript_TeachStatusMove_42
# 1797 "data/maps/TradeCenter/scripts.pory"
	case 37, MoveTutor_EventScript_TeachStatusMove_43
# 1800 "data/maps/TradeCenter/scripts.pory"
	case 38, MoveTutor_EventScript_TeachStatusMove_44
# 1803 "data/maps/TradeCenter/scripts.pory"
	case 39, MoveTutor_EventScript_TeachStatusMove_45
# 1806 "data/maps/TradeCenter/scripts.pory"
	case 40, MoveTutor_EventScript_TeachStatusMove_46
# 1809 "data/maps/TradeCenter/scripts.pory"
	case 41, MoveTutor_EventScript_TeachStatusMove_47
# 1812 "data/maps/TradeCenter/scripts.pory"
	case 42, MoveTutor_EventScript_TeachStatusMove_48
# 1815 "data/maps/TradeCenter/scripts.pory"
	case 43, MoveTutor_EventScript_TeachStatusMove_49
# 1818 "data/maps/TradeCenter/scripts.pory"
	case 44, MoveTutor_EventScript_TeachStatusMove_50
# 1821 "data/maps/TradeCenter/scripts.pory"
	case 45, MoveTutor_EventScript_TeachStatusMove_51
# 1825 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_TeachStatusMove_5:
# 1827 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1828 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 1829 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 1830 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1831 "data/maps/TradeCenter/scripts.pory"
	lock
# 1832 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1833 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_TeachStatusMove_2:
# 1682 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
	goto MoveTutor_EventScript_TeachStatusMove_1

MoveTutor_EventScript_TeachStatusMove_7:
# 1690 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AGILITY
# 1691 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_27
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_8:
# 1693 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ALLY_SWITCH
# 1694 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_9
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_9:
# 1696 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AURORA_VEIL
# 1697 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_8
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_10:
# 1699 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_CHARGE
# 1700 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_32
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_11:
# 1702 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_COACHING
# 1703 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_38
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_12:
# 1705 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_CONFUSE_RAY
# 1706 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_33
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_13:
# 1708 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_COSMIC_POWER
# 1709 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_10
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_14:
# 1711 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_CURSE
# 1712 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_23
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_15:
# 1714 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_CHEER
# 1715 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_14
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_16:
# 1717 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_DANCE
# 1718 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_15
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_17:
# 1720 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRIC_TERRAIN
# 1721 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_0
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_18:
# 1723 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_EMBARGO
# 1724 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_34
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_19:
# 1726 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FAKE_TEARS
# 1727 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_17
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_20:
# 1729 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FEATHER_DANCE
# 1730 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_16
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_21:
# 1732 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASSY_TERRAIN
# 1733 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_1
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_22:
# 1735 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GRAVITY
# 1736 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_11
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_23:
# 1738 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HONE_CLAWS
# 1739 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_39
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_24:
# 1741 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_IMPRISON
# 1742 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_12
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_25:
# 1744 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
# 1745 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_24
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_26:
# 1747 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGIC_ROOM
# 1748 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_13
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_27:
# 1750 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_SOUND
# 1751 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_28
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_28:
# 1753 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 1754 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_35
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_29:
# 1756 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_TERRAIN
# 1757 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_2
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_30:
# 1759 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_NATURE_POWER
# 1760 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_29
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_31:
# 1762 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
# 1763 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_18
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_32:
# 1765 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
# 1766 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_19
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_33:
# 1768 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_TERRAIN
# 1769 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_3
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_34:
# 1771 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_QUASH
# 1772 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_40
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_35:
# 1774 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RAIN_DANCE
# 1775 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_4
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_36:
# 1777 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RECYCLE
# 1778 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_36
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_37:
# 1780 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SANDSTORM
# 1781 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_5
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_38:
# 1783 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SCARY_FACE
# 1784 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_41
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_39:
# 1786 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SNATCH
# 1787 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_31
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_40:
# 1789 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SNOWSCAPE
# 1790 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_6
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_41:
# 1792 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIKES
# 1793 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_37
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_42:
# 1795 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SPITE
# 1796 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_42
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_43:
# 1798 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
# 1799 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_25
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_44:
# 1801 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_STEELSURGE
# 1802 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_30
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_45:
# 1804 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SUNNY_DAY
# 1805 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_7
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_46:
# 1807 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 1808 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_43
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_47:
# 1810 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
# 1811 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_20
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_48:
# 1813 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK
# 1814 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_21
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_49:
# 1816 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_VENOM_DRENCH
# 1817 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_22
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_50:
# 1819 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WONDER_ROOM
# 1820 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_26
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_51:
# 1822 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WORK_UP
# 1823 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_44
	goto MoveTutor_EventScript_TeachStatusMove_5


MoveTutor_EventScript_ComeBackLater::
# 1838 "data/maps/TradeCenter/scripts.pory"
	lock
# 1839 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_ComeBackLater_Text_0, MSGBOX_DEFAULT
# 1840 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1841 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_PreDamageOrStatus::
# 1846 "data/maps/TradeCenter/scripts.pory"
	lockall
# 1847 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1848 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_4, Common_EventScript_PreDamageOrStatus_2
Common_EventScript_PreDamageOrStatus_1:
# 1851 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_4
# 1852 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_PreDamageOrStatus_Text_1, MSGBOX_DEFAULT
# 1853 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_PreDamageOrStatus_Text_2, Common_EventScript_PreDamageOrStatus_Text_3, Common_EventScript_PreDamageOrStatus_Text_4
# 1854 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1855 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_PreDamageOrStatus_6
# 1857 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_PreDamageOrStatus_7
# 1859 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_PreDamageOrStatus_8
Common_EventScript_PreDamageOrStatus_4:
# 1862 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_PreDamageOrStatus_2:
# 1849 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_PreDamageOrStatus_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_PreDamageOrStatus_1

Common_EventScript_PreDamageOrStatus_6:
# 1856 "data/maps/TradeCenter/scripts.pory"
	goto PokemonCenter_2F_EventScript_InflictStatusMenu
	goto Common_EventScript_PreDamageOrStatus_4

Common_EventScript_PreDamageOrStatus_7:
# 1858 "data/maps/TradeCenter/scripts.pory"
	goto PokemonCenter_2F_EventScript_SetHPMenu
	goto Common_EventScript_PreDamageOrStatus_4

Common_EventScript_PreDamageOrStatus_8:
# 1860 "data/maps/TradeCenter/scripts.pory"
	goto PokemonCenter_2F_EventScript_PreTrain_ComeBackLater
	goto Common_EventScript_PreDamageOrStatus_4


PokemonCenter_2F_EventScript_PreTrain_ComeBackLater::
# 1867 "data/maps/TradeCenter/scripts.pory"
	lock
# 1868 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_PreTrain_ComeBackLater_Text_0, MSGBOX_DEFAULT
# 1869 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1870 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


PokemonCenter_2F_EventScript_SetHPMenu::
# 1875 "data/maps/TradeCenter/scripts.pory"
	lockall
# 1876 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1877 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_0, MSGBOX_DEFAULT
# 1878 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1879 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 1880 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1881 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge PokemonCenter_2F_EventScript_SetHPMenu_2
# 1885 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1886 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_5
# 1891 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonCurrentHP
# 1892 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_8
# 1898 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 1900 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonMaxHP
# 1901 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 1903 "data/maps/TradeCenter/scripts.pory"
	special OpenNumericInput
# 1904 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1905 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_11
# 1911 "data/maps/TradeCenter/scripts.pory"
	special SetPartyMonHP
# 1912 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_14
# 1916 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_15
# 1919 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_16
PokemonCenter_2F_EventScript_SetHPMenu_13:
# 1922 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_2:
# 1882 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_5:
# 1887 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_1, MSGBOX_DEFAULT
# 1888 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_8:
# 1893 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_2, MSGBOX_DEFAULT
# 1894 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_11:
# 1907 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_14:
# 1913 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 1914 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_3, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_SetHPMenu_13

PokemonCenter_2F_EventScript_SetHPMenu_15:
# 1917 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_4, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_SetHPMenu_13

PokemonCenter_2F_EventScript_SetHPMenu_16:
# 1920 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_5, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_SetHPMenu_13


PokemonCenter_2F_EventScript_InflictStatusMenu::
# 1927 "data/maps/TradeCenter/scripts.pory"
	lockall
# 1928 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1929 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 1930 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_2
# 1935 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_1, MSGBOX_DEFAULT
# 1936 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1937 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 1938 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1939 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge PokemonCenter_2F_EventScript_InflictStatusMenu_5
# 1943 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1944 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_8
# 1948 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2, STATUS1_POISON
# 1949 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_3, STATUS1_TOXIC_POISON
# 1950 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_4, STATUS1_PARALYSIS
# 1951 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_5, STATUS1_SLEEP
# 1952 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_6, STATUS1_BURN
# 1953 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_7, STATUS1_FREEZE
# 1955 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_8, MSGBOX_DEFAULT
# 1956 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, 255
# 1957 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_11
# 1961 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 1962 "data/maps/TradeCenter/scripts.pory"
	special GetPartyMonTypes
# 1963 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_44
# 1963 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_44
PokemonCenter_2F_EventScript_InflictStatusMenu_39:
# 1969 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_STEEL
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_37
# 1969 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_STEEL
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_37
PokemonCenter_2F_EventScript_InflictStatusMenu_32:
# 1975 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_ICE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_30
# 1975 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_ICE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_30
PokemonCenter_2F_EventScript_InflictStatusMenu_27:
# 1981 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_FIRE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_25
# 1981 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_FIRE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_25
PokemonCenter_2F_EventScript_InflictStatusMenu_22:
# 1987 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_ELECTRIC
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_20
# 1987 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_ELECTRIC
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_20
PokemonCenter_2F_EventScript_InflictStatusMenu_19:
# 1995 "data/maps/TradeCenter/scripts.pory"
	special InflictStatus
# 1996 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_13, MSGBOX_DEFAULT
# 1997 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1999 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_2:
# 1931 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 1932 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_5:
# 1940 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_8:
# 1945 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_11:
# 1958 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_14:
# 1964 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_9, MSGBOX_DEFAULT
# 1965 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1966 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_15:
# 1970 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_9, MSGBOX_DEFAULT
# 1971 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1972 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_16:
# 1976 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_10, MSGBOX_DEFAULT
# 1977 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1978 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_17:
# 1982 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_11, MSGBOX_DEFAULT
# 1983 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1984 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_18:
# 1988 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_12, MSGBOX_DEFAULT
# 1989 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1990 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_20:
# 1987 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_PARALYSIS
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_18
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_19

PokemonCenter_2F_EventScript_InflictStatusMenu_25:
# 1981 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_BURN
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_17
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_22

PokemonCenter_2F_EventScript_InflictStatusMenu_30:
# 1975 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_FREEZE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_16
# 1975 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_FROSTBITE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_16
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_27

PokemonCenter_2F_EventScript_InflictStatusMenu_37:
# 1969 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_15
# 1969 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_TOXIC_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_15
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_32

PokemonCenter_2F_EventScript_InflictStatusMenu_44:
# 1963 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_14
# 1963 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_TOXIC_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_14
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_39


Common_EventScript_AttributeChanger::
# 2004 "data/maps/TradeCenter/scripts.pory"
	lockall
# 2005 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2006 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, Common_EventScript_AttributeChanger_2
Common_EventScript_AttributeChanger_1:
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_AttributeChanger_5
# 2015 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_5
# 2016 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2017 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_AttributeChanger_Text_1, MSGBOX_DEFAULT
# 2018 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_AttributeChanger_Text_2, Common_EventScript_AttributeChanger_Text_3, Common_EventScript_AttributeChanger_Text_4, Common_EventScript_AttributeChanger_Text_5
# 2019 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2020 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_AttributeChanger_9
# 2022 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_AttributeChanger_10
# 2024 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_AttributeChanger_11
# 2026 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_AttributeChanger_12
# 2029 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_AttributeChanger_ComeBackLater
Common_EventScript_AttributeChanger_7:
# 2031 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_AttributeChanger_2:
# 2007 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_AttributeChanger_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_AttributeChanger_1

Common_EventScript_AttributeChanger_5:
# 2010 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_NeedHeartScale, MSGBOX_DEFAULT
# 2011 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_TEMP_5
# 2012 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_AttributeChanger_9:
# 2021 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_ChangeNature
	goto Common_EventScript_AttributeChanger_7

Common_EventScript_AttributeChanger_10:
# 2023 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_ChangeIV
	goto Common_EventScript_AttributeChanger_7

Common_EventScript_AttributeChanger_11:
# 2025 "data/maps/TradeCenter/scripts.pory"
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType
	goto Common_EventScript_AttributeChanger_7

Common_EventScript_AttributeChanger_12:
# 2027 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_AttributeChanger_ComeBackLater
	goto Common_EventScript_AttributeChanger_7


Common_EventScript_AttributeChanger_ComeBackLater::
# 2036 "data/maps/TradeCenter/scripts.pory"
	lock
# 2037 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_AttributeChanger_ComeBackLater_Text_0, MSGBOX_DEFAULT
# 2038 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2039 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


PokemonCenter_2F_EventScript_ChangeHiddenPowerType::
# 2044 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 2045 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_2
# 2050 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_0, MSGBOX_DEFAULT
# 2051 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2052 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2053 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2054 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge PokemonCenter_2F_EventScript_ChangeHiddenPowerType_5
# 2058 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 2059 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_8
# 2063 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2065 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_1, MSGBOX_DEFAULT
# 2066 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_2, TYPE_FIGHTING
# 2067 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_3, TYPE_FLYING
# 2068 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2, TYPE_POISON
# 2069 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_4, TYPE_GROUND
# 2070 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_5, TYPE_ROCK
# 2071 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_6, TYPE_BUG
# 2072 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_7, TYPE_GHOST
# 2073 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_8, TYPE_STEEL
# 2074 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_9, TYPE_FIRE
# 2075 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_10, TYPE_WATER
# 2076 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_11, TYPE_GRASS
# 2077 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_12, TYPE_ELECTRIC
# 2078 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_13, TYPE_PSYCHIC
# 2079 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_14, TYPE_ICE
# 2080 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_15, TYPE_DRAGON
# 2081 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_16, TYPE_DARK
# 2082 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_17, TYPE_FAIRY
# 2083 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2084 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2085 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FIGHTING, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_12
# 2087 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FLYING, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_13
# 2089 "data/maps/TradeCenter/scripts.pory"
	case TYPE_POISON, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_14
# 2091 "data/maps/TradeCenter/scripts.pory"
	case TYPE_GROUND, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_15
# 2093 "data/maps/TradeCenter/scripts.pory"
	case TYPE_ROCK, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_16
# 2095 "data/maps/TradeCenter/scripts.pory"
	case TYPE_BUG, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_17
# 2097 "data/maps/TradeCenter/scripts.pory"
	case TYPE_GHOST, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_18
# 2099 "data/maps/TradeCenter/scripts.pory"
	case TYPE_STEEL, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_19
# 2101 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FIRE, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_20
# 2103 "data/maps/TradeCenter/scripts.pory"
	case TYPE_WATER, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_21
# 2105 "data/maps/TradeCenter/scripts.pory"
	case TYPE_GRASS, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_22
# 2107 "data/maps/TradeCenter/scripts.pory"
	case TYPE_ELECTRIC, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_23
# 2109 "data/maps/TradeCenter/scripts.pory"
	case TYPE_PSYCHIC, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_24
# 2111 "data/maps/TradeCenter/scripts.pory"
	case TYPE_ICE, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_25
# 2113 "data/maps/TradeCenter/scripts.pory"
	case TYPE_DRAGON, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_26
# 2115 "data/maps/TradeCenter/scripts.pory"
	case TYPE_DARK, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_27
# 2117 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FAIRY, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_28
# 2119 "data/maps/TradeCenter/scripts.pory"
	case MULTI_B_PRESSED, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_29
# 2125 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18, MSGBOX_DEFAULT
# 2126 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2127 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_2:
# 2046 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 2047 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_5:
# 2055 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_8:
# 2060 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10:
# 2130 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 2131 "data/maps/TradeCenter/scripts.pory"
	special ComparePartyMonTeraType
# 2132 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_32
# 2138 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_20, MSGBOX_YESNO
# 2139 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_34
# 2148 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18, MSGBOX_DEFAULT
# 2149 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2150 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_12:
# 2086 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_2
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_13:
# 2088 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_3
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_14:
# 2090 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_15:
# 2092 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_4
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_16:
# 2094 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_5
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_17:
# 2096 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_6
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_18:
# 2098 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_7
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_19:
# 2100 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_8
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_20:
# 2102 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_9
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_21:
# 2104 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_10
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_22:
# 2106 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_11
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_23:
# 2108 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_12
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_24:
# 2110 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_13
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_25:
# 2112 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_14
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_26:
# 2114 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_15
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_27:
# 2116 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_16
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_28:
# 2118 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_17
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_29:
# 2120 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18, MSGBOX_DEFAULT
# 2121 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2122 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_32:
# 2133 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_19, MSGBOX_DEFAULT
# 2134 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2135 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_34:
# 2140 "data/maps/TradeCenter/scripts.pory"
	special ChangeTeraType
# 2141 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_21, MSGBOX_DEFAULT
# 2142 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 2143 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2144 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_ChangeNature::
# 2157 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 2158 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ChangeNature_2
# 2163 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_0, MSGBOX_DEFAULT
# 2164 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2165 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2166 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2167 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge Common_EventScript_ChangeNature_5
# 2171 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 2172 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Common_EventScript_ChangeNature_8
# 2176 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2177 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_1, MSGBOX_DEFAULT
# 2178 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_2, NATURE_HARDY
# 2179 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_3, NATURE_LONELY
# 2180 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_4, NATURE_BRAVE
# 2181 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_5, NATURE_ADAMANT
# 2182 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_6, NATURE_NAUGHTY
# 2183 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_7, NATURE_BOLD
# 2184 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_8, NATURE_DOCILE
# 2185 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_9, NATURE_RELAXED
# 2186 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_10, NATURE_IMPISH
# 2187 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_11, NATURE_LAX
# 2188 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_12, NATURE_TIMID
# 2189 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_13, NATURE_HASTY
# 2190 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_14, NATURE_SERIOUS
# 2191 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_15, NATURE_JOLLY
# 2192 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_16, NATURE_NAIVE
# 2193 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_17, NATURE_MODEST
# 2194 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_18, NATURE_MILD
# 2195 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_19, NATURE_QUIET
# 2196 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_20, NATURE_BASHFUL
# 2197 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_21, NATURE_RASH
# 2198 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_22, NATURE_CALM
# 2199 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_23, NATURE_GENTLE
# 2200 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_24, NATURE_SASSY
# 2201 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_25, NATURE_CAREFUL
# 2202 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_26, NATURE_QUIRKY
# 2203 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2204 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2205 "data/maps/TradeCenter/scripts.pory"
	case NATURE_HARDY, Common_EventScript_ChangeNature_12
# 2207 "data/maps/TradeCenter/scripts.pory"
	case NATURE_LONELY, Common_EventScript_ChangeNature_13
# 2209 "data/maps/TradeCenter/scripts.pory"
	case NATURE_BRAVE, Common_EventScript_ChangeNature_14
# 2211 "data/maps/TradeCenter/scripts.pory"
	case NATURE_ADAMANT, Common_EventScript_ChangeNature_15
# 2213 "data/maps/TradeCenter/scripts.pory"
	case NATURE_NAUGHTY, Common_EventScript_ChangeNature_16
# 2215 "data/maps/TradeCenter/scripts.pory"
	case NATURE_BOLD, Common_EventScript_ChangeNature_17
# 2217 "data/maps/TradeCenter/scripts.pory"
	case NATURE_DOCILE, Common_EventScript_ChangeNature_18
# 2219 "data/maps/TradeCenter/scripts.pory"
	case NATURE_RELAXED, Common_EventScript_ChangeNature_19
# 2221 "data/maps/TradeCenter/scripts.pory"
	case NATURE_IMPISH, Common_EventScript_ChangeNature_20
# 2223 "data/maps/TradeCenter/scripts.pory"
	case NATURE_LAX, Common_EventScript_ChangeNature_21
# 2225 "data/maps/TradeCenter/scripts.pory"
	case NATURE_TIMID, Common_EventScript_ChangeNature_22
# 2227 "data/maps/TradeCenter/scripts.pory"
	case NATURE_HASTY, Common_EventScript_ChangeNature_23
# 2229 "data/maps/TradeCenter/scripts.pory"
	case NATURE_SERIOUS, Common_EventScript_ChangeNature_24
# 2231 "data/maps/TradeCenter/scripts.pory"
	case NATURE_JOLLY, Common_EventScript_ChangeNature_25
# 2233 "data/maps/TradeCenter/scripts.pory"
	case NATURE_NAIVE, Common_EventScript_ChangeNature_26
# 2235 "data/maps/TradeCenter/scripts.pory"
	case NATURE_MODEST, Common_EventScript_ChangeNature_27
# 2237 "data/maps/TradeCenter/scripts.pory"
	case NATURE_MILD, Common_EventScript_ChangeNature_28
# 2239 "data/maps/TradeCenter/scripts.pory"
	case NATURE_QUIET, Common_EventScript_ChangeNature_29
# 2241 "data/maps/TradeCenter/scripts.pory"
	case NATURE_BASHFUL, Common_EventScript_ChangeNature_30
# 2243 "data/maps/TradeCenter/scripts.pory"
	case NATURE_RASH, Common_EventScript_ChangeNature_31
# 2245 "data/maps/TradeCenter/scripts.pory"
	case NATURE_CALM, Common_EventScript_ChangeNature_32
# 2247 "data/maps/TradeCenter/scripts.pory"
	case NATURE_GENTLE, Common_EventScript_ChangeNature_33
# 2249 "data/maps/TradeCenter/scripts.pory"
	case NATURE_SASSY, Common_EventScript_ChangeNature_34
# 2251 "data/maps/TradeCenter/scripts.pory"
	case NATURE_CAREFUL, Common_EventScript_ChangeNature_35
# 2253 "data/maps/TradeCenter/scripts.pory"
	case NATURE_QUIRKY, Common_EventScript_ChangeNature_36
# 2255 "data/maps/TradeCenter/scripts.pory"
	case MULTI_B_PRESSED, Common_EventScript_ChangeNature_37
# 2261 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_27, MSGBOX_DEFAULT
# 2262 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2263 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_2:
# 2159 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 2160 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_5:
# 2168 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_8:
# 2173 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_10:
# 2266 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 2267 "data/maps/TradeCenter/scripts.pory"
	special ComparePartyMonNature
# 2268 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq Common_EventScript_ChangeNature_40
# 2276 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_HARDY
	goto_if_eq Common_EventScript_ChangeNature_43
# 2276 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_DOCILE
	goto_if_eq Common_EventScript_ChangeNature_43
# 2276 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_SERIOUS
	goto_if_eq Common_EventScript_ChangeNature_43
# 2276 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_BASHFUL
	goto_if_eq Common_EventScript_ChangeNature_43
# 2276 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_QUIRKY
	goto_if_eq Common_EventScript_ChangeNature_43
Common_EventScript_ChangeNature_42:
# 2285 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_30, MSGBOX_YESNO
# 2286 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_ChangeNature_53
# 2300 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_27, MSGBOX_DEFAULT
# 2301 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2302 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_12:
# 2206 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_2
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_13:
# 2208 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_3
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_14:
# 2210 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_4
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_15:
# 2212 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_5
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_16:
# 2214 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_6
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_17:
# 2216 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_7
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_18:
# 2218 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_8
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_19:
# 2220 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_9
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_20:
# 2222 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_10
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_21:
# 2224 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_11
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_22:
# 2226 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_12
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_23:
# 2228 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_13
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_24:
# 2230 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_14
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_25:
# 2232 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_15
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_26:
# 2234 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_16
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_27:
# 2236 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_17
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_28:
# 2238 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_18
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_29:
# 2240 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_19
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_30:
# 2242 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_20
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_31:
# 2244 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_21
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_32:
# 2246 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_22
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_33:
# 2248 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_23
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_34:
# 2250 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_24
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_35:
# 2252 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_25
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_36:
# 2254 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_26
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_37:
# 2256 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_27, MSGBOX_DEFAULT
# 2257 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2258 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_40:
# 2269 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_28, MSGBOX_DEFAULT
# 2270 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2271 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_43:
# 2277 "data/maps/TradeCenter/scripts.pory"
	checkitemspace ITEM_SERIOUS_MINT, 1
# 2278 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ChangeNature_56
	goto Common_EventScript_ChangeNature_42

Common_EventScript_ChangeNature_53:
# 2287 "data/maps/TradeCenter/scripts.pory"
	special ChangeNature
# 2288 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_31, MSGBOX_DEFAULT
# 2289 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 2291 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_HARDY
	goto_if_eq Common_EventScript_ChangeNature_59
# 2291 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_DOCILE
	goto_if_eq Common_EventScript_ChangeNature_59
# 2291 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_SERIOUS
	goto_if_eq Common_EventScript_ChangeNature_59
# 2291 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_BASHFUL
	goto_if_eq Common_EventScript_ChangeNature_59
# 2291 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_QUIRKY
	goto_if_eq Common_EventScript_ChangeNature_59
Common_EventScript_ChangeNature_58:
# 2295 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2296 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_56:
# 2279 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_29, MSGBOX_DEFAULT
# 2280 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2281 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_59:
# 2292 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_32, MSGBOX_DEFAULT
# 2293 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 1
	goto Common_EventScript_ChangeNature_58


Common_EventScript_ChangeIV::
# 2309 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 2310 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ChangeIV_2
# 2315 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_0, MSGBOX_DEFAULT
# 2316 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2317 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2318 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2319 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge Common_EventScript_ChangeIV_5
# 2323 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 2324 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Common_EventScript_ChangeIV_8
# 2328 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2329 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_1, MSGBOX_DEFAULT
# 2330 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_2, STAT_HP
# 2331 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_3, STAT_ATK
# 2332 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_4, STAT_DEF
# 2333 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_5, STAT_SPEED
# 2334 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_6, STAT_SPATK
# 2335 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_7, STAT_SPDEF
# 2336 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2337 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2338 "data/maps/TradeCenter/scripts.pory"
	case STAT_HP, Common_EventScript_ChangeIV_12
# 2340 "data/maps/TradeCenter/scripts.pory"
	case STAT_ATK, Common_EventScript_ChangeIV_13
# 2342 "data/maps/TradeCenter/scripts.pory"
	case STAT_DEF, Common_EventScript_ChangeIV_14
# 2344 "data/maps/TradeCenter/scripts.pory"
	case STAT_SPEED, Common_EventScript_ChangeIV_15
# 2346 "data/maps/TradeCenter/scripts.pory"
	case STAT_SPATK, Common_EventScript_ChangeIV_16
# 2348 "data/maps/TradeCenter/scripts.pory"
	case STAT_SPDEF, Common_EventScript_ChangeIV_17
# 2350 "data/maps/TradeCenter/scripts.pory"
	case MULTI_B_PRESSED, Common_EventScript_ChangeIV_18
# 2356 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2357 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2358 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_2:
# 2311 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 2312 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_5:
# 2320 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_8:
# 2325 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_10:
# 2361 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 2363 "data/maps/TradeCenter/scripts.pory"
	special GetPartyMonIV
# 2364 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 2365 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 2366 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_9, MSGBOX_DEFAULT
# 2367 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_10, 31
# 2368 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_11, 0
# 2369 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 2, FALSE, 31, DYN_MULTICHOICE_CB_NONE
# 2370 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2371 "data/maps/TradeCenter/scripts.pory"
	case 31, Common_EventScript_ChangeIV_22
# 2374 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_ChangeIV_23
# 2377 "data/maps/TradeCenter/scripts.pory"
	case MULTI_B_PRESSED, Common_EventScript_ChangeIV_24
# 2383 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2384 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2385 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_12:
# 2339 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_2
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_13:
# 2341 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_3
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_14:
# 2343 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_4
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_15:
# 2345 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_5
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_16:
# 2347 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_6
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_17:
# 2349 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_7
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_18:
# 2351 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2352 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2353 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_20:
# 2390 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8006, 31
	goto_if_eq Common_EventScript_ChangeIV_28
Common_EventScript_ChangeIV_26:
# 2397 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8006, 0
	goto_if_eq Common_EventScript_ChangeIV_33
Common_EventScript_ChangeIV_31:
# 2404 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 2406 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8006, 31
	goto_if_eq Common_EventScript_ChangeIV_37
# 2410 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_17, MSGBOX_YESNO
Common_EventScript_ChangeIV_36:
# 2412 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_ChangeIV_40
# 2422 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2423 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2424 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_22:
# 2372 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_3, Common_EventScript_ChangeIV_Text_12
# 2373 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8006, 31
	goto Common_EventScript_ChangeIV_20

Common_EventScript_ChangeIV_23:
# 2375 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_3, Common_EventScript_ChangeIV_Text_13
# 2376 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8006, 0
	goto Common_EventScript_ChangeIV_20

Common_EventScript_ChangeIV_24:
# 2378 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2379 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2380 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_27:
# 2391 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_14, MSGBOX_DEFAULT
# 2392 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2393 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_28:
# 2390 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8007, 31
	goto_if_eq Common_EventScript_ChangeIV_27
	goto Common_EventScript_ChangeIV_26

Common_EventScript_ChangeIV_32:
# 2398 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_15, MSGBOX_DEFAULT
# 2399 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2400 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_33:
# 2397 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8007, 0
	goto_if_eq Common_EventScript_ChangeIV_32
	goto Common_EventScript_ChangeIV_31

Common_EventScript_ChangeIV_37:
# 2407 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_16, MSGBOX_YESNO
	goto Common_EventScript_ChangeIV_36

Common_EventScript_ChangeIV_40:
# 2413 "data/maps/TradeCenter/scripts.pory"
	special SetPartyMonIV
# 2414 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 2415 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_18, MSGBOX_DEFAULT
# 2416 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 2417 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2418 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_EliteMoveTutor::
# 2432 "data/maps/TradeCenter/scripts.pory"
	lock
# 2433 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2434 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_3, Common_EventScript_EliteMoveTutor_2
Common_EventScript_EliteMoveTutor_1:
# 2438 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Common_EventScript_EliteMoveTutor_5
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_EliteMoveTutor_8
# 2450 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_3
# 2451 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_EliteMoveTutor_Text_1, MSGBOX_DEFAULT
# 2452 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_ChooseMon
	return

Common_EventScript_EliteMoveTutor_2:
# 2435 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_Intro, MSGBOX_DEFAULT
	goto Common_EventScript_EliteMoveTutor_1

Common_EventScript_EliteMoveTutor_5:
# 2439 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_EliteMoveTutor_Text_0, MSGBOX_DEFAULT
# 2440 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_TEMP_3
# 2441 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_EliteMoveTutor_8:
# 2445 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_NeedHeartScale, MSGBOX_DEFAULT
# 2446 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_TEMP_3
# 2447 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


EliteMoveTutor_EventScript_ChooseMon::
# 2456 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_ChooseMon, MSGBOX_DEFAULT
# 2457 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2458 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2459 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_2
EliteMoveTutor_EventScript_ChooseMon_1:
# 2462 "data/maps/TradeCenter/scripts.pory"
	special IsSelectedMonEgg
# 2463 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_5
EliteMoveTutor_EventScript_ChooseMon_4:
# 2468 "data/maps/TradeCenter/scripts.pory"
	special CheckPartyMonHasEliteMoves
# 2469 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_8
EliteMoveTutor_EventScript_ChooseMon_7:
# 2475 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2476 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_HasEliteMoves, MSGBOX_DEFAULT
# 2477 "data/maps/TradeCenter/scripts.pory"
	special TeachEliteMoves
# 2478 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2479 "data/maps/TradeCenter/scripts.pory"
	lock
# 2480 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2482 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_11
EliteMoveTutor_EventScript_ChooseMon_10:
# 2500 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_Cancel
	return

EliteMoveTutor_EventScript_ChooseMon_2:
# 2460 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_Cancel
	goto EliteMoveTutor_EventScript_ChooseMon_1

EliteMoveTutor_EventScript_ChooseMon_5:
# 2464 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 2465 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_ChooseMon
	goto EliteMoveTutor_EventScript_ChooseMon_4

EliteMoveTutor_EventScript_ChooseMon_8:
# 2470 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2471 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_NoEliteMoves, MSGBOX_DEFAULT
# 2472 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_ChooseMon
	goto EliteMoveTutor_EventScript_ChooseMon_7

EliteMoveTutor_EventScript_ChooseMon_11:
# 2484 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EliteMoveTutor_EventScript_ChooseMon_13
# 2494 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_NoMoreHeartScales, MSGBOX_DEFAULT
# 2495 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

EliteMoveTutor_EventScript_ChooseMon_13:
# 2487 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_AnythingElse, MSGBOX_YESNO
# 2488 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_17
EliteMoveTutor_EventScript_ChooseMon_16:
# 2491 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_Cancel
	goto EliteMoveTutor_EventScript_ChooseMon_10

EliteMoveTutor_EventScript_ChooseMon_17:
# 2489 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_ChooseMon
	goto EliteMoveTutor_EventScript_ChooseMon_16


EliteMoveTutor_EventScript_Cancel::
# 2504 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_ComeBack, MSGBOX_DEFAULT
# 2505 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_EggMoveTutor::
# 2548 "data/maps/TradeCenter/scripts.pory"
	lock
# 2549 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2551 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Common_EventScript_EggMoveTutor_2
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_EggMoveTutor_5
# 2562 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Common_EventScript_EggMoveTutor_8
Common_EventScript_EggMoveTutor_7:
# 2567 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_EggMoveTutor_Text_1, MSGBOX_DEFAULT
# 2568 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2569 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_ChooseMon
	return

Common_EventScript_EggMoveTutor_2:
# 2552 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_EggMoveTutor_Text_0, MSGBOX_DEFAULT
# 2553 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2554 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_EggMoveTutor_5:
# 2558 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_NeedHeartScale, MSGBOX_DEFAULT
# 2559 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_EggMoveTutor_8:
# 2563 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_Intro, MSGBOX_DEFAULT
# 2564 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_2
# 2565 "data/maps/TradeCenter/scripts.pory"
	closemessage
	goto Common_EventScript_EggMoveTutor_7


EggMoveTutor_EventScript_ChooseMon::
# 2573 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_ChooseMon, MSGBOX_DEFAULT
# 2574 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2575 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2576 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_2
EggMoveTutor_EventScript_ChooseMon_1:
# 2579 "data/maps/TradeCenter/scripts.pory"
	special IsSelectedMonEgg
# 2580 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_5
EggMoveTutor_EventScript_ChooseMon_4:
# 2585 "data/maps/TradeCenter/scripts.pory"
	special CheckPartyMonHasScriptEggMoves
# 2586 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_8
EggMoveTutor_EventScript_ChooseMon_7:
# 2592 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2593 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_HasEggMoves, MSGBOX_DEFAULT
# 2594 "data/maps/TradeCenter/scripts.pory"
	special TeachScriptEggMoves
# 2595 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2596 "data/maps/TradeCenter/scripts.pory"
	lock
# 2597 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2599 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_11
EggMoveTutor_EventScript_ChooseMon_10:
# 2617 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_Cancel
	return

EggMoveTutor_EventScript_ChooseMon_2:
# 2577 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_Cancel
	goto EggMoveTutor_EventScript_ChooseMon_1

EggMoveTutor_EventScript_ChooseMon_5:
# 2581 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 2582 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_ChooseMon
	goto EggMoveTutor_EventScript_ChooseMon_4

EggMoveTutor_EventScript_ChooseMon_8:
# 2587 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2588 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_NoEggMoves, MSGBOX_DEFAULT
# 2589 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_ChooseMon
	goto EggMoveTutor_EventScript_ChooseMon_7

EggMoveTutor_EventScript_ChooseMon_11:
# 2601 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EggMoveTutor_EventScript_ChooseMon_13
# 2611 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_NoMoreHeartScales, MSGBOX_DEFAULT
# 2612 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

EggMoveTutor_EventScript_ChooseMon_13:
# 2604 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_AnythingElse, MSGBOX_YESNO
# 2605 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_17
EggMoveTutor_EventScript_ChooseMon_16:
# 2608 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_Cancel
	goto EggMoveTutor_EventScript_ChooseMon_10

EggMoveTutor_EventScript_ChooseMon_17:
# 2606 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_ChooseMon
	goto EggMoveTutor_EventScript_ChooseMon_16


EggMoveTutor_EventScript_Cancel::
# 2621 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_ComeBack, MSGBOX_DEFAULT
# 2622 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


PokemonCenter_2F_Unused_MoveTutor::
# 2665 "data/maps/TradeCenter/scripts.pory"
	lock
# 2666 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_Unused_MoveTutor_Text_0, 1
# 2667 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_Unused_MoveTutor_Text_1, 2
# 2668 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_Unused_MoveTutor_Text_2, 3
# 2669 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_Unused_MoveTutor_Text_3, 4
# 2670 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 2671 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 2672 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2673 "data/maps/TradeCenter/scripts.pory"
	case 1, PokemonCenter_2F_Unused_MoveTutor_3
# 2676 "data/maps/TradeCenter/scripts.pory"
	case 2, PokemonCenter_2F_Unused_MoveTutor_4
# 2679 "data/maps/TradeCenter/scripts.pory"
	case 3, PokemonCenter_2F_Unused_MoveTutor_5
# 2682 "data/maps/TradeCenter/scripts.pory"
	case 4, PokemonCenter_2F_Unused_MoveTutor_6
# 2686 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

PokemonCenter_2F_Unused_MoveTutor_1:
# 2689 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 2690 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 2691 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2692 "data/maps/TradeCenter/scripts.pory"
	lock
# 2693 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2694 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

PokemonCenter_2F_Unused_MoveTutor_3:
# 2674 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FUSION_BOLT
# 2675 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, PokemonCenter_2F_Unused_MoveTutor_Text_0
	goto PokemonCenter_2F_Unused_MoveTutor_1

PokemonCenter_2F_Unused_MoveTutor_4:
# 2677 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FUSION_FLARE
# 2678 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, PokemonCenter_2F_Unused_MoveTutor_Text_1
	goto PokemonCenter_2F_Unused_MoveTutor_1

PokemonCenter_2F_Unused_MoveTutor_5:
# 2680 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_BURN
# 2681 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, PokemonCenter_2F_Unused_MoveTutor_Text_2
	goto PokemonCenter_2F_Unused_MoveTutor_1

PokemonCenter_2F_Unused_MoveTutor_6:
# 2683 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FREEZE_SHOCK
# 2684 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, PokemonCenter_2F_Unused_MoveTutor_Text_3
	goto PokemonCenter_2F_Unused_MoveTutor_1


TradeCenter_EventScript_DrainPunch::
# 2705 "data/maps/TradeCenter/scripts.pory"
	lock
# 2706 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2707 "data/maps/TradeCenter/scripts.pory"
	checkitem ITEM_TM_DRAIN_PUNCH
# 2708 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeCenter_EventScript_DrainPunch_2
# 2715 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_DrainPunch_Text_1, MSGBOX_NPC
TradeCenter_EventScript_DrainPunch_1:
# 2717 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

TradeCenter_EventScript_DrainPunch_2:
# 2709 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_DrainPunch_Text_0, MSGBOX_NPC
# 2710 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2711 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_TM_DRAIN_PUNCH
# 2712 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
	goto TradeCenter_EventScript_DrainPunch_1


TradeCenter_EventScript_ShadowClaw::
# 2722 "data/maps/TradeCenter/scripts.pory"
	lock
# 2723 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2724 "data/maps/TradeCenter/scripts.pory"
	checkitem ITEM_TM_SHADOW_CLAW
# 2725 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeCenter_EventScript_ShadowClaw_2
# 2732 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_ShadowClaw_Text_1, MSGBOX_NPC
TradeCenter_EventScript_ShadowClaw_1:
# 2734 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

TradeCenter_EventScript_ShadowClaw_2:
# 2726 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_ShadowClaw_Text_0, MSGBOX_NPC
# 2727 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2728 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_TM_SHADOW_CLAW
# 2729 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
	goto TradeCenter_EventScript_ShadowClaw_1


TradeCenter_EventScript_PsychoCut::
# 2739 "data/maps/TradeCenter/scripts.pory"
	lock
# 2740 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2741 "data/maps/TradeCenter/scripts.pory"
	checkitem ITEM_TM_PSYCHO_CUT
# 2742 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeCenter_EventScript_PsychoCut_2
# 2749 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_PsychoCut_Text_1, MSGBOX_NPC
TradeCenter_EventScript_PsychoCut_1:
# 2751 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

TradeCenter_EventScript_PsychoCut_2:
# 2743 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_PsychoCut_Text_0, MSGBOX_NPC
# 2744 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2745 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_TM_PSYCHO_CUT
# 2746 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
	goto TradeCenter_EventScript_PsychoCut_1


TradeCenter_EventScript_CrossPoison::
# 2756 "data/maps/TradeCenter/scripts.pory"
	lock
# 2757 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2758 "data/maps/TradeCenter/scripts.pory"
	checkitem ITEM_TM_CROSS_POISON
# 2759 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeCenter_EventScript_CrossPoison_2
# 2766 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_CrossPoison_Text_1, MSGBOX_NPC
TradeCenter_EventScript_CrossPoison_1:
# 2768 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

TradeCenter_EventScript_CrossPoison_2:
# 2760 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_CrossPoison_Text_0, MSGBOX_NPC
# 2761 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2762 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_TM_CROSS_POISON
# 2763 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
	goto TradeCenter_EventScript_CrossPoison_1


Common_EventScript_LevelCapUpdate_Text_0:
# 302 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} grew to Trainer Level\n"
	.string "{STR_VAR_1}!$"

Common_EventScript_SetFlashTest_Text_0:
# 391 "data/maps/TradeCenter/scripts.pory"
	.string "Do you have flash?$"

Common_EventScript_BerryTreeEncounterFled_Text_0:
# 751 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the berry\n"
	.string "plant!\l"
	.string "...but it fled!$"

Common_EventScript_BasicMoveTutor_Text_0:
# 1040 "data/maps/TradeCenter/scripts.pory"
	.string "Hello! I am the Move Tutor. I can teach\n"
	.string "your Pokémon new moves at no cost.$"

MoveTutor_EventScript_NotReadyYet_Text_0:
# 1051 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but you need to increase your\n"
	.string "Trainer Level before I can teach any\l"
	.string "moves to your Pokémon. Please come\l"
	.string "back later.$"

MoveTutor_EventScript_SetSorting_Text_0:
# 1074 "data/maps/TradeCenter/scripts.pory"
	.string "The Move Tutor on the left can teach\n"
	.string "many different moves.\p"
	.string "Sometimes I find it easier to see them\n"
	.string "ordered in a particular way, so I can\l"
	.string "find the move I'm looking for.$"

MoveTutor_EventScript_SetSorting_Text_1:
# 1077 "data/maps/TradeCenter/scripts.pory"
	.string "How would you like the move tutor to\n"
	.string "sort his moves?$"

MoveTutor_EventScript_SetSorting_Text_2:
# 1078 "data/maps/TradeCenter/scripts.pory"
	.string "Recently Unlocked First$"

MoveTutor_EventScript_SetSorting_Text_3:
# 1078 "data/maps/TradeCenter/scripts.pory"
	.string "Alphabetically$"

MoveTutor_EventScript_SetSorting_Text_4:
# 1083 "data/maps/TradeCenter/scripts.pory"
	.string "Got it! The tutor moves you most\n"
	.string "recently unlocked will be shown first.$"

MoveTutor_EventScript_SetSorting_Text_5:
# 1087 "data/maps/TradeCenter/scripts.pory"
	.string "Got it! The tutor moves will be sorted\n"
	.string "alphabetically.$"

MoveTutor_EventScript_SetSorting_Text_6:
# 1089 "data/maps/TradeCenter/scripts.pory"
	.string "Come see me if you want to change how\n"
	.string "the tutor moves are sorted.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_0:
# 1100 "data/maps/TradeCenter/scripts.pory"
	.string "The staff here can help you develop\n"
	.string "your Pokémon in many ways.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_1:
# 1104 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to tell you about any\n"
	.string "of the services here?$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_2:
# 1105 "data/maps/TradeCenter/scripts.pory"
	.string "Basic Move Tutor$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_3:
# 1105 "data/maps/TradeCenter/scripts.pory"
	.string "Egg Move Tutor$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_4:
# 1105 "data/maps/TradeCenter/scripts.pory"
	.string "Elite Move Tutor$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_5:
# 1105 "data/maps/TradeCenter/scripts.pory"
	.string "Pre-Damage$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_6:
# 1105 "data/maps/TradeCenter/scripts.pory"
	.string "Attribute Changer$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_7:
# 1105 "data/maps/TradeCenter/scripts.pory"
	.string "Nothing$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_8:
# 1108 "data/maps/TradeCenter/scripts.pory"
	.string "The well-dressed man on the left is the\n"
	.string "Basic Move Tutor.\p"
	.string "He can teach a variety of new moves to\n"
	.string "your Pokémon, completely free!\p"
	.string "As you defeat more Gym Leaders, he'll be\n"
	.string "able to teach new, more powerful moves\l"
	.string "to your Pokémon.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_9:
# 1110 "data/maps/TradeCenter/scripts.pory"
	.string "The woman in the middle is the Egg Move\n"
	.string "Tutor.\p"
	.string "She can teach your Pokémon moves that\n"
	.string "they can normally only learn through\l"
	.string "breeding.\p"
	.string "But, she charges a Heart Scale for each\n"
	.string "move she teaches.\p"
	.string "If you have the right combination of\n"
	.string "Pokémon, they might be able to teach\l"
	.string "each other Egg Moves for free at the\l"
	.string "Day Care Center in Route 117. So,\l"
	.string "consider carefully how to use her\l"
	.string "services.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_10:
# 1113 "data/maps/TradeCenter/scripts.pory"
	.string "However, she will only teach your\n"
	.string "Pokémon Egg Moves if you have at least\l"
	.string "one Gym Badge.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_11:
# 1116 "data/maps/TradeCenter/scripts.pory"
	.string "The older man in the middle is the Elite\n"
	.string "Move Tutor.\p"
	.string "He can teach your Pokémon some very\n"
	.string "rare and powerful moves, but he charges\l"
	.string "a Heart Scale for each move he teaches.\p"
	.string "These Elite Moves might normally be\n"
	.string "exclusive to other Pokémon, or could be\l"
	.string "moves a Pokémon could learn in faraway\l"
	.string "places long ago that they no longer\l"
	.string "learn naturally.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_12:
# 1119 "data/maps/TradeCenter/scripts.pory"
	.string "However, he will only teach your\n"
	.string "Pokémon Elite Moves if you have at\l"
	.string "least 3 Gym Badges.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_13:
# 1122 "data/maps/TradeCenter/scripts.pory"
	.string "The strange woman on the right can\n"
	.string "inflict a status condition or damage\l"
	.string "your Pokémon before a battle.\p"
	.string "This can be useful for some clever\n"
	.string "strategies.\p"
	.string "She doesn't charge anything to do it...\n"
	.string "which makes it feel weirder somehow.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_14:
# 1124 "data/maps/TradeCenter/scripts.pory"
	.string "The woman on the far right can help you\n"
	.string "adjust some of the hidden attributes\l"
	.string "of your Pokémon, such as their Nature,\l"
	.string "IVs, or Hidden Power.\p"
	.string "She charges a Heart Scale for each\n"
	.string "change she makes.$"

MoveTutor_EventScript_SelectMoveCategory_Text_0:
# 1135 "data/maps/TradeCenter/scripts.pory"
	.string "Which kind of move would you like your\n"
	.string "Pokémon to learn?$"

MoveTutor_EventScript_SelectMoveCategory_Text_1:
# 1136 "data/maps/TradeCenter/scripts.pory"
	.string "Physical Moves$"

MoveTutor_EventScript_SelectMoveCategory_Text_2:
# 1136 "data/maps/TradeCenter/scripts.pory"
	.string "Special Moves$"

MoveTutor_EventScript_SelectMoveCategory_Text_3:
# 1136 "data/maps/TradeCenter/scripts.pory"
	.string "Status Moves$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_0:
# 1155 "data/maps/TradeCenter/scripts.pory"
	.string "Body Press$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_1:
# 1156 "data/maps/TradeCenter/scripts.pory"
	.string "Triple Axel$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_2:
# 1159 "data/maps/TradeCenter/scripts.pory"
	.string "Poltergeist$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_3:
# 1160 "data/maps/TradeCenter/scripts.pory"
	.string "Sky Drop$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_4:
# 1163 "data/maps/TradeCenter/scripts.pory"
	.string "Explosion$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_5:
# 1164 "data/maps/TradeCenter/scripts.pory"
	.string "Megahorn$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_6:
# 1165 "data/maps/TradeCenter/scripts.pory"
	.string "Power Whip$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_7:
# 1166 "data/maps/TradeCenter/scripts.pory"
	.string "Leaf Blade$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_8:
# 1167 "data/maps/TradeCenter/scripts.pory"
	.string "Upper Hand$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_9:
# 1170 "data/maps/TradeCenter/scripts.pory"
	.string "Endeavor$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_10:
# 1171 "data/maps/TradeCenter/scripts.pory"
	.string "Phantom Force$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_11:
# 1172 "data/maps/TradeCenter/scripts.pory"
	.string "Darkest Lariat$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_12:
# 1173 "data/maps/TradeCenter/scripts.pory"
	.string "Retaliate$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_13:
# 1174 "data/maps/TradeCenter/scripts.pory"
	.string "Brutal Swing$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_14:
# 1175 "data/maps/TradeCenter/scripts.pory"
	.string "Power-Up Punch$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_15:
# 1178 "data/maps/TradeCenter/scripts.pory"
	.string "Gyro Ball$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_16:
# 1179 "data/maps/TradeCenter/scripts.pory"
	.string "Heavy Slam$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_17:
# 1180 "data/maps/TradeCenter/scripts.pory"
	.string "Giga Impact$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_18:
# 1181 "data/maps/TradeCenter/scripts.pory"
	.string "Body Slam$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_19:
# 1182 "data/maps/TradeCenter/scripts.pory"
	.string "Lash Out$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_20:
# 1183 "data/maps/TradeCenter/scripts.pory"
	.string "Razor Shell$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_21:
# 1184 "data/maps/TradeCenter/scripts.pory"
	.string "Icicle Spear$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_22:
# 1185 "data/maps/TradeCenter/scripts.pory"
	.string "Rock Blast$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_23:
# 1186 "data/maps/TradeCenter/scripts.pory"
	.string "Tail Slap$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_24:
# 1189 "data/maps/TradeCenter/scripts.pory"
	.string "Hard Press$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_25:
# 1190 "data/maps/TradeCenter/scripts.pory"
	.string "Self-Destruct$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_26:
# 1191 "data/maps/TradeCenter/scripts.pory"
	.string "Rock Climb$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_27:
# 1192 "data/maps/TradeCenter/scripts.pory"
	.string "Take Down$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_28:
# 1193 "data/maps/TradeCenter/scripts.pory"
	.string "Blaze Kick$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_29:
# 1194 "data/maps/TradeCenter/scripts.pory"
	.string "Bounce$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_30:
# 1195 "data/maps/TradeCenter/scripts.pory"
	.string "Secret Power$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_31:
# 1196 "data/maps/TradeCenter/scripts.pory"
	.string "Trailblaze$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_32:
# 1199 "data/maps/TradeCenter/scripts.pory"
	.string "Iron Tail$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_33:
# 1200 "data/maps/TradeCenter/scripts.pory"
	.string "Headbutt$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_34:
# 1201 "data/maps/TradeCenter/scripts.pory"
	.string "Smart Strike$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_35:
# 1202 "data/maps/TradeCenter/scripts.pory"
	.string "Fire Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_36:
# 1203 "data/maps/TradeCenter/scripts.pory"
	.string "Ice Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_37:
# 1204 "data/maps/TradeCenter/scripts.pory"
	.string "Thunder Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_38:
# 1207 "data/maps/TradeCenter/scripts.pory"
	.string "Low Kick$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_39:
# 1208 "data/maps/TradeCenter/scripts.pory"
	.string "Focus Punch$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_40:
# 1209 "data/maps/TradeCenter/scripts.pory"
	.string "Bug Bite$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_41:
# 1210 "data/maps/TradeCenter/scripts.pory"
	.string "Bulldoze$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_42:
# 1211 "data/maps/TradeCenter/scripts.pory"
	.string "Sand Tomb$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_43:
# 1212 "data/maps/TradeCenter/scripts.pory"
	.string "Rollout$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_44:
# 1215 "data/maps/TradeCenter/scripts.pory"
	.string "Super Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_45:
# 1216 "data/maps/TradeCenter/scripts.pory"
	.string "Metal Claw$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_46:
# 1217 "data/maps/TradeCenter/scripts.pory"
	.string "Poison Tail$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_47:
# 1218 "data/maps/TradeCenter/scripts.pory"
	.string "Pounce$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_48:
# 1220 "data/maps/TradeCenter/scripts.pory"
	.string "False Swipe$"

MoveTutor_EventScript_GetSpecialMoveList_Text_0:
# 1227 "data/maps/TradeCenter/scripts.pory"
	.string "Alluring Voice$"

MoveTutor_EventScript_GetSpecialMoveList_Text_1:
# 1230 "data/maps/TradeCenter/scripts.pory"
	.string "Future Sight$"

MoveTutor_EventScript_GetSpecialMoveList_Text_2:
# 1231 "data/maps/TradeCenter/scripts.pory"
	.string "Aura Sphere$"

MoveTutor_EventScript_GetSpecialMoveList_Text_3:
# 1232 "data/maps/TradeCenter/scripts.pory"
	.string "Mystical Fire$"

MoveTutor_EventScript_GetSpecialMoveList_Text_4:
# 1233 "data/maps/TradeCenter/scripts.pory"
	.string "Psychic Noise$"

MoveTutor_EventScript_GetSpecialMoveList_Text_5:
# 1234 "data/maps/TradeCenter/scripts.pory"
	.string "Stored Power$"

MoveTutor_EventScript_GetSpecialMoveList_Text_6:
# 1237 "data/maps/TradeCenter/scripts.pory"
	.string "Electro Ball$"

MoveTutor_EventScript_GetSpecialMoveList_Text_7:
# 1238 "data/maps/TradeCenter/scripts.pory"
	.string "Misty Explosion$"

MoveTutor_EventScript_GetSpecialMoveList_Text_8:
# 1239 "data/maps/TradeCenter/scripts.pory"
	.string "Pollen Puff$"

MoveTutor_EventScript_GetSpecialMoveList_Text_9:
# 1242 "data/maps/TradeCenter/scripts.pory"
	.string "Blast Burn$"

MoveTutor_EventScript_GetSpecialMoveList_Text_10:
# 1243 "data/maps/TradeCenter/scripts.pory"
	.string "Frenzy Plant$"

MoveTutor_EventScript_GetSpecialMoveList_Text_11:
# 1244 "data/maps/TradeCenter/scripts.pory"
	.string "Hydro Cannon$"

MoveTutor_EventScript_GetSpecialMoveList_Text_12:
# 1245 "data/maps/TradeCenter/scripts.pory"
	.string "Focus Blast$"

MoveTutor_EventScript_GetSpecialMoveList_Text_13:
# 1246 "data/maps/TradeCenter/scripts.pory"
	.string "Fire Pledge$"

MoveTutor_EventScript_GetSpecialMoveList_Text_14:
# 1247 "data/maps/TradeCenter/scripts.pory"
	.string "Grass Pledge$"

MoveTutor_EventScript_GetSpecialMoveList_Text_15:
# 1248 "data/maps/TradeCenter/scripts.pory"
	.string "Water Pledge$"

MoveTutor_EventScript_GetSpecialMoveList_Text_16:
# 1251 "data/maps/TradeCenter/scripts.pory"
	.string "Psycho Boost$"

MoveTutor_EventScript_GetSpecialMoveList_Text_17:
# 1252 "data/maps/TradeCenter/scripts.pory"
	.string "Dream Eater$"

MoveTutor_EventScript_GetSpecialMoveList_Text_18:
# 1253 "data/maps/TradeCenter/scripts.pory"
	.string "Tri Attack$"

MoveTutor_EventScript_GetSpecialMoveList_Text_19:
# 1256 "data/maps/TradeCenter/scripts.pory"
	.string "Zap Cannon$"

MoveTutor_EventScript_GetSpecialMoveList_Text_20:
# 1257 "data/maps/TradeCenter/scripts.pory"
	.string "Uproar$"

MoveTutor_EventScript_GetSpecialMoveList_Text_21:
# 1258 "data/maps/TradeCenter/scripts.pory"
	.string "Psybeam$"

MoveTutor_EventScript_GetSpecialMoveList_Text_22:
# 1259 "data/maps/TradeCenter/scripts.pory"
	.string "Burning Jealousy$"

MoveTutor_EventScript_GetSpecialMoveList_Text_23:
# 1260 "data/maps/TradeCenter/scripts.pory"
	.string "Incinerate$"

MoveTutor_EventScript_GetSpecialMoveList_Text_24:
# 1263 "data/maps/TradeCenter/scripts.pory"
	.string "Night Shade$"

MoveTutor_EventScript_GetSpecialMoveList_Text_25:
# 1264 "data/maps/TradeCenter/scripts.pory"
	.string "Signal Beam$"

MoveTutor_EventScript_GetSpecialMoveList_Text_26:
# 1265 "data/maps/TradeCenter/scripts.pory"
	.string "Brine$"

MoveTutor_EventScript_GetSpecialMoveList_Text_27:
# 1266 "data/maps/TradeCenter/scripts.pory"
	.string "Frost Breath$"

MoveTutor_EventScript_GetSpecialMoveList_Text_28:
# 1267 "data/maps/TradeCenter/scripts.pory"
	.string "Shock Wave$"

MoveTutor_EventScript_GetSpecialMoveList_Text_29:
# 1268 "data/maps/TradeCenter/scripts.pory"
	.string "Silver Wind$"

MoveTutor_EventScript_GetSpecialMoveList_Text_30:
# 1271 "data/maps/TradeCenter/scripts.pory"
	.string "Air Cutter$"

MoveTutor_EventScript_GetSpecialMoveList_Text_31:
# 1272 "data/maps/TradeCenter/scripts.pory"
	.string "Magical Leaf$"

MoveTutor_EventScript_GetSpecialMoveList_Text_32:
# 1273 "data/maps/TradeCenter/scripts.pory"
	.string "Round$"

MoveTutor_EventScript_GetSpecialMoveList_Text_33:
# 1274 "data/maps/TradeCenter/scripts.pory"
	.string "Electroweb$"

MoveTutor_EventScript_GetSpecialMoveList_Text_34:
# 1275 "data/maps/TradeCenter/scripts.pory"
	.string "Mud Shot$"

MoveTutor_EventScript_GetSpecialMoveList_Text_35:
# 1276 "data/maps/TradeCenter/scripts.pory"
	.string "Fire Spin$"

MoveTutor_EventScript_GetSpecialMoveList_Text_36:
# 1277 "data/maps/TradeCenter/scripts.pory"
	.string "Whirlpool$"

MoveTutor_EventScript_GetSpecialMoveList_Text_37:
# 1280 "data/maps/TradeCenter/scripts.pory"
	.string "Disarming Voice$"

MoveTutor_EventScript_GetSpecialMoveList_Text_38:
# 1281 "data/maps/TradeCenter/scripts.pory"
	.string "Echoed Voice$"

MoveTutor_EventScript_GetSpecialMoveList_Text_39:
# 1282 "data/maps/TradeCenter/scripts.pory"
	.string "Infestation$"

MoveTutor_EventScript_GetSpecialMoveList_Text_40:
# 1283 "data/maps/TradeCenter/scripts.pory"
	.string "Mud-Slap$"

MoveTutor_EventScript_GetStatusMoveList_Text_0:
# 1292 "data/maps/TradeCenter/scripts.pory"
	.string "Electric Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_1:
# 1293 "data/maps/TradeCenter/scripts.pory"
	.string "Grassy Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_2:
# 1294 "data/maps/TradeCenter/scripts.pory"
	.string "Misty Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_3:
# 1295 "data/maps/TradeCenter/scripts.pory"
	.string "Psychic Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_4:
# 1296 "data/maps/TradeCenter/scripts.pory"
	.string "Rain Dance$"

MoveTutor_EventScript_GetStatusMoveList_Text_5:
# 1297 "data/maps/TradeCenter/scripts.pory"
	.string "Sandstorm$"

MoveTutor_EventScript_GetStatusMoveList_Text_6:
# 1298 "data/maps/TradeCenter/scripts.pory"
	.string "Snowscape$"

MoveTutor_EventScript_GetStatusMoveList_Text_7:
# 1299 "data/maps/TradeCenter/scripts.pory"
	.string "Sunny Day$"

MoveTutor_EventScript_GetStatusMoveList_Text_8:
# 1302 "data/maps/TradeCenter/scripts.pory"
	.string "Aurora Veil$"

MoveTutor_EventScript_GetStatusMoveList_Text_9:
# 1305 "data/maps/TradeCenter/scripts.pory"
	.string "Ally Switch$"

MoveTutor_EventScript_GetStatusMoveList_Text_10:
# 1306 "data/maps/TradeCenter/scripts.pory"
	.string "Cosmic Power$"

MoveTutor_EventScript_GetStatusMoveList_Text_11:
# 1307 "data/maps/TradeCenter/scripts.pory"
	.string "Gravity$"

MoveTutor_EventScript_GetStatusMoveList_Text_12:
# 1308 "data/maps/TradeCenter/scripts.pory"
	.string "Imprison$"

MoveTutor_EventScript_GetStatusMoveList_Text_13:
# 1309 "data/maps/TradeCenter/scripts.pory"
	.string "Magic Room$"

MoveTutor_EventScript_GetStatusMoveList_Text_14:
# 1312 "data/maps/TradeCenter/scripts.pory"
	.string "Dragon Cheer$"

MoveTutor_EventScript_GetStatusMoveList_Text_15:
# 1313 "data/maps/TradeCenter/scripts.pory"
	.string "Dragon Dance$"

MoveTutor_EventScript_GetStatusMoveList_Text_16:
# 1314 "data/maps/TradeCenter/scripts.pory"
	.string "Feather Dance$"

MoveTutor_EventScript_GetStatusMoveList_Text_17:
# 1317 "data/maps/TradeCenter/scripts.pory"
	.string "Fake Tears$"

MoveTutor_EventScript_GetStatusMoveList_Text_18:
# 1318 "data/maps/TradeCenter/scripts.pory"
	.string "Pain Split$"

MoveTutor_EventScript_GetStatusMoveList_Text_19:
# 1319 "data/maps/TradeCenter/scripts.pory"
	.string "Psych Up$"

MoveTutor_EventScript_GetStatusMoveList_Text_20:
# 1320 "data/maps/TradeCenter/scripts.pory"
	.string "Toxic Spikes$"

MoveTutor_EventScript_GetStatusMoveList_Text_21:
# 1321 "data/maps/TradeCenter/scripts.pory"
	.string "Trick$"

MoveTutor_EventScript_GetStatusMoveList_Text_22:
# 1322 "data/maps/TradeCenter/scripts.pory"
	.string "Venom Drench$"

MoveTutor_EventScript_GetStatusMoveList_Text_23:
# 1325 "data/maps/TradeCenter/scripts.pory"
	.string "Curse$"

MoveTutor_EventScript_GetStatusMoveList_Text_24:
# 1326 "data/maps/TradeCenter/scripts.pory"
	.string "Iron Defense$"

MoveTutor_EventScript_GetStatusMoveList_Text_25:
# 1327 "data/maps/TradeCenter/scripts.pory"
	.string "Stealth Rock$"

MoveTutor_EventScript_GetStatusMoveList_Text_26:
# 1328 "data/maps/TradeCenter/scripts.pory"
	.string "Wonder Room$"

MoveTutor_EventScript_GetStatusMoveList_Text_27:
# 1331 "data/maps/TradeCenter/scripts.pory"
	.string "Agility$"

MoveTutor_EventScript_GetStatusMoveList_Text_28:
# 1332 "data/maps/TradeCenter/scripts.pory"
	.string "Metal Sound$"

MoveTutor_EventScript_GetStatusMoveList_Text_29:
# 1333 "data/maps/TradeCenter/scripts.pory"
	.string "Nature Power$"

MoveTutor_EventScript_GetStatusMoveList_Text_30:
# 1334 "data/maps/TradeCenter/scripts.pory"
	.string "Steelsurge$"

MoveTutor_EventScript_GetStatusMoveList_Text_31:
# 1335 "data/maps/TradeCenter/scripts.pory"
	.string "Snatch$"

MoveTutor_EventScript_GetStatusMoveList_Text_32:
# 1338 "data/maps/TradeCenter/scripts.pory"
	.string "Charge$"

MoveTutor_EventScript_GetStatusMoveList_Text_33:
# 1339 "data/maps/TradeCenter/scripts.pory"
	.string "Confuse Ray$"

MoveTutor_EventScript_GetStatusMoveList_Text_34:
# 1340 "data/maps/TradeCenter/scripts.pory"
	.string "Embargo$"

MoveTutor_EventScript_GetStatusMoveList_Text_35:
# 1341 "data/maps/TradeCenter/scripts.pory"
	.string "Metronome$"

MoveTutor_EventScript_GetStatusMoveList_Text_36:
# 1342 "data/maps/TradeCenter/scripts.pory"
	.string "Recycle$"

MoveTutor_EventScript_GetStatusMoveList_Text_37:
# 1343 "data/maps/TradeCenter/scripts.pory"
	.string "Spikes$"

MoveTutor_EventScript_GetStatusMoveList_Text_38:
# 1346 "data/maps/TradeCenter/scripts.pory"
	.string "Coaching$"

MoveTutor_EventScript_GetStatusMoveList_Text_39:
# 1347 "data/maps/TradeCenter/scripts.pory"
	.string "Hone Claws$"

MoveTutor_EventScript_GetStatusMoveList_Text_40:
# 1350 "data/maps/TradeCenter/scripts.pory"
	.string "Quash$"

MoveTutor_EventScript_GetStatusMoveList_Text_41:
# 1351 "data/maps/TradeCenter/scripts.pory"
	.string "Scary Face$"

MoveTutor_EventScript_GetStatusMoveList_Text_42:
# 1352 "data/maps/TradeCenter/scripts.pory"
	.string "Spite$"

MoveTutor_EventScript_GetStatusMoveList_Text_43:
# 1353 "data/maps/TradeCenter/scripts.pory"
	.string "Swagger$"

MoveTutor_EventScript_GetStatusMoveList_Text_44:
# 1354 "data/maps/TradeCenter/scripts.pory"
	.string "Work Up$"

MoveTutor_EventScript_ComeBackLater_Text_0:
# 1839 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "teach one of your Pokémon a new move.$"

Common_EventScript_PreDamageOrStatus_Text_0:
# 1849 "data/maps/TradeCenter/scripts.pory"
	.string "I can weaken your Pokémon before\n"
	.string "battle, by inflicting damage or a status\l"
	.string "condition.$"

Common_EventScript_PreDamageOrStatus_Text_1:
# 1852 "data/maps/TradeCenter/scripts.pory"
	.string "How can I be of assistance?$"

Common_EventScript_PreDamageOrStatus_Text_2:
# 1853 "data/maps/TradeCenter/scripts.pory"
	.string "Set Status$"

Common_EventScript_PreDamageOrStatus_Text_3:
# 1853 "data/maps/TradeCenter/scripts.pory"
	.string "Set Damage$"

Common_EventScript_PreDamageOrStatus_Text_4:
# 1853 "data/maps/TradeCenter/scripts.pory"
	.string "Never Mind$"

PokemonCenter_2F_EventScript_PreTrain_ComeBackLater_Text_0:
# 1868 "data/maps/TradeCenter/scripts.pory"
	.string "I'll be here, if you ever need my\n"
	.string "services.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_0:
# 1877 "data/maps/TradeCenter/scripts.pory"
	.string "Choose a Pokémon to set damage for.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_1:
# 1887 "data/maps/TradeCenter/scripts.pory"
	.string "That's an Egg! I can't harm it.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_2:
# 1893 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon has already fainted! I\n"
	.string "can't injure it farther.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_3:
# 1914 "data/maps/TradeCenter/scripts.pory"
	.string "The specified HP is greater than that\n"
	.string "Pokémon can have. Its maximum HP is\l"
	.string "{STR_VAR_1}.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_4:
# 1917 "data/maps/TradeCenter/scripts.pory"
	.string "HP can't be set to 0.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_5:
# 1920 "data/maps/TradeCenter/scripts.pory"
	.string "The Pokémon's damage has been set!$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0:
# 1931 "data/maps/TradeCenter/scripts.pory"
	.string "Your PARTY has no Pokémon.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_1:
# 1935 "data/maps/TradeCenter/scripts.pory"
	.string "Choose a Pokémon to inflict a status\n"
	.string "condition on.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2:
# 1948 "data/maps/TradeCenter/scripts.pory"
	.string "Poison$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_3:
# 1949 "data/maps/TradeCenter/scripts.pory"
	.string "Toxic Poison$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_4:
# 1950 "data/maps/TradeCenter/scripts.pory"
	.string "Paralysis$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_5:
# 1951 "data/maps/TradeCenter/scripts.pory"
	.string "Sleep$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_6:
# 1952 "data/maps/TradeCenter/scripts.pory"
	.string "Burn$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_7:
# 1953 "data/maps/TradeCenter/scripts.pory"
	.string "Freeze$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_8:
# 1955 "data/maps/TradeCenter/scripts.pory"
	.string "Which status condition would you like\n"
	.string "to inflict?$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_9:
# 1964 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being\n"
	.string "poisoned.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_10:
# 1976 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being frozen.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_11:
# 1982 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being burned.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_12:
# 1988 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being\n"
	.string "paralyzed.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_13:
# 1996 "data/maps/TradeCenter/scripts.pory"
	.string "Your Pokémon was inflicted with a\n"
	.string "status condition!$"

Common_EventScript_AttributeChanger_Text_0:
# 2007 "data/maps/TradeCenter/scripts.pory"
	.string "Hello! I can change your Pokémon's\n"
	.string "Nature, IVs, or Hidden Power Type.\p"
	.string "It will cost you a Heart Scale, however.$"

Common_EventScript_AttributeChanger_Text_1:
# 2017 "data/maps/TradeCenter/scripts.pory"
	.string "What would you like to change?$"

Common_EventScript_AttributeChanger_Text_2:
# 2018 "data/maps/TradeCenter/scripts.pory"
	.string "Nature$"

Common_EventScript_AttributeChanger_Text_3:
# 2018 "data/maps/TradeCenter/scripts.pory"
	.string "IVs$"

Common_EventScript_AttributeChanger_Text_4:
# 2018 "data/maps/TradeCenter/scripts.pory"
	.string "Hidden Power Type$"

Common_EventScript_AttributeChanger_Text_5:
# 2018 "data/maps/TradeCenter/scripts.pory"
	.string "Nevermind$"

Common_EventScript_AttributeChanger_ComeBackLater_Text_0:
# 2037 "data/maps/TradeCenter/scripts.pory"
	.string "I'll be here if you ever want to change\n"
	.string "any of your Pokémon's attributes!$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_0:
# 2050 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon's Hidden Power type\n"
	.string "would you like to change?$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_1:
# 2065 "data/maps/TradeCenter/scripts.pory"
	.string "What would you like your Pokémon's\n"
	.string "Hidden Power type to be?$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_2:
# 2066 "data/maps/TradeCenter/scripts.pory"
	.string "Fighting$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_3:
# 2067 "data/maps/TradeCenter/scripts.pory"
	.string "Flying$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_4:
# 2069 "data/maps/TradeCenter/scripts.pory"
	.string "Ground$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_5:
# 2070 "data/maps/TradeCenter/scripts.pory"
	.string "Rock$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_6:
# 2071 "data/maps/TradeCenter/scripts.pory"
	.string "Bug$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_7:
# 2072 "data/maps/TradeCenter/scripts.pory"
	.string "Ghost$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_8:
# 2073 "data/maps/TradeCenter/scripts.pory"
	.string "Steel$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_9:
# 2074 "data/maps/TradeCenter/scripts.pory"
	.string "Fire$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_10:
# 2075 "data/maps/TradeCenter/scripts.pory"
	.string "Water$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_11:
# 2076 "data/maps/TradeCenter/scripts.pory"
	.string "Grass$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_12:
# 2077 "data/maps/TradeCenter/scripts.pory"
	.string "Electric$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_13:
# 2078 "data/maps/TradeCenter/scripts.pory"
	.string "Psychic$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_14:
# 2079 "data/maps/TradeCenter/scripts.pory"
	.string "Ice$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_15:
# 2080 "data/maps/TradeCenter/scripts.pory"
	.string "Dragon$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_16:
# 2081 "data/maps/TradeCenter/scripts.pory"
	.string "Dark$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_17:
# 2082 "data/maps/TradeCenter/scripts.pory"
	.string "Fairy$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18:
# 2120 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "change your Pokémon's Hidden Power\l"
	.string "type.$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_19:
# 2133 "data/maps/TradeCenter/scripts.pory"
	.string "Your {STR_VAR_1}'s Hidden Power\n"
	.string "type is already {STR_VAR_2}.$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_20:
# 2138 "data/maps/TradeCenter/scripts.pory"
	.string "Are you sure you want to change\n"
	.string "{STR_VAR_1}'s Hidden Power type to\l"
	.string "{STR_VAR_2} for a Heart Scale?$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_21:
# 2141 "data/maps/TradeCenter/scripts.pory"
	.string "Your {STR_VAR_1}'s Hidden Power\n"
	.string "type was changed to {STR_VAR_2}!$"

Common_EventScript_ChangeNature_Text_0:
# 2163 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon's Nature would you like\n"
	.string "to change?$"

Common_EventScript_ChangeNature_Text_1:
# 2177 "data/maps/TradeCenter/scripts.pory"
	.string "What Nature would you like\n"
	.string "{STR_VAR_1} to have?$"

Common_EventScript_ChangeNature_Text_2:
# 2178 "data/maps/TradeCenter/scripts.pory"
	.string "Hardy (neutral)$"

Common_EventScript_ChangeNature_Text_3:
# 2179 "data/maps/TradeCenter/scripts.pory"
	.string "Lonely (+Atk/-Def)$"

Common_EventScript_ChangeNature_Text_4:
# 2180 "data/maps/TradeCenter/scripts.pory"
	.string "Brave (+Atk/-Spe)$"

Common_EventScript_ChangeNature_Text_5:
# 2181 "data/maps/TradeCenter/scripts.pory"
	.string "Adamant (+Atk/-SpA)$"

Common_EventScript_ChangeNature_Text_6:
# 2182 "data/maps/TradeCenter/scripts.pory"
	.string "Naughty (+Atk/-SpD)$"

Common_EventScript_ChangeNature_Text_7:
# 2183 "data/maps/TradeCenter/scripts.pory"
	.string "Bold (+Def/-Atk)$"

Common_EventScript_ChangeNature_Text_8:
# 2184 "data/maps/TradeCenter/scripts.pory"
	.string "Docile (neutral)$"

Common_EventScript_ChangeNature_Text_9:
# 2185 "data/maps/TradeCenter/scripts.pory"
	.string "Relaxed (+Def/-Spe)$"

Common_EventScript_ChangeNature_Text_10:
# 2186 "data/maps/TradeCenter/scripts.pory"
	.string "Impish (+Def/-SpA)$"

Common_EventScript_ChangeNature_Text_11:
# 2187 "data/maps/TradeCenter/scripts.pory"
	.string "Lax (+Def/-SpD)$"

Common_EventScript_ChangeNature_Text_12:
# 2188 "data/maps/TradeCenter/scripts.pory"
	.string "Timid (+Spe/-Atk)$"

Common_EventScript_ChangeNature_Text_13:
# 2189 "data/maps/TradeCenter/scripts.pory"
	.string "Hasty (+Spe/-Def)$"

Common_EventScript_ChangeNature_Text_14:
# 2190 "data/maps/TradeCenter/scripts.pory"
	.string "Serious (neutral)$"

Common_EventScript_ChangeNature_Text_15:
# 2191 "data/maps/TradeCenter/scripts.pory"
	.string "Jolly (+Spe/-SpA)$"

Common_EventScript_ChangeNature_Text_16:
# 2192 "data/maps/TradeCenter/scripts.pory"
	.string "Naive (+Spe/-SpD)$"

Common_EventScript_ChangeNature_Text_17:
# 2193 "data/maps/TradeCenter/scripts.pory"
	.string "Modest (+SpA/-Atk)$"

Common_EventScript_ChangeNature_Text_18:
# 2194 "data/maps/TradeCenter/scripts.pory"
	.string "Mild (+SpA/-Def)$"

Common_EventScript_ChangeNature_Text_19:
# 2195 "data/maps/TradeCenter/scripts.pory"
	.string "Quiet (+SpA/-Spe)$"

Common_EventScript_ChangeNature_Text_20:
# 2196 "data/maps/TradeCenter/scripts.pory"
	.string "Bashful (neutral)$"

Common_EventScript_ChangeNature_Text_21:
# 2197 "data/maps/TradeCenter/scripts.pory"
	.string "Rash (+SpA/-SpD)$"

Common_EventScript_ChangeNature_Text_22:
# 2198 "data/maps/TradeCenter/scripts.pory"
	.string "Calm (+SpD/-Atk)$"

Common_EventScript_ChangeNature_Text_23:
# 2199 "data/maps/TradeCenter/scripts.pory"
	.string "Gentle (+SpD/-Def)$"

Common_EventScript_ChangeNature_Text_24:
# 2200 "data/maps/TradeCenter/scripts.pory"
	.string "Sassy (+SpD/-Spe)$"

Common_EventScript_ChangeNature_Text_25:
# 2201 "data/maps/TradeCenter/scripts.pory"
	.string "Careful (+SpD/-SpA)$"

Common_EventScript_ChangeNature_Text_26:
# 2202 "data/maps/TradeCenter/scripts.pory"
	.string "Quirky (neutral)$"

Common_EventScript_ChangeNature_Text_27:
# 2256 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "change your Pokémon's Nature.$"

Common_EventScript_ChangeNature_Text_28:
# 2269 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s Nature is already\n"
	.string "{STR_VAR_2}.$"

Common_EventScript_ChangeNature_Text_29:
# 2279 "data/maps/TradeCenter/scripts.pory"
	.string "It looks like your Bag is full.\p"
	.string "Please make some room and come back!$"

Common_EventScript_ChangeNature_Text_30:
# 2285 "data/maps/TradeCenter/scripts.pory"
	.string "Are you sure you want to change\n"
	.string "{STR_VAR_1}'s Nature to\l"
	.string "{STR_VAR_2} for a Heart Scale?$"

Common_EventScript_ChangeNature_Text_31:
# 2288 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s Nature was changed to\n"
	.string "{STR_VAR_2}!$"

Common_EventScript_ChangeNature_Text_32:
# 2292 "data/maps/TradeCenter/scripts.pory"
	.string "We have a 2-for-1 special for this\n"
	.string "nature; please take this mint as well.$"

Common_EventScript_ChangeIV_Text_0:
# 2315 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon's IVs would you like to\n"
	.string "change?$"

Common_EventScript_ChangeIV_Text_1:
# 2329 "data/maps/TradeCenter/scripts.pory"
	.string "Which stat's IV would you like to change\n"
	.string "for {STR_VAR_1}?$"

Common_EventScript_ChangeIV_Text_2:
# 2330 "data/maps/TradeCenter/scripts.pory"
	.string "HP$"

Common_EventScript_ChangeIV_Text_3:
# 2331 "data/maps/TradeCenter/scripts.pory"
	.string "Attack$"

Common_EventScript_ChangeIV_Text_4:
# 2332 "data/maps/TradeCenter/scripts.pory"
	.string "Defense$"

Common_EventScript_ChangeIV_Text_5:
# 2333 "data/maps/TradeCenter/scripts.pory"
	.string "Speed$"

Common_EventScript_ChangeIV_Text_6:
# 2334 "data/maps/TradeCenter/scripts.pory"
	.string "Sp. Attack$"

Common_EventScript_ChangeIV_Text_7:
# 2335 "data/maps/TradeCenter/scripts.pory"
	.string "Sp. Defense$"

Common_EventScript_ChangeIV_Text_8:
# 2351 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "change your Pokémon's IVs.$"

Common_EventScript_ChangeIV_Text_9:
# 2366 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s {STR_VAR_2} IV is\n"
	.string "currently {STR_VAR_3}.\p"
	.string "Would you like to maximize or minimize\n"
	.string "it?$"

Common_EventScript_ChangeIV_Text_10:
# 2367 "data/maps/TradeCenter/scripts.pory"
	.string "Maximize$"

Common_EventScript_ChangeIV_Text_11:
# 2368 "data/maps/TradeCenter/scripts.pory"
	.string "Minimize$"

Common_EventScript_ChangeIV_Text_12:
# 2372 "data/maps/TradeCenter/scripts.pory"
	.string "maximum$"

Common_EventScript_ChangeIV_Text_13:
# 2375 "data/maps/TradeCenter/scripts.pory"
	.string "minimum$"

Common_EventScript_ChangeIV_Text_14:
# 2391 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s {STR_VAR_2} IV is\n"
	.string "already at the maximum.$"

Common_EventScript_ChangeIV_Text_15:
# 2398 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s {STR_VAR_2} IV is\n"
	.string "already at the minimum.$"

Common_EventScript_ChangeIV_Text_16:
# 2407 "data/maps/TradeCenter/scripts.pory"
	.string "Are you sure you want to trade a Heart\n"
	.string "Scale to change {STR_VAR_1}'s\l"
	.string "{STR_VAR_2} IV from {STR_VAR_3}\l"
	.string "to the maximum of 31?$"

Common_EventScript_ChangeIV_Text_17:
# 2410 "data/maps/TradeCenter/scripts.pory"
	.string "Are you sure you want to trade a Heart\n"
	.string "Scale to change {STR_VAR_1}'s\l"
	.string "{STR_VAR_2} IV from {STR_VAR_3}\l"
	.string "to the minimum of 0?$"

Common_EventScript_ChangeIV_Text_18:
# 2415 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s {STR_VAR_2} IV was\n"
	.string "changed to {STR_VAR_3}!$"

Common_EventScript_EliteMoveTutor_Text_0:
# 2439 "data/maps/TradeCenter/scripts.pory"
	.string "You need to increase your Trainer Level\n"
	.string "further before I can teach any Elite\l"
	.string "Moves to your Pokémon.$"

Common_EventScript_EliteMoveTutor_Text_1:
# 2451 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to teach an Elite Move\n"
	.string "to any of your Pokémon?$"

Common_EventScript_EggMoveTutor_Text_0:
# 2552 "data/maps/TradeCenter/scripts.pory"
	.string "I'm the Egg Move Tutor.\p"
	.string "I can teach Pokémon moves they could\n"
	.string "have learned as Eggs.\p"
	.string "Unfortunately, I can only work with\n"
	.string "Trainers with at least one Gym Badge.\p"
	.string "Please come back later!$"

Common_EventScript_EggMoveTutor_Text_1:
# 2567 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to teach an Egg Move\n"
	.string "to any of your Pokémon for a Heart\l"
	.string "Scale?$"

PokemonCenter_2F_Unused_MoveTutor_Text_0:
# 2666 "data/maps/TradeCenter/scripts.pory"
	.string "Fusion Bolt$"

PokemonCenter_2F_Unused_MoveTutor_Text_1:
# 2667 "data/maps/TradeCenter/scripts.pory"
	.string "Fusion Flare$"

PokemonCenter_2F_Unused_MoveTutor_Text_2:
# 2668 "data/maps/TradeCenter/scripts.pory"
	.string "Ice Burn$"

PokemonCenter_2F_Unused_MoveTutor_Text_3:
# 2669 "data/maps/TradeCenter/scripts.pory"
	.string "Freeze Shock$"

TradeCenter_EventScript_DrainPunch_Text_0:
# 2709 "data/maps/TradeCenter/scripts.pory"
	.string "Why take a hit when you can take HP\n"
	.string "instead?\p"
	.string "This TM teaches Drain Punch: strike\n"
	.string "hard and recover your strength at the\l"
	.string "same time!$"

TradeCenter_EventScript_DrainPunch_Text_1:
# 2715 "data/maps/TradeCenter/scripts.pory"
	.string "You already have Drain Punch. Keep\n"
	.string "fighting and recovering!$"

TradeCenter_EventScript_ShadowClaw_Text_0:
# 2726 "data/maps/TradeCenter/scripts.pory"
	.string "A claw forged from shadows strikes with\n"
	.string "high critical-hit potential.\p"
	.string "Here, take this TM: Shadow Claw is a\n"
	.string "powerful Ghost-type slash!$"

TradeCenter_EventScript_ShadowClaw_Text_1:
# 2732 "data/maps/TradeCenter/scripts.pory"
	.string "You already have Shadow Claw. Keep\n"
	.string "striking from the darkness!$"

TradeCenter_EventScript_PsychoCut_Text_0:
# 2743 "data/maps/TradeCenter/scripts.pory"
	.string "Blades of psychic energy slice through\n"
	.string "the air with frightening precision.\p"
	.string "Take this TM: Psycho Cut lands critical\n"
	.string "hits more easily than most moves!$"

TradeCenter_EventScript_PsychoCut_Text_1:
# 2749 "data/maps/TradeCenter/scripts.pory"
	.string "You already have Psycho Cut. Stay\n"
	.string "sharp out there!$"

TradeCenter_EventScript_CrossPoison_Text_0:
# 2760 "data/maps/TradeCenter/scripts.pory"
	.string "A slashing attack that spreads venom\n"
	.string "on contact.\p"
	.string "Here, take this TM: Cross Poison is a\n"
	.string "high-critical-hit Poison move that may\l"
	.string "leave foes poisoned!$"

TradeCenter_EventScript_CrossPoison_Text_1:
# 2766 "data/maps/TradeCenter/scripts.pory"
	.string "You already have Cross Poison. Keep\n"
	.string "spreading the venom!$"

Common_Text_CaveIsDarkUseFlash::
# 357 "data/maps/TradeCenter/scripts.pory"
	.string "This cave is too dark to explore\n"
	.string "without a light.\p"
	.string "{PLAYER}'s Pokémon used Flash!$"

Common_Text_CaveIsDarkNeedFlash::
# 361 "data/maps/TradeCenter/scripts.pory"
	.string "This cave is too dark to explore\n"
	.string "without a light.\p"
	.string "It's better to turn back.$"

Common_Text_BerryTreeSproutEncounter::
# 758 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the sprouting\n"
	.string "berry tree!$"

Common_Text_BerryTreeTallEncounter::
# 762 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the growing\n"
	.string "berry tree!$"

Common_Text_BerryTreeFlowersEncounter::
# 766 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the flowering\n"
	.string "berry tree!$"

Common_Text_BerryTreeBerriesEncounter::
# 770 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon eating the\n"
	.string "berries in the tree!$"

MoveTutor_Text_BasicAndEliteMoves::
# 1057 "data/maps/TradeCenter/scripts.pory"
	.string "The Move Tutor on the left knows many\n"
	.string "moves that lots of Pokémon can learn.\p"
	.string "He'll teach your Pokémon these moves\n"
	.string "for free, as many times as you like!\p"
	.string "The Tutor on the Right teaches Elite\n"
	.string "moves.\p"
	.string "These are rarer, but he'll charge a\n"
	.string "Heart Scale to teach one, so choose\l"
	.string "carefully!$"

MoveTutor_Text_BufferWhichMon::
# 1062 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon should learn\n"
	.string "{STR_VAR_1}?$"

MoveTutor_Text_WhichMoveWouldYouLikeToTeach::
# 1066 "data/maps/TradeCenter/scripts.pory"
	.string "Which move would you like to teach to\n"
	.string "one of your Pokémon?$"

EliteMoveTutor_Text_Intro::
# 2509 "data/maps/TradeCenter/scripts.pory"
	.string "I am the Elite Move Tutor.\p"
	.string "I can teach certain Pokémon powerful\n"
	.string "Elite Moves that they can't learn any\l"
	.string "other way.\p"
	.string "It will cost you one Heart Scale per\n"
	.string "move.$"

EliteMoveTutor_Text_ChooseMon::
# 2513 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon would you like me to\n"
	.string "check?$"

EliteMoveTutor_Text_CantTeachEgg::
# 2517 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but I can't teach moves to an\n"
	.string "Egg.$"

EliteMoveTutor_Text_NoEliteMoves::
# 2521 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but {STR_VAR_1} can't\n"
	.string "learn any Elite Moves.$"

EliteMoveTutor_Text_HasEliteMoves::
# 2525 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1} can learn Elite Moves!\p"
	.string "Let me show you what's available...$"

EliteMoveTutor_Text_AnythingElse::
# 2529 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to teach another Elite\n"
	.string "Move?$"

EliteMoveTutor_Text_ComeBack::
# 2533 "data/maps/TradeCenter/scripts.pory"
	.string "Come back anytime if you want to teach\n"
	.string "an Elite Move to one of your Pokémon.$"

EliteMoveTutor_Text_NeedHeartScale::
# 2537 "data/maps/TradeCenter/scripts.pory"
	.string "Come back when you have a Heart Scale.$"

EliteMoveTutor_Text_NoMoreHeartScales::
# 2541 "data/maps/TradeCenter/scripts.pory"
	.string "That's all for now.\p"
	.string "Come back with more Heart Scales if you\n"
	.string "want to learn additional Elite Moves.$"

EggMoveTutor_Text_Intro::
# 2626 "data/maps/TradeCenter/scripts.pory"
	.string "I am the Egg Move Tutor.\p"
	.string "I can teach certain Pokémon moves they\n"
	.string "could have learned as Eggs.\p"
	.string "It will cost you one Heart Scale per\n"
	.string "move.$"

EggMoveTutor_Text_ChooseMon::
# 2630 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon would you like me to\n"
	.string "check?$"

EggMoveTutor_Text_CantTeachEgg::
# 2634 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but I can't teach moves to an\n"
	.string "Egg.$"

EggMoveTutor_Text_NoEggMoves::
# 2638 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but {STR_VAR_1} doesn't\n"
	.string "have any Egg Moves to learn.$"

EggMoveTutor_Text_HasEggMoves::
# 2642 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1} can learn Egg Moves!\p"
	.string "Let me show you what's available...$"

EggMoveTutor_Text_AnythingElse::
# 2646 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to teach another Egg\n"
	.string "Move?$"

EggMoveTutor_Text_ComeBack::
# 2650 "data/maps/TradeCenter/scripts.pory"
	.string "Come back anytime if you want to teach\n"
	.string "an Egg Move to one of your Pokémon.$"

EggMoveTutor_Text_NeedHeartScale::
# 2654 "data/maps/TradeCenter/scripts.pory"
	.string "I am the Egg Move Tutor.\p"
	.string "I can teach certain Pokémon moves they\n"
	.string "could have learned as Eggs, but I\l"
	.string "require a Heart Scale as payment.\p"
	.string "Come back when you have one.$"

EggMoveTutor_Text_NoMoreHeartScales::
# 2658 "data/maps/TradeCenter/scripts.pory"
	.string "That's all for now!\p"
	.string "Come back with more Heart Scales if you\n"
	.string "want to learn additional Egg Moves.$"
