
/**
 * item.c
 * dark_neo
 * 2015-01-25
 */

#include <stdio.h>
#include <stdlib.h>
#include "item.h"

item_t *
new_item(string name)
{
	item_t *item = (item_t *) malloc(sizeof(item_t));
	if (item == NULL) {
		fprintf(stderr, "item.c:39: Cannot allocate memory for %s.\n", name);
		return NULL;
	}

	return item;
}

void
del_item(item_t *item)
{
	if (item != NULL) {
		free(item);
		item = NULL;
	} else {
		fprintf(stderr, "item.c:53: " \
			"Cannot free memory for %s.\n", item->_name);
	}
}
