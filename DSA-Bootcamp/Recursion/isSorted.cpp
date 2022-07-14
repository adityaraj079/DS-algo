#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size)
{
    //base case
    if(size==0||size==1)
        return true;
    else if (arr[0] > arr[1])
        return false;
    
    //processing
    else 
    {
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {2,4,5,7,9};

    bool ans = isSorted(arr,5);
    if(ans)
        cout<<"Array is sorted"<<endl;
    else
        cout<<"Array is not sorted"<<endl;
}