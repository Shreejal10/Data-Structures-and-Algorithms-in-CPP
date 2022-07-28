#include<iostream>
using namespace std;

int main() {
    int arr[50],n,element,found=0;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to delete: ";
    cin>>element;

    for(int i=0; i<n; i++){
        if(arr[i]==element){
            for(int j=i; j<n-1; j++){
                arr[j]=arr[j+1];
            }
            found=1;
            i--;
            n--;
        }
    }
    if(found==0){
        cout<<"Element doesnt exist in array"<<endl;
    }
    else{
        cout<<"Element deleted successfully"<<endl;
        cout<<"The new array is: ";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}