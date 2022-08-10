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
            // if(front == 0 && rear == n - 1) {
            //     return true;
            // }
            // if(front == rear + 1) {
            //     return true;
            // }
            // return false;
        }
        void enqueue(int x){
            if(isFull()){
                cout<<"\nQueue overflow"<<endl;
            }
            else{
                if (front == -1){
                    front++;
                }
                rear = (rear + 1) % n;
                arr[rear] = x;
            }
        }
        int dequeue(){
            if(isEmpty()){
                cout<<"No elements in queue to remove"<<endl;
                return -1;
            }

            int value = arr[front];
            if(front == rear){
                front = rear = -1;
            }
            else{
                front = (front + 1)%n;
            }
            return value;
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
            }
        }

};



int main(){
    CircularQueue q;
    q.enqueue(22);
    q.enqueue(54);
    q.enqueue(22);
    q.enqueue(77);
    q.enqueue(99);
    q.display();

    cout<<"\nThe removed element is: "<<q.dequeue()<<endl;
    cout<<"The removed element is: "<<q.dequeue()<<endl;
    cout<<"The removed element is: "<<q.dequeue()<<endl;
    q.enqueue(43);
    q.display();
    q.enqueue(0);
    q.enqueue(100);
    q.enqueue(99);
    q.display();

    return 0;
}