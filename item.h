
/**
 * item.h
 * dark_neo
 * 2015-01-25
 */

#ifndef ITEM_H
#define ITEM_H

#include "utils.h"

typedef enum _item_type {
	WEAPON,
	STAFF,
	POTION,
	POISON,
	KEY,
	FOOD
} itype_t;

typedef struct _item {
	string		_name;	
	itype_t		_type;
	string		_desc;
	int		_cost;	/* if _cost == -1, then cannot be purchased on trade */
	/*
	effect_t	_efct;
	*/
	bool		_wearable;	/* if 0x0, the item remove from inventory list
					   after use it */
} item_t;

extern item_t 	*new_item(string name);
extern void 	del_item(item_t *);


/****************************************
 *		ITEM_LIST		*
 ****************************************/
 /* potions */
extern item_t ptn_restore_health_s;
extern item_t ptn_restore_health_g;
extern item_t ptn_restore_magika_s;
extern item_t ptn_restore_magika_g;
extern item_t ptn_boost_pwr;
extern item_t ptn_boost_def;
extern item_t ptn_revival_s;
extern item_t ptn_revival_g;
extern item_t ptn_revival_npc_s;
extern item_t ptn_revival_npc_g;

 /* poisons */
extern item_t psn_damage_health;
extern item_t psn_damage_magika;
extern item_t psn_paralysis_s;
extern item_t psn_paralysis_g;

 /* keys */

 /* food */

 /* normal_weapons */
extern item_t wpn_iron_sword;
extern item_t wpn_steel_sword;
extern item_t wpn_iron_axe;
extern item_t wpn_steel_mace;
extern item_t wpn_iron_dagger;
extern item_t wpn_steel_dagger;
extern item_t wpn_short_bow;
extern item_t wpn_long_bow;

 /* special_weapons */
extern item_t swp_fire_sword;
extern item_t swp_frost_mace;
extern item_t swp_dark_sword;
extern item_t swp_light_sword;
extern item_t swp_god_bow;
extern item_t swp_demon_bow;

 /* ammo */
extern item_t am_iron_arrow;
extern item_t am_steel_arrow;

 /* special_ammo */
extern item_t sam_fire_arrow;
extern item_t sam_frost_arrow;
extern item_t sam_dark_arrow;
extern item_t sam_light_arrow;

 /* misc */
/* Carcaj's are auto-equipable, cannot de-equip and it isn't stored on player
 * inventory. */
extern item_t carcaj_s;		/* 10 arrow-max */
extern item_t carcaj_g;		/* 20 arrow-max */
/* Bags is stored on inventory and his weight is the total of the items carry on it */
extern item_t bag_s;		/* +5 items */
extern item_t bag_g;		/* +10 items */
extern item_t wpn_ox_knife;	/* joke :P */

#endif /* ITEM_H */
