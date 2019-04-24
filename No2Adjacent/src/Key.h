/*
 * key.h
 *
 *  Created on: Dec 6, 2018
 *      Author: kknight
 */

const int MAX_CHAR = 26;

struct Key {
	char ch;
	int freq;

	// const before {} ensures this function can't modify the member variables
	bool operator < (const Key &k) const { return freq < k.freq; }
};


