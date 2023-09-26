#include<stdio.h>
#include<math.h>

/// algorithms for Standard Deviation Calculator in c 
float Standard_deviation(int n, int size[])
{
    float sum = 0  ,variance = 0  , avg = 0 , stdev = 0 ;
    for(int i = 0 ; i<n ; i++)
    {
        sum += size[i];
    }     
    avg = sum/n; 

    for(int i = 0 ; i < n ; i++ )
    {
        variance += pow(size[i]-avg,2); 
    }
    variance /= n;
   return  stdev = sqrt(variance);
}
int main(void)
{ 

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int size[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &size[i]);
    }

    float result = Standard_deviation(n, size);
    printf("The standard deviation is %.2f\n", result);
}
