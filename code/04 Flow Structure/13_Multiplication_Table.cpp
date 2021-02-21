/**************************************************
* File name:     13_Multiplication_Table.cpp
* Created time:  02/20/2021 10:03:04 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

int main() {
    // Multiplication Table
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " * " << i << " = " << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
