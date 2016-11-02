// 12.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

template<typename T>
T * sort(T list[], int size) {
	for (int i = 0; i < size; i++) {
		//find the minimum in list
		T currentMin = list[i];
		int currentMinIndex = i;
		for (int k = i + 1; k < size; k++) {
			if (currentMin > list[j]) {
				currentMin = list[j];
				currentMinIndex = j;
			}
		}
		if (currentMinIndex != i) {
			list[currentMinIndex] = list[i];
			list[i] = currentMin;
		}
	}
}

//template<typename T>
//bool isSorted(const T list[], int size) {
//	// gonna create a sorted version of the array and then compare the original to the sorted one
//	bool answer = true;
//	T* sorted = new T[size];
//	// memcpy is supposed to copy the contents of 
//	memcpy(sorted, list,sizeOf(sort));
//	for (int i = 0; i < size; i++) {
//		if (list[i] != sorted[i]) {
//			answer = false;
//		}
//	}
//	delete sorted;
//	return answer;
//}

template<typename T>
void print(T list[], int listsize) {
	for (int i = 0; i < listsize; i++) {
		cout << list[i] << " ";
	}
	cout << endl;
}



int main()
{
	bool play = true;
	while (play) {
		const int INTSIZE = 5;
		const int DOUBLESIZE = 5;
		const int STRINGSIZE = 5;

		int array1[INTSIZE] = { 1,2,3,4,5 };
		double array2[INTSIZE] = { 1.0,2.0,7.0,4.0,5.0 };
		string array3[STRINGSIZE] = { "One", "Two", "Three", "Four", "Five" };

		//sort(array1, INTSIZE);
		//sort(array2, DOUBLESIZE);
		//sort(array3, STRINGSIZE);

		print(array1, INTSIZE);
		print(array2, DOUBLESIZE);
		print(array3, STRINGSIZE);

		//if (isSorted(array1,INTSIZE)){
		//	cout << "Array 1 is sorted" << endl;
		//}
		//else {
		//	cout << "Array 1 is not sorted" << endl;
		//}
		//if (isSorted(array2, DOUBLESIZE)) {
		//	cout << "Array 2 is sorted" << endl;
		//}
		//else {
		//	cout << "Array 2 is not sorted" << endl;
		//}
		//if (isSorted(array3, STRINGSIZE)) {
		//	cout << "Array 3 is sorted" << endl;
		//}
		//else {
		//	cout << "Array 3 is not sorted" << endl;
		//}

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



