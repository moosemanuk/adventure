#include <stdio.h>
#include <string.h>
#include "object.h"
#include "misc.h"
#include "noun.h"

void executeLook(const char* noun)
{
	if (noun != NULL && strcmp(noun, "around") == 0)
	{
		printf("You are in %s.\n", player->location->description);
		listObjectsAtLocation(player->location);
	}
	else
	{
		printf("I don't understand what you want to see.\n");
	}
}

void executeGo(const char* noun)
{
	OBJECT* obj = getVisible("where you want to go", noun);
	switch(getDistance(player, obj))
	{
	case dOverThere:
		printf("OK.\n");
		player->location = obj;
		executeLook("around");
		break;

	case dNotHere:
		printf("You don't see any %s here.\n", noun);
		break;

	case dUnknownObject:
		// already handled by getVisible
		break;
	
	default:
		if (obj->destination != NULL)
		{
			system("cls");
			printf("OK.\n");
			player->location = obj->destination;
			executeLook("around");
		}
		else
		{
			printf("You can't get much closer than this.\n");
		}
	}
}