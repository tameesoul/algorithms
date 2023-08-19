#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std; 
void trapezium_area(float a , float b , float h)
{
    double A = ((a+b)/2)*h;
    cout<< A <<"\n";   
}

int main()
{
    trapezium_area(4,5,6);
}