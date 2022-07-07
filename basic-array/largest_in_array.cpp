//C++ Program to find the largest number in array
#include<iostream>
using namespace std;

int main(){
    int num[10],i,largest;
    cout<<"Enter 10 numbers: ";
    for(i=0; i<10; i++){
        cin>>num[i];
    }
    largest = num[0];
    for(i=0; i<10; i++){
        if(num[i]>largest){
            largest = num[i];
        }
    }
    cout<<"Largest number is: "<<largest<<endl;
    return 0;

}