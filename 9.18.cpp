#include<iostream>
using namespace std;
int show(int arr[]);  
int main() {
   int num[5],i;
   cout << "Enter 5 integers:" << endl;
   for(i=0;i<5;i++)
   cin >> num[i];
   show(num);
    return 0;
}
int show(int arr[]) {
   int j;
   cout << "The values in array:\n" ;
    for(j=0;j<5;j++)
    
     cout <<arr[j]<<"\t";
    }
