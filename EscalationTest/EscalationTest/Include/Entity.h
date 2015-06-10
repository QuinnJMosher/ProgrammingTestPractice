#ifndef _Entity_h_
#define _Entity_h_

#include "EntityTypes.h"
#include <iostream>
#include <string>

class Entity {
public:
	unsigned short UniqueID;
	EntityType TypeID;//make enum a short

	float posX;
	float posY;

	float dirX;
	float dirY;

	bool CanSee(Entity& ref_target);
	bool IsColliding(Entity& ref_other);

	std::string ToString();
	void Print();
};

#endif