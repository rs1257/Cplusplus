#include <gtest/gtest.h>

#include "../win_lib/path_util.h"

#include <string>
#include <iostream>

namespace {
	std::string test_path = "C:\\test";
	std::string test_file = "test.file";
}
TEST(path, join) {
	ASSERT_EQ("C:\\test\\test.file", path::join(test_path, test_file));
	ASSERT_NE("C:\test\test.file", path::join(test_path, test_file));
}

