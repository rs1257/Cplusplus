#pragma once

#include <vector>

class Weapon {
public:
	int ID;
	static int ID_count;
	int attack;
	int sharpness;
	int affinity;
	int sell_cost;
	std::vector<int> materials;

	Weapon::Weapon(int attack, int sharpness, int affinity, int sell_cost,
		std::vector<int> materials);

};