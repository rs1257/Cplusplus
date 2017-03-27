#include <String>
#include <vector>
#include <iostream>
#include "Armor.h"
#include "Items.h"
#include "Material.h"
#include "Skills.h"
#include "Status.h"
#include "Weapon.h"
#include "Player.h"
#include "Monster.h"

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main() {
	Monster m1 = Monster("Ryan", 100, 1, 1, 1000);
	Monster m2 = Monster("Ryan", 100, 1, 1, 1000);
	std::cout << m1.id_ <<  "    " << m2.id_;
	Player player = Player("Ryan" , 1, 100, 1, 1, 1000);

	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		//window.draw(shape);
		window.display();
	}

	return 0;
}