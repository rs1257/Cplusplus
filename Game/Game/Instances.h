#pragma once

#include "Structs.h"
#include "Monster.h"

#include <Vector>

/*WEAPONS*/
Weapons wood_sword = Weapons{ "Wood Sword", "Sword made of wood", 1 };
Weapons copper_sword = Weapons{ "Copper Sword", "Sword made of copper", 2 };
Weapons bone_sword = Weapons{ "Bone Sword", "Sword made of bone", 3 };
Weapons iron_sword = Weapons{ "Iron Sword", "Sword made of iron", 4 };
Weapons gold_sword = Weapons{ "Gold Sword", "Sword made of gold", 5 };
Weapons steel_sword = Weapons{ "Steel Sword", "Sword made of steel", 6 };
Weapons platinum_sword = Weapons{ "Platinum Sword", "Sword made of platinum", 7 };
Weapons diamond_sword = Weapons{ "Diamond Sword", "Sword made of diamond", 8 };

/*ARMOR*/
Armor wood_armor = Armor{ "Wood Armor", "Armor made of wood", 1 };
Armor copper_armor = Armor{ "Copper Armor", "Armor made of copper", 2 };
Armor bone_armor = Armor{ "Bone Armor", "Armor made of bone", 3 };
Armor iron_armor = Armor{ "Iron Armor", "Armor made of iron", 4 };
Armor gold_armor = Armor{ "Gold Armor", "Armor made of gold", 5 };
Armor steel_armor = Armor{ "Steel Armor", "Armor made of steel", 6 };
Armor platinum_armor = Armor{ "Platinum Armor", "Armor made of platinum", 7 };
Armor diamond_armor = Armor{ "Diamond Armor", "Armor made of diamond", 8 };

/*MONSTERS*/
Monster green_slime = Monster("Green Slime", 1, 1, 1, 1);
Monster blue_slime = Monster("Blue Slime", 1, 1, 1, 1);
Monster yellow_slime = Monster("Yellow Slime", 1, 1, 1, 1);
Monster purple_slime = Monster("Purple Slime", 1, 1, 1, 1);
Monster black_slime = Monster("Black Slime", 1, 1, 1, 1);

std::vector<Weapons> WeaponsList = { wood_sword, copper_sword, bone_sword,
iron_sword, gold_sword, steel_sword, platinum_sword, diamond_sword };

std::vector<Armor> ArmorList = { wood_armor, copper_armor, bone_armor,
iron_armor, gold_armor, steel_armor, platinum_armor, diamond_armor };

std::vector<Monster> MonsterList = { green_slime, blue_slime, yellow_slime,
purple_slime, black_slime };