#include "Entity.h"
#include <iostream>
#include <vector>

//prototypes
void Setup();
void PrintAll();
void Run();

//vars
std::vector<Entity> entities = std::vector<Entity>();

int main(char* args) {
	try {
		Setup();
		Run();
		PrintAll();
	}
	catch (...) {
		return -1;
	}

	return 0;
}

void Setup() {
	int current = 0;

	entities.emplace_back(Entity());
	entities[current].UniqueID = current;
	entities[current].TypeID = EntityType::Troll;
	entities[current].posX = 0;
	entities[current].posY= 0;

	//make a direction
	float dirX = 1;
	float dirY = 1;
	float mag = std::sqrt((dirX * dirX) + (dirY * dirY));

	entities[current].dirX = dirX / mag;
	entities[current].dirY = dirX / mag;
	current++;

	entities.emplace_back(Entity());
	entities[current].UniqueID = current;
	entities[current].TypeID = EntityType::HealthPickup;
	entities[current].posX = -10;
	entities[current].posY = 10;
	entities[current].dirX = 0.5f;
	entities[current].dirY = 0.5f;
	current++;
}

void PrintAll() {
	for (int i = 0; i < entities.size(); i++) {
		entities[i].Print();
	}

	system("pause");
}

void Run() {
	std::cout << entities[0].CanSee(entities[1]);


	std::cout << std::endl;
}