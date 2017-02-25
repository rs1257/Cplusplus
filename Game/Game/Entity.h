#pragma once

#include <string>
#include <string>
#include "Entity.h"

class Entity {
public:
	int ID = 0;
	std::string name;
	int attack;
	int health;
	int defense;
	int speed;
	int money;

	Entity(std::string name, int attack, int health, int defense, int speed, int money);
	Entity(std::string name);
	
	std::string get_name();

	int get_attack();

	int get_health();

	int get_defense();

	int get_speed();

	int get_money();

	int get_ID();
};