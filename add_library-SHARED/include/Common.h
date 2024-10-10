#ifndef COMMON_H
#define COMMON_H

// CMake defines HogeLib_EXPORTS when building a shared library.
#if defined(HogeLib_EXPORTS)
#define HOGELIB_DLLDECLARE __declspec(dllexport)
#else
#define HOGELIB_DLLDECLARE __declspec(dllimport)
#endif

#endif
