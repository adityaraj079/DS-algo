#include <bits/stdc++.h>
using namespace std;

void sayDigit(int n)
{
    if(n==0)
        return ;
    //processing
    int digit=n%10;
    n/=10;
    string name[10] = {"Zero", "one","two","three","four","five","six","seven","eight","nine"};

    sayDigit(n);

    cout<<name[digit]<<" ";


}

int main()
{
    int n; cin>>n;
    sayDigit(n);
}