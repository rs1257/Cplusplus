#pragma once

#include <SFML/Window.hpp>

namespace movement {
	void move_player(Player & player, int window_x, int window_y) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			player.move_left_up(5);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			player.move_left_down(5);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			player.move_right_up(5);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			player.move_right_down(5);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			player.move_left(5);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			player.move_right(5);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			player.move_up(5);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			player.move_down(5);
		}
	}
}