#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start=0;
    int end= size-1;

    int mid = (start + end)/2;

    while(start <= end)
    {
        if(arr[mid] == key)
            return mid;
        
        if(key > arr[mid])
            start = mid+1;
        else
            end = mid-1;

        mid = (start+end)/2;
    }
    return -1;
}

int main()
{
    int arr[5] = {3,5,9,13,28};
    int size = 5;
    int key=13;
    int index = binarySearch(arr, size, key);

    cout<<"Index of 13 is "<<index<<endl;

}