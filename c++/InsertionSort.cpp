#include<iostream>
using namespace std;
//int x [5] = {7,3,6,8,5};
void insertionsort(int n , int x[])
{
    int key = 0;

    for(int i = 1; i<n; i++)
    {
        key = x[i];

        for(int j = i-1; j>=0; --j)
        {
            if(x[j] > key)
            {
                x[j+1] = x[j];
                x[j] = key;
            }
        }
    }
}
int main()
{
int n = 5;
int x [5] = {7,4,5,7,3};
insertionsort(n,x);
for(int i = 0; i<n;++i)
{
cout<<x[i]<<" "; 
}
}
