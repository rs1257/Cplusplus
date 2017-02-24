#include <String>
#include <vector>
#include <iostream>
#include "Armor.cpp"

int main() {
	Armor a = Armor(2, 1, 1, 1, 1, { 1 }, { 1,32 });
	std::cout << a.ID;
	return 0;
}