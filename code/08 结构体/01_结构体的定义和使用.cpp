/**************************************************
* File name:     01_结构体的定义和使用.cpp
* Created time:  2021/3/21 13:47:12
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

/**
 * 结构体属于用户自定义的数据类型，允许用户存储不同的数据据类型
 */

/**
 * 结构体的定义和使用
 * 语法：
 *      struct 结构体名 {
 *          结构体成员列表
 *      }
 * 通过结构体创建变量的方式有三种
 *  - struct 结构体名 变量名
 *  - struct 结构体名 变量名 = {成员1值, 成员2值}
 *  - 定义结构体时顺便创建变量
 */

#include <string.h>
#include <iostream>
using namespace std;

// 创建学生数据类型：姓名，年龄，分数

struct Student {
    // 成员列表
    // 姓名
    string name;

    // 年龄
    int age;

    // 分数
    int score;
}s3; // 第三种方法

int main() {
    // 通过学生类型创建具体学生
    // 第一种方法
    struct Student s1;
    // 给s1属性赋值
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << s1.name << "的年龄是：" << s1.age << "，分数是：" << s1.score << endl;

    // 第二种方法
    struct Student s2 = {"李四", 12, 80};
    cout << s2.name << "的年龄是：" << s2.age << "，分数是：" << s2.score << endl;

    // 第三种方法
    s3.name = "王五";
    s3.age = 20;
    s3.score = 70;
    cout << s3.name << "的年龄是：" << s3.age << "，分数是：" << s3.score << endl;

    // 第四种方法，创建结构体变量时可以省略struct关键字
    Student s4 = { "赵六", 10, 90 };

    return 0;
}
