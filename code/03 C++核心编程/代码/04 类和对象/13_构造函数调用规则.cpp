/**************************************************
* File name:     13_构造函数调用规则.cpp
* Created time:  2021/5/30 15:15:31
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <string>
using namespace std;

// 默认情况下，C++编译器至少给一个类添加三个函数
    // 默认构造函数（无参，函数体为空）
    // 默认析构函数（无参，函数体为空）
    // 默认拷贝构造函数，对属性进行值拷贝

// 构造函数调用规则
    // 如果用户定义有参构造函数，C++不再提供默认无参构造函数，但是会提供默认拷贝构造
    // 如果用户定义拷贝构造函数，C++不会提供其他构造函数

class Person {
public:
    int age = 18;
    string name = "None";
    Person() {
        cout << "Person的默认构造函数调用" << endl;
    }
    Person(int age) {
        cout << "Person的有参构造函数调用" << endl;
    }
    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }
};

int main() {
    Person p;
    p.age = 10;
    p.name = "aa";
    Person p2 = p;
    Person p3;
    cout << &p << endl;
    cout << &p2 << endl;
    cout << p2.age << endl;

    return 0;
}