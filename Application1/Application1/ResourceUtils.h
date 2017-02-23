#pragma once

#include <windows.h>
//io
//network activity.

MEMORYSTATUSEX get_status();

DWORDLONG get_ram_used(MEMORYSTATUSEX status);

DWORDLONG get_ram_free(MEMORYSTATUSEX status);

DWORDLONG get_ram_total(MEMORYSTATUSEX status);







