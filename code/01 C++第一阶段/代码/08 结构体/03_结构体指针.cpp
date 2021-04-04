/**************************************************
* File name:     03_结构体指针.cpp
* Created time:  2021/3/27 19:49:57
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

/**
 * 通过指针访问结构体中的成员
 *  利用操作符->可以通过结构体指针访问结构体属性
 */

#include <string.h>
#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

int main() {
    // 创建学生结构体变量
    struct student a = { "张三", 18, 100 };

    // 通过指针指向结构体变量
    struct student* p = &a;

    // 通过指针访问结构体变量中的数据
    // 通过结构体指针 访问结构体中的属性，需要使用->
    cout << "姓名：" << p->name << "\t年龄：" << p->age << "\t分数：" << p->score << endl;
    

    return 0;
}
