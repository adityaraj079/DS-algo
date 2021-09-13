#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    int numberOfSwaps = 0;
    
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }
    
    // If no elements were swapped during a traversal, array is sorted
    if (numberOfSwaps == 0) {
        break;
    }
}
}

int main()
{
    int a[]= {1,2,3,4};
    int n=4;
    BubbleSort(a,n);
    return 0;
}