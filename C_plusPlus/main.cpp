
#include <iostream>
#include <vector>
#include <iomanip>
using namespace  std;

int ReadNumber(string message) {
	int number;
	cout << message << endl;
	cin >> number;
	return number;
}
int ReadRandomNumber(int from, int to) {
	return from + (rand() % to);
}
void ReadMatrixVector(vector<vector<int>> &vec, int lengthOfCols, int lengthOfRows) {
	for (int cols = 0; cols < lengthOfCols; cols++) {
		for (int row = 0; row < lengthOfRows; row++) {
			vec[cols][row] = ReadRandomNumber(0, 100);
		}
	}

}
void PrintMatrixVector(vector<vector<int>> vec) {
	int index = 1;
	for (vector<int>& row : vec) {
		for (int& value : row) {
			cout << setw(3) << value ;

		}
			cout << endl;
			index++;
	}
}
int RowSum(vector<int> row) {
	int sum = 0;
	for (int& value : row) {
		sum += value;
	}
	return sum;
}
int colSum(vector<vector<int>> vec, int colNumber , int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += vec[i][colNumber];
	}
	return sum;
}
void SumRowsInVector(vector<vector<int>> vec , vector<int> &vecOfSums) {
	for (vector<int>& row : vec) {
		vecOfSums.push_back(RowSum(row));
	}
}
void PrintVector(vector<int> vec , string type) {
	int index = 1;
	for (int& value : vec) {
		cout << type << index << " Sum = " << value << endl;
		index++;
	}

}
void SumColsInVector(vector<vector<int>> vec, vector<int>& vecOfSums  , int lengthOfCols, int lengthOfRows) {
	for (int row = 0; row < lengthOfRows; row++) {
		vecOfSums.push_back(colSum(vec, row, lengthOfCols));
		}
}
void ReadOrdredVectorEllement(vector<vector<int>>& vec, int lengthOfCols, int lengthOfRows) {
	int number = 0;
	for (int cols = 0; cols < lengthOfCols; cols++) {
		for (int row = 0; row < lengthOfRows; row++) {
			number++;
			vec[cols][row] = number;
		}
	}

}
void PrintTransposeMtrixVector(vector<vector<int>>& vec, vector<vector<int>>& transposedVec , int lengthOfCols, int lengthOfRows) {
	for (int row = 0; row < lengthOfRows; row++) {
		for (int col = 0; col < lengthOfCols; col++) {
			transposedVec[row][col] = vec[col][row] ;
		}
	}
}






int main()
{
	srand((unsigned)time(NULL));
	int arrayCols = ReadNumber("Enter the number of array cols");
	int arrayRows = ReadNumber("Enter the number of array rows");
	vector<vector<int>> vec ;
	vector<vector<int>> transposedVec;
	vec.resize(arrayCols, vector<int>(arrayRows));
	transposedVec.resize(arrayRows, vector<int>(arrayCols));

	ReadOrdredVectorEllement(vec, arrayCols, arrayRows);
	PrintMatrixVector(vec);
	cout << "\n=======================\n" << endl;
	PrintTransposeMtrixVector(vec, transposedVec , arrayCols, arrayRows);

	PrintMatrixVector(transposedVec);


	return 0;
}


