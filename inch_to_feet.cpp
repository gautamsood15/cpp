#include<iostream>
using namespace std;
class dist
{
	int inches,feet;
	public:
		void get()
		{
		cout<<"enter the distance in inches"<<"\n";
		cin>>inches;
		feet=inches/12;
		}
		void set()
		{
			cout<<"\ndistance in inches is"<<inches<<"\n";
			cout<<"\ndistance in feets is"<<feet<<"\n";
		}
};

int main()
{
dist a;
a.get();
a.set();
return 0;	
}
