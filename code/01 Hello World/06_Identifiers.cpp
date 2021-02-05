/*
 **************************************************
 *** Created by WangLuxiang at 1/1/2021 10:23 PM on CLion.
 *** 06_Identifiers.cpp.c
 **************************************************
*/
#include <iostream>
using namespace std;

// Identifiers in C++ can be composed of letters, digits, underscores character.
// The language imposes no limit on name length.
// Identifiers must begin with either a letter or an underscore.
// Identifiers are case-sensitive; upper- and lower-case letters are distinct

int main() {
    int abc = 10;
    int _abc = 10;
    int _abc123 = 10;
    int _123abc = 10;
    // Expected unqualified-id
    // int 123abc = 10;

    int aaa = 10;
    // Use of undeclared identifier 'AAA'
    //cout << AAA << endl;

    return 0;
}
