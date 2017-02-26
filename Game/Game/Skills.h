#pragma once

#include <string>

class Skills {
public:
	int ID;
	static int ID_count;
	std::string name;
	std::string description;
	int effect;

	Skills(std::string name, std::string description, int effect);
};
