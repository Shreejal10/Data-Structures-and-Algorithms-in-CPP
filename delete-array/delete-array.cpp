//C++ Program to delete number from array
#include<iostream>
using namespace std;

int main() {
    int arr[50],i,n,pos;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter poition to delete number: ";
    cin>>pos;
    for(i=pos-1; i<n; i++){
        arr[i]=arr[i+1];
    }

    cout<<"The new array is: ";
    for(i=0; i<n-1; i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}