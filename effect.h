
/**
 * effect.h
 * dark_neo
 * 2015-01-25
 */

#ifndef EFFECT_H
#define EFFECT_H

typedef enum _character_effects {
	POISONED,	/* in turns, cured by potion */
	BURNT,
	FROZEN,
	PARALIZED	/* in turns, cure by potion, range of turns */
} ch_effect_t;

typedef enum _weapon_effects {
	LIGHT,
	DARK,
	FIRE,
	ICE,
	DRN_HLT,	/* drain_health */
	DRN_MGK,	/* drain_magica */
	PARAL		/* paralysis */
} wp_effect_t;

typedef enum _item_effects {
	RST_HLT_S,	/* restore_health_small */
	RST_MGK_S,	/* restore_magika_small */
	RST_HLT_F,	/* restore_health_full */
	RST_MGK_F,	/* restore_magika_full */
	PWR_UP,		/* boost_power */
	DEF_UP,		/* defense_up */
	REVIVAL_S,	/* player_revival_small */
	REVIVAL_NPC_S,	/* NPC_revival_small */
	REVIVAL_F,	/* player_revival_full */
	REVIVAL_NPC_F,	/* NPC_revival_full */
} itm_effect_t;

#endif /* EFFECT_H */
