#pragma once

#include <string>
#include <iostream>

#include "Structs.h"
#include "EntityInterface.h"

class Entity {
protected:
	std::string name_;
	int attack_;
	int max_health_;
	int current_health_;
	int defense_;
	int speed_;
	float x_;
	float y_;

public:
	std::string Entity::get_name() { return name_; }
	int Entity::get_attack() { return attack_; }
	int Entity::get_max_health() { return max_health_; }
	int Entity::get_defense() { return defense_; }
	int Entity::get_speed() { return speed_; }
	int Entity::get_current_health() { return current_health_; }

	void Entity::set_name(std::string name) { name_ = name; }
	void Entity::set_attack(int attack) { attack_ = attack; }
	void Entity::set_max_health(int health) { max_health_ = health; }
	void Entity::set_defense(int defense) { defense_ = defense; }
	void Entity::set_speed(int speed) { speed_ = speed; }

	float Entity::get_x() { return x_; }
	void Entity::set_x(float x) { x_ = x; }
	float Entity::get_y() { return y_; }
	void Entity::set_y(float y) { y_ = y; }
};

