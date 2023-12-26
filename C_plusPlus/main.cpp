
#include <iostream>
#include <fstream>
using namespace  std;

int main()
{
	fstream MyFile;
	MyFile.open("myFile.txt", ios::out | ios::app );
	if (MyFile.is_open()) {

		MyFile << "My Fist Line in my file using c++ \n";
		MyFile.close();
	}
	return 0;
}


