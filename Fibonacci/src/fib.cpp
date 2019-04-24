/*
 * fib.cpp
 *
 *  Created on: Apr 23, 2019
 *      Author: kknight
 */

#include "fib.h"

fib::fib() {
	idx = 0;
	iterations = 0;
}

fib::~fib() {
	// TODO Auto-generated destructor stub
}

int fib::findFibDynamic() {
	int i;
	int series[idx+2];

	series[0] = 0;
	series[1] = 1;
	for (i=2;i<idx+1;i++) {
		series[i] = series[i-1] + series[i-2];
		iterations++;
	}
	return series[idx];
}

int fib::findFibRecursive(int rindex) {
	int i;
	int value;

	if (rindex <= 1) {
		value = rindex;
		return value;
	}
	for(i=2;i<rindex+1;i++) {
		value = findFibRecursive(i-1) + findFibRecursive(i-2);
		iterations++;
	}
	return value;
}


