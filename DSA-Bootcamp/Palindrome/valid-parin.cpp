#include <bits/stdc++.h>
using namespace std;

bool isPalin(string result)
{
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    stack <char> sta;
        string test;
        for(int i=0; i<result.size(); i++)
        {
            sta.push(result[i]);
        }
        for(int i=0; i<result.size();i++)
        {
            cout<<"TOP "<<sta.top()<<endl;
            cout<<"Result "<<result[i]<<endl;
            if(sta.top() != result[i])
            {
                cout<<"False"<<endl;
                return false;
            }
            sta.pop();
        }
        cout<<"True"<<endl;
        return true;
}

int main()
{
    //int arr[3];
    //cout<<arr[0]<<endl;

    string s= "OAAP";
    int len = s.size();
    string result;
    for(int i=0; i<len; i++)
        {
            if (s[i] >=65 && s[i]<= 90 || s[i]>=97 && s[i]<=122)
            {
                result += s[i];
            }
        }
    cout<<result<<endl;
    
    cout<<isPalin(result);
}