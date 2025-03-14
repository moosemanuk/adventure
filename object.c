#include <stdio.h>
#include "object.h"

static const char* tags0[] = { "clearing", NULL };
static const char* tags1[] = { "yard", NULL };
static const char* tags2[] = { "silver", "coin", "silver coin", NULL };
static const char* tags3[] = { "gold", "coin", "gold coin", NULL };
static const char* tags4[] = { "guard", "burly guard", NULL };
static const char* tags5[] = { "yourself", NULL };
static const char* tags6[] = { "an open gate", "west", NULL };
static const char* tags7[] = { "barndoor", "door", "barn", "east", NULL };
static const char* tags8[] = { "door", "open door", "west", NULL };

// OBJECT format
//  { "type",		"description",				tags,  "location", "destination" }

OBJECT objs[] = {
	{"location",	"a forest clearing",		tags0,	NULL,		NULL},
	{"location",	"a farmyard ",				tags1,	NULL,		NULL},
	{"item",		"a silver coin",			tags2,	clearing,	NULL},
	{"item",		"a gold coin",				tags3,	yard,		NULL},
	{"actor",		"a burly guard",			tags4,	clearing,	NULL},
	{"actor",		"yourself",					tags5,	clearing,	NULL},
	{"passage",		"an open gate to the west",	tags6,	clearing,	yard},
	{"passage",		"an open barn to the west",	tags7,	yard,		barn},
	{"passage",		"a barn",					tags8,	barn,		yard}
};
