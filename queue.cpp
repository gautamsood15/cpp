# include<iostream>
using namespace std;
class queue
{int item;
int a[20];
int front;
int rear;
public:
void initialize()
	{
		front=0;
		rear=0;
	}
	void insert();
	int remove();
	void display();
};
void queue::display()
{
	for(int i=front;i<rear;i++)
	{
		cout<<"\n"<<a[i];}
}
void queue::insert()
{
if(rear==20)
{
	cout<<"Queue is FULL";
}
else
{
	cout<<"enter item";
	cin>>item;
	a[rear]=item;
    rear++;
}
}
int queue::remove()
{
if(front==rear)
{
	cout<<"queue is empty";
}
else
{
	front++;
}
}
int main()
{
queue q;
q.initialize();
int x,c=1;
	while(c==1)
              {cout<<"\nenter your choice";
	cout<<"\n1.--push";
	cout<<"\n2.--pop";
	cout<<"\n3.--display";
	cin>>x;
	switch(x)
	{
	case 1:
		q.insert();
	break;
	case 2:
	q.remove();
	break;
	case 3:
	q.display();
	break;
	default:
	cout<<"\nwrong choice entered";	
	}
	cout<<"\ndo you want to continue";
	cout<<"\nyes-1";
	cout<<"\nno-0";
	cin>>c;}return 0;}
