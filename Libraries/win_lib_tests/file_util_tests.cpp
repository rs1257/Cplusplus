#include <gtest/gtest.h>

#include "../win_lib/file_util.h"

#include <string>


std::string remove_path = "C:\\test";
std::string remove_file = "test.file";

TEST(file, remove) {
	ASSERT_TRUE(file::remove(remove_path, remove_file));
}


