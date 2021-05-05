/**************************************************
* File name:     03_学生类.cpp
* Created time:  2021/5/5 22:05:52
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
    string name;
    string id;

    void SetInfo() {
        cout << "学生姓名：";
        cin >> name;
        cout << "学生学号：";
        cin >> id;
        cout << "设置成功！" << endl;
    }

    void ShowInfo() {
        cout << "姓名：" << name << endl;
        cout << "学号：" << id << endl;
    }
};

int main() {
    Student student;
    student.SetInfo();
    student.ShowInfo();
}