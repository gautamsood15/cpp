#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n;
	cout<<"enter a number\n\n";
	cin>>n;
	int x=fact(n);
	cout<<"factorial of "<<n<<"="<<x;
}
int fact(int n)
{
	int f=1;
	for (int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
