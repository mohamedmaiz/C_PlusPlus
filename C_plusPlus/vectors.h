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