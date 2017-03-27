#pragma once

#include <string>
#include <string>
#include "EntityInterface.h"

class Entity {
public:
	std::string name_;
	int attack_;
	int health_;
	int defense_;
	int speed_;

	std::string Entity::get_name() { return name_; }

	int Entity::get_attack() { return attack_; }

	int Entity::get_health() { return health_; }

	int Entity::get_defense() { return defense_; }

	int Entity::get_speed() { return speed_; }
};