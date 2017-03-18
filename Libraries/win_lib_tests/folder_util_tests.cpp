#include <gtest/gtest.h>

#include "../win_lib/folder_util.h"

#include <string>

namespace {
	std::string valid_test_folder = "C:\\test\\folder";
	std::string invalid_test_folder = "C:\\test\\folder2";

	std::string moved_test_folder = "C:\\test\\moved";
}

//reverse operations? create and delete?
TEST(folder, create) {
	ASSERT_FALSE(folder::exists(valid_test_folder));
	folder::create(valid_test_folder);
	ASSERT_TRUE(folder::exists(valid_test_folder));

}

TEST(folder, exists) {
	ASSERT_TRUE(folder::exists(valid_test_folder));
	ASSERT_FALSE(folder::exists(invalid_test_folder));
}

TEST(folder, remove) {
	ASSERT_TRUE(folder::exists(valid_test_folder));
	folder::remove(valid_test_folder);

	ASSERT_FALSE(folder::exists(valid_test_folder));
	folder::remove(valid_test_folder);
}

TEST(folder, move) {
	folder::create(valid_test_folder);
	ASSERT_TRUE(folder::exists(valid_test_folder));

	folder::move(valid_test_folder, moved_test_folder);
	ASSERT_FALSE(folder::exists(valid_test_folder));
	ASSERT_TRUE(folder::exists(moved_test_folder));

	folder::remove(moved_test_folder);
	ASSERT_FALSE(folder::exists(moved_test_folder));
}