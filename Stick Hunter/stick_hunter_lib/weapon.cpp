#include "weapon.h"

#include <string>

int Weapon::id_count_ = 0;

Weapon::Weapon(std::string name, std::string desc, int attack, int buy_cost, int sell_cost) {
	id_ = id_count_;
	name_ = name;
	description_ = desc;
	attack_ = attack;
	buy_cost_ = buy_cost;
	sell_cost_ = sell_cost;
	id_count_++;
}