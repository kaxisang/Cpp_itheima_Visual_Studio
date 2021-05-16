/**************************************************
* File name:     07_立方体类.cpp
* Created time:  2021/5/16 8:16:26
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

struct Nums {
    int length;
    int width;
    int height;
};

// 立方体类设计
class Cube {
private:
    int cube_length_;
    int cube_width_;
    int cube_height_;

public:
    int calculate_surface_area() {
        return cube_length_ * cube_width_ * 2 +
            cube_length_ * cube_height_ * 2 +
            cube_height_ * cube_width_ * 2;
    }

    int calculate_volume() {
        return cube_width_ * cube_length_ * cube_height_;
    }

    void set(int length, int width, int height) {
        cube_length_ = length;
        cube_width_ = width;
        cube_height_ = height;
    }

    struct Nums get() {
        struct Nums nums = { cube_length_, cube_width_, cube_height_ };
        return nums;
    }

    bool compare(Cube cube) {
        struct Nums cube_length_width_height = cube.get();
        if (cube_length_width_height.length == cube_length_ && cube_length_width_height.width == cube_width_ && cube_length_width_height.height == cube_height_) {
            return true;
        }
        return false;
    }
};

bool compare(Cube cube_a, Cube cube_b) {
    struct Nums cube_a_nums = cube_a.get();
    struct Nums cube_b_nums = cube_b.get();
    if (cube_a_nums.length == cube_b_nums.length && cube_a_nums.width == cube_b_nums.width && cube_a_nums.height == cube_b_nums.height) {
        return true;
    }
    return false;
}

int main() {
    Cube cube_a;
    cube_a.set(3, 3, 3);
    Cube cube_b;
    cube_b.set(4, 5, 6);
    Cube cube_c;
    cube_c.set(3, 3, 3);
    cout << compare(cube_a, cube_c) << endl;
    cout << compare(cube_b, cube_c) << endl;
    cout << compare(cube_a, cube_c) << endl;

    return 0;
}