#include <bits/stdc++.h>
using namespace std;

string to_binary(int n)
{
    string out;
    while(n>0)
    {
        out += (n%2) ? '1' : '0';
        n/=2;
    }
    return out;
}


int main()
{
    cout<<"52 = "<<to_binary(52)<<endl;
    int x = 53;
	int y = 28;
	cout << "x = " << to_binary(x) << ", y = " << to_binary(y) << endl;
	
	cout << "AND, OR, XOR:" << endl;
	cout << to_binary(x & y) << " " << to_binary(x | y) << " " << to_binary(x ^ y) << endl;

    cout << bitset<8>(13);
}