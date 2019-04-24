//============================================================================
// Name        : Unit4C++.cpp
// Author      : Keith Knight
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int findElement(int arr[], int n, int key) {
	int i;
	for (i=0;i<n;i++)
		if (arr[i] == key)
			return i;
	return -1;
}

int main() {
	cout << "Linear Search through unsorted array" << endl;
	int arr[] = {12, 34, 10, 6, 40};
	int n = sizeof(arr) / sizeof(arr[0]);

	int key = 41;
	int position = findElement(arr, n, key);

	if (position == -1)
		cout << "Element " << key << " not found!" << endl;
	else
		cout << "Element found at position " << position+1 << endl;

	(position == -1) ? cout << "Element not found " : cout << "Element found ";
	cout << key << endl;

	return 0;
}
