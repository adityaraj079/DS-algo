#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque <int> d;
    
    d.push_back(1);
    d.push_front(2);

    for (int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_back();
    // cout<<"After pop"<<endl;
    // for (int i:d)
    // {
    //     cout<<i<<" ";
    // }

//     d.pop_front();


    cout<<"Print first index element "<<d.at(1)<<endl;

    cout<<"front"<<d.front()<<endl;
    cout<<"end"<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Before erase"<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase"<<d.size()<<endl;
}