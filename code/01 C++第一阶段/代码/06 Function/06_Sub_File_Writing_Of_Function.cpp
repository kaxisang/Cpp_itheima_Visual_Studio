/**************************************************
* File name:     06_Sub_File_Writing_Of_Function.cpp
* Created time:  3/14/2021 2:32:24 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include "06_Sub_File_Writing_Of_Function_Header.h"

/**
 * 函数的分文件编写 
 * 作用：让代码结构更加清晰
 * 函数分文件编写的步骤：
 *  1、创建后缀名为.h的头文件
 *  2、创建后缀名为.cpp的头文件
 *  3、在头文件中写函数的声明
 *  4、在源文件中写函数的定义
 */

int main() {
    int a = 10;
    int b = 20;
    value_swap(a, b);
    return 0;
}
