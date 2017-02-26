#include "Armor.h"
#include <vector>
		
Armor::Armor(int defense, int slots, int used_slots, int sell_cost,
	std::vector<int> skills, std::vector<int> materials) {
	Armor::defense = defense;
	Armor::slots = slots;
	Armor::used_slots = used_slots;
	Armor::sell_cost = sell_cost;
	Armor::skills = skills;
	Armor::materials = materials;
}

//methods to add when i use it


