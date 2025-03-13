#include <stdio.h>
#include "object.h"

static const char* tags0[] = { "clearing", NULL };
static const char* tags1[] = { "yard", NULL };
static const char* tags2[] = { "silver", "coin", "silver coin", NULL };
static const char* tags3[] = { "gold", "coin", "gold coin", NULL };
static const char* tags4[] = { "guard", "burly guard", NULL };
static const char* tags5[] = { "yourself", NULL };
static const char* tags6[] = { "gate", "east", NULL };
static const char* tags7[] = { "barndoor", "door", "east", NULL };
static const char* tags8[] = { "barn", "door", "open door", "west", NULL };

OBJECT objs[] = {
	{"a forest clearing",		tags0, NULL, NULL},
	{"a farmyard ",				tags1, NULL, NULL},
	{"a silver coin",			tags2, clearing, NULL},
	{"a gold coin",				tags3, yard, NULL},
	{"a burly guard",			tags4, clearing, NULL},
	{"yourself",				tags5, clearing, NULL},
	{"an open gate",			tags6, clearing, yard},
	{"an open barn",			tags7, yard, barn},
	{"a barn",					tags8, barn, yard}
};
