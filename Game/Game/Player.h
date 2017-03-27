#pragma once

#include "EntityInterface.h"

#include <string>

class Player: public Entity {
public:
	int money_;

	Player(std::string name, int attack, int health, int defense, int speed, int money);

	int get_money();
};