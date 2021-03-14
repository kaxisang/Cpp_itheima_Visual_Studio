/**************************************************
* File name:     07_冒泡排序.cpp
* Created time:  3/14/2021 9:12:42 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <time.h>
using namespace std;

/**
 * 封装一个函数，利用冒泡排序，实现对整型数组的升序排序
 */

// 冒泡排序函数
void bubbleSort(int* arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 打印数组函数
void printArray(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    srand((unsigned int)time(NULL));
    // 1、创建数组
    int arr[10] = { rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand() };
    
    // 2、创建函数，实现冒泡排序
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);

    // 3、打印排序后的数组
    printArray(arr, len);

    return 0;
}
