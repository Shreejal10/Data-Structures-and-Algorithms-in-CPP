//Print the nth Fibonacci number
#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The "<<n<<"th fibonacci number is: "<<fibonacci(n)<<endl;
    cout<<"The Fibonacci number upto "<<n<<" is: ";
    for(int i=0; i<=n; i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}