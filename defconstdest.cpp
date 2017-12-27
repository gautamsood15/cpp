#include<iostream>
#include<math.h>
class distance
{
int dis;
int d;
int f,i;
public:
distance()
{
cout<<"\nConstructor called";
cout<<"\nEnter the distance in inches";
cin>>dis;
}

void convert()
{
d=dis;
f=dis/12;
i=d%12;
}
void putdata()
{
cout<<"\nDistance in feet and inches is:"<<f<<"feet and"<<i<<"inches";
}
};
int main()
{
distance d;
d.convert();
d.putdata();
}
