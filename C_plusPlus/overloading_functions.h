#pragma once

#include <iostream>
using namespace  std;
namespace MyOverLoadingFunctions {
    int  Sum(int a, int b) {
        return a + b;
    }
    int  Sum(int a, int b, int c) {
        return a + b + c;
    }
    int  Sum(int a, int b, int c, int d) {
        return a + b + c + d;
    }
    double  Sum(double a, double b) {
        return a + b;
    }
}



