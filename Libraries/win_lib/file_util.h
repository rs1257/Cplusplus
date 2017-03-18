#pragma once

#include <string>

namespace file {
	bool remove(std::string file_path, std::string file_name);

	//void rename

	void move(std::wstring file_src, std::wstring file_des);

	void open(std::wstring file_path);

	void write(std::wstring file_path, std::wstring contents);

	void create(std::wstring file_path);
}


