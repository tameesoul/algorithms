#include <stdio.h>
void insertionsort(int n , int x[])
{
    int key = 0;

    for(int i = 1 ; i<n;i++) //// n ||  /////// n = 1 
    {
        key = x[i];  //// n  || n = 1 & key = 6 ;

        int j = i-1; //// n  || n = 1 & j = 0 ;
        while(j>=0 && key<x[j]) /// n *n n2  0>=0 & 6 !< x[j] = 4 ;  
         {
            x[j+1] = x[j]; ///// n*n n2  
            j--; ////n*n n2
        }
        x[j+1]= key;  ////// n 
    }
    ///f(n) = 3n2+4n
    ///// complexity class for insertionSort 
    /// o(n2);
}
int main()
{
    int n;
    printf("Enter The Length Of The Array: ");
    scanf("%d",&n);
    int x[n];
    printf("Enter The Elements Of The Array:\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &x[i]);
    }
    insertionsort(n, x);
    printf("Sorted Array: ");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ", x[i]);
    }
    return 0;
    
}