#include <iostream>
#include <cmath>
using namespace std;

/// algorithms for Standard Deviation Calculator in cpp 

float standard_deviation(int n, int size[]) {
    float sum = 0, variance = 0, avg = 0, stdev = 0;

    for (int i = 0; i < n; i++) {
        sum += size[i];
    }
    avg = sum / n;

    for (int i = 0; i < n; i++) {
        variance += pow(size[i] - avg, 2);
    }
    variance /= n;

    stdev = sqrt(variance);

    return stdev;
}

int main() {
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;
    int size[n];
   
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> size[i];
    } 

    float result = standard_deviation(n, size);

    cout << "The standard deviation is: " << result << "\n";

    return 0;
}