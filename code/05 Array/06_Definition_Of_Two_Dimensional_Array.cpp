/**************************************************
* File name:     06_Definition_Of_Two_Dimensional_Array.cpp
* Created time:  03/08/2021 9:45:40 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    // Definition of two dimensional array
    /**
     * type name[row][column];
     * type name[row][column] = { {1, 2}, {3, 4} };
     * type name[row][column] = {1, 2, 3, 4};
     * type name[][column] = {1, 2, 3, 4, 5, 6];
     */
    int arr_a[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arr_a[i][j] = rand();
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr_a[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "-------------------------------------------" << endl;

    int arr_2[2][3] = {
        {rand(), rand(), rand()},
        {rand(), rand(), rand()}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr_2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "---------------------------------------------" << endl;

    int arr_3[2][3] = { rand(), rand(), rand(), rand(), rand(), rand() };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr_3[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "----------------------------------------------" << endl;

    int arr_4[][3] = { rand(), rand(), rand(), rand(), rand(), rand() };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr_3[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
