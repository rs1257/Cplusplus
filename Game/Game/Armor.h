#pragma once

#include <vector>

class Armor {

private:
	int ID;
	int defense;
	int slots;
	int used_slots;
	int sell_cost;

	std::vector<int> skills; //identified by IDs.
	std::vector<int> materials; //materials identified by ids

	Armor(int defense, int slots, int used_slots, int sell_cost,
		std::vector<int> skills, std::vector<int> materials);
};
