#pragma once

#include "EntityInterface.h"
#include <SFML/Graphics.hpp>

#include <string>

class Monster : public Entity {
private:
	static int id_count;
	int id_;
public:
	Monster(std::string name, int attack, int health, int defense, int speed);

	int get_id();
};

void healthbar(Monster & monster, sf::RenderWindow & window, float width, float length, float x, float y);
void draw_monster(Monster & monster, sf::RenderWindow & window, float x, float y, float length, float height);
