#include "item.h"

#include <string>

int Item::id_count_ = 0;

Item::Item(std::string name, std::string desc, int buy_cost, int sell_cost) {
	id_ = id_count_;
	name_ = name;
	description_ = desc;
	buy_cost_ = buy_cost;
	sell_cost_ = sell_cost;
	id_count_++;
}