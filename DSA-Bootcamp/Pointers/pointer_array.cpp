#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {12, 23, 41, 57};;
    cout<<"Address of first memory block is "<< arr <<endl;
    cout<<"Address of first memory block is "<< &arr[0] <<endl;


    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr + 1<<endl;
    cout<<"6th "<<(*arr+1)<<endl;
    cout<<"7th "<<arr[2]<<endl;
    cout<<"8th "<<*(arr+2)<<endl;
    cout<<":<"<<endl;

    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;

    cout<<sizeof(*ptr)<<endl;

    

}