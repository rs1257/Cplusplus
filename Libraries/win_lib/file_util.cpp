#include "file_util.h"
#include "path_util.h"
#include <sys/stat.h>
#include <fstream>
#include <windows.h>

#include <iostream>
#include <stdio.h>

//learn to use windows api and use wide string .etc 
namespace file {

	bool exists(const std::string &file_name) {
		struct stat buffer;
		return (stat(file_name.c_str(), &buffer) == 0);
	}

	void create(const std::string &file_path) {
		std::ofstream outputFile(file_path);
	}

	void remove(const std::string &file_name) {
		if (!file::exists) {
			std::cout << "File doesn't exist" << "\n";
		}
		else if (std::remove(file_name.c_str()) != 0) {
			std::cout << "Remove operation failed" << "\n";
		}
		else {
			std::cout << file_name << " has been removed." << "\n";
		}
	}

	void move(const std::string &file_name_src, const std::string &file_name_des) {
		if (!file::exists) {
			std::cout << "File doesn't exist" << "\n";
		}
		else if (std::rename(file_name_src.c_str(), file_name_des.c_str()) != 0) {
			std::cout << "Move operation failed" << "\n";
		}
		else {
			std::cout << file_name_src << " has been moved to " << file_name_des << "\n";
		}
	}	
}