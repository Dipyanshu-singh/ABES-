#include <iostream>
using namespace std;

inline int square(int n)      // inline
{
    return n * n;
}
int add(int a, int b = 10)     //default func
{
    return a + b;
}
int multiply(int a, int b)     //overloading.1
{
    return a * b;
}
double multiply(double a, double b)    //overloading.2
{
    return a * b;
}

int main()
{

    cout << "Square: " << square(5) << endl;

    cout << "Add numbers: " << add(5, 20) << endl;
    cout << "Add default: " << add(5) << endl;

    cout << "Integer multiply: " << multiply(4, 5) << endl;
    cout << "float multiply: " << multiply(2.5, 4.0) << endl;

    return 0;
}