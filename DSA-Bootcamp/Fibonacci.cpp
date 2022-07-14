#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    while(n--)
    {
        
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        
    }
}