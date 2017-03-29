#include "Player.h"

#include <string>

Player::Player(std::string name, int attack, int health, int defense, int speed, int money, float x, float y) {
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

float Player::get_x() { return x_; }
void Player::set_x(float x) { x_ = x; }
float Player::get_y() { return y_; }
void Player::set_y(float y) { y_ = y; }

void Player::move_up(float pixels) {
	if (y_ <= 0) 
	{ 
		y_ = 0; 
	}
	else {
		y_ -= 5;
	}
}

void Player::move_down(float pixels) {
	if (y_ >= 450) //dont want to hard code this
	{
		y_ = 450;
	}
	else {
		y_ += 5;
	}
}

void Player::move_left(float pixels) {
	if (x_ <= 0)
	{
		x_ = 0;
	}
	else {
		x_ -= 5;
	}
}

void Player::move_right(float pixels) {
	if (x_ >= 450)
	{
		x_ = 450;
	}
	else {
		x_ += 5;
	}
}

void Player::move_left_up(float pixels) {
	Player::move_left(pixels);
	Player::move_up(pixels);
}

void Player::move_left_down(float pixels) {
	Player::move_left(pixels);
	Player::move_down(pixels);
}

void Player::move_right_up(float pixels) {
	Player::move_right(pixels);
	Player::move_up(pixels);
}

void Player::move_right_down(float pixels) {
	Player::move_right(pixels);
	Player::move_down(pixels);
}