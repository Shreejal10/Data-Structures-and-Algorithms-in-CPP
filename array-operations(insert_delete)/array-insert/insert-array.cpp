//C++ Program to insert element in array 
#include<iostream>
using namespace std;

int main() {
	int n, a[50],i,item,pos;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter a number to insert: ";
    cin>>item;
    cout<<"Enter position to enter number: ";
    cin>>pos;
    n++;
    for(i=n; i>=pos; i--){
    	a[i]=a[i-1];
	}
	a[pos-1]= item;
	cout<<"The new array is: ";
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
    return 0;
}
