
/**
 * charac.c
 * dark_neo
 * 2015-01-25
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "charac.h"

character_t *
new_character(string name)
{
	character_t *ch = (character_t *) malloc(sizeof(character_t));
	if (ch == NULL) {
		fprintf(stderr, "Cannot allocate memory for %s.\n", name);
		return NULL;
	}

	char *s = strcpy(ch->_name, name);
	if (strlen(s) == 0) {
		fprintf(stderr, "charac.c:22: Cannot copy name value.\n");
		return NULL;
	}

	/* invent_t */

	return ch;
}

void
del_character(character_t *ch)
{
	if (ch != NULL) {
		free(ch);
		ch = NULL;
	} else {
		fprintf(stderr, "charac.c:37: Cannot free memory for %s.\n", ch->_name);
	}
}
