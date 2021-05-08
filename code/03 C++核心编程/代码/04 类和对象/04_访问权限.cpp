/**************************************************
* File name:     04_访问权限.cpp
* Created time:  2021/5/8 19:45:32
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <string.h>
using namespace std;

// 类在设计时，可以把权限和行为放在不同的权限下，加以控制
// 访问权限有三种：
    // public 公共权限      成员类内可以访问，类外可以访问 可以继承
    // protected 保护权限   成员类内可以访问，类外不可访问 可以继承
    // private 私有权限     成员类内可以访问，类外不可访问 不可继承

class Person {
public:
    // 公共权限
    string public_member = "公共成员权限";
protected:
    // 保护权限
    string protected_member = "保护成员权限";
private:
    // 私有权限
    string private_member = "私有成员权限";

public:
    void func() {
        cout << "==========类内==========" << endl;
        cout << public_member << endl;
        cout << protected_member << endl;
        cout << private_member << endl;
    }
};

int main() {
    Person p;
    cout << "==========类外==========" << endl;
    cout << p.public_member << endl; // 公共权限在类外可以访问
    //cout << p.protected_member << endl; 保护权限在类外无法访问
    //cout << p.private_member << endl;   私有权限在类外无法访问
    p.func();

    return 0;
}