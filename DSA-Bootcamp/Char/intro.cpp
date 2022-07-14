#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool checkPalindrome(char name[], int n)
{
    int s=0, e=n-1;
    while(s<=e)
    {
        if(name[s] != name[e])
            return 0;
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverseString(char name[], int n)
{
    int s=0;
    int e=n-1;
    while(s<n)
    {
        swap(name[s++], name[e--]);
    }
    
}

int getLength(char name[])
{
    int count=0;
    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"ENter your name ";
    cin>>name;

    cout<<"Your name is "<<name<<endl;

    int n = getLength(name);
    cout<<"Length of name is "<<n<<endl;

    reverseString(name, n);
    cout<<"Reverse name is "<<name<<endl;

    cout<<"Palindrome "<<checkPalindrome(name, n)<<endl;
}