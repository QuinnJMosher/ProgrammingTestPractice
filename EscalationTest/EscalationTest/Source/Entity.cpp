#include "Entity.h"
#include <cmath>

bool Entity::CanSee(Entity& ref_target) {
	// get direction vector
	float directX = ref_target.posX - this->posX;
	float directY = ref_target.posY - this->posY;
	//get magnitude
	float directMag = std::sqrt((directX * directX) + (directY * directY));
	//normalize
	directX /= directMag;
	directY /= directMag;

	//get dot product
	float dotProduct = (this->dirX * directX) + (this->dirY * directY);

	return std::abs(dotProduct) < std::abs(std::cos(ETypeFOVDegrees(this->TypeID) / 2));
}
bool Entity::IsColliding(Entity& ref_other) {
	float collideDist = ETypeCollisionRad(this->TypeID) + ETypeCollisionRad(ref_other.TypeID);
	float actualDist = std::sqrt(std::pow((this->posX - ref_other.posX), 2) + std::pow((this->posY - ref_other.posY), 2));

	return (actualDist < collideDist);
}

std::string Entity::ToString() {
	std::string out = "";
	//print ID
	out += "ID: ";
	out += UniqueID;
	out += " ";
	//print Type
	out += "Type: ";
	out += ETypeToString(TypeID);
	out += " ";
	//print pos
	out += "Position: (";
	out += posX;
	out += ", ";
	out += posY;
	out += ") ";
	//print pos
	out += "Direction: (";
	out += dirX;
	out += ", ";
	out += dirY;
	out += ") ";
	//ent
	out += "\n";
	return out;
}

void Entity::Print() {
	std::cout << "ID: " << UniqueID << " ";
	std::cout << "Type: " << ETypeToString(TypeID) << " ";
	std::cout << "Position: (" << posX << ", " << posY << ") ";
	std::cout << "Direction: (" << dirX << ", " << dirY << ")\n";
}