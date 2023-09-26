#include<stdio.h>
#include <math.h>
/// algorithm for corelation Calculator
float correlation(int n , int x[],int y[])
{
    int sum_x=0; int sum_y=0 , avg_x = 0  , avg_y = 0 , a = 0 , b = 0 , accxy = 0 , accx = 0 ,  accy = 0 ;
    for(int i = 0; i<n; i++)
    {
        sum_x += x[i]; 
    }
    for(int i = 0; i<n; i++)
    {
        sum_y += y[i];
    }
    avg_x = sum_x / n ;
    avg_y = sum_y / n ;

    for(int i = 0 ; i<n; i++)
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

int main ()
{
     int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int x [n];
     int y [n];
    printf("Enter the elements of the arrayx :\n"); 
    for(int i = 0; i<n;i++)
    {
        printf("ELEMENT%d:" ,i+1);
        scanf("%d",&x[i]);
    }
     printf("Enter the elements of the array y:\n");
     for(int i = 0; i<n;i++)
     {
        printf("  ELEMENT%d:",i+1);
        scanf("%d",&y[i]);
     }
     float calc_correlation = correlation(n,x,y);
     printf("%.2f",calc_correlation);

}