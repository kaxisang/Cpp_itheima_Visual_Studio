/**************************************************
* File name:     05_Function_Declaration.cpp
* Created time:  3/14/2021 9:08:49 AM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * 告诉编译器函数名称及如何使用函数。函数的主题可以单独定义
 * 函数的声明可以多次，但是函数的定义只能有一次
 */

// 提前告诉编译器函数的存在，可以利用函数的声明
// 函数的声明
int compare(int a, int b);

int main() {
    int a = 10;
    int b = 20;
    cout << compare(a, b) << endl;

    return 0;
}

// 比较函数，实现两个整型的数字进行比较，返回较大的值
int compare(int a, int b) {
    return a > b ? a : b;
}