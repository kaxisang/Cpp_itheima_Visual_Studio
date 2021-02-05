/*
 **************************************************
 *** Created by WangLuxiang on 12/31/2020 10:20 AM.
 *** 04_Constants.cpp
 **************************************************
*/
#include <iostream>

using namespace std;

/*
 * Constants -Record unchangeable values in program
 * constants create grammar
 * 1. #define constants_name constants_value
 * 2. const constants_type constants_name = constants_value
 */

#define Day 7


int main() {
    // Day = 14; error C2106
    // Constants is unchangeable
    cout << "There are " << Day << " days in a week" << endl;

    const int month = 30;
    // month = 31; error C3892
    // Constants is unchangeable
    cout << "There are " << month << " days in a month" << endl;

    return 0;
}
