/*
 **************************************************
 *** Created by WangLuxiang at 1/18/2021 8:44 PM on CLion.
 *** 07_Bool.cpp.c
 **************************************************
*/
#include <iostream>

using namespace std;

/*
 * Boolean type
 *      0 False
 *      1 True
 * bool type takes up 1 bytes memory
 */

int main() {
    // Create bool type variable
    bool flag = false; // true
    cout << flag << endl;
    cout << (flag == false) << endl;

    // Show the memory space occupied by bool type
    cout << "Bool type takes up " << sizeof(flag) << " bytes" << endl;

    return 0;
}
