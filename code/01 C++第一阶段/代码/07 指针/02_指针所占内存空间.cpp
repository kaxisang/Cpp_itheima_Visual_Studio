/**************************************************
* File name:     02_指针所占内存空间.cpp
* Created time:  3/14/2021 4:42:40 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

int main() {
    // 指针所占内存空间
    int a = 10;
    int* p = &a;

    cout << "int* 所占内存：" << sizeof(p) << endl;
    cout << "double* 所占内存：" << sizeof(double*) << endl;

    return 0;
}
