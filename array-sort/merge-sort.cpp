#include<iostream>
using namespace std;
#define Max 100

void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    //temp arrays
    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[mid+1+i];
    }

    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k]=a[i];
            k++;
            i++;
    }

    while(j<n2){
        arr[k] = b[j];
            k++;
            j++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
}

int main(){
    int num[Max],n, i;
    cout<<"Enter number of elements in array:";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++){
        cin>>num[i];
    }

    mergeSort(num, 0, n-1);

    cout<<"The array in ascending order is: ";
    for(i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}