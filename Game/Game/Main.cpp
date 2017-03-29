#include <String>
#include <vector>
#include <iostream>

#include "Player.h"
#include "Monster.h"

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

namespace {

	std::string input_player_name() {
		std::cout << "Enter your name: ";
		char input[30];
		std::cin.getline(input, sizeof(input));
		return input;
	}
	//movement
	void move_player(Player & player) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			player.move_left();
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			player.move_right();
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			player.move_up();
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			player.move_down();
		}
	}
} //anonymous

int main() {
	
	//std::string name = input_player_name();
	Player player = Player("Ryan" , 1, 100, 1, 1, 1000, 50, 50);
	//std::cout << player.get_name() << "\n";
	
	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	window.setActive(true);
	window.setFramerateLimit(30);
	//sf::CircleShape shape(100.f);
	sf::RectangleShape shape(sf::Vector2f(50, 50));
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		if (event.type == sf::Event::LostFocus)
    			window.pause();

		if (event.type == sf::Event::GainedFocus)
   			 window.resume();
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		move_player(player);
		shape.setPosition(player.get_x(), player.get_y());
		window.draw(shape);
		window.display();
	}

	return 0;
}
