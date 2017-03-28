#pragma once

#include <vector>

enum Gender { Male, Female };

struct Weapons {
	std::string name;
	std::string description;
	int attack;
	int buy_cost;
	int sell_cost;
	std::vector<int> materials;
};

struct Armor {
	std::string name;
	std::string description;
	int defense;
	int buy_cost;
	int sell_cost;
	std::vector<int> materials;
	std::vector<int> skills; //store skills here as id
};

struct Skills {
	int skill;
}; // need to handle the skills with effects

struct Effect {
	int id;
}; //do i want this to be different
//i need to handle the effect

struct Items {
	std::string name;
	std::string description;
	int buy_cost;
	int sell_cost;
	Effect effect;
};

struct Materials { //armor/weapons lists what materials it needs
	int id;
	std::string name;
	std::string description;
	int sell_cost;
};