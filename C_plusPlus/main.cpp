
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
void ReadMatrixVectorEllement(vector<vector<int>> &vec, int lengthOfCols, int lengthOfRows) {
	for (int cols = 0; cols < lengthOfCols; cols++) {
		for (int row = 0; row < lengthOfRows; row++) {
			vec[cols][row] = ReadRandomNumber(0, 100);
		}
	}

}
void PrintMatrixVectorEllements(vector<vector<int>> vec) {
	int index = 1;
	for (vector<int>& row : vec) {
		cout << "Array " << index << " : ";

		for (int& value : row) {
			cout << setw(3) << value << " ";

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
void SumRowsInVector(vector<vector<int>> vec , vector<int> &vecOfSums) {
	for (vector<int>& row : vec) {
		vecOfSums.push_back(RowSum(row));
	}
}

void PrintVector(vector<int> vec) {
	for (int& value : vec) {
		cout << "Row 1 Sum = " << value << endl;
	}

}





int main()
{
	srand((unsigned)time(NULL));
	 int arrayCols = ReadNumber("Enter the number of array cols");
	 int arrayRows = ReadNumber("Enter the number of array rows");
	 vector<vector<int>> vec ;
	 vector<int> sumOfEachRow;
	 vec.resize(arrayCols, vector<int>(arrayRows));
	ReadMatrixVectorEllement(vec, arrayCols, arrayRows);
	PrintMatrixVectorEllements(vec);
	PrintVector(sumOfEachRow);
	SumRowsInVector(vec, sumOfEachRow);
	PrintVector(sumOfEachRow);
	return 0;
}


