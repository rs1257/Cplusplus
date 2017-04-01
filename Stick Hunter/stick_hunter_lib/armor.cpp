#include "armor.h"

#include <string>

int Armor::id_count_ = 0;

Armor::Armor(std::string name, std::string desc, int defense, int buy_cost, int sell_cost) {
	id_ = id_count_;
	name_ = name;
	description_ = desc;
	defense_ = defense;
	buy_cost_ = buy_cost;
	sell_cost_ = sell_cost;
	id_count_++;
}