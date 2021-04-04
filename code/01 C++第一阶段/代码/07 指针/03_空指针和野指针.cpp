/**************************************************
* File name:     03_空指针和野指针.cpp
* Created time:  3/14/2021 7:54:50 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * 空指针：指针变量指向内存中编号为0的空间
 * 用途：初始化指针变量
 * 注意：空指针指向的内存是不可访问的
 * 
 * 野指针：指针变量指向非法的内存空间
 */

int main() {
    int* p = NULL;

    // *p = 100;
    // 空指针无法被访问

    int* a = (int*)0x110001;
    cout << *a << endl;

    return 0;
}
