#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5};
    int target = 7;
    unordered_set <int> s;
    for(int i=0; i<v.size(); i++)
    {
        int test = target-v[i];
        if(s.find(test) != s.end() )
        {
            cout<<v[i]<<target-v[i];

        }
        s.insert(v[i]);
    }
}