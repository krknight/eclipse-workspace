//============================================================================
// Name        : Polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "vehicle.h"
#include "Tesla.h"
#include "RangeRover.h"

using namespace std;

int main() {

	vehicle v;
	Tesla t;
	RangeRover r;

	cout << "show function for Vehicle, Tesla, RangeRover" << endl;
	v.show();
	t.show();
	r.show();

	cout << "virtual propulsion function for Vehicle, Tesla, RangeRover" << endl;
	v.propulsion();
	t.propulsion();
	r.propulsion();

	cout << "Vehicle base class points to child class Tesla" << endl;
	vehicle * base;
	base = &t;
	base->propulsion();


	return 0;
}
