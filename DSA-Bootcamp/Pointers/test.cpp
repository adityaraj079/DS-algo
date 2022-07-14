#include <bits/stdc++.h>
//pragmas
#pragma GCC optimize ("03")              //For CP optimize
#pragma GCC target ("sse4")              //For CP optimize
using namespace std;
//defines
typedef long long ll;                   //Define ll for long long int

#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;i++)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);          //Define fastio so that the do not search for cin or cout each line

//macros
#define MOD 1000000007

// Mathematical functions
int GCD(int a, int b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}
int LCM(int a, int b)
{
	return ((ll)a * b) / GCD(a, b);
}
int cas=1;
//solution
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    int sum=0;
    fore(i,0,n)
    {
        int temp; cin>>temp;
        v.push_back(temp);
        sum+=temp;
    }
    int out = sum%m;
    cout<<"Case #"<<cas<<": "<<out<<endl;
    ++cas;
    
    
}

//main function
int main()
{
	FastIO
	int t; cin>>t;
	while(t--)
	{
		solve();
		
	}
	
}