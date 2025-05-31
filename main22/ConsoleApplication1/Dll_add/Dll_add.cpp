// Dll_add.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "Dll_add.h"


DLLADD_API int add(int a, int b) {
    return a + b;
}