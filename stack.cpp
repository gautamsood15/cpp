#include<iostream>
using namespace std;
int stack[10];
int top=-1;
void push()
{
	if(top==9)
	{
		cout<<"overflow";
	}
	else
	{
		top++;
		cout<<"enter item";
		cin>>stack[top];
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"underflow";
	}
	else
	{
		cout<<"deleted item is"<<stack[top];
		top--;
	}
}
void display()
{
	for(int i=top;i>0;i--)
	{
		cout<<"\n"<<stack[top];
	}
	
}
int main()
{
	int x,c;
	while(c==1)
	{
	
	cout<<"\nenter your choice";
	cout<<"\n1.--push";
	cout<<"\n2.--pop";
	cout<<"\n3.--display";
	cin>>x;
	switch(x)
	{
	case 1:
	push();
	break;
	case 2:
	pop();
	break;
	case 3:
	display();
	break;
	default:
	cout<<"wrong choice entered";	
	}
	cout<<"do you want to continue";
	cout<<"\nyes-1";
	cout<<"\nno-0";
	cin>>c;
}
}
