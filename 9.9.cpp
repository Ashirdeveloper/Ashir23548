#include <iostream>
#include <conio.h>
using namespace std;
void swap (int&a,char &b);
int main()
{
  int x,y;
  cout <<"Enter a number:";
  cin >>x;
  cout <<"Enter a number:";
  cin>>y;
  cout<<"values before swapping:\n";
  cout<<"x="<<x<<endl;
  cout<<"y="<<y<<endl;
  cout<<"swapping the values...."<<endl;
  swap (x,y);
  cout<<"values after swapping:\n";
  cout<<"x="<<x<<endl;
  cout<<"y="<<y<<endl;
  return 0;    
}
void swap (int &a,char &b)
{
    int p;
    p=a;
    a=b;
    b=p;
    
}
