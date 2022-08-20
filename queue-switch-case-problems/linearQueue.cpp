#include<iostream>
using namespace std;

class queue{
    private:
        int *arr;
        int front;
        int rear;
        int n;
    public:
        queue(){
            cout<<"Enter size of queue: ";
            cin>>n;
            arr =new int[n];
            front=-1;
            rear=-1;
        }
        bool isEmpty(){
            if(front==-1 || front>rear){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if(rear==n-1){
                return true;
            }
            else{
                return false;
            }
        }

        void makeEmpty(){
            front=rear=-1;
        }
        
        void enqueue(int x){
            if(isFull()){
                cout<<"Queue overflow"<<endl;
            }
            else{
                rear++;
                arr[rear]=x;
                if(front==-1){
                    front++;
                }
            }
        }
        
        void dequeue(){
            if(isEmpty()){
                cout<<"No elements in queue to remove"<<endl;
            }
            else{
                int value=arr[front];
                front ++;
                cout<<"The removed element is: "<<value<<endl;
            }
        }
        
        void display(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"The elements in the queue are: ";
                for(int i=front; i<=rear; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }

};

int main(){
    queue q;
    char ch;
    int choice;
    do{
        cout<<"\nMenu diven program to perform the following task: "<<endl;
        cout<<"Press 1 to make empty Queue"<<endl;
        cout<<"Press 2 to enqueue element"<<endl;
        cout<<"Press 3 to dequeue element"<<endl;
        cout<<"Press 4 to display queue"<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                q.makeEmpty();
                break;
            
            case 2:
                int x;
                cout<<"Enter element to enter: ";
                cin>>x;
                q.enqueue(x);
                break;

            case 3:
                q.dequeue();
                break;
            
            case 4:
                q.display();
                break;
            
            default:
                cout<<"Wrong choice entered."<<endl;
                break;
        }
        cout<<"Do you want to continue(y/n): ";
        cin>>ch;
    }while(ch=='y');
    return 0;
}