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

//int get_hard_faults() { return 0; }

//int get_cpu_used() { return 0; }

//int get_cpu_free() { return 0; }

//int get_cpu_total() { return 0; }

