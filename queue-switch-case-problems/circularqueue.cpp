#include<iostream>
using namespace std;

class CircularQueue{
    private:
        int *arr;
        int front;
        int rear;
        int n;
    public:
        CircularQueue(){
            cout<<"Enter size of array: ";
            cin>>n;
            arr =new int[n];
            front=-1;
            rear=-1;
        }
        bool isEmpty(){
            if(front==-1 && rear == -1){
                return true;
            }
            else{
                return false;
            }
            
        }
        bool isFull(){
            if((rear + 1) % n == front){
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
                if (front == -1){
                    front++;
                }
                rear = (rear + 1) % n;
                arr[rear] = x;
            }
        }
        void dequeue(){
            if(isEmpty()){
                cout<<"No elements in queue to remove"<<endl;
            }

            int value = arr[front];
            if(front == rear){
                front = rear = -1;
            }
            else{
                front = (front + 1)%n;
            }
            cout<<"The removed element is: "<<value<<endl;
        }
        void display(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"The elements in the queue are: ";
                for(int i = front; i!=rear; i = (i + 1) % n){
                    cout<<arr[i]<<" ";
                }
                cout<<arr[rear];
                cout<<endl;
            }
        }

};



int main(){
    CircularQueue q;
    char ch;
    int choice;
    do{
        cout<<"\nMenu diven program to perform the following task in circular queue: "<<endl;
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