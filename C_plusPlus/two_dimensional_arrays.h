#pragma once
#include <iostream>
using namespace std;

namespace TwoDimensionalArray {
	int array1[10][10] ;
	string name = "test";
	void PrintArray() {
        for (int i = 0; i <= 9; i++) {
		   for (int j = 0; j <= 9; j++) {
			   array1[i][j] = (i+1) * (j + 1);
			   printf("%0*d | ", 2, array1[i][j]);
            }
		   cout << "\n--------------------------------------------------" << endl;

	     }
	}
	
	
}