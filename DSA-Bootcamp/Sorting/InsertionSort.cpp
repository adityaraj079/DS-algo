#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int>& arr, int n)
{
    for(int i=1; i<n; i++)
    {
       //Round 1 to n-1
       int temp=arr[i];
       int j=i-1;
        for( ; j>=0; j--)
        {
            if(arr[j] > temp)
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = temp;

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