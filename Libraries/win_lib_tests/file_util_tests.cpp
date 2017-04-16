#include <gtest/gtest.h>

#include "../win_lib/file_util.h"

#include <string>

namespace {
	std::string valid_test_file = "C:\\test\\test.file";
	std::string invalid_test_file = "C:\\test\\test2.file";

	std::string moved_test_file = "C:\\test\\file.file";
}  //anonymous namespace

//reverse operations? create and delete?
TEST(file, create) {
	ASSERT_FALSE(File::exists(valid_test_file));
	File::create(valid_test_file);
	ASSERT_TRUE(File::exists(valid_test_file));
	
}

TEST(file, exists) {
	ASSERT_TRUE(File::exists(valid_test_file));
	ASSERT_FALSE(File::exists(invalid_test_file));
}

TEST(file, remove) {
	ASSERT_TRUE(File::exists(valid_test_file));
	File::remove(valid_test_file);
	
	ASSERT_FALSE(File::exists(valid_test_file));
	File::remove(valid_test_file);
}

TEST(file, move) {
	File::create(valid_test_file);
	ASSERT_TRUE(File::exists(valid_test_file));
	
	File::move(valid_test_file, moved_test_file);
	ASSERT_FALSE(File::exists(valid_test_file));
	ASSERT_TRUE(File::exists(moved_test_file));
	
	File::remove(moved_test_file);
	ASSERT_FALSE(File::exists(moved_test_file));
}

