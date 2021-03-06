#pragma once

#include <string>

class Armor {
private:
	static int id_count_;
	int id_;

	std::string name_;
	std::string description_;
	int defense_;
	int buy_cost_;
	int sell_cost_;
public:
	Armor(std::string name, std::string desc, int defense, int buy_cost, int sell_cost);

	int get_id() { return id_; }
	std::string get_name() { return name_; }
	std::string get_description() { return description_; }
	int get_defense() { return defense_; }
	int get_buy_cost() { return buy_cost_; }
	int get_sell_cost() { return sell_cost_; }
};