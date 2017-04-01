#pragma once

#include <string>

class Player {
private:
	std::string name_;
	int level_;
	int exp_;
	int max_health_;
	int current_health_;
	int attack_;
	int defense_;
	float pos_x_;
	float pos_y_;
public:
	Player(std::string name, int level, int max_health, int attack, int defense);

	std::string get_name() { return name_; }
	int get_level() { return level_; }
	int get_exp() { return exp_; }
	int get_max_health() { return max_health_; }
	int get_current_health() { return current_health_; }
	int get_attack() { return attack_; }
	int get_defense() { return defense_; }
	float get_x() { return pos_x_; }
	float get_y() { return pos_y_; }

	void set_name(std::string name) { name_ = name; }
	void set_max_health(int max_health) { max_health_ = max_health; }
	void set_currenthealth(int current_health) { current_health_ = current_health; }
	void set_attack(int attack) { attack_ = attack; }
	void set_defense(int defense) { defense_ = defense; }
	void set_x(float x) { pos_x_ = x; }
	void set_y(float y) { pos_y_ = y; }

	void add_exp(int exp) { exp_ += exp; }
	void level_up();
};