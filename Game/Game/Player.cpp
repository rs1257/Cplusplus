#include "Player.h"

#include <string>

Player::Player(std::string name, int attack, int health, int defense, int speed, int money) {
	Player::name_ = name;
	Player::attack_ = attack;
	Player::health_ = health;
	Player::defense_ = defense;
	Player::speed_ = speed;
	Player::money_ = money;
}

int Player::get_money() { return money_; }
