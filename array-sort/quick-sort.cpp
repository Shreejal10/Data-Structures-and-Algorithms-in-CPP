#include<iostream>
using namespace std;
#define Max 100

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;

    do{
        while(arr[i] <= pivot){
        i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i<j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high){
    int partitionIndex;

    if(low<high){
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex+1, high);
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

    quickSort(num, 0, n-1);

    cout<<"The array in ascending order is: ";
    for(i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}