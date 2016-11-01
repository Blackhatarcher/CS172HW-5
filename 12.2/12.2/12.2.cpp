// 12.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

//template that searches the array for an item and returns its place in the array
//
template<typename T>
int linearSearch(const T list[], T key, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	bool play = true;
	while (play) {
		const int INTSIZE = 5;
		const int DOUBLESIZE = 5;
		const int STRINGSIZE = 5;

		int array1[INTSIZE] = { 1,2,3,4,5 };
		double array2[INTSIZE] = { 1.0,2.0,3.0,4.0,5.0 };
		string array3[STRINGSIZE] = { "One", "Two", "Three", "Four", "Five" };

		int intkey = 3;
		double doublekey = 3.0;
		string stringkey = "Three";

		cout << "3 is at position " << linearSearch(array1, intkey, INTSIZE) << endl;
		cout << "3.0 is at position " << linearSearch(array2, doublekey, DOUBLESIZE) << endl;
		cout << "Three is at position " << linearSearch(array3, stringkey, STRINGSIZE) << endl;


		cout << "Exit? (y/n)" << endl;
		string finalanswer = "";
		cin >> finalanswer;
		if (finalanswer == "y")
		{
			play = false;
		}

	}

    return 0;
}

