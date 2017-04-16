#pragma once
#include <string>

namespace Systeminfo {
	//systeminfo

	//only windows 7 and above
	std::string get_os_version();

	bool is_64();
} //namespace System