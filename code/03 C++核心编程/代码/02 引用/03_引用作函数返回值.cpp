/**************************************************
* File name:     03_引用作函数返回值.cpp
* Created time:  2021/5/2 17:31:10
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

#include <iostream>
#include <Windows.h>
using namespace std;

// 引用是可以作为函数的返回值存在的
// 不要返回局部变量引用
// 用法：函数调用作为左值

int& TestA() {
    int a = 10; // 局部变量存在于栈区
    return a;
}

int& TestB() {
    static int b = 10;
    return b;
}

int TestC() {
    static int c = 10;
    return c;
}

int& TestD() {
    static int d = 10;
    return d;
}

int main() {
    int& a = TestA();
    Sleep(1);
    cout << a << endl; // 栈区数据将被自动清理

    int& b = TestB();
    Sleep(1);
    cout << b << endl;

    int c = TestC();
    Sleep(1);
    cout << c << endl;

    int& d = TestD();
    Sleep(1);
    cout << d << endl;
    d = 1000;
    cout << d << endl;
    TestD() = 10000;
    cout << d << endl;

    return 0;
}
