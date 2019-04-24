//============================================================================
// Name        : Fibonacci.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Fibonacci in C++, Ansi-style
//============================================================================

#include <iostream>
#include "fib.h"
using namespace std;


int main() {
	int index;
	cout << "!!Fibonacci!!  0,1,1,2,3,5,8,13,21,34,55...\n" << endl;
	cout << "Enter Fibonacci index: ";
	cin >>  index;

	fib f(index);
    cout << "\n";

    f.iterations = 0;
	cout << "Recursive time complexity O(n!), Fibonacci = " << f.findFibRecursive(index) << endl;
	cout << "iterations: " << f.iterations << "\n" << endl;

	f.iterations = 0;
	cout << "Dynamic Coding time complexity O(n*logn), Fibonacci = " << f.findFibDynamic() << endl;
	cout << "iterations: " << f.iterations << endl;

	return 0;
}
