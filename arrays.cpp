#include <iostream>
#include<conio.h>
using namespace std;
int main(){
    int arr[5],max,i;
    cout << "Enter 5 numbers: ";
    for( i=0; i<5; i++){
        cin >> arr[i];
    }
    max = arr[0];
    for(i=0; i<5; i++)
        if(max<arr[i])
            max=arr[i];
        cout<<"maximum value is:"<<max<<endl;
    return 0;
}