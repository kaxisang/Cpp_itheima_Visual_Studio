/**************************************************
* File name:     06_成员属性设置为私有.cpp
* Created time:  2021/5/15 8:05:20
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <string>
using namespace std;

// 将所有成员属性设置为私有，可以自己控制读写权限
// 对于写权限，我们可以检测数据的有效性

// 设计人类
class Person {
public:
    // 设置姓名
    void set_name(string name) {
        // 数据检查
        if (name != "李四") {
            person_name = name;
        }
    }

    // 获取姓名
    string get_name() {
        return person_name;
    }

    // 获取年龄
    int get_age() {
        return person_age;
    }

private:
    string person_name = "Null"; // 可读可写权限
    int person_age = 10; // 只读权限
};

int main() {
    Person zhang_san;
    zhang_san.set_name("张三");
    zhang_san.set_name("李四");
    cout << zhang_san.get_name() << endl;
    cout << zhang_san.get_age() << endl;

    return 0;
}
