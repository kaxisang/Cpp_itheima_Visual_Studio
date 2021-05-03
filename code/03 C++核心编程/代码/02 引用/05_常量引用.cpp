/**************************************************
* File name:     05_常量引用.cpp
* Created time:  2021/5/3 7:24:47
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// 常量引用
// 用来修饰形参，防止误操作

void TestA(const int& a) {
    //a = 1000; 常量无法更改，表达式必须为可修改的左值
    cout << a << endl;
}

int main() {
    //int& a = 10; 必须为左值
    const int& a = 10; // 常量引用
    TestA(a);

    return 0;
}
