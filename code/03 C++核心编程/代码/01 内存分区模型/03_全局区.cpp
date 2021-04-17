/**************************************************
* File name:     03_全局区.cpp
* Created time:  2021/4/17 12:00:56
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

// 全局区：
    // 全局变量和静态变量存放在此处
    // 全局区还包含了常量区，字符串常量和其他常量也存放在此
    // 该区域的数据在程序结束后由操作系统释放

    // 静态变量，字符串常量，全局常量在全局区
    // 局部变量，局部常量不在全局区中

#include <iostream>
using namespace std;

// 全局变量
int global_variable_a = 10;
int global_variable_b = 10;

// 全局常量
const int const_int_a = 10;

int main() {
    // 全局区
        // 全局变量、静态变量以及常量

    // 创建普通局部变量
    int local_variable_a = 10;
    int local_variable_b = 10;
    cout << "局部变量a的地址为：" << (int)&local_variable_a << endl;
    cout << "局部变量b的地址为：" << (int)&local_variable_b << endl;

    cout << "全局变量a的地址为：" << (int)&global_variable_a << endl;
    cout << "全局变量b的地址为：" << (int)&global_variable_b << endl;

    // 静态变量
        // 在普通变量前面加static
    static int static_variable_a = 10;
    static int static_variable_b = 10;
    cout << "静态变量a的地址为：" << (int)&static_variable_a << endl;
    cout << "静态变量b的地址为：" << (int)&static_variable_b << endl;

    // 常量
    // 字符串常量 “hello world"
    cout << "字符串常量的地址为：" << (int)&"hello world" << endl;
    // const修饰的变量 
        // 局部常量
    const int const_int_b = 10;
    cout << "局部常量的地址为：" << (int)&const_int_b << endl;
        // 全局常量
    cout << "全局常量的地址为：" << (int)&const_int_a << endl;

    return 0;
}
