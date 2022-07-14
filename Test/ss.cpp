#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string str;
    cin>>str;
    stringstream ss(str);

    char ch;
    int a, b, c;
    ss >> a >> ch >> b >> ch >> c;
    vector <int> v;
    v.push_back(a); v.push_back(b); v.push_back(c);

    sort(v.begin(), v.end());

    int start=0, end=0;

    start = pow(v[0],2) + pow(v[1],2);
    end = pow(v[1],2) + pow(v[2],2);

    cout<<end-start<<endl;

}