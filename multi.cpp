#include <iostream>
using namespace std;
// This is a function template.
template <class X> void multi(X &a, X &b)
{
X t;
 	t=a*b;
cout<<"the product of "<<a<<" and "<<b<<" is = "<<t<<"\n";
}
int main()
{
int i,j;
cout<<"enter 2 integer values to be multiplied\n";
cin>>i>>j;
float x,y;
cout<<"enter 2 float values to be multiplied\n";
cin>>x>>y;


multi(i, j);
multi(x, y);
return 0;
}
