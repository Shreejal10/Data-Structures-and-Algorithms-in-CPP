#include<iostream>
using namespace std;
#define Max 100

void ShellSort(int arr[], int n){
	for(int gap=n/2;gap>0;gap /= 2){
		for(int j = gap;j<n;j+=1){
			int temp = arr[j];
			int i=0;
			
			for(i=j;(i>=gap)&&(arr[i-gap]>temp);i-=gap){
				arr[i] = arr[i-gap];
			}
			arr[i] = temp;
		}
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
    ShellSort(num, n);
    cout<<"The array in ascending order is: ";
    for(i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}