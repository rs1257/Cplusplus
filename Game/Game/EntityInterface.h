#pragma once

#include <string>
#include <iostream>

#include "Structs.h"
#include "EntityInterface.h"

class Entity {
protected:
	std::string name_;
	int attack_;
	int health_;
	int defense_;
	int speed_;

public:
	std::string Entity::get_name() { return name_; }
	int Entity::get_attack() { return attack_; }
	int Entity::get_health() { return health_; }
	int Entity::get_defense() { return defense_; }
	int Entity::get_speed() { return speed_; }

	void Entity::set_name(std::string name) { name_ = name; }
	void Entity::set_attack(int attack) { attack_ = attack; }
	void Entity::set_health(int health) { health_ = health; }
	void Entity::set_defense(int defense) { defense_ = defense; }
	void Entity::set_speed(int speed) { speed_ = speed; }
};

