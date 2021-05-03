/**************************************************
* File name:     03_函数重载.cpp
* Created time:  2021/5/3 15:00:53
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// 函数名相同，提高复用性
// 满足条件
    // 同一个作用域下
    // 函数名称相同
    // 函数参数类型不同或者个数不同或者顺序不同
// 函数的返回值不可以作为函数重载的条件

void func() {
    cout << "func 的调用" << endl;
}

void func(int a) {
    cout << "func (int a)的调用" << endl;
    cout << a << endl;
}

void func(int a, int b) {
    ;;
}

//void func(int b, int a) {
//    ;;
//}


/////////////////函数重载注意事项/////////////////
// 引用作为重载的条件
void funcA(int& a) {
    cout << "funcA(int& a)" << endl;
}

void funcA(const int& a) {
    cout << "funcB(int& b)" << endl;
}

// 函数重载与默认参数
void funcB(int a) {
    cout << "funcB(int a)" << endl;
}

void funcB(int a, int b = 10) {
    cout << "funcB(int a = 10)" << endl;
}

int main() {
    // 函数重载
    func();
    func(10);
    func(10, 10);

    // 函数重载注意事项
    int a = 10;
    funcA(a);  // 引用
    funcA(10); // 常量引用，此处的10属于字面常量

    funcB(20, 20);
    // funcB(20); 程序出现二义性

    return 0;
}