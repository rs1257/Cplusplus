#pragma once

#include "EntityInterface.h"

#include <string>

class Player: public Entity {
private:
	int money_;
	float x_;
	float y_;
public:
	Player(std::string name, int attack, int health, int defense, int speed, int money, float x, float y);

	int get_money();
	void set_money(int money);

	float get_x();
	void set_x(float x);
	float get_y();
	void set_y(float y);

	void move_up(float pixels);
	void move_down(float pixels);
	void move_left(float pixels);
	void move_right(float pixels);
	void move_left_up(float pixels);
	void move_left_down(float pixels);
	void move_right_up(float pixels);
	void move_right_down(float pixels);
};