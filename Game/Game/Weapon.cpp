#include "Weapon.h"
#include <vector>

int Weapon::ID_count = 0;

Weapon::Weapon(int attack, int sharpness, int affinity, int sell_cost, 
	std::vector<int> materials) {
	Weapon::ID = Weapon::ID_count;
	Weapon::attack = attack;
	Weapon::sharpness = sharpness;
	Weapon::affinity = affinity;
	Weapon::sell_cost = sell_cost;
	Weapon::materials = materials;
	Weapon::ID_count++;
}
