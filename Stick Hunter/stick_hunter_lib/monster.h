#pragma once

#include <string>

class Monster {
private:
	static int id_count_;
	int id_;

	std::string name_;
	int max_health_;
	int current_health_;
	int attack_;
	int defense_;
	float pos_x_;
	float pos_y_;
public:
	Monster(std::string name, int max_health, int attack, int defense);

	int get_id() { return id_; }
	std::string get_name() { return name_; }
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
};