#include <bits/stdc++.h>
using namespace std;

void merge(int  *arr, int s, int e)
{
    int mid = s+((e-s)/2);
    int len1 = mid-s+1, len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];
    
}

void mergeSort(int *arr, int s, int e)
{
    //base case
    if(s > e)
        return;

    int mid = s+((e-s)/2);
    //left part sort karro
    mergeSort(arr,s,mid);

    //right part sort
    mergeSort(arr,mid,e);
    
    //merge
    merge(arr,s,e);
}


int main()
{
    int arr[5] = {8,4,8,3,2};
    int n=5;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}