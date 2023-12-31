
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
void ReadArrayEllement(vector<vector<int>> &array, int lengthOfCols, int lengthOfRows) {
	for (int cols = 0; cols < lengthOfCols; cols++) {
		for (int row = 0; row < lengthOfRows; row++) {
			array[cols][row] = ReadRandomNumber(0, 100);
		}
	}

}
\
void PrintArraysEllements(vector<vector<int>> array, int lengthOfCols, int lengthOfRows) {
	int index = 1;
	for (vector<int>& row : array) {
		cout << "Array " << index << " : ";

		for (int& value : row) {
			cout << setw(3) << value << " ";

		}
			cout << endl;
			index++;
	}
}




int main()
{
	srand((unsigned)time(NULL));
	 int arrayCols = ReadNumber("Enter the number of array cols");
	 int arrayRows = ReadNumber("Enter the number of array rows");
	 vector<vector<int>> array ;
	 array.resize(arrayCols, vector<int>(arrayRows));
	ReadArrayEllement(array, arrayCols, arrayRows);
	PrintArraysEllements(array, arrayCols, arrayRows);

	return 0;
}


