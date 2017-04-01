#pragma once
#include <SFML/Graphics.hpp>

#include "../stick_hunter_lib/player.h"
#include "../stick_hunter_lib/monster.h"

void draw_player(sf::RenderWindow & window, Player & player);
void draw_monster(sf::RenderWindow & window, Monster & monster); //do i needc to add scale

sf::Sprite create_sprite(std::string image_name); //rect and texture.
void draw_tile(sf::RenderWindow & window, sf::Sprite & sprite, float pos_x, float pos_y, float width, float height);

//Main Menu
void main_menu(sf::RenderWindow & window);

void create_button(sf::RenderWindow & window, float pos_x, float pos_y, std::string text, sf::Font font);

void new_game();
void continue_game();
void options();

void volume_settings();
void resolution_settings();
void fullscreen_settings();