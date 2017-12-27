#include<iostream>
#include<math.h>
#include<stdio.h>
class Bank
{
char name[30];
int accno;
char acctype[10];
float bal;
public:
Bank()
{
cout<<"\nConstructor called";
bal=0;
}
void getdata()
{
cout<<"\nEnter name of the depositor";
gets(name);
cout<<"\nEnter account number:";
cin>>accno;
cout<<"\nEnter acctype i.e.for current:C and for savings:S";
cin>>acctype;
}
void depositamt()
{
float balam;
cout<<"\nEnter amount to be deposited:";
cin>>balam;
bal=bal+balam;
}
void withdrawamt()
{
float amt;
cout<<"\nThe amount is:"<<bal;
if(bal==0)
{
cout<<"\nThere is no amount in the account";
}
else{
cout<<"\nEnter amount you want to withdraw:";
cin>>amt;
if(amt<=bal)
{
bal=bal-amt;
}
else
{
cout<<"\nnot possible";
}
}
}

void putdata()
{
cout<<"\ndetails of depositor is as follows:";
cout<<"\nName:";
puts(name);
cout<<"\nAccount number:"<<accno;
cout<<"\nAccount type:";
puts(acctype);
cout<<"\nBalance amount:"<<bal;
}
}b;
int main()
{
b.getdata();
b.depositamt();
b.withdrawamt();
b.putdata();
}
