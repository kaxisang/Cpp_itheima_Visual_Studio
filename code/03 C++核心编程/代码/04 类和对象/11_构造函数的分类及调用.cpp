/**************************************************
* File name:     11_构造函数的分类及调用.cpp
* Created time:  2021/5/29 9:33:31
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// 构造函数的分类及调用
// 两种分类方式：
    // 按参数分为：有参构造和无参构造
    // 按类型分为：普通构造和拷贝构造
// 三种调用方式
    // 括号法
    // 显示法
    // 隐式转换法

class Person {
public:
    int a = 10;
    Person() {
        cout << "Person无参构造函数调用" << endl;
    }

    Person(int a) {
        cout << "Person有参构造函数调用" << endl;
        cout << "a: " << a << endl;
    }

    // 拷贝构造函数
    Person(const Person &p) {
        a = p.a;
    }

    ~Person() {
        cout << "Person析构函数调用"
    }
};

int main() {
    // 无参
    Person p1;
    // 括号法
    Person p2(10);
    Person p3(p2);
    cout << "-----------" << endl;
    Person p4(); // 函数声明

    // 显示法
    Person p5 = Person(10);
    Person p6 = Person(p5);

    Person(10); // 匿名对象 此行代码执行结束后系统自动回收匿名对象

    // 不要利用拷贝构造函数初始化匿名对象

    // 隐式转换法，相当于 Person p7 = Person(10);
    Person p7 = 10;
    Person p8 = p7;

    return 0;
}