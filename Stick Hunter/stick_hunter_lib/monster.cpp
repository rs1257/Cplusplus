#include "monster.h"

int Monster::id_count_ = 0;

Monster::Monster(std::string name, int max_health, int attack, int defense) {
	id_ = id_count_;
	name_ = name;
	max_health_ = max_health;
	current_health_ = max_health_;
	attack_ = attack;
	defense_ = defense;
	id_count_++;
}

