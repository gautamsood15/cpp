#include <iostream>
using namespace std; 
class queue 
{ 
    private: 
    int a[ 10]; 
    int f,r; 
   public: 
    queue(); 
    ~queue(); 
    void add(); 
    void del(); 
    void dis(); 
}; 
queue::queue() 
{ 
   f=-1; 
   r=-1; 
} 
queue::~queue() 
{ 
} 
void queue::add() 
{ 
   if(r==9) 
      cout<<endl<<"queue is full"; 
   else 
   { 
      r++; 
      cout<<endl<<"Enter the data:"; 
      cin>>a[r];
	  cout<<"\n"; 
      if(f==-1) 
  f=0; 
   } 
} 
 void queue::dis() 
{ 
   if(f==-1) 
      cout<<endl<<"queue is empty"; 
   else 
   { 
      cout<<endl<<"Content of queue:"<<endl; 
      for(int i=f;i<=r;i++) 
      {
  cout<<a[i]; 
  cout<<"\t";
}
   } 
} 
void queue::del() 
{ 
   if(f==-1) 
      cout<<endl<<"queue is empty"; 
   else 
   { 
      cout<<endl<<"Deleted element is"<<a[f]; 
      if(f==r) 
  f=r=-1; 
      else 
  f=f+1; 
   } 
} 
main() 
{ 
   queue q; 
   int ch=1; 
   while(ch) 
   { 
      cout<<endl<<"Enter 1 to add a data to queue:"; 
      cout<<endl<<"Enter 2 to delete a data from the queue:"; 
      cout<<endl<<"Enter 0 to quit:"; 
      cout<<endl<<"Enter your choice:"; 
      cin>>ch; 
      switch(ch) 
      { 
  case 1:
   q.add(); 
  q.dis(); 
  break; 
  case 2: 
  q.del(); 
  q.dis(); 
  break; 
      } 
   } 
   return 0; 

}
