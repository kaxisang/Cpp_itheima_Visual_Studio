/**************************************************
* File name:     02_结构体数组.cpp
* Created time:  2021/3/21 15:15:51
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <string.h>
using namespace std;

// 将自定义的结构体放入到数组中方便维护
// 语法：struct 结构体名 数组名[元素个数] = {{}, {}};

// 创建结构体
struct Student {
    string name;
    int age;
    int score;
};
int main() {
    // 创建结构体数组
    struct Student studentArray[3] = {
        {"张三", 18, 100},
        {"李四", 28, 99},
        {"王五", 38, 66}
    };

    // 给结构体数组中的元素赋值
    studentArray[2].name = "赵六";
    studentArray[2].age = 99;
    studentArray[2].score = 99;

    // 遍历结构体数组
    for (int i = 0; i < 3; i++) {
        cout << studentArray[i].name << "的年龄是：" << studentArray[i].age << "，分数是：" << studentArray[i].score << endl;
    }

    return 0;
}