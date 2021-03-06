#ifndef PCH_H
#define PCH_H

#include <cassert>

#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <thread>
#include <algorithm>
#include <optional>

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <tlhelp32.h>

#include "memaddr.h"
#include "info.h"
#include "tr_constants.h"
#include "winapi.h"

void TRPCMain(int32_t updateIntervalMillis);

#endif //PCH_H
