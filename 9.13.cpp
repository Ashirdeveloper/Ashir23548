#include<iostream>
using namespace std;
int sqr(int n);  
int cube(int n);
int main()
{
    int a,b,s;
    cout << "Enter an integer:";
    cin >> a;
    cout << "Enter an integer: ";
    cin >> b;
    s=sqr(a)+cube(b);
    cout << "Result =" << s<<endl;
   
    return 0;
}
 int sqr(int n)
 {
 return n*n;
 }
int cube (int n)
{
    
    return n*n*n;
}
