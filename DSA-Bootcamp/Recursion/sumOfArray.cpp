#include <bits/stdc++.h>
using namespace std;

int tellSum(int arr[], int n)
{
    if(n==0)
        return 0;
    
    if(n==1)
        return arr[0];
    
    int remaining = tellSum(arr+1, n-1);
    int sum=arr[0]+remaining;

    return sum;


}

int main()
{
    int arr[5] = {5,6,23,5,9};
    int sum = tellSum(arr,5);
    cout<<sum<<endl;
}