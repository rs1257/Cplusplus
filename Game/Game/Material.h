#pragma once
#include <string>

class Materials {
public:
	int ID;
	static int ID_count;
	int sell_cost;
	std::string name;
	std::string description;

	Materials(int sell_cost, std::string name, std::string description);

};
