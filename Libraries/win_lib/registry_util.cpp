#include "registry_util.h"
#include <iostream>

namespace Registry {
	HKEY open(HKEY hRootKey, wchar_t* strKey) {
		HKEY hKey;
		LONG nError = RegOpenKeyEx(hRootKey, strKey, NULL, KEY_ALL_ACCESS, &hKey);

		if (nError == ERROR_FILE_NOT_FOUND)
		{
			std::cout << "Creating registry key: " << strKey << std::endl;
			nError = RegCreateKeyEx(hRootKey, strKey, NULL, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, NULL);
		}

		if (nError)
			std::cout << "Error: " << nError << " Could not find or create " << strKey << std::endl;

		return hKey;
	}
	bool delete_key(HKEY hRootKey, wchar_t* strKey, wchar_t* strSubKey) {
		return RegDeleteKey(open(hRootKey, strKey), strSubKey);
	}

	bool delete_value(HKEY hRootKey, wchar_t* strKey, wchar_t* strVal) {
		return RegDeleteValue(open(hRootKey, strKey), strKey);
	}
}  //namespace Registry