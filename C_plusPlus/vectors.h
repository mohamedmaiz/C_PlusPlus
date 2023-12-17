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
	void ReadVectorValues(vector <int> vNumbers) {
		int index = 1;
		for (int element : vNumbers) {
			printf("Vector index %d = %d \n", index, element);
			index++;
		}


	}

}
