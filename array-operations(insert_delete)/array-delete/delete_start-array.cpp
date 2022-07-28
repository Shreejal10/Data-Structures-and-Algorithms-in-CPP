//C++ Program to delete 1st element from array
#include<iostream>
using namespace std;

int main() {
    int arr[50],i,n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        arr[i]=arr[i+1];
    }

    cout<<"The new array is: ";
    for(i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}