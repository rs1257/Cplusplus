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

	Armor(int ID, int defense, int slots, int used_slots, int sell_cost,
		std::vector<int> skills, std::vector<int> materials) {
		Armor::ID = ID;
		Armor::defense = defense;
		Armor::slots = slots;
		Armor::used_slots = used_slots;
		Armor::sell_cost = sell_cost;
		Armor::skills = skills;
		Armor::materials = materials;
	}
};


