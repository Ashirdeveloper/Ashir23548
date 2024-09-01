#include <iostream>
using namespace std;
int max(int a,int b);
int main(){
	int x,y;
	cout<<"enter to numbers";
	cin>>x>>y;
	max(x,y);
}
int max(int a, int b){
	if(a>b)
	cout<<"Maximum number is "<<a;
	else
	cout<<"maximum number is "<<b;
}
