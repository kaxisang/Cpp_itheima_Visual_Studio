/**************************************************
* File name:     06_指针和函数.cpp
* Created time:  3/14/2021 8:49:13 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// 实现两个数字进行交换
void swap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "函数内a：" << a << endl;
    cout << "函数内b：" << b << endl;
}

void swap02(int* c, int* d) {
    int temp = *c;
    *c = *d;
    *d = temp;
    cout << "函数内c：" << *c << endl;
    cout << "函数内d：" << *d << endl;
}

int main() {
    // 利用指针作函数参数，可以修改实参的值
    // 值传递
    cout << "-----值传递-----" << endl;
    int a = 10;
    int b = 20;
    swap01(a, b);
    cout << "函数外a：" << a << endl;
    cout << "函数外b：" << b << endl;

    // 地址传递
    cout << "-----地址传递-----" << endl;
    int c = 10;
    int d = 20;
    swap02(&c, &d);
    cout << "函数外c：" << c << endl;
    cout << "函数外d：" << d << endl;
    
    return 0;
}
