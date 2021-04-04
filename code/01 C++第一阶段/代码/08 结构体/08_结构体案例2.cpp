/**************************************************
* File name:     08_结构体案例2.cpp
* Created time:  2021/3/27 23:02:45
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

/*
    设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。

通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
*/
#include <string.h>
#include <iostream>
using namespace std;

// 英雄结构体
struct hero {
    string name;
    int age;
    string sex;
};

void bubbleSort(struct hero h[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (h[j].age < h[j + 1].age) {
                struct hero temp = h[j];
                h[j] = h[j + 1];
                h[j + 1] = temp;
            }
        }
    }
}

void printInfo(struct hero h[], int len) {
    for (int i = 0; i < len; i++) {
        cout << h[i].name << "\t" << h[i].age << "\t" << h[i].sex << endl;
    }
}

int main() {
    struct hero h[5] = {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"},
    };

    int len = sizeof(h) / sizeof(h[0]);
    bubbleSort(h, len);
    printInfo(h, len);

    return 0;
}