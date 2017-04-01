#include "ui.h"

#include <iostream>

void draw_player(sf::RenderWindow & window, Player & player) {
	sf::RectangleShape player_sprite(sf::Vector2f(50, 50));
	player_sprite.setFillColor(sf::Color::Green);
	player_sprite.setOrigin(0, -450);
	window.draw(player_sprite);
}

void draw_monster(sf::RenderWindow & window, Monster & monster) {
	sf::RectangleShape player_sprite(sf::Vector2f(50, 50));
	player_sprite.setFillColor(sf::Color::Green);
	player_sprite.setOrigin(0, -450);
	window.draw(player_sprite);
}

sf::Sprite create_sprite(std::string image_name) {
	sf::Texture texture;
	if (!texture.loadFromFile(image_name))
	{
		// error...
	}
	sf::Sprite sprite;
	sprite.setTexture(texture);
	return sprite;
} //do i need just need to set on sprite

void draw_tile(sf::RenderWindow & window, sf::Sprite & sprite, float pos_x, float pos_y, float width, float height){}

//Main Menu
void main_menu(sf::RenderWindow & window){
}

void create_button(sf::RenderWindow & window, float pos_x, float pos_y, std::string text, sf::Font font) {
	float length = 300;
	sf::RectangleShape button(sf::Vector2f(length, 80));
	sf::Texture texture;
	//texture.loadFromFile("images\\button_texture.jpg");
	//button.setTexture(& texture);
	button.setPosition(pos_x - (length / 2), pos_y);
	//button.setOutlineColor(sf::Color(sf::Color::Black));
	//button.setOutlineThickness(2);
	
	sf::Text button_text;
	button_text.setFont(font);
	button_text.setString(text);
	button_text.setPosition(pos_x - (length / 2), pos_y);
	button_text.setCharacterSize(63);
	button_text.setColor(sf::Color::Black);
	//window.draw(button);
	window.draw(button_text);
	//start in new thread?
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)
			&& sf::Mouse::getPosition(window).x >= button.getPosition().x
			&& sf::Mouse::getPosition(window).x <= button.getPosition().x + button.getSize().x
			&& sf::Mouse::getPosition(window).y >= button.getPosition().y
			&& sf::Mouse::getPosition(window).y <= button.getPosition().y + button.getSize().y) {
			std::cout << text << "\n"; //for debugging
			if (text == "New Game") {
				new_game();
			}
			else if (text == "Continue Game") {
				continue_game();
			}
			else if (text == "Options") {
				options();
			}
			else if (text == "Exit") {
				std::cout << "Exiting\n";
				window.close();
			}
	}
}
void new_game() {
	std::cout << "New Game being called\n";
}
void continue_game() {
	std::cout << "Continue Game being called\n";
}
void options() {
	std::cout << "Options being called\n";
}

void volume_settings() {}
void resolution_settings() {}
void fullscreen_settings() {}
