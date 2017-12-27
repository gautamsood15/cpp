#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x,y;
	cout<<"\nenter 1st number";
	cin>>x;
	cout<<"\nenter 2nd number";
	cin>>y;
	swap(x,y);
	cout<<"\nx="<<x;
	cout<<"\ny="<<y;
}
