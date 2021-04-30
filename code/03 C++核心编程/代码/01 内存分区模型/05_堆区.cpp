/**************************************************
* File name:     05_堆区.cpp
* Created time:  2021/4/18 10:46:47
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

// 堆区
    // 由程序员分配释放，程序结束时由操作系统释放
    // C++中主要利用new在堆区开辟内存

#include <iostream>
using namespace std;

int* func() {
    // 利用new关键李将数据开辟到堆区
    int* p = new int(10); // 指针本质也是局部变量，放在栈上，指针保存的数据是在堆区
    return p;
}

int main() {
    int* p = func();
    cout << *p << endl;
    return 0;
}