#include <gtest/gtest.h>

#include "../../Stick Hunter/stick_hunter_lib/player.h"

namespace {
	Player test_p = Player("Bob", 1, 100, 10, 15);
}

TEST(player, var_check) {
	ASSERT_TRUE(test_p.get_name() == "Bob");
	ASSERT_TRUE(test_p.get_level() == 1);
	ASSERT_TRUE(test_p.get_max_health() == 100);
	ASSERT_TRUE(test_p.get_current_health() == 100);
	ASSERT_TRUE(test_p.get_attack() == 10);
	ASSERT_TRUE(test_p.get_defense() == 15);
	ASSERT_TRUE(test_p.get_x() == 0);
	ASSERT_TRUE(test_p.get_y() == 0);
}