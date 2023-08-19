#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std; 
void circel_area(int r)
{
    double A = M_PI * (r *r); 
    cout<< A <<"\n";
}

int main()
{
    circel_area(6);
}