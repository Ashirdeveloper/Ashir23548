#include<iostream>
using namespace std;
void factorial (int n);
int main()
{
int num;
cout<<"Enter a number:";
cin>>num;
factorial (num);
return 0 ;
}
void factorial (int n)
{
long fact;
fact=1;
for(int c=1;c<=n;c++)
fact*=c;
cout << fact << endl;
 }
