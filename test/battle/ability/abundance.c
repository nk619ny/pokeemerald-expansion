#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Abundance creates Grassy Terrain when entering the battle")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_ABUNDANCE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_ABUNDANCE);
        MESSAGE("Grass grew to cover the battlefield!");
    }
}

SINGLE_BATTLE_TEST("Abundance boosts the Pokemon's Attack on Grassy Terrain even if not grounded", s16 damage)
{
    bool32 overrideTerrain, airBalloon;

    PARAMETRIZE { airBalloon = FALSE; overrideTerrain = TRUE; }
    PARAMETRIZE { airBalloon = FALSE; overrideTerrain = FALSE; }
    PARAMETRIZE { airBalloon = TRUE;  overrideTerrain = TRUE; }
    PARAMETRIZE { airBalloon = TRUE;  overrideTerrain = FALSE; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_AIR_BALLOON].holdEffect == HOLD_EFFECT_AIR_BALLOON);
        ASSUME(GetMoveEffect(MOVE_ELECTRIC_TERRAIN) == EFFECT_ELECTRIC_TERRAIN);
        ASSUME(GetMoveCategory(MOVE_SCRATCH) == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_ABUNDANCE); Moves(MOVE_SCRATCH, MOVE_CELEBRATE); Item(airBalloon ? ITEM_AIR_BALLOON : ITEM_NONE); Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_ELECTRIC_TERRAIN, MOVE_CELEBRATE); Speed(2); }
    } WHEN {
        if (overrideTerrain)
            TURN { MOVE(opponent, MOVE_ELECTRIC_TERRAIN); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        if (overrideTerrain)
            ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIC_TERRAIN, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.3333), results[1].damage);
        EXPECT_MUL_EQ(results[2].damage, Q_4_12(1.3333), results[3].damage);
    }
}
