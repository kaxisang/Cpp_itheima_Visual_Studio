/**************************************************
* File name:     06_new操作符.cpp
* Created time:  2021/4/18 13:51:46
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

#include <iostream>
using namespace std;

// C++中利用new操作符在堆区开辟数据
// 堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
// 语法：new 数据类型
// 利用new创建的数据，会返回该数据对应的类型指针

// new的基本语法
int* func() {
    // 在堆区创建整型数据 new返回该数据类型的指针
    int* p = new int{ 10 };
    return p;
}

void test01() {
    int* p = func();
    cout << *p << endl;
    // 释放堆区数据，使用delete关键字
    delete p;
    //cout << *p << endl; 非法操作
}

void test02() {
    // 创建10整型数据的数组，在堆区
    int* arr = new int[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    delete[] arr;
}

// 在堆区利用new开辟数据

int main() {
    test01();
    test02();

    return 0;
}