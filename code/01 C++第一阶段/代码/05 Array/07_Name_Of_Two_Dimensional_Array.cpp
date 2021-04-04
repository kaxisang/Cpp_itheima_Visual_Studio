/**************************************************
* File name:     07_Name_Of_Two_Dimensional_Array.cpp
* Created time:  03/08/2021 10:10:35 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    /**
     * The name of two dimensional array
     *  Memory space occupied by two dimensional array
     *  Get the first address of two dimensional array
     */
    int arr[2][3] = {
        {rand(), rand(), rand()},
        {rand(), rand(), rand()}
    };
    cout << "The memory space occupied by two dimensional array: " << sizeof(arr) << endl;
    cout << "The memory space occupied by the first row of two dimensional array: " << sizeof(arr[0]) << endl;
    cout << "The memory space occupied by the first element of two dimensional array: " << sizeof(arr[0][0]) << endl;
    cout << "This two dimensional array has " << sizeof(arr) / sizeof(arr[0]) << " rows" << endl;
    cout << "This two dimensional array has " << sizeof(arr[0]) / sizeof(arr[0][0]) << " columns" << endl;
    cout << "This two dimensional array has " << sizeof(arr) / sizeof(arr[0][0]) << " elements" << endl;

    cout << "The first address of two dimensional array: " << (int)arr << endl;
    cout << "The first address of the first row of two dimensional array: " << (int)arr[0] << endl; 

    return 0;
}
