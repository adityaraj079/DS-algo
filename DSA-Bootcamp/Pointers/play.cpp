#include <iostream>
using namespace std;

int main()
{
    //pointer p is created and pointing to some garbage value
    int n=5;

    int *p=&n;
   cout<<"before "<<n<<endl;
   (*p)++;
   cout<<"After "<<n<<endl;

   //copying a pointer
   int *q = p;
   cout<<p<<" - "<<q<<endl;
   cout<<*p<<" - "<<*q<<endl;

}