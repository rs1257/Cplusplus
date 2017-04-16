#include <gtest/gtest.h>

#include "../win_lib/folder_util.h"

#include <string>

namespace {
	std::string valid_test_folder = "C:\\test\\folder";
	std::string invalid_test_folder = "C:\\test\\folder2";

	std::string moved_test_folder = "C:\\test\\moved";
}  //anonymous namespace

//reverse operations? create and delete?
TEST(folder, create) {
	ASSERT_FALSE(Folder::exists(valid_test_folder));
	Folder::create(valid_test_folder);
	ASSERT_TRUE(Folder::exists(valid_test_folder));

}

TEST(folder, exists) {
	ASSERT_TRUE(Folder::exists(valid_test_folder));
	ASSERT_FALSE(Folder::exists(invalid_test_folder));
}

TEST(folder, remove) {
	ASSERT_TRUE(Folder::exists(valid_test_folder));
	Folder::remove(valid_test_folder);

	ASSERT_FALSE(Folder::exists(valid_test_folder));
	Folder::remove(valid_test_folder);
}

TEST(folder, move) {
	Folder::create(valid_test_folder);
	ASSERT_TRUE(Folder::exists(valid_test_folder));

	Folder::move(valid_test_folder, moved_test_folder);
	ASSERT_FALSE(Folder::exists(valid_test_folder));
	ASSERT_TRUE(Folder::exists(moved_test_folder));

	Folder::remove(moved_test_folder);
	ASSERT_FALSE(Folder::exists(moved_test_folder));
}