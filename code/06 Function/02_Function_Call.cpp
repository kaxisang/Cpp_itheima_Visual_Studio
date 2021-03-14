/**************************************************
* File name:     02_Function_Call.cpp
* Created time:  3/13/2021 10:01:12 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <time.h>
using namespace std;

// Define a function
int add(int num1, int num2) { // 形式参数
	int sum = num1 + num2;
	return sum;
}

/**
 * Call function
 * Grammar:
 *      function_name(args);
 */

int main() {
	int a = 10;
	int b = 10;
	// Call the function
	int c = add(a, b); // 实际参数
	cout << c << endl;

	srand((unsigned int)time(NULL));
	int d = rand();
	int e = rand();
	int f = add(d, e);
	cout << "Sum of " << d << " and " << e << " is " << f << endl;

	return 0;
}