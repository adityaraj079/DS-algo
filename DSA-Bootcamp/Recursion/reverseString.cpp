#include <bits/stdc++.h>
using namespace std;

void reverse(string& str, int i, int j)
{
    //base case
    if(i>j)
        return ;
    swap(str[i], str[j]);
    i++; j--;
    return reverse(str, i,j);

}

int main()
{
    string str = "acbd";
    int i=0, j=str.length()-1;
    reverse(str,i,j);

    cout<<str<<endl;
}