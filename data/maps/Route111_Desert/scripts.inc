Route111_Desert_MapScripts::
	.byte 0


# 6 "data/maps/Route111_Desert/scripts.pory"

# 7 "data/maps/Route111_Desert/scripts.pory"
/*
# 8 "data/maps/Route111_Desert/scripts.pory"
script Route111_Desert_EventScript_CheckBoulder {
# 9 "data/maps/Route111_Desert/scripts.pory"
    lock
# 10 "data/maps/Route111_Desert/scripts.pory"
    if (flag(FLAG_HIDE_REGIROCK_RUINS_ROCK)) {
# 11 "data/maps/Route111_Desert/scripts.pory"
        setvar(TempVarCheckBoulder, 1)
# 12 "data/maps/Route111_Desert/scripts.pory"
    }
# 13 "data/maps/Route111_Desert/scripts.pory"
    else {
# 14 "data/maps/Route111_Desert/scripts.pory"
        goto(Route111_Desert_EventScript_SinkBoulder)
# 15 "data/maps/Route111_Desert/scripts.pory"
    }
# 16 "data/maps/Route111_Desert/scripts.pory"
    releaseall
# 17 "data/maps/Route111_Desert/scripts.pory"
    end
# 18 "data/maps/Route111_Desert/scripts.pory"
}
# 19 "data/maps/Route111_Desert/scripts.pory"

# 20 "data/maps/Route111_Desert/scripts.pory"
script  Route111_Desert_EventScript_SinkBoulder {
# 21 "data/maps/Route111_Desert/scripts.pory"
    lock
# 22 "data/maps/Route111_Desert/scripts.pory"
    setvar(VAR_0x8004, 1)  // vertical pan
# 23 "data/maps/Route111_Desert/scripts.pory"
    setvar(VAR_0x8005, 1)  // horizontal pan
# 24 "data/maps/Route111_Desert/scripts.pory"
    setvar(VAR_0x8006, 4)  // num shakes
# 25 "data/maps/Route111_Desert/scripts.pory"
    setvar(VAR_0x8007, 5)  // shake delay
# 26 "data/maps/Route111_Desert/scripts.pory"
	special(ShakeCamera)
# 27 "data/maps/Route111_Desert/scripts.pory"
    applymovement(LOCALID_DESERT_BOULDER, Common_Movement_WalkDown)
# 28 "data/maps/Route111_Desert/scripts.pory"
    delay(10) 
# 29 "data/maps/Route111_Desert/scripts.pory"
    removeobject(LOCALID_DESERT_BOULDER)
# 30 "data/maps/Route111_Desert/scripts.pory"
    setflag(FLAG_HIDE_REGIROCK_RUINS_ROCK)
# 31 "data/maps/Route111_Desert/scripts.pory"
    setvar(TempVarCheckBoulder, 1)
# 32 "data/maps/Route111_Desert/scripts.pory"
    waitmovement(0)
# 33 "data/maps/Route111_Desert/scripts.pory"
    releaseall
# 34 "data/maps/Route111_Desert/scripts.pory"
    end
# 35 "data/maps/Route111_Desert/scripts.pory"
}
# 36 "data/maps/Route111_Desert/scripts.pory"
*/
