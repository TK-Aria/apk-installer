//
// @file main.cpp
// @brief 簡単な説明
// @author 作成者
// @date 作成日
// @details 詳細な説明
//
#pragma once

#ifdef _WIN32

#include <Windows.h>

#undef GetCurrentDirectory
#define GetCurrentDirectory(dir,size) GetCurrentDirectoryA(size,dir)
#define ChangeDirectory SetCurrentDirectoryA

#define ADB_COMMAND "adb install -r "

// UNIX OS
#else __unix__|__linux__|__FreeBSD__|__NetBSD__

#include <Carbon/Carbon.h>
#include <unistd.h>

#define GetCurrentDirectory getcwd
#define ChangeDirectory chdir

#define ADB_COMMAND "./adb install -r "

#endif // OS Dependence

