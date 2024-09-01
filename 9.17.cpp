#include<iostream>
using namespace std;
int fun();  
int main() {
   int x;
   for(x=1;x<=5;x++)
   fun();
    return 0;
}

int fun() {
  static  int n=0 ;
    
    n++;
     cout << "Value of n="<<n<<endl;
    }
    
