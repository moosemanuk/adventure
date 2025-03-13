#include <stdio.h>
#include "object.h"

OBJECT objs[] = {
	{"a forest clearing", "clearing", NULL},
	{"a farmyard ", "yard", NULL},
	{"a silver coin", "silver", clearing},
	{"a gold coin", "gold", yard},
	{"a burly guard", "guard", clearing},
	{"yourself", "yourself", clearing},
	{"an open gate", "gate", clearing, yard},
	{"an open barn door", "barndoor", yard, barn},
	{"a barn", "barn", NULL}
};
