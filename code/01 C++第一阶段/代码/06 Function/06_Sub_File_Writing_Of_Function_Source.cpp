/**************************************************
* File name:     06_Sub_File_Writing_Of_Function_Source.cpp
* Created time:  3/14/2021 2:59:23 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include "06_Sub_File_Writing_Of_Function_Header.h"

// 函数的定义
void value_swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}