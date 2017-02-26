#pragma once

#include <string>

class Status {
public:
	int ID;
	static int ID_count;
	std::string name;
	std::string description;
	//dont need effect as it gets evaluated

	Status(std::string name, std::string description);
};