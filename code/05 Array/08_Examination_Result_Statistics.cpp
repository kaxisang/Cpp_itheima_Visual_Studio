/**************************************************
* File name:     08_Examination_Result_Statistics.cpp
* Created time:  3/13/2021 9:24:47 AM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <time.h>
#include <string.h>
using namespace std;

int main() {
    // Create two-dimensional array
    srand((unsigned int)time(NULL));
    int scores[3][3] = {};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scores[i][j] = rand();
        }
    }

    string name[3] = { "Alice", "Bob", "Charry" };
    // Count total score of each person
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            cout << scores[i][j] << "\t";
            sum += scores[i][j];
        }
        cout << name[i] << "\'s total score is " << sum << endl;
    }

    return 0;
}
