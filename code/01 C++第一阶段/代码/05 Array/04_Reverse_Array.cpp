/**************************************************
* File name:     04_Reverse_Array.cpp
* Created time:  03/07/2021 9:54:50 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    // Create array
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = rand();
    }
    cout << "Before: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\t" << arr[i] << endl;
    }

    // Reverse array
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start += 1;
        end -= 1;
    }
    cout << "After: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\t" << arr[i] << endl;
    }
    return 0;
}