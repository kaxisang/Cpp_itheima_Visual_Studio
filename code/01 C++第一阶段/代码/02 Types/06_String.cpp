/*
 **************************************************
 *** Created by WangLuxiang at 1/17/2021 10:06 PM on CLion.
 *** 06_String.cpp.c
 **************************************************
*/
#include <iostream>
#include <string> // C++ Style String

using namespace std;

/*
 * C Style String
 *      char string[] = "Hello World";
 * Warning: Must in double quote
 *
 * C++ Style String
 *      string str = "Hello World";
 * Warning: Must include "string" library
 */

int main() {
    // C Style
    char str[] = "Hello World";
    cout << str << endl;

    // C++ Style
    string str2 = "Hello World";
    cout << str2 << endl;

    return 0;
}
