#include "file_util.h"
#include "path_util.h"

#include <iostream>
#include <stdio.h>

namespace file {
	//need does file exist
	bool remove(std::string file_path, std::string file_name) {
		const std::string file = path::join(file_path, file_name);
		if (std::remove(file.c_str()) != 0) {
			std::cout << "Remove operation failed" << std::endl;
			return false;
		}
		std::cout << file << " has been removed." << std::endl;
		return true;
	}

	void move(std::wstring file_src, std::wstring file_des) {}

	void open(std::wstring file_path) {}

	void write(std::wstring file_path, std::wstring contents) {}

	void create(std::wstring file_path) {}
}