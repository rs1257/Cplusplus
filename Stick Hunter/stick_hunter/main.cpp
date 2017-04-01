#include <String>
#include <vector>
#include <iostream>

#include "ui.h"
#include "../stick_hunter_lib/player.h"
#include "../stick_hunter_lib/monster.h"

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main() {
	sf::Texture background_texture;
	if (!background_texture.loadFromFile("images\\title_background.jpg")) {}
	sf::Sprite background;
	background.setTexture(background_texture);

	sf::Font font;
	if (!font.loadFromFile("font\\Atarian\\SF Atarian System.ttf"))
	{
		// error...
	}
	float screen_resolution[2] = { 800, 600 };
	Player player = Player("Ryan", 1, 100, 1, 1);
	sf::RenderWindow window(sf::VideoMode(static_cast<unsigned int>(screen_resolution[0]), static_cast<unsigned int>(screen_resolution[1])), "Stick Hunter");
	window.setActive(true);
	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(100,100,100,255));
		window.draw(background);
		create_button(window, screen_resolution[0]/2, 100, "New Game", font);
		create_button(window, screen_resolution[0] / 2, 200, "Continue Game", font);
		create_button(window, screen_resolution[0] / 2, 300, "Options", font);
		create_button(window, screen_resolution[0] / 2, 400, "Exit", font);

		draw_player(window, player);
		window.display();
	}
	
	return 0;
}