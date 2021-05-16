/**************************************************
* File name:     05_struct和class的区别.cpp
* Created time:  2021/5/8 20:53:53
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <string.h>
using namespace std;

// 在C++中struct和class的唯一区别就在于默认的访问权限不同
// 区别
    // struct默认权限为公共
    // class的默认权限为私有

class ClassA {
    string private_a_ = "默认的私有权限";
};

struct StructB {
    string public_b = "默认公共权限";
};

int main() {
    ClassA class_a;
    StructB struct_b;

    // cout << class_a.private_a_ << endl; 无法访问 'ClassA::private_a_': cannot access private member declared in class 'ClassA'
    cout << struct_b.public_b << endl;

    return 0;
}
