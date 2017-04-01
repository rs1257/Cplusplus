#include <gtest/gtest.h>

#include "../../Stick Hunter/stick_hunter_lib/armor.h"

namespace {
	Armor test_a1 = Armor("Test Armor", "For testing", 100, 10, 5);
	Armor test_a2 = Armor("Test Armor2", "For testing", 500, 1000, 500);
}

TEST(armor, var_check) {
	ASSERT_TRUE(test_a1.get_id() == 0);
	ASSERT_TRUE(test_a1.get_name() == "Test Armor");
	ASSERT_TRUE(test_a1.get_description() == "For testing");
	ASSERT_TRUE(test_a1.get_defense() == 100);
	ASSERT_TRUE(test_a1.get_buy_cost() == 10);
	ASSERT_TRUE(test_a1.get_sell_cost() == 5);

	ASSERT_TRUE(test_a2.get_id() == 1);
	ASSERT_TRUE(test_a2.get_name() == "Test Armor2");
	ASSERT_TRUE(test_a2.get_description() == "For testing");
	ASSERT_TRUE(test_a2.get_defense() == 500);
	ASSERT_TRUE(test_a2.get_buy_cost() == 1000);
	ASSERT_TRUE(test_a2.get_sell_cost() == 500);
}