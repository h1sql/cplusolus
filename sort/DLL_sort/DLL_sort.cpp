// DLL_sort.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "DLL_sort.h"


#include <algorithm>

DLLSORT_API void sort(int* arr, int size) {
    std::sort(arr, arr + size);
}