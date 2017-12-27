#include<iostream>
#include<math.h>
#include<stdio.h>
class shape
{
protected:
float area;
public:
shape()
{
area=0.0;
}
virtual void get()=0;
virtual void set()=0;
virtual void calc_area()=0;
};
class rect:public shape
{
float l,b;
public:
void get()
{
cout<<"\nEnter length and breadth for tectangle:";
cin>>l>>b;
}
void set()
{
cout<<"\nArea of rectangle:"<<area<<"sq.units";
l=b=area=0.0;
}
void calc_area(){
area=l*b;
}
};
class tri:public shape
{
float b,h;
public:
void get()
{
cout<<"\nEnter base and height for triangle:";
cin>>b>>h;
}
void set()
{
cout<<"\nArea of triangle:"<<area<<"sq. units";
}
void calc_area()
{
area=(b*h)/2;
}
};
int main()
{
shape *pfunc;
rect r1;
tri t1;
char ch='3', op='n';
cout<<"Menu:\n1.Rectangle\n2.Triangle \n 3. Exit\n";
do
{cout<<"\n Enter choice:";
cin>>ch;
switch(ch)
{
case '1': pfunc=&r1;
break;
case '2':pfunc=&t1;
break;
case '3': exit(0);
break;
default: cout<<"\nInvalid choice";
}
if(ch=='1' || ch=='2')
{
pfunc->get();
pfunc->calc_area();
pfunc->set();
}
cout<<"Again?(y/n):";
cin>>ch;
}
while(ch=='y' || ch=='Y');
return 0;
}
