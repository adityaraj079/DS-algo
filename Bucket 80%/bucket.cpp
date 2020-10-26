#include <iostream>
using namespace std;

int main()
{
	int x,y,a;
	cout<<"Enter the Bucket capacity \t";
	cin>>x;
	cout<<"Enter the mug capacity \t";
	cin>>y;
	if (y > x)
	{
		cout<<"Mug capacity cannot be more than buckets capacity"<<endl;
		return 0;
	}
	int n = (x/y)*0.8;
	for (int i=0; i<=n-1; i++)
	{
		a++;
	}
	cout<<"Mugs required are "<<a;
}
