#ifndef OBJECT_H
#define OBJECT_H

typedef struct object
{
	const char*		description;
	const char**	tags;
	struct object*	location;
	struct object*	destination;
} OBJECT;

extern OBJECT objs[];

#define clearing	(objs+0)
#define yard		(objs+1)
#define silver		(objs+2)
#define gold		(objs+3)
#define guard		(objs+4)
#define player		(objs+5)
#define intoYard	(objs+6)
#define intoBarn	(objs+7)
#define barn		(objs+8)

#define endOfObjs	(objs+9)

#endif