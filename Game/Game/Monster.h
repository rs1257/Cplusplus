#pragma once

#include "EntityInterface.h"

#include <string>

class Monster : public Entity {
private:
	static int id_count;
	int id_;
public:
	Monster(std::string name, int attack, int health, int defense, int speed);

	int get_id();
};