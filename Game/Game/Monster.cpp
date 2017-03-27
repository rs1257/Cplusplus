#include "Monster.h"

#include <string>

int Monster::id_count = 0;

Monster::Monster(std::string name, int attack, int health, int defense, int speed) {
	Monster::name_ = name;
	Monster::attack_ = attack;
	Monster::health_ = health;
	Monster::defense_ = defense;
	Monster::speed_ = speed;
	Monster::id_ = id_count;
	Monster::id_count++;
}

int Monster::get_id() { return id_; }
