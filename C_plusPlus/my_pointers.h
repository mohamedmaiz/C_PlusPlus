#pragma once
#include <iostream>
using namespace std;
namespace MyFirstPointer {

	int number1 = 39;
	int number2 = 50;

	int* ptr1 = &number1;
	int* ptr2 = &number2;

	void PrintValues() {

		cout << "Pointer 1 saved adrees : " << ptr1 << endl;
		cout << "Pointer 2 saved adrees : " << ptr2 << endl;
		cout << "============================================" << endl;
		cout << "value in adress Pointer 1 : " << *ptr1 << endl;
		cout << "value in adress Pointer 2 : " << *ptr2 << endl;
	}

}