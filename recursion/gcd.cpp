#include<iostream>
using namespace std;

long int gcd(int a, int b){
    while(b !=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int a, b;
    cout<<"Enter two numbers a and b: ";
    cin>>a>>b;
    cout<<"gcd("<<a<<","<<b<<") is "<<gcd(a,b);
    return 0;
}