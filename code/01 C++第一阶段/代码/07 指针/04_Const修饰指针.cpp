/**************************************************
* File name:     04_Const修饰指针.cpp
* Created time:  3/14/2021 8:18:41 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * const修饰指针有三种情况：
 *  1、const修饰指针——常量指针
 *  2、const修饰常量——指针常量
 *  3、const即修饰指针，又修饰常量
 */

int main() {
    // 常量指针，指针指向的值不可以改，指针的指向可以改
    int a = 10;
    int b = 20;
    const int* p = &a;
    // *p = b;指针指向的值不可以改
    p = &b;
    // 指针常量，指针指向的值可以改，指针的指向不可以改
    int* const p2 = &a;
    // p2 = &b;指针的指向不可以改
    *p2 = b;
    // 常量指针常量，指针指向的值和指针的指向都不可以改
    const int* const p3 = &a;
    // p3 = &b;
    // *p3 = b;
    // 指针指向的值和指针的指向都不可以改

    return 0;
}
