/**************************************************
* File name:     01_Definition_Of_One_Dimensional_Array.cpp
* Created time:  02/28/2021 8:17:24 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * Array is collection of same data type
 * Array is made up of consecutive memory locations
 * The definition of array:
 *     type name[length];
 *     type name[length] = {value, value...};
 *     type name[] = {value, value...};
 */

int main() {
    // 1
    int array_1[5];
    array_1[0] = 10;
    array_1[1] = 20;
    array_1[2] = 30;
    array_1[3] = 40;
    array_1[4] = 50;

    cout << array_1[0] << endl;
    cout << array_1[1] << endl;

    // 2
    int array_2[50] = { 10, 20, 30, 40, 50 };
    /*
        cout << array_2[0] << endl;
        cout << array_2[1] << endl;
    */
    for (int i = 0; i < 50; i++) {
        cout << array_2[i] << endl;
    }

    // 3
    int array_3[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
    for (int i = 0; i < 9; i++) {
        cout << array_3[i] << endl;
    }

    return 0;
}
