
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace  std;

short ReadNumber(string message) {
	short number;
	cout << message << endl;
	cin >> number;
	return number;
}
short ReadRandomNumber(short from, short to) {
	return 0 + (rand() % 2);
}
void ReadMatrixVector(vector<vector<short>> &vec, short lengthOfCols, short lengthOfRows) {
	for (short cols = 0; cols < lengthOfCols; cols++) {
		for (short row = 0; row < lengthOfRows; row++) {
			vec[cols][row] = ReadRandomNumber(0, 20);
		}
	}

}
void PrintMatrixVector(vector<vector<short>> vec) {
	short index = 1;
	for (vector<short>& row : vec) {
		for (short& value : row) {
			value < 10 ? cout << setw(5) << "0" << value : cout << setw(6) << value;
		}
			cout << endl;
			index++;
	}
}
short RowSum(vector<short> row) {
	short sum = 0;
	for (short& value : row) {
		sum += value;
	}
	return sum;
}
short colSum(vector<vector<short>> vec, short colNumber , short length) {
	short sum = 0;
	for (short i = 0; i < length; i++) {
		sum += vec[i][colNumber];
	}
	return sum;
}
void SumRowsInVector(vector<vector<short>> vec , vector<short> &vecOfSums) {
	for (vector<short>& row : vec) {
		vecOfSums.push_back(RowSum(row));
	}
}
void PrintVector(vector<short> vec ) {
	for (short& value : vec) {
		cout << setw(4) << value ;
	}
	cout << endl;

}
void SumColsInVector(vector<vector<short>> vec, vector<short>& vecOfSums  , short lengthOfCols, short lengthOfRows) {
	for (short row = 0; row < lengthOfRows; row++) {
		vecOfSums.push_back(colSum(vec, row, lengthOfCols));
		}
}
void ReadOrdredVectorEllement(vector<vector<int>>& vec, short lengthOfCols, short lengthOfRows) {
	short number = 0;
	for (short cols = 0; cols < lengthOfCols; cols++) {
		for (short row = 0; row < lengthOfRows; row++) {
			number++;
			vec[cols][row] = number;
		}
	}

}
void PrintTransposeMtrixVector(vector<vector<int>>& vec, vector<vector<int>>& transposedVec , short lengthOfCols, short lengthOfRows) {
	for (short row = 0; row < lengthOfRows; row++) {
		for (short col = 0; col < lengthOfCols; col++) {
			transposedVec[row][col] = vec[col][row] ;
		}
	}
}
void MusltiplyTwoMatrixVector(vector<vector<short>>& vector1, vector<vector<short>>& vector2, vector<vector<short>>& mulitplyVec, short lengthOfCols, short lengthOfRows) {
	for (short col = 0; col < lengthOfCols; col++) {
		for (short row = 0; row < lengthOfRows; row++) {
			mulitplyVec[col][row] = vector1[col][row] * vector2[col][row];
		}
	}
}
vector<short> GetMiddleCol(vector<vector<short>>& vec ,short rowLength) {
	short middle = floor(rowLength / 2);
	vector<short> middleCol;
	for (vector<short>& row : vec) {
		middleCol.push_back(row[middle]);
	}
	return middleCol;
}
vector<short> GetMiddleRow(vector<vector<short>>& vec , short colLength) {
	short middle = floor(colLength / 2);
	return vec[middle];
}
void MidlleRowAndcolOfMatrix(vector<vector<short>>& vec, vector<short>& middleCol, vector<short>& middleRow, short colLength, short rowLength) {
	if (colLength % 2 == 0) {
		cout << "The vector cols is odd" << endl;
	}
	else if (rowLength % 2 == 0) {
		cout << "The vector Rows is odd" << endl;
	}
	else {
		middleCol = GetMiddleCol(vec , rowLength);
		middleRow = GetMiddleRow(vec , colLength);
	}
}
short MatrixSum(vector<vector<short>> vec) {
	short sum = 0;
	for (vector<short>& row : vec) {
		for (short val : row) {
			sum += val;
		}
	}
	return sum;
}
bool CompareSumOfTwoMatrices(vector<vector<short>>& vec1, vector<vector<short>>& vec2) {
	return  MatrixSum(vec1) == MatrixSum(vec2) ;
}
bool CompareTwoMatrices(vector<vector<short>>& vec1, vector<vector<short>>& vec2, short colLength, short rowLength) {
	for (short col = 0; col < colLength; col++) {
		for (short row = 0; row < rowLength; row++) {
			if (vec1[col][row] != vec2[col][row]) {
				return false;
			} 
		}
	}
	return true;
}
bool IsIdentityMatrix(vector<vector<short>> vec , short colLength , short rowLength) {
	for (short col = 0; col < colLength; col++) {
		for (short row = 0; row < rowLength; row++) {
			if (col == row && vec[col][row] != vec[0][0]) {
					return false;
			}
			else if(col != row && vec[col][row] != 0) {
					return false;
			}
		}
	}
	return true;
}
bool IsSparceMatrix(vector<vector<short>> vec) {
	short counterZero = 0;
	short counterNumbers = 0;
	for (vector<short>& row : vec) {
		for (short& val : row) {
			val == 0 ? counterZero++ : counterNumbers++;
		}
	}
	return counterZero > counterNumbers;
}


int main()
{
	srand((unsigned)time(NULL));
	//short arrayCols = ReadNumber("Enter the number of array cols");
	//short arrayRows = ReadNumber("Enter the number of array rows");
	//vector<vector<short>> vec1 ;

	//vec1.resize(arrayCols, vector<short>(arrayRows));

	vector<vector<short>> vec2 = {
		{6,0,0},
		{7,6,0},
		{0,8,5}

	};
	PrintMatrixVector(vec2);
	cout << "\n=======================\n" << endl;



	IsSparceMatrix(vec2) ? cout << "matrix is Sparce" << endl : cout << "matrix is not Sparce" << endl;




	return 0;
}


