/**************************************************
* File name:     01_函数默认参数.cpp
* Created time:  2021/5/3 7:38:09
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// 函数的形参列表中的形参可以有默认值
// 语法：返回值类型 函数名 (参数=默认值) {}

int func(int a = 10, int b = 20, int c = 30) {
    return (a + b + c);
}

// 如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认参数
// int func(int a, int b = 10, int c) {} 默认实参不在形参列表的呃结尾

// 如果函数声明有默认参数，函数实现就不能有默认参数
// 声明和实现只能有一个有默认参数

int main() {
    cout << func(10, 20, 30) << endl;
    cout << func(10, 20) << endl;
    cout << func(10) << endl;
    cout << func() << endl;

    return 0;
}
