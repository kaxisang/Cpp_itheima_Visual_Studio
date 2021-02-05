/*
 **************************************************
 *** Created by WangLuxiang at 1/14/2021 9:42 PM on CLion.
 *** 03_Float.cpp.c
 **************************************************
*/
#include <iostream>
using namespace std;

/*
 *     Type        Meaning         Minimum Size                 Memory
 * =====================================================================
 *      float       float number    7 significant digits        4 bytes
 *      double      double number   15~16 significant digits    8 bytes
 *
 * We usually add a "f" in the last of the single-precision float digits when we didn't declare the type of the variable
 */

int main() {
    float double_number = 3.14; // double-precision floating point
    float float_number = 3.14f; // single-precision floating point

    cout << sizeof(double_number) << endl;
    cout << sizeof(float_number) << endl;

    cout << sizeof(3.14) << endl;
    cout << sizeof(3.14f) << endl;

    /*---------------------Scientific Notation-------------------*/
    float num1 = 3e2; // 2 * 10 ^ 2
    cout << num1 << endl;

    return 0;
}
