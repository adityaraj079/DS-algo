#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int,string> m;
    m[1] = "babbar";
    m[2] = "love";
    m[3] = "kumar";

    m.insert({5,"Bheem"});
    cout<<"Before erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 5 "<<m.count(5)<<endl;

    m.erase(3);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(5);
    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;

    }
}