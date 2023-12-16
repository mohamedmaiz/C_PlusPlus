#pragma once
#include <iostream>
using namespace std;

namespace DataTypesFormat {
	int num = 2;
	int num2 = 3;
	float num3 = 2.44566;
	char person[] = "Mohamed";
	void Test(){
    printf("num 1 = %d , the num 2 = %d \n ", num, num2);
	printf("%d + %d = %d \n", num, num2, num + num2);
	printf("the value of num 3 = %.5f \n ", num3);
	printf("my name is %s", person);
	};
}