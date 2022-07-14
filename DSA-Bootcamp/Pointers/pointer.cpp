#include <iostream>
using namespace std;

int main()
{
    int num=100;
    cout<<num<<endl;

    //address of operator - &

    cout<<"Address of num is "<< &num<<endl;

    int *ptr = &num;
    num++;

    cout<<"Address is: "<<ptr<<endl;
    cout<<"Value is: "<<*ptr<<endl;

    cout<<"Size of integer is: "<<sizeof(num)<<endl;
    cout<<"Size of pointer is: "<<sizeof(ptr)<<endl;

    double d=7.8;
    double *p2 = &d;
    cout<<"Size " <<sizeof(p2)<<endl;
}