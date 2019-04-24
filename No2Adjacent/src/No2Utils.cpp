/*
 * No2Utils.cpp
 *
 *  Created on: Dec 6, 2018
 *      Author: kknight
 */

#include <iostream>
#include "No2Utils.h"

using namespace std;

No2Utils::No2Utils() {
}

No2Utils::~No2Utils() {
}

void No2Utils::No2Adjacent(string str) {

   string n2a_str;
   int n = str.length();
   Key k;

   // Store frequencies of all characters in string
   int count[MAX_CHAR] = {0};
   for (int i = 0; i < n; i++) {
	   count[str[i]-'a']++;
//	   cout << "index " << str[i]-'a' << endl;
//	   cout << "value " << count[str[i]-'a'] << endl;
   }


   // Insert all characters with their frequencies into a priority_queue
   priority_queue<Key> pq;
   for (char c = 'a'; c <= 'z'; c++) {
	   if (count[c-'a']) {
//		   pq.push((Key) { count[c-'a'], c} ); // Can't push Key value assignment this way
		   k.ch = c;
		   k.freq = count[c-'a'];
		   pq.push(k);
	   }
//	   cout << c << "=" << count[c-'a'] << endl;
   }

   // string that will store resultant value
   n2a_str = "";

   // work as the previous visited element
   // initial previous element be. ( '#' and its frequency '-1'
//   Key prev = (Key){-1, '#'};   // Can't push Key value assignment this way
   Key prev;
   prev.ch = '#';
   prev.freq = -1;

   // traverse queue
   while(!pq.empty())
   {
	   // pop top element from queue and add it to string
	   k = pq.top();
	   pq.pop();
	   n2a_str = n2a_str + k.ch;
//	   cout << k.ch << endl;

	   // if frequency of previous character is less
	   // than zero that means it is useless, we
	   // need not push it
	   if (prev.freq > 0)
		   pq.push(prev);

	   // make current character as the previous 'char'
	   // decrease frequency by 'one'
	   (k.freq)--;
	   prev = k;
   }

   // if length of the resultant string and original
   // string is not the same then string is  not valid
   if (n != n2a_str.length())
	   cout << "Not valid String " << endl;
   else // valid string
	   cout << "The string no2adjacent is:- " << n2a_str << endl;
}



