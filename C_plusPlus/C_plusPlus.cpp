
#include <iostream>
using namespace  std;
int  Sum(int a, int b) {
    return a + b;
}
int  Sum(int a, int b , int c) {
    return a + b + c;
}
int  Sum(int a, int b , int c , int d) {
    return a + b + c + d;
}
double  Sum(double a, double b) {
    return a + b;
}

int main()
{
    cout << Sum(1, 24) << endl;
    cout << Sum(1, 12 , 53) << endl;
    cout << Sum(1, 2 , 78 , 2) << endl;
    cout << Sum(1, 2) << endl;
}


