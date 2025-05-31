// LIB_binary_search.cpp : 定义静态库的函数。
//

#include "pch.h"
#include "framework.h"
#include "LIB_binary_search.h"
// TODO: 这是一个库函数示例
int search(const int* arr, int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // 避免溢出
        if (arr[mid] == target) {
            return mid; // 找到目标，返回索引
        }
        else if (arr[mid] < target) {
            left = mid + 1; // 搜索右半部分
        }
        else {
            right = mid - 1; // 搜索左半部分
        }
    }
    return -1; // 未找到，明确返回 -1
}