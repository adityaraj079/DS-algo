#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else    b=b-a;
    }
}

int main()
{
    int a,b;
    cout<<"Enter a and b ";
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}