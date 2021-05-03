/**************************************************
* File name:     04_引用的本质.cpp
* Created time:  2021/5/2 18:13:45
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// 引用的本质在C++内部的实现是一个指针常量

void func(int& ref) {
    ref = 1000;
}

int main() {
    int a = 10;
    int& b = a;
    b = 20;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
