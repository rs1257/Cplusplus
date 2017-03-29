#pragma once

#include <vector>

enum Gender { Male, Female };

struct Weapons {
	std::string name;
	std::string description;
	int attack;
};

struct Armor {
	std::string name;
	std::string description;
	int defense;
};