#ifndef MISC_H
#define MISC_H
#include <stdbool.h>

typedef enum
{
	dSelf,
	dHeld,
	dHeldContained,
	dLocation,
	dHere,
	dHereContained,
	dOverThere,
	dNotHere,
	dUnknownObject
} DISTANCE;

extern bool isHolding(OBJECT* container, OBJECT* obj);
extern int listObjectsAtLocation(OBJECT* location);
extern DISTANCE getDistance(OBJECT* from, OBJECT* to);
extern OBJECT* actorHere(void);
extern OBJECT* getPassage(OBJECT* from, OBJECT* to);

#endif