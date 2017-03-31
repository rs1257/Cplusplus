#include <String>
#include <vector>
#include <iostream>

#include "Player.h"
#include "Monster.h"
#include "Instances.h"
#include "Movement.h"
#include "Dialogue.h"
#include "MainMenu.h"

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>



namespace {
	std::string input_player_name() {
		std::cout << "Enter your name: ";
		char input[30];
		std::cin.getline(input, sizeof(input));
		return input;
	}
} //anonymous

namespace G {
	bool fullscreen = false;
	int sound_volume = 100;
	int screen_resolution[2] = { 500, 500 };
}; //G namespace

int main() {
	//std::string name = input_player_name();
	Player player = Player("Ryan" , 1, 100, 1, 1, 1000, 50, 50);
	Monster monster = Monster("Ryan", 1, 100, 1, 1);
	
	sf::RenderWindow window(sf::VideoMode(G::screen_resolution[0], G::screen_resolution[1]), "SFML works!");
	window.setActive(true);
	window.setFramerateLimit(30);

	sf::RectangleShape shape(sf::Vector2f(50, 50));
	shape.setFillColor(sf::Color::Green);
	main_menu(window);
	while (window.isOpen())
	{
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		sf::Color background = sf::Color(0, 50, 150, 255);
		window.clear(background);
		healthbar(monster, window, 50, 10, 100, 100);
		draw_monster(monster, window, 100, 100, 50, 50);
		movement::move_player(player, G::screen_resolution[0], G::screen_resolution[1]);
		shape.setPosition(player.get_x(), player.get_y());
		window.draw(shape);
		window.display();
	}

	return 0;
}
