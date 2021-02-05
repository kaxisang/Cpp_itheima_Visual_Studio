/*
 **************************************************
 *** Created by WangLuxiang at 1/19/2021 6:37 PM on CLion.
 *** 08_Data_Input.cpp.c
 **************************************************
*/
#include <string>
#include <iostream>

using namespace std;

/*
 * Data Input
 * Get the data from the keyboard
 * Keyword: cin
 * Grammar: cin >> variable;
 */

int main() {
    // int
    int int_a = 0;
    cout << "int_a = ";
    cin >> int_a;
    cout << "int_a = " << int_a << endl;

    // float
    float float_b = 3.14f;
    cout << "float_b = ";
    cin >> float_b;
    cout << "float_b = " << float_b << endl;

    // char
    char char_c = 'a';
    cout << "char_c = ";
    cin >> char_c;
    cout << "char_c = " << char_c << endl;

    // string
    string string_d = "hello";
    cout << "string_d = ";
    cin >> string_d;
    cout << "string_d = " << string_d << endl;

    // bool
    bool bool_e = false;
    cout << "bool_e = ";
    cin >> bool_e;
    cout << "bool_e = " << bool_e << endl;

    return 0;
}
