/**************************************************
* File name:     02_封装的意义.cpp
* Created time:  2021/5/5 21:00:00
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

// 封装是C++面向对象三大特性之一
// 封装的意义：
    // 将属性和行为作为一个整体，表现生活中的事物
    // 将属性和行为加以权限的控制
// 在设计类的时候，属性和行为写在一起，表现事物
// 语法：class

// 设计一个圆类，求圆的周长
// 圆周长的公式：2*PI*r

#include <iostream>
using namespace std;

const double PI = 3.14159;

class Circle {
    // 访问权限
public:
    // 属性
    int r;
    // 行为
    double calculateC() {
        return 2 * PI * r;
    }
};

int main() {
    // 通过圆类创建一个圆，创建对象
    // 实例化
    Circle my_circle;
    cout << "圆的半径为：";
    cin >> my_circle.r;
    cout << "圆的周长为：" << my_circle.calculateC() << endl;
    return 0;
}