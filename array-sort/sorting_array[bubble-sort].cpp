//C++ Program to sort array in Ascending order
#include<iostream>
using namespace std;
#define Max 100

int main(){
    int num[Max],n, i,j,temp;
    cout<<"Enter number of elements in array:";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++){
        cin>>num[i];
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(num[i]>num[j]){
                temp = num[i];
                num[i]= num[j];
                num[j]=temp;
            }
        }
    }
    cout<<"The array in ascending order is: ";
    for(i=0; i<n; i++){
        cout<<num[i]<<"\t";
    }
    return 0;
}