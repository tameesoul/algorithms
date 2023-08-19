#include <stdio.h>
#include <math.h>

// 
void  circle_Area(double r)
{
    double A =  M_PI * (r*r);
    printf("%f\n",A);
}
int main(void)
{
    circle_Area(4);   
}