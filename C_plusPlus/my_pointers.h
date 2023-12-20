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

namespace MemoryManagementWithPointers {

	int *pointer1;
	int	*pointer2;
	

	void initVlues() {
		// create new int using pointer

		pointer1 = new int;
		pointer2 = new int;
		// i give the value of new int in run time 
		*pointer1 = 20;
		*pointer2 = 44;

		cout << "Pointer 1 value : " << *pointer1 << endl;
		cout << "Pointer 2 value : " << *pointer2 << endl;


		// i delete poninters values fro memory
		delete pointer1;
		delete pointer2;
	}

	
}
namespace DynamicArrays {

	int* ptr;
	int* ptrForArray;

	void ReadArray() {
		ptr = new int;
		cout << "Enter the Length of array : ";
		cin >> *ptr;
		ptrForArray = new int[*ptr];
		for (int i = 0; i < *ptr; i++) {
			cout << "\nEnter the value of index " << i + 1 << " : " ;
			cin >> *(ptrForArray+i);
		}
		cout << "====================================" << endl;
	}
	void PrintArray() {
		for (int i = 0; i < *ptr; i++) {
			printf("\nthe value of index %d = %d ", i + 1, *(ptrForArray + i));
		}
		delete ptr;
		delete[] ptrForArray;
	}
	

}