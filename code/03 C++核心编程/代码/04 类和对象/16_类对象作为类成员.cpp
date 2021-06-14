/**************************************************
* File name:     16_类对象作为类成员.cpp
* Created time:  2021/6/13 21:12:58
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

// C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
/*
    例如
        class A
        class B{
            A a;
        }
    B类中有对象A作为成员，A为对象成员
    那么当创建B对象时，A与B的构造和析构的先后顺序是什么
*/

class A {
public:
    A() {
        cout << "A构造函数开始" << endl;
        cout << "A构造函数结束" << endl;
    }
    ~A() {
        cout << "A析构函数" << endl;
    }
};

class B {
public:
    B() {
        cout << "B构造函数开始" << endl;
        A aa;
        cout << "B构造函数结束" << endl;
    }   
    ~B() {
        cout << "B析构函数" << endl;
    }
};

void test01() {
    B b;
}

int main() {
    test01();
    
    return 0;
}