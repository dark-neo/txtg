
/**
 * character.h
 * dark_neo
 * 2015-01-25
 */

#ifndef CHARAC_H
#define CHARAC_H

#include "utils.h"
#include "item.h"
#include "effect.h"

typedef struct _inventory {
	item_t item_list[40];
} invent_t;

typedef struct _character {
	string		_name;
	/*
	string		_race;
	*/
	invent_t	*_inv;
	uint_t		_health;
	uint_t		_magika;
	uint16_t	_force;		/* weight, for store items on inventory */
	uint8_t		_level;
	uint_t		_exp;
	uint16_t	_atk;
	uint16_t	_def;
	ch_effect_t	_efct;
	uint_t		_money;
} character_t;

extern character_t 	*new_character(string name);
extern void		del_character(character_t *);

#endif /* CHARAC_H */
