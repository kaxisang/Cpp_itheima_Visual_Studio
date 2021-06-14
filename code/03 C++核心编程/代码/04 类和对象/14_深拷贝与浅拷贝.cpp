/**************************************************
* File name:     14_深拷贝与浅拷贝.cpp
* Created time:  2021/6/6 15:07:12
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// 浅拷贝：简单的赋值拷贝操作
// 深拷贝：在堆区重新申请空间，进行拷贝操作

// 浅拷贝的指针出现问题

class Person {
public:
    int m_age = 10;
    Person() {
        cout << "Person的构造函数调用" << endl;
    }
    Person(int age) {
        cout << "Person的有参构造函数调用" << endl;
        m_age = age;
    }
    Person(Person& p1) {
        cout << "Person拷贝构造函数调用" << endl;
        m_age = p1.m_age;
    }
    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }
};

class People {
public:
    int* m_age;
    People() {
        cout << "People的默认构造函数调用" << endl;
    }
    People(int age) {
        cout << "People的有参构造函数调用" << endl;
        m_age = new int{ age };
    }
    ~People() {
        cout << "People的析构函数调用" << endl;
        delete m_age;
    }
};

int main() {
    Person p1;
    p1.m_age = 18;
    Person p2 = p1;
    cout << p1.m_age << " " << p2.m_age << endl;
    cout << &p1.m_age << " " << &p2.m_age << endl;
    p1.m_age = 20;
    cout << p1.m_age << " " << p2.m_age << endl;

    cout << "======================================" << endl;

    People pp1 = 19;
    People pp2 = pp1;
    cout << pp1.m_age << " " << pp2.m_age << endl;
    cout << *pp1.m_age << " " << *pp2.m_age << endl;
    pp2.m_age = new int(20);
    cout << *pp1.m_age << " " << *pp2.m_age << endl;

    Person* aa = new Person();

    return 0;
}