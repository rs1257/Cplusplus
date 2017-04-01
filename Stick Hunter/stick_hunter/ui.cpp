#include "ui.h"

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