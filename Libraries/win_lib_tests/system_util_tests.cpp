#include <gtest/gtest.h>
#include "../win_lib/system_util.h"

#include <string>

namespace {
	std::string test_version = "Windows 8";
} //anonymous namespace

TEST(system, osversion) {
	ASSERT_EQ(test_version, Systeminfo::get_os_version());
}

TEST(system, osbitversion) {
	ASSERT_TRUE(Systeminfo::is_64());
}

