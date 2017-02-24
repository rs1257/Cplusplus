#include <vector>

typedef struct Armor {
	int defense;
	int slots;
	int used_slots;
	int sell_cost;
	std::vector<int> skills; //identified by IDs.
	std::vector<int> materials; //materials identified by ids
} Armor;