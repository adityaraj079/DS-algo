#include <bits/stdc++.h>
using namespace std;



int main()
{
    int arr[5] = {3,9,7,0,-2};
    
    int key =2;
    bool found=false;

    for(int i=0; i<5; i++)
    {
        if(arr[i] == key)
            found=true;
    }

    if(found)
        cout<<"Key is found"<<endl;
    else
        cout<<"Key not found"<<endl;

    return 0;

}