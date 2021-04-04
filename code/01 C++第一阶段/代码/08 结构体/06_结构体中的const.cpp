/**************************************************
* File name:     06_结构体中的const.cpp
* Created time:  2021/3/27 22:11:26
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;
#include <string.h>

// const的使用场景
// const可以防止误操作

struct student {
    string name;
    int age;
};

void printStudent(struct student s) {
    cout << s.name << "的年龄是：" << s.age << endl;
}

void changeStudent(const struct student* s) {
    // s->age = 150; const可以防止误操作，提升安全性
    cout << s->name << "的年龄是：" << s->age << endl;
}

int main() {
    struct student s = { "张三", 12 };
    printStudent(s);

    return 0;
}
