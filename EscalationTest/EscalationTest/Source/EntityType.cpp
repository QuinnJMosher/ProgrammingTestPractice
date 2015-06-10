#include "EntityTypes.h"

int ETypeCollisionRad(EntityType in_type) {
	switch (in_type) {
	case HealthPickup:
		return 10;
		break;
	case Chest:
		return 20;
		break;
	case Trap:
		return 64;
		break;
	case Troll:
		return 12;
		break;
	case Imp:
		return 10;
		break;
	case Ogre:
		return 25;
		break;
	default:
		return 0;
		break;
	}
}
int ETypeFOVDegrees(EntityType in_type) {
	switch (in_type) {
	case Troll:
		return 45;
		break;
	case Imp:
		return 65;
		break;
	case Ogre:
		return 90;
		break;
	default:
		return 0;
		break;
	}
}

char* ETypeToString(EntityType in_type) {
	switch (in_type) {
	case HealthPickup:
		return "Health Pickup";
		break;
	case Chest:
		return "Chest";
		break;
	case Trap:
		return "Trap";
		break;
	case Troll:
		return "Troll";
		break;
	case Imp:
		return "Imp";
		break;
	case Ogre:
		return "Ogre";
		break;
	default:
		return 0;
		break;
	}
}