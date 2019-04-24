/*
 * vehicle.cpp
 *
 *  Created on: Apr 23, 2019
 *      Author: kknight
 */

#include "vehicle.h"
#include <iostream>

using namespace std;

vehicle::vehicle() {
	data = 0;
}

vehicle::~vehicle() {

}

void vehicle::propulsion() {
	cout << "Energy converter" << endl;
}

void vehicle::show() {
	cout << "Vehicle" << endl;
}


