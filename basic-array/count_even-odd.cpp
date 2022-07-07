//C++ Program to count number of even numbers and number of odd numbers in array
#include<iostream>
using namespace std;

int main(){
    int num[10],i,evenCount=0, oddCount=0;
    cout<<"Enter 10 elements: ";
    for(i=0; i<10; i++){
        cin>>num[i];
    }

    for(i=0; i<10; i++){
        if(num[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout<<"Number of even numbers in array: "<<evenCount<<endl;
    cout<<"Number of odd numbers in array: "<<oddCount<<endl;
    return 0;
}
