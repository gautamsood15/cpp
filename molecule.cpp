#include<iostream>
#include<math.h>
class hydrogen;
class sulphur;
class oxygen	
{
int o;
public:
oxygen(int p)
{
o=p;
}
friend void compound(oxygen obj1,hydrogen obj2,sulphur obj3);
};
class hydrogen
{
int h;
public:
hydrogen(int q)
{
h=q;
}
friend void compound(oxygen obj1, hydrogen obj2,sulphur obj3);
};
class sulphur
{
int s;
public:
sulphur(int r)
{
s=r;
}
friend void compound(oxygen obj1, hydrogen obj2, sulphur obj3);
};
void compound(oxygen obj1, hydrogen obj2, sulphur obj3)
{
cout<<"\nCompound so formed:H"<<obj2.h<<"S"<<obj3.s<<"O"<<obj1.o;
}
int main()
{
int n1,n2,n3;
cout<<"\nEnter number of hydrogen, sulphur and oxygen:";
cin>>n1>>n2>>n3;
oxygen o1(n3);
hydrogen h1(n1);
sulphur s1(n2);
compound(o1,h1,s1);
}
