#include <vector>

typedef struct Weapon {
	int attack;
	int sharpness;
	int affinity;
	int sell_cost;
	std::vector<int> materials; //materials identified by ids
} Weapon;