#pragma once
#include <SFML/Graphics.hpp>

#include "../stick_hunter_lib/player.h"
#include "../stick_hunter_lib/monster.h"

void draw_player(sf::RenderWindow & window, Player & player);
void draw_monster(sf::RenderWindow & window, Monster & monster); //do i needc to add scale

sf::Sprite create_sprite(std::string image_name); //rect and texture.
void draw_tile(sf::RenderWindow & window, sf::Sprite & sprite, float pos_x, float pos_y, float width, float height);
