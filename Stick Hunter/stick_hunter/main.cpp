#include <String>
#include <vector>
#include <iostream>

#include "ui.h"
#include "../stick_hunter_lib/player.h"
#include "../stick_hunter_lib/monster.h"

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main() {
	Player player = Player("Ryan", 1, 100, 1, 1);
	sf::RenderWindow window(sf::VideoMode(500,500), "Stick Hunter");
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
		draw_player(window, player);
		window.display();
	}
	
	return 0;
}