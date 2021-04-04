/**************************************************
* File name:     05_Bubble_Sort.cpp
* Created time:  03/07/2021 10:14:17 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <time.h>
constexpr auto LENGTH = 100;
using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    // Create array
    int arr[LENGTH];
    for (int i = 0; i < LENGTH; i++) {
        arr[i] = rand();
    }
    cout << "Before:" << endl;
    for (int i = 0; i < LENGTH; i++) {
        cout << "\t" << arr[i] << endl;
    }
    // Sort array
    for (int i = 0; i < LENGTH - 1; i++) {
        for (int j = 0; j < LENGTH - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "After:" << endl;
    for (int i = 0; i < LENGTH; i++) {
        cout << "\t" << arr[i] << endl;
    }
    return 0;
}
