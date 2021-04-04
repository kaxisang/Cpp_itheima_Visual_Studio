/**************************************************
* File name:     04_Common_Style_Of_Function.cpp
* Created time:  3/13/2021 10:40:47 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <string.h>
using namespace std;

// 函数的常见样式
// 1、无参无返
void test01() {
    cout << "这是test01  无参无返" << endl;
}
// 2、有参无返
void test02(int a) {
    cout << "这是test02  有参无返" << endl;
}
// 3、无参有返
string test03() {
    cout << "这是test03  无参有返" << endl;
    return "这是test03";
}
// 4、有参有返
string test04(int b) {
    cout << "这是test04  有参有返" << endl;
    return "这是test02";
}

int main() {
    test01();
    test02(100);
    test03();
    test04(100);

    return 0;
}