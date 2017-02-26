#include "Material.h"

#include <string>

int Materials::ID_count = 0;

Materials::Materials(int sell_cost, std::string name, std::string description) {
	Materials::ID = ID_count;
	Materials::sell_cost = sell_cost;
	Materials::name = name;
	Materials::description = description;
	ID_count++;
}

