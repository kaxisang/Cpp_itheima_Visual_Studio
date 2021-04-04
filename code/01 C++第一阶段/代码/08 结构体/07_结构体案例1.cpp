/**************************************************
* File name:     07_结构体案例1.cpp
* Created time:  2021/3/27 22:20:10
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;
#include <string.h>
#include <time.h>

/*
    学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。
*/

struct student {
    string name;
    int score;
};

struct teacher {
    string name;
    struct student s[5];
};

void createTeacher(struct teacher t[3], int len) {
    string tn = "abcde";
    for (int i = 0; i < len; i++) {
        t[i].name = "Teacher_" + tn[i];
        for (int j = 0; j < 5; j++) {
            t[i].s[j].name = "Student_" + tn[i];
            t[i].s[j].score = rand();
        }
    }
}

void printInfo(struct teacher t[], int len) {
    for (int i = 0; i < len; i++) {
        cout << t[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t" << t[i].s[j].name << "的分数是：" << t[i].s[j].score << endl;
        }
    }
}

int main() {
    srand((unsigned int)time(NULL));
    struct teacher t[3];
    createTeacher(t, sizeof(t) / sizeof(t[0]));
    printInfo(t, sizeof(t) / sizeof(t[0]));

    return 0;
}
