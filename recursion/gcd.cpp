#include<iostream>
using namespace std;

long int gcd(int a, int b){
    if(a==0){
        return b;
    }
    else{
        return gcd(b % a, a);
    }
}

int main(){
    int a, b;
    cout<<"Enter two numbers a and b: ";
    cin>>a>>b;
    cout<<"gcd("<<a<<","<<b<<") is "<<gcd(a,b);
    return 0;
}