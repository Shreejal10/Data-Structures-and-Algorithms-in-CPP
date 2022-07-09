#include<iostream>
using namespace std;


void search(int arr[],int n,int element){
    int key = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==element){
            key=i+1;
        }
    }
    if(key!=0){
        cout<<"Element found in position: "<<key<<endl;
    }
    else{
        cout<<"Element not found in array"<<endl;
    }
}


int main() {
    int arr[50],n,element,key;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>element;

    search(arr,n,element);
    return 0;
}