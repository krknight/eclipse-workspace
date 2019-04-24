//============================================================================
// Name        : HelloWorldC++.cpp
// Author      : Keith Knight
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr1[] = {1,2,3,4,5};

	int *arr2 = new int[10];

	static int arr3[3];

	cout << "!!!Hello World C++!!!" << arr1[0] << endl; // prints !!!Hello World!!!
	return 0;
}




