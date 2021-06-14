/**************************************************
* File name:     12_拷贝构造函数调用时机.cpp
* Created time:  2021/5/29 22:00:03
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// C++中拷贝构造函数调用时机通常有三种情况
    // 使用一个已经创建完毕的对象来初始化一个新对象
    // 值传递的方式给函数参数传值
    // 以值传递的方式返回局部对象

class Person {
public:
    int m_Age = 0;
    Person() {
        cout << "person默认构造函数调用" << endl;
    }
    Person(int age) {
        m_Age = age;
    }
    ~Person() {
        cout << "Person默认析构函数调用" << endl;
    }
    Person(Person& p) {
        cout << "Person拷贝构造函数" << endl;
        m_Age = p.m_Age;
    }
};

// 用一个已经创建的对象来初始化一个新对象
void test01() {
    Person p1 = 20;
    Person p2 = p1;
    cout << "p2: " << p2.m_Age << endl;
}

void a(Person p) {

}

// 值传递的方式给函数参数传值
void test02() {
    Person p;
    a(p);
}

// 值方式返回局部对象
Person b() {
    Person p1;
    return p1;
}

void test03() {
    Person p = b();
}

int main() {
    test03();

    return 0;
}