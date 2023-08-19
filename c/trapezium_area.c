#include <stdio.h>

void trapezium_area(float a , float b , float h)
{
    double A = ((a+b)/2)*h;

    printf("%f\n",A); 
}

int main(void)
{
    trapezium_area(5,6,7);
}