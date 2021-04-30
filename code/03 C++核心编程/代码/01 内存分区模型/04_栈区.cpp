/**************************************************
* File name:     04_栈区.cpp
* Created time:  2021/4/17 22:01:10
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

// 栈区
    // 由编译器自动分配释放，存放函数的参数值，局部变量等
    // 不要返回局部变量的地址，展区开辟后由编译器自动释放

#include <iostream>
using namespace std;

int* func(int b) { // 形参数据也会放在栈区
    b = 10;
    int a = 10; // 局部变量
    return &a; // 返回局部变量的地址
}

int main() {
    // 接收func函数的返回值
    int* p = func(1);
    cout << *p << endl; // 第一次成功输出
    cout << *p << endl; // 第二次输出乱码，数据已经被释放
    return 0;
}
