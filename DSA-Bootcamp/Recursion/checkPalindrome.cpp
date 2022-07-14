#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string& str, int i, int j)
{
    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    
    else
        return checkPalindrome(str, i+1,j-1);
}

int main()
{
    string str = "aditya";
    int i=0, j=str.length()-1;
    
    bool isPalindrome = checkPalindrome(str,i,j);
    if(isPalindrome)
        cout<<"YES"<<endl;
    
    else
        cout<<"NO"<<endl;

}