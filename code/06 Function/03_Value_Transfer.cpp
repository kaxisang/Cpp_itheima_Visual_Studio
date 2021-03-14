/**************************************************
* File name:     03_Value_Transfer.cpp
* Created time:  3/13/2021 10:23:34 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/*
    值传递就是函数调用时实参将数值传入给形参
    值传递时，如果形参发生改变，并不会影响形参
*/

// 定义函数，实现两个数字进行交换函数
// 函数不需要返回值，声明的时候类型为void 
void swap(int num1, int num2) {
    cout << "数字交换前：" << num1 << "\t" << num2 << endl;
    // return 0; 不需要返回值时，可以不写return
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "数字交换后：" << num1 << "\t" << num2 << endl;
}

int main() {
    int a = 10;
    int b = 20;
    swap(a, b);

    return 0;
}
