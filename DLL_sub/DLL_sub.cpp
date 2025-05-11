// DLL_sub.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "DLL_sub.h"


DLLSUB_API int sub_fun(int a, int b) {
	return a - b;
}