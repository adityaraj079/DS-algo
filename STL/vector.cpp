#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;

    vector <int> a(5,1);      //Vector of size 5 with all elements 1

    vector <int> copies(a);    //This is copy og vector "a"
    cout<<"print copies"<<endl;
    for (int i:copies)
    {
        cout<<i<<" ";
    }  cout<<endl;

    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(1);               //I pushed "1" to the vector
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(2);               //I pushed "1" to the vector
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(3);               //I pushed "1" to the vector
    cout<<"Capacity "<<v.capacity()<<endl;         //Capacity is how much space is assigened for the elements in the vector
    cout<<"Size "<<v.size()<<endl;                 //and size is number of elements

    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"first element "<<v.front()<<endl;

    cout<<"End "<<v.back()<<endl;
    cout<<"Before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    } cout<<endl;

    v.pop_back();     //Deleting the last element

    cout<<"After pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    } cout<<endl;
    
    cout<<"Before clear"<<v.size()<<endl;
    v.clear();
    cout<<"After Clear "<<v.size()<<endl;
}