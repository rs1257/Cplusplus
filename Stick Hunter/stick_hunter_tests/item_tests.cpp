#include <gtest/gtest.h>

#include "../../Stick Hunter/stick_hunter_lib/item.h"

namespace {
	Item test_i1 = Item("Test Item", "For testing", 10, 5);
	Item test_i2 = Item("Test Item2", "For testing", 1000, 500);
}

TEST(item, var_check) {
	ASSERT_TRUE(test_i1.get_id() == 0);
	ASSERT_TRUE(test_i1.get_name() == "Test Item");
	ASSERT_TRUE(test_i1.get_description() == "For testing");
	ASSERT_TRUE(test_i1.get_buy_cost() == 10);
	ASSERT_TRUE(test_i1.get_sell_cost() == 5);

	ASSERT_TRUE(test_i2.get_id() == 1);
	ASSERT_TRUE(test_i2.get_name() == "Test Item2");
	ASSERT_TRUE(test_i2.get_description() == "For testing");
	ASSERT_TRUE(test_i2.get_buy_cost() == 1000);
	ASSERT_TRUE(test_i2.get_sell_cost() == 500);
}