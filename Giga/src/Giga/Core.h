#pragma once

#ifdef GG_PLATFORM_WINDOWS
	#ifdef GG_BUILD_DLL
		#define GIGA_API __declspec(dllexport)
	#else
		#define GIGA_API __declspec(dllimport)
	#endif
#else
	#error Giga only supports Windows
#endif