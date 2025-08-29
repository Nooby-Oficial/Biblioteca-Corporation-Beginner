#include "platform.h"

#ifdef _WIN32
const char* platform_name() { return "Windows"; }
int platform_is_windows() { return 1; }
int platform_is_linux() { return 0; }
int platform_is_mac() { return 0; }
#elif __linux__
const char* platform_name() { return "Linux"; }
int platform_is_windows() { return 0; }
int platform_is_linux() { return 1; }
int platform_is_mac() { return 0; }
#elif __APPLE__
const char* platform_name() { return "Mac"; }
int platform_is_windows() { return 0; }
int platform_is_linux() { return 0; }
int platform_is_mac() { return 1; }
#else
const char* platform_name() { return "Unknown"; }
int platform_is_windows() { return 0; }
int platform_is_linux() { return 0; }
int platform_is_mac() { return 0; }
#endif
