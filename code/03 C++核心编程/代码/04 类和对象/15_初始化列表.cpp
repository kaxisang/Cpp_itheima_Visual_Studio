/**************************************************
 * File name:     15_初始化列表.cpp
 * Created time:  2021/6/12 22:40:29
 * Author:        Wang Luxiang
 * Version:		 v0.1.0
 **************************************************/
#include <iostream>
using namespace std;

// C++提供了初始化列表的语法，用来初始化属性
// 语法：构造函数(): 属性1(值1), 属性2(值2) ... {}

class Person {
public:
    int a_;
    int b_;
    int c_;

    // 传统的初始化操作
    // Person(int a, int b, int c) {
    //    a_ = a;
    //    b_ = b;
    //    c_ = c;
    //}

    // 初始化列表初始化属性
    Person(int a, int b, int c) : a_(a), b_(b), c_(c) {

    }
};

void Test01() {
    Person p = { 10, 20, 30 };
    cout << p.a_ << " " << p.b_ << " " << p.c_ << endl;
}

int main() {
    Test01();

    return 0;
}