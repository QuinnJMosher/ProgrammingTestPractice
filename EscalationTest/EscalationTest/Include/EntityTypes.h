#ifndef _EntityTypes_h_
#define _EntityTypes_h_

enum EntityType
{
	HealthPickup,
	Chest,
	Trap,
	Troll,
	Imp,
	Ogre
};

int ETypeCollisionRad(EntityType in_type);
int ETypeFOVDegrees(EntityType in_type);

char* ETypeToString(EntityType in_type);

#endif