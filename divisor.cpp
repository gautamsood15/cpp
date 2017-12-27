#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter two values to be divided\n";
  cin>>a>>b;
  cout<<"---------------------------------------------------\n";
  try{
        if(b==0) throw (b);
            else {
                  c=a/b;
                  cout<<"value of c is "<<c;
            }
  }
        catch(int t){
            cout<<"value of the dividend was zero\n";

                cout<<"Ending the program...\n Please restart \n";

        }
        catch(…){
            cout<<"Ending your program due to a sudden crash!\n";
            cout<<"Please restart your program\n";}

   return 0;
}
