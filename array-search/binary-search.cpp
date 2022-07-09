#include<iostream>
using namespace std;

int search(int arr[], int n, int element){
    int start=0;
    int end=n; 
    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==element){

            return mid;
        }
        else if(arr[mid]>element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[50],n,element;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>element;

    int result=search(arr,n,element);
    if(result == -1){
        cout<<"Element not found in array"<<endl;
    }
    else{
        cout<<"Element found in position: "<<result+1<<endl;
    }

    return 0;
}

