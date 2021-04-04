/*
 **************************************************
 *** Created by WangLuxiang at 1/12/2021 10:28 PM on CLion.
 *** 02_Sizeof.cpp.c
 **************************************************
*/
#include <iostream>

using namespace std;

int main() {
    /*
     * short        2
     * int          4
     * long         4
     * long long    8
     *
     * We can use the "sizeof" keyword to know the size of memory the variable takes up.
     * Grammar: sizeof( data_type || variable )
     */
    short short_num = 10;
    cout << "Short type takes up " << sizeof(short_num) << " bytes." << endl;

    int int_num = 10;
    cout << "Integer type takes up " << sizeof(int_num) << " bytes." << endl;

    long long_num = 10;
    cout << "Long type takes up " << sizeof(long_num) << " bytes." << endl;

    long long long_long_num = 10;
    cout << "Long long type takes up " << sizeof(long_long_num) << " bytes." << endl;

    return 0;
}
