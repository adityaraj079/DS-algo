#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{
    //base case
    //element not found
    if(s>e)
        return false;
    
    int mid = s + (e-s)/2;
    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k)
        return binarySearch(arr,mid+1,e,k);

    else
        return binarySearch(arr,s,mid-1,k);

}

int main()
{
    int arr[5] = {5,6,23,5,9};
    int key=6;
    int s=0, e=4;
    int found = binarySearch(arr,s,e,key);
    if (found)
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;
}