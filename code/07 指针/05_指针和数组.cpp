/**************************************************
* File name:     05_指针和数组.cpp
* Created time:  3/14/2021 8:32:59 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

int main() {
    // 指针和数组
    // 利用指针访问数组中的元素
    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    /*
    cout << "第一个元素为：" << arr[0] << endl;
    int* p = arr; // 指针指向数组首地址
    cout << "数组的第一个元素：" << *p << endl;
    p++; // 使指针向后偏移4个字节
    cout << "数组的第二个元素：" << *p << endl;
    */
    int* p = arr;
    for (int i = 0; i < 10; i++) {
        cout << *p << endl;
        p++;
    }

    return 0;
}
