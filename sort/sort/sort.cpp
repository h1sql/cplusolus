// sort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <Windows.h>
#include "LIB_binary_search.h"
#include "DLL_sort.h"


    // 定义排序函数指针类型
    typedef void (*SortFunc)(int*, int);

    int main() {
        int arr[] = { 7, 9, 8, 2, 4, 1, 6, 3 };
        int size = sizeof(arr) / sizeof(arr[0]);
        sort(arr, size);
        printf("Sorted Array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // 调用二分查找（假设 binary_search.h 是 C 兼容的）
        int target = 4;
        int index = search(arr, size, target);  // 注意函数名改为 C 风格
        printf("Binary Search: %d at index %d\n", target, index);
        return 0;
    }
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
