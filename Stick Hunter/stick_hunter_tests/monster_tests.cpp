#include <gtest/gtest.h>
#include <iostream>

#include "../../Stick Hunter/stick_hunter_lib/monster.h"

namespace {
	Monster test_m1 = Monster("M1", 100, 20, 5);
	Monster test_m2 = Monster("M2", 200, 40, 10);
}

TEST(monster, var_check) {
	ASSERT_TRUE(test_m1.get_id() == 0);
	ASSERT_TRUE(test_m1.get_name() == "M1");
	ASSERT_TRUE(test_m1.get_max_health() == 100);
	ASSERT_TRUE(test_m1.get_current_health() == 100);
	ASSERT_TRUE(test_m1.get_attack() == 20);
	ASSERT_TRUE(test_m1.get_defense() == 5);
	ASSERT_TRUE(test_m1.get_x() == 0);
	ASSERT_TRUE(test_m1.get_y() == 0);

	ASSERT_TRUE(test_m2.get_id() == 1);
	ASSERT_TRUE(test_m2.get_name() == "M2");
	ASSERT_TRUE(test_m2.get_max_health() == 200);
	ASSERT_TRUE(test_m2.get_current_health() == 200);
	ASSERT_TRUE(test_m2.get_attack() == 40);
	ASSERT_TRUE(test_m2.get_defense() == 10);
	ASSERT_TRUE(test_m2.get_x() == 0);
	ASSERT_TRUE(test_m2.get_y() == 0);
}