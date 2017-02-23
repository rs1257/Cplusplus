#include "stdafx.h"
#include "ResourceUtils.h"
#include <windows.h>

#define DIV 1024

MEMORYSTATUSEX get_status() {
	MEMORYSTATUSEX status;
	status.dwLength = sizeof(status);
	GlobalMemoryStatusEx(&status);
	return status;
}

DWORDLONG get_ram_used(MEMORYSTATUSEX status) {
	return (get_ram_total(status) - get_ram_free(status));
}

DWORDLONG get_ram_free(MEMORYSTATUSEX status) {
	return status.ullAvailPhys / DIV; 
}

DWORDLONG get_ram_total(MEMORYSTATUSEX status) {
	return status.ullTotalPhys / DIV;
}





