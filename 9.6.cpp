#include<iostream>
using namespace std;
void check_number (int n)
{
int c=0;
for(int i=2;i<=n;i++)
{
 if(n%i==0)
 c=1;
 }
 if(n%2==0&&c==0)
 
 cout << "even prime" << endl;
 else if(n%2!=0&&c==0)
 cout << "odd prime" << endl;
 else if(n%2==0&&c!=0)
  cout << "only even, not prime" << endl;
  else if(n%2!=0)
  cout << "only odd, not prime" << endl;
  else
  cout << "not prime" << endl;
  }
  int main()
{
int num;
cout << "Enter a number:" ;
cin>>num;
check_number (num);
return 0 ;
}
