#include <bits/stdc++.h>
using namespace std;

bool find(int arr[], int n, int k)
{
    //base case
    if(n==0)
        return false;
    //processing
    if(arr[0] == k)
        return true;
    else
    {
        bool remaining = find(arr+1, n-1,k);
        return remaining;
    }


}

int main()
{
    int arr[5] = {5,6,23,5,9};
    int key = 9;
    int sum = find(arr,5,key);
    if(sum)
        cout<<"Present"<<endl;
    else
        cout<<"Not present"<<endl;
}