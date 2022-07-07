//C++ program to reverse a given number
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int reverse = 0;
    while(num>0){
        int lastDigit = num%10;
        reverse = reverse*10 + lastDigit;
        num = num/10;
    }
    cout<<"The reverse is: "<<reverse<<endl;
    return 0;
}