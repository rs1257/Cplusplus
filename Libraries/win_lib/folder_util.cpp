#include "folder_util.h"

#include <direct.h>
#include <windows.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <iostream>

namespace folder {
	struct stat info;

	bool exists(const std::string &folder_name) {
		if (!stat(folder_name.c_str(), &info) != 0) {
			if (info.st_mode & S_IFDIR) { // S_ISDIR() doesn't exist on my windows 
				return true;
			}
		}
		return false;
	}

	void create(const std::string &folder_name) {
		if (_mkdir(folder_name.c_str()) != 0) {
			std::cout << "Create operation failed" << "\n";
		}
		else {
			std::cout << folder_name << " has been created." << "\n";
		}
	}

	void remove(const std::string &folder_name) {
		if (_rmdir(folder_name.c_str()) != 0) {
			std::cout << "Remove operation failed" << "\n";
		}
		else {
			std::cout << folder_name << " has been removed." << "\n";
		}
	}

	void move(const std::string &folder_src, const std::string &folder_des) {
		if (rename(folder_src.c_str(), folder_des.c_str()) != 0) {
			std::cout << "Move operation failed" << "\n";
		}
		else {
			std::cout << folder_src << " has been moved to " << folder_des << "\n";
		}
	}
}