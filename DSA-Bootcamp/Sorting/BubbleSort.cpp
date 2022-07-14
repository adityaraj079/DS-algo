#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int>& arr, int n)
{
    for(int i=1; i<n; i++)
    {
       //Round 1 to n-1
        for(int j=0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }

    }

    // Print the array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
}

int main()
{
    vector <int> arr = {10,1,7,6,14};
    int n=arr.size();
    bubbleSort(arr, n);
}