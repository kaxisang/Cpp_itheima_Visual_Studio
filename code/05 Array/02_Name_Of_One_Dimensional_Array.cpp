/**************************************************
* File name:     02_Name_Of_One_Dimensional_Array.cpp
* Created time:  03/05/2021 9:10:13 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * The purpose of one-dimensional array name
 *  1. Count the size of the entire array in memory
 *  2. Get the first address of the array in memory
 */

int main() {
    int arr[100] = { 0, 0, 0 };
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr) / sizeof(arr[0]) << endl;

    cout << arr << endl;
    cout << (int)arr << endl;

    return 0;
}
