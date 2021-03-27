/**************************************************
* File name:     04_结构体嵌套结构体.cpp
* Created time:  2021/3/27 20:16:14
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;
#include <string.h>

/**
 * 结构体中的成员可以是另一个结构体
 */

struct student {
    string name;
    int age;
};

struct teacher {
    string name;
    int age;
    struct student s;

};

int main() {
    struct student s = { "张三", 10 };
    struct teacher t = { "李四", 20, s };
    cout << "老师的姓名：" << t.name << "\t老师的年龄："

    return 0;
}