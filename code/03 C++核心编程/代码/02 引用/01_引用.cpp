/**************************************************
* File name:     01_引用.cpp
* Created time:  2021/4/30 20:44:36
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

#include <iostream>
using namespace std;

// 给变量起别名
// 语法：数据类型 &别名 = 原名

int main() {
    int a = 10;
    int& b = a;

    // 引用注意事项
        // 引用必须初始化
        // 引用在初始化后，不可以改变

    // int& c; 引用必须初始化
    int c = 20;
    // int& b = c; 重定义，多次初始化 引用不可以改变

    return 0;
}
