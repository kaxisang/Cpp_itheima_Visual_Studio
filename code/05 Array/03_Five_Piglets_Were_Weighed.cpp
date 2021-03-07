/**************************************************
* File name:     03_Five_Piglets_Were_Weighed.cpp
* Created time:  03/07/2021 9:26:37 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    // Create pig weight array
    int arr[5];
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 5; i++) {
        arr[i] = rand();
    }

    // Find the max value in the array
    int max_value = arr[0];
    for (int i = 0; i < 5; i++) {
        //cout << arr[i] << endl;
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    // Output the max value
    cout << "Max value: " << max_value << endl;

    return 0;
}