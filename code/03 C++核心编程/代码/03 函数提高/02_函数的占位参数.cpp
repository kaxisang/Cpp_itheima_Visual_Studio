﻿/**************************************************
* File name:     02_函数的占位参数.cpp
* Created time:  2021/5/3 11:09:26
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// 函数的形参列表中可以有占位参数，用来作占位，调用函数时必须填补该位置
// 语法：返回值类型 函数名 (数据类型) {}

// 占位参数
// 占位参数可以有默认值
void func(int a, int = 10 ) {
    cout << "func" << endl;
}

int main() {
    func(10, 10);

    return 0;
}
