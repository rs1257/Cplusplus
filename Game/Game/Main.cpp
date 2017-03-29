#include <String>
#include <vector>
#include <iostream>

#include "Player.h"
#include "Monster.h"
#include "Instances.h"
#include "Movement.h"
#include "Dialogue.h"

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

namespace {
	std::string input_player_name() {
		std::cout << "Enter your name: ";
		char input[30];
		std::cin.getline(input, sizeof(input));
		return input;
	}
} //anonymous

int main() {
	//std::string name = input_player_name();
	Player player = Player("Ryan" , 1, 100, 1, 1, 1000, 50, 50);

	int window_x = 500;
	int window_y = 500;
	sf::RenderWindow window(sf::VideoMode(window_x, window_y), "SFML works!");
	window.setActive(true);
	window.setFramerateLimit(30);
	
	sf::RectangleShape shape(sf::Vector2f(50, 50));
	shape.setFillColor(sf::Color::Green);

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
		movement::move_player(player, window_x, window_y);
		shape.setPosition(player.get_x(), player.get_y());
		window.draw(shape);
		window.display();
	}

	return 0;
}
