#include<iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
/// /// algorithm for corelation Calculator
float correlation(int n , int x[],int y[])
{
     int sum_x=0; int sum_y=0 , avg_x = 0  , avg_y = 0 , a = 0 , b = 0 , accxy = 0 , accx = 0 ,  accy = 0 ;

     for(int i = 0 ; i<n; i++)
     {
        sum_x += x[i];
     }
     avg_x = sum_x / n;
     for(int i = 0; i<n; i++)
     {
        sum_y +=y[i];
     }
     avg_x = sum_y /n;

     for(int i = 0; i<n; i++)
     {
        a = x[i] - avg_x; 
        b = y[i] - avg_y;
        accxy +=a*b;
        accx += a*a; 
        accy += b*b;  
     }

     float correlation = accxy / sqrt(accx * accy);
     return correlation;
}
int main()
{
    int n = 6; 
    int x [] = {1,2,4,5,6,7,8};
    int y [] = {4,5,6,8,3,3,4};

    cout<<correlation(n,x,y);
}