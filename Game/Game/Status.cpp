#include "Status.h"
#include <string>

int Status::ID_count = 0;

Status::Status(std::string name, std::string description) {
	Status::ID = ID_count;
	Status::name = name;
	Status::description = description;
	Status::ID_count++;
}