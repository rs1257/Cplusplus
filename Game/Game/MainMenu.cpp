#include "MainMenu.h"

#include <iostream>

void main_menu(sf::RenderWindow & window) {
	int choice;
	std::cout << "Choose an option: ";
	std::cin >> choice;
	switch (choice) {
		case 1:
			new_game();
			break;
		case 2:
			continue_game();
			break;
		case 3:
			options();
			break;
		case 4:
			window.close();
	}

}

void new_game() {}
void continue_game() {}
void options() {}

void volume() {}
void resolution() {}
void full_screen() {}
