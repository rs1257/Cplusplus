#pragma once
#include <windows.h>
namespace Registry {
	//opens if exists, creates if it doesnt
	HKEY open(HKEY hRootKey, wchar_t* strKey);

	//read

	bool delete_key(HKEY hRootKey, wchar_t* strKey, wchar_t* strSubKey);
	bool delete_value(HKEY hRootKey, wchar_t* strKey, wchar_t* strVal);

	//write dword .etc
}  //namespace Registry

