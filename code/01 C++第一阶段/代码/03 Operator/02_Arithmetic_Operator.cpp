/*
 **************************************************
 *** Created by WangLuxiang at 1/25/2021 8:50 PM on CLion.
 *** 02_Arithmetic_Operator.cpp.c
 **************************************************
*/
#include <iostream>

using namespace std;

/*
 *  Operator    |   Function
 * ===============================
 *  +           |   Plus
 *  -           |   Minus
 *  *           |   Multiply
 *  /           |   Division
 *  %           |   Remainder
 */

int main() {
	const auto a = 10;
	const auto b = 8;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << static_cast<double>(a) / b << endl;

    cout << "------------------------------- auto c --------------------------------------" << endl;

    auto c = 10;

    cout << c++ << endl;
    cout << ++c << endl;

    cout << c << endl;

    return 0;
}
