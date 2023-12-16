#pragma once
#include <iostream>
using namespace std;

namespace MyRecursionLib{
	void DicrementNumber(int A, int B) {
		if (B >= A) {
			cout << B << endl;
			DicrementNumber(A, B - 1);
		}
	}
}
