#pragma once
#include <iostream>
#include <vector>

using namespace std;


namespace MyVectors {
	
	vector <int> firstVector = {1 , 2 , 3 , 4 , 5 , 6};

	void getMyVectors() {
		for (int element : firstVector) {
			printf("vector value = %d \n", element);
		}
	}


}
namespace FirstTask {

	void GetVectorValues(vector <int> & vNumbers) {
		int lengthOfVector;
		cout << "Enter the Length of your Vector" << endl;
		cin >> lengthOfVector;
		for (int i = 1; i <= lengthOfVector; i++) {

			cout << "Enter the value of Vector : " << i << "  " << endl;
			int value;
			cin >> value;
			vNumbers.push_back(value);

		}

	}
	void ReadVectorValues(vector <int> vNumbers ) {
		int index = 1;
		for (int element : vNumbers) {
			printf("Vector index %d = %d \n", index, element);
			index++;
		}


	}

}
namespace VectorOfStractureTask{
	struct stEmployee {
		string firstName;
		string lastName;
		int salary;
	};

	void ReadStructure(vector<stEmployee> & vStr ) {
		string addMoreElement = "y";
		stEmployee tempEmployee;
		string firstName; 
		string lastName;
		int salary;
		cout << "Add new Employee :" << endl;
		do {
			cout << "first name : ";
			cin >> firstName;
			cout << "\nlast name : ";
			cin >> lastName;
			cout << "\nsalary : ";
			cin >> salary;
			tempEmployee.firstName = firstName;
			tempEmployee.lastName = lastName;
			tempEmployee.salary = salary;
			vStr.push_back(tempEmployee);
			cout << "Do you want add more Employee Y/N ?  " << endl;
			cin >> addMoreElement;

		} while (addMoreElement == "Y" || addMoreElement == "y");
	}
	void PrintStructure(vector<stEmployee> & vStr) {
		for (stEmployee& employee : vStr) {
			cout << "================================\n" << endl;
			cout << "first name : " << employee.firstName << endl;
			cout << "last name : " << employee.lastName << endl;
			cout << "salary : " << employee.salary << endl;
			cout << "\n" << endl;


		}
	}
}
namespace MyVectorIterator {
	vector<int> nums = { 22 , 4 , 65 , 97 , 3 };

	// declare iterator
	vector<int>::iterator myIter;


	void PrintVectorItems() {
		for (myIter = nums.begin(); myIter != nums.end(); myIter++) {
			cout << *myIter << " ";
		}
	}
}
