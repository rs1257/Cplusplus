#pragma once

#include <string>

namespace Folder {
	bool exists(const std::string &folder_name);

	void create(const std::string &folder_name);

	void remove(const std::string &folder_name);

	void move(const std::string &folder_src, const std::string &folder_des);
}  //namespace Folder