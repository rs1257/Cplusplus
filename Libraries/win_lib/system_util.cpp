#include "system_util.h"

#include <string>
#include <windows.h>

namespace Systeminfo {
	std::string get_os_version()
	{
		OSVERSIONINFOEX info;
		ZeroMemory(&info, sizeof(OSVERSIONINFOEX));
		info.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);

		GetVersionEx((LPOSVERSIONINFO)&info);

		if (info.dwMajorVersion == 10 && info.dwMinorVersion == 0) {
			if (info.wProductType == VER_NT_WORKSTATION) {
				return "Windows 10";
			}
			else {
				return "Windows Server 2016";
			}
		}
		else if (info.dwMajorVersion == 6 && info.dwMinorVersion == 3) {
			if (info.wProductType == VER_NT_WORKSTATION) {
				return "Windows 8.1";
			}
			else {
				return "Windows Server 2012 R2";
			}
		}
		else if (info.dwMajorVersion == 6 && info.dwMinorVersion == 2) {
			if (info.wProductType == VER_NT_WORKSTATION) {
				return "Windows 8";
			}
			else {
				return "Windows Server 2012";
			}
		}
		else if (info.dwMajorVersion == 6 && info.dwMinorVersion == 1) {
			if (info.wProductType == VER_NT_WORKSTATION) {
				return "Windows 7";
			}
			else {
				return "Windows Server 2008 R2";
			}
		}
		else
			return "Unknown";
	}

	typedef BOOL(WINAPI *LPFN_ISWOW64PROCESS) (HANDLE, PBOOL);

	LPFN_ISWOW64PROCESS fnIsWow64Process;

	bool is_64() {

		BOOL bIsWow64 = FALSE;

		//IsWow64Process is not available on all supported versions of Windows.
		//Use GetModuleHandle to get a handle to the DLL that contains the function
		//and GetProcAddress to get a pointer to the function if available.

		fnIsWow64Process = (LPFN_ISWOW64PROCESS)GetProcAddress(
			GetModuleHandle(TEXT("kernel32")), "IsWow64Process");

		if (NULL != fnIsWow64Process)
		{
			if (!fnIsWow64Process(GetCurrentProcess(), &bIsWow64))
			{
				//handle error
			}
		}
		return bIsWow64;
	}
}