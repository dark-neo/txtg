
/**
 * room.h
 * dark_neo
 * 2015-01-25
 */

#ifndef ROOM_H
#define ROOM_H

#include "utils.h"
#include "item.h"

typedef struct _room {
	string 		_title;
	string		_desc;
	item_t		*_items;	/* array of items for each room, if any. */
	struct _room	**_next_room;	/* array of pointers-to-rooms for each
					   room-exit */
} room;

#endif /* ROOM_H */
