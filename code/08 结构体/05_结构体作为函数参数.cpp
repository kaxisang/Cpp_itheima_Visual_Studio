/**************************************************
* File name:     05_结构体作为函数参数.cpp
* Created time:  2021/3/27 21:44:12
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;
#include <string.h>

/**
 * 将结构体作为参数向函数传递
 * 传递的方式有两种：
 *  值传递
 *  地址传递
 */

 // 定义学生结构体
struct student {
    string name;
    int age;
};

// 值传递
// 打印学生信息
void printStudent(struct student s) {
    cout << s.name << "的年龄为：" << s.age << endl;
}

// 地址传递
// 更改学生信息
void changeStudent(struct student* s) {
    s->age = 20;
}

int main() {
    struct student s = { "张三", 10 };
    cout << s.name << "的年龄为：" << s.age << endl;
    printStudent(s);
    changeStudent(&s);
    printStudent(s);

    return 0;
}