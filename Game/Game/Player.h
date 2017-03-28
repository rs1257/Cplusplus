#pragma once

#include "EntityInterface.h"

#include <string>

class Player: public Entity {
private:
	int money_;
	int x_;
	int y_;
public:
	Player(std::string name, int attack, int health, int defense, int speed, int money, int x, int y);

	int get_money();
	void set_money(int money);

	int get_x();
	void set_x(int x);
	int get_y();
	void set_y(int y);

	void move_up();
	void move_down();
	void move_left();
	void move_right();
};