#include <gtest/gtest.h>

#include "../../Stick Hunter/stick_hunter_lib/weapon.h"

namespace {
	Weapon test_w1 = Weapon("Test Sword", "For testing", 100, 10, 5);
	Weapon test_w2 = Weapon("Test Sword2", "For testing", 500, 1000, 500);
}

TEST(weapon, var_check) {
	ASSERT_TRUE(test_w1.get_id() == 0);
	ASSERT_TRUE(test_w1.get_name() == "Test Sword");
	ASSERT_TRUE(test_w1.get_description() == "For testing");
	ASSERT_TRUE(test_w1.get_attack() == 100);
	ASSERT_TRUE(test_w1.get_buy_cost() == 10);
	ASSERT_TRUE(test_w1.get_sell_cost() == 5);

	ASSERT_TRUE(test_w2.get_id() == 1);
	ASSERT_TRUE(test_w2.get_name() == "Test Sword2");
	ASSERT_TRUE(test_w2.get_description() == "For testing");
	ASSERT_TRUE(test_w2.get_attack() == 500);
	ASSERT_TRUE(test_w2.get_buy_cost() == 1000);
	ASSERT_TRUE(test_w2.get_sell_cost() == 500);
}