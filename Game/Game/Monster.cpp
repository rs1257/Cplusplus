#include "Monster.h"
#include <SFML/Graphics.hpp>
#include <string>

int Monster::id_count = 0;

Monster::Monster(std::string name, int attack, int health, int defense, int speed) {
	Monster::name_ = name;
	Monster::attack_ = attack;
	Monster::max_health_ = health;
	Monster::current_health_ = max_health_ - 5;
	Monster::defense_ = defense;
	Monster::speed_ = speed;
	Monster::id_ = id_count;
	Monster::id_count++;
}

int Monster::get_id() { return id_; }

void healthbar(Monster & monster, sf::RenderWindow & window, float length, 
	float width, float x, float y) {

	sf::RectangleShape total_bar(sf::Vector2f(length, width));
	sf::RectangleShape current_bar(sf::Vector2f(((static_cast<float>
		(monster.get_current_health()) / monster.get_max_health()) * length), width));

	total_bar.setFillColor(sf::Color::Red);
	current_bar.setFillColor(sf::Color::Green);
	total_bar.setPosition(x, y);
	current_bar.setPosition(x, y);

	window.draw(total_bar);
	window.draw(current_bar);
}

void draw_monster(Monster & monster, sf::RenderWindow & window, float x, float y, float width, float height) {
	monster.set_x(x);
	monster.set_y(y);
	sf::RectangleShape entity(sf::Vector2f(width, height));
	entity.setPosition(monster.get_x(), monster.get_y());
	window.draw(entity);
}
