#include <bits/stdc++.h>
using namespace std;

string to_binary(int n)
{
    string out;
    while(n>0)
    {
        out += (n%2) ? '1' : '0';
        n/=2;
    }
    return out;
}


int main()
{
    int n =13;
    cout<<"BInary of n is "<<to_binary(6)<<endl;
    for(int i=0;i<30;i++)
    {
        if((n & (1<<i)) != 0)
            cout<<i<<" ";
    }
}