#include <gtest/gtest.h>

#include "../win_lib/file_util.h"

#include <string>

namespace {
	std::string valid_test_file = "C:\\test\\test.file";
	std::string invalid_test_file = "C:\\test\\test2.file";

	std::string moved_test_file = "C:\\test\\file.file";
}

//reverse operations? create and delete?
TEST(file, create) {
	ASSERT_FALSE(file::exists(valid_test_file));
	file::create(valid_test_file);
	ASSERT_TRUE(file::exists(valid_test_file));
	
}

TEST(file, exists) {
	ASSERT_TRUE(file::exists(valid_test_file));
	ASSERT_FALSE(file::exists(invalid_test_file));
}

TEST(file, remove) {
	ASSERT_TRUE(file::exists(valid_test_file));
	file::remove(valid_test_file);
	
	ASSERT_FALSE(file::exists(valid_test_file));
	file::remove(valid_test_file);
}

TEST(file, move) {
	file::create(valid_test_file);
	ASSERT_TRUE(file::exists(valid_test_file));
	
	file::move(valid_test_file, moved_test_file);
	ASSERT_FALSE(file::exists(valid_test_file));
	ASSERT_TRUE(file::exists(moved_test_file));
	
	file::remove(moved_test_file);
	ASSERT_FALSE(file::exists(moved_test_file));
}

