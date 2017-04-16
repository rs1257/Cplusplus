#pragma once

#include <string>

namespace File {
	bool exists(const std::string &file_name);

	void create(const std::string &file_path);

	void remove(const std::string &file_name);

	void move(const std::string &file_name_src, const std::string &file_name_des);
}  //namespace File


