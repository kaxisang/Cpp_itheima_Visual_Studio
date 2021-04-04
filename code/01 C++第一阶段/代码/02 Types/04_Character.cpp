/*
 **************************************************
 *** Created by WangLuxiang at 1/15/2021 7:45 PM on CLion.
 *** 04_Character.cpp.c
 **************************************************
*/
#include <iostream>

using namespace std;

/*
 * char - Type for character representation which can be most efficiently processed on the target system
 * Grammar: char variable_name = 'variable_value'
 * Character type only takes up 1 bytes memory
 */

int main() {
    char character = 'a';
    cout << character << endl;

    cout << "Char type takes up " << sizeof(character) << " bytes" << endl;

    // char character2 = "a"; error C2440
    // Char type is using a single quote

    // char character3 = 'abc';
    // The char type can only have a character literal

    cout << character << endl;
    cout << (int)character << endl; // Show the ascii code of the character

    return 0;
}
