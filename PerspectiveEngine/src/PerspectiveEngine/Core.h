#pragma once

#ifdef PERSPECTIVE_PLATFORM_WINDOWS
	#ifdef PERSPECTIVE_BUILD_DLL
		#define PERSPECTIVE_API __declspec(dllexport)
	#else
		#define PERSPECTIVE_API __declspec(dllimport)
#endif
#else
	#error PerspectiveEngine only support Windows!
#endif
