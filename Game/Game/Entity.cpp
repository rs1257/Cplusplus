#include <string>

namespace Entity {
	class Player {
	public:
		std::string name;
		int attack;
		int health;
		int defense;
		int speed;
		int money;
		Player() {}
		Player(std::string name) {
			Player::name = name;
			Player::attack = 1;
			Player::health = 100;
			Player::defense = 1;
			Player::speed = 1;
			Player::money = 1000;
		}
		std::string get_name() { return name; }

		int get_attack() { return attack; }

		int get_health() { return health; }

		int get_defense() { return defense; }

		int get_speed() { return speed; }

		int get_money() { return money; }
	};

	class Monster : Player {

		Monster(int attack, int defense, int health, int speed) {
			Monster::attack = attack;
			Monster::defense = defense;
			Monster::health = health;
			Monster::speed = speed;
		}
	};
}