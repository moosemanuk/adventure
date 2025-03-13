#include <stdbool.h>
#include <stdio.h>
#include "object.h"
#include "misc.h"

int listObjectsAtLocation(OBJECT* location)
{
	int count = 0;
	OBJECT* obj;
	for (obj = objs; obj < endOfObjs; obj++)
	{
		if (obj != player && isHolding(location, obj))
		{
			if (count++ == 0)
			{
				printf("You see: \n");
			}
			printf("%s\n", obj->description);
		}
	}
	return count;

}

OBJECT* actorHere(void)
{
	OBJECT* obj;
	for (obj = objs; obj < endOfObjs; obj++)
	{
		if (isHolding(player->location, obj) && obj == guard)
		{
			return obj;
		}
	}
	return NULL;
}

OBJECT* getPassage(OBJECT* from, OBJECT* to)
{
	if (from != NULL && to != NULL)
	{
		OBJECT* obj;
		for (obj = objs; obj < endOfObjs; obj++)
		{
			if (obj->location == from && obj->destination == to)
			{
				return obj;
			}
		}
	}
	return NULL;
}

bool isHolding(OBJECT* container, OBJECT* obj)
{
	return obj != NULL && obj->location == container;
}

DISTANCE getDistance(OBJECT* from, OBJECT* to)
{
	return to == NULL ? dUnknownObject :
		to == from ? dSelf :
		isHolding(from, to) ? dHeld :
		isHolding(to, from) ? dLocation :
		isHolding(from->location, to) ? dHere :
		isHolding(from, to->location) ? dHeldContained :
		isHolding(from->location, to->location) ? dHereContained :
		getPassage(from->location, to) ? dOverThere :
		dNotHere;
}