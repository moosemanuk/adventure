#include <stdio.h>
#include "object.h"
#include "misc.h"
#include "noun.h"
#include "move.h"

void executeTake(const char* noun)
{
	OBJECT* obj = getVisible("what you want to get", noun);
	switch(getDistance(player, obj))
	{
	case dSelf:
		printf("You should not be doing that to yourself.\n");
		break;

	case dHeld:
		printf("You are aready carrying %s.\n", obj->description);
		break;

	case dOverThere:
		printf("Too far away, you need to move closer");
		break;

	case dUnknownObject:
		// already handled by getVisible
		break;

	default:
		if (obj->location == guard)
		{
			printf("You should ask %s nicely.\n", obj->location->description);
		}
		else
		{
			moveObject(obj, player);
		}
	}
}
	
void executeDrop(const char* noun)
{
	moveObject(getPossession(player, "drop", noun), player->location);
}

void executeAsk(const char* noun)
{
	moveObject(getPossession(actorHere(), "ask", noun), player);
}

void executeGive(const char* noun)
{
	moveObject(getPossession(player, "give", noun), actorHere());
}

void executeInventory(void)
{
	if (listObjectsAtLocation(player) == 0)
	{
		printf("You are not carrying anything.\n");
	}
}