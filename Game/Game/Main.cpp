#include <String>
#include <vector>
#include <iostream>
#include "Entity.h"
#include "Armor.h"
#include "Items.h"
#include "Material.h"
#include "Skills.h"
#include "Status.h"
#include "Weapon.h"

int main() {
	Items a = Items(1, 1, 1);
	Items b = Items(1, 1, 1);
	Items c = Items(1, 1, 1);
	Items d = Items(1, 1, 1);
	Items e = Items(1, 1, 1);
	std::cout << a.ID << b.ID << c.ID << d.ID << e.ID;
	return 0;
}