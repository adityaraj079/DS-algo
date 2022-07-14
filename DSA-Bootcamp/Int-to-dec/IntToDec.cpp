#include <bits/stdc++.h>
using namespace std;

int Decimal_to_Binary(int n)
{
    int out=0;
    while(n!=0)
    {
        int bit = n&1;
        out = bit*10;
        n = n >> 1;

        
    }
    return out;
}

int main()
{
    int n;
    cin>>n;
    cout<<Decimal_to_Binary(n);
}