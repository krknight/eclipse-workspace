//============================================================================
// Name        : No2Adjacent.cpp
// Author      : Keith Knight
// Version     :
// Copyright   : Your copyright notice
// Description : No two adjacent chars in C++, Ansi-style
//============================================================================

#include <iostream>
#include "No2Utils.h"

using namespace std;

int main() {

	string entered_str;
	cout << "Enter a string: ";

	cin >> entered_str;

	No2Utils * n2u = new No2Utils();
	n2u->No2Adjacent(entered_str);

	return 0;
}
