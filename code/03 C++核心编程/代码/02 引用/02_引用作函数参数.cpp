/**************************************************
* File name:     02_引用作函数参数.cpp
* Created time:  2021/4/30 20:56:14
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

#include <iostream>
using namespace std;

// 函数传参时，可以利用引用的技术让形参修饰实参
// 可以简化函数指针

// 1、值传递
void SwapA(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 2、地址传递
void SwapB(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3、引用传递
void SwapC(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // 值传递
    int a = 10;
    int b = 20;
    SwapA(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "========== ==========" << endl;

    // 地址传递
    SwapB(&a, &b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "========== ==========" << endl;

    // 引用传递
    SwapC(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}