#include<iostream>
using namespace std;

class distance
{    
		int feet;
		int inches;
	public:
distance()
{ 
inches =48; feet=0;
}
	void output()
	{
		cout<<"feet="<<feet;
		cout<<"\n\ninches"<<inches;
	}	
	void input()
	{
	cout<<"enter inches\n\n";
	
	cin>>inches;	
	}	
	void convert()
	{
		feet=inches/12;
		inches=inches%12;
	}
}d;
int main()
{
	d.input();
	d.convert();
	d.output();
    return 0;
}
