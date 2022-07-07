//C++ Program to find mean of data in a array
#include<iostream>
using namespace std;

int main(){
    int num[10],i,mean=0;
    cout<<"Enter 10 numbers: ";
    for(i=0; i<10; i++){
        cin>>num[i];
    }
    for(i=0; i<10; i++){
        mean = mean + num[i];
    }
    mean = mean/10;
    cout<<"The mean is: "<<mean<<endl;
    return 0;
}