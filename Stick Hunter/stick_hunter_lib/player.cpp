#pragma once

#include "player.h"

Player::Player(std::string name , int level, int max_health, int attack, int defense) {
	name_ = name;
	level_ = level;
	exp_ = 0;
	max_health_ = max_health;
	current_health_ = max_health_;
	attack_ = attack;
	defense_ = defense;
}

void Player::level_up() {

}
