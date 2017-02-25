#include <string>
#include "Entity.h"

Entity::Entity(std::string name, int attack, int health, int defense, int speed, int money) {
		Entity::name = name;
		Entity::attack = attack;
		Entity::health = health;
		Entity::defense = defense;
		Entity::speed = speed;
		Entity::money = money;
		Entity::ID++;
	}
Entity::Entity(std::string name) {
		Entity::name = name;
		Entity::attack = 1;
		Entity::health = 100;
		Entity::defense = 1;
		Entity::speed = 1;
		Entity::money = 1000;
	}

std::string Entity::get_name() { return name; }

int Entity::get_attack() { return attack; }

int Entity::get_health() { return health; }

int Entity::get_defense() { return defense; }

int Entity::get_speed() { return speed; }

int Entity::get_money() { return money; }

int Entity::get_ID() { return ID; }