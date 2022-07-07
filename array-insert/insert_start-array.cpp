//C++ Program to add a number in the beginning of an array
#include<iostream>
using namespace std;

int main() {
    int arr[50],i,n,element;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to insert: ";
    cin>>element;   

    for(i=n; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=element;
    n++;
    cout<<"The new array is: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
