#include "Player.h"

#include <string>

Player::Player(std::string name, int attack, int health, int defense, int speed, int money, int x, int y) {
	Player::name_ = name;
	Player::attack_ = attack;
	Player::health_ = health;
	Player::defense_ = defense;
	Player::speed_ = speed;
	Player::money_ = money;
	Player::x_ = x;
	Player::y_ = y;
}

int Player::get_money() { return money_; }
void Player::set_money(int money) { money_ = money; }

int Player::get_x() { return x_; }
void Player::set_x(int x) { x_ = x; }
int Player::get_y() { return y_; }
void Player::set_y(int y) { y_ = y; }

void Player::move_up() {
	y_-=5;
}

void Player::move_down() {
	y_+=5;
}

void Player::move_left() {
	x_-=5;
}

void Player::move_right() {
	x_+=5;
}