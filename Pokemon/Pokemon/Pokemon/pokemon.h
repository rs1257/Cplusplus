#pragma once
#include <string>
#include <vector>

 class Pokemon {
private:
	std::string name;
	std::vector<std::string> move_list;
	int base_health;
	int base_defense;
	int base_attack;
	int base_speed;
 };