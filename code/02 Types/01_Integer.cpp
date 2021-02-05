/*
 **************************************************
 *** Created by WangLuxiang at 1/2/2021 9:20 AM on CLion.
 *** 01_Integer.cpp.c
 **************************************************
*/
#include <iostream>
#include <limits>
using namespace std;

/*
 *      Type        Meaning         Minimum Size
 * ==============================================
 *      short       short integer   16 bits
 *      int         integer         32 bits
 *      long        long integer    32 bits
 *      long long   long integer    64 bits
 */

int main() {
    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;
    cout << "num4: " << num4 << endl;

    cout << "short max: \t" << numeric_limits<short>::max() << endl;
    cout << "short min: \t" << numeric_limits<short>::min() << endl;

    cout << "int max: \t" << numeric_limits<int>::max() << endl;
    cout << "int min: \t" << numeric_limits<int>::min() << endl;

    cout << "long max: \t" << numeric_limits<long>::max() << endl;
    cout << "long min: \t" << numeric_limits<long>::min() << endl;

    cout << "long long max: \t" << numeric_limits<long long>::max() << endl;
    cout << "long long min: \t" << numeric_limits<long long>::min() << endl;

    return 0;
}
