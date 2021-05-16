/**************************************************
* File name:     08_点和圆类.cpp
* Created time:  2021/5/16 10:20:56
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

struct Point {
    int point_x;
    int point_y;
};

class Circle {
private:
    int circle_r_;
    struct Point circle_center_;

public:
    void set_radius(int radius) {
        circle_r_ = radius;
    }

    int get_radius() {
        return circle_r_;
    }

    void set_center(struct Point center_point) {
        circle_center_ = center_point;
    }

    struct Point get_center() {
        return circle_center_;
    }
};

void relation(Circle circle, Point point) {
    int distance_square = (circle.get_center().point_x - point.point_x) * (circle.get_center().point_x - point.point_x) + (circle.get_center().point_y - point.point_y) * (circle.get_center().point_y - point.point_y);

    int radius_square = circle.get_radius() * circle.get_radius();

    //cout << distance_square << " " << radius_square << endl;

    if (distance_square == radius_square) {
        cout << "点在圆上" << endl;
    } else if (distance_square < radius_square) {
        cout << "点在圆内" << endl;
    } else {
        cout << "点在圆外" << endl;
    }
}

int main() {
    Circle circle;
    Point point = { 10, 0 };
    Point p = { 0, 0 };
    circle.set_center(p);
    circle.set_radius(10);
    
    relation(circle, point);

    return 0;
}