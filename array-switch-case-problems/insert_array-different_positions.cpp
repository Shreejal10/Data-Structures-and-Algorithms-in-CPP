/*C++ Program to perform the following taks:
                                Press 1 for inserting an element in beginning of an array
                                Press 2 for inserting an element in any position of an array
                                Press 3 for inseting an element in end of an array
                                Press 4 to display the resulting array
*/
#include<iostream>
using namespace std;

int main() {
    int arr[50],i,n,choice,element,pos;
    char ch;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    do{
        cout<<"\nPress 1 for inserting an element in beginning of an array"<<endl;
        cout<<"Press 2 for inserting an element in any position of an array"<<endl;
        cout<<"Press 3 for inseting an element in end of an array"<<endl;
        cout<<"Press 4 to display the resulting array"<<endl;
        cout<<"Your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"\nEnter element to insert in beginning of array: ";
                cin>>element;
                for(i=n; i>0; i--){
                    arr[i]=arr[i-1];
                }
                arr[0]=element;
                n++;
                break;

            case 2:
                cout<<"\nEnter element to insert in array: ";
                cin>>element;
                cout<<"Enter position: ";
                cin>>pos;
                n++;
                for(i=n; i>=pos; i--){
                    arr[i]=arr[i-1];
                }
                arr[pos-1]=element;
                break;

            case 3:
                cout<<"\nEnter element to insert in end of array: ";
                cin>>element;
                arr[n]=element;
                n++;
                break;

            case 4:
                cout<<"\nThe resulting array is: ";
                for(i=0; i<n; i++){
                    cout<<arr[i]<<" ";
                }
                break;

            default:
                cout<<"Wrong choice entered. Please try again."<<endl;
        }
        cout<<"\nDo you want to continue(y/n)?: ";
        cin>>ch;
    }while(ch=='y');
    return 0;
}
