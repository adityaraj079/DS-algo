#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin>>t;
    int n=t;
    string out;
    vector <int> v;
    while(t--)
    {
        int temp; cin>>temp;
        v.push_back(temp);
    }
    for (int i=0; i<n; i++)
    {
        string out;
        out=(char)v[i];
        cout<<out;
    }
}