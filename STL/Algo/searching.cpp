#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> v = {1,3,5,7,12,43,54,65};

    cout<<"Finding 12 -> "<<binary_search(v.begin(), v.end(), 12)<<endl;

    cout<<"Lower bound -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound -> "<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl;

    int a=3, b=5;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a -> "<<a<<" b -> "<<b<<endl;

    string s="abdcds";
    reverse(s.begin(), s.end());
    cout<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    for(auto i:v)
    {
        cout<<i<<" ";
    }

    sort(v.begin(), v.end());
}