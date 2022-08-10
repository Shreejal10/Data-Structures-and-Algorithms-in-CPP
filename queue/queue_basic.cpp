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
            cout<<"Enter size of array: ";
            cin>>n;
            arr =new int[n];
            front=-1;
            rear=-1;
        }
        void enqueue(int x){
            if(rear==n-1){
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
        int dequeue(){
            if(front==-1 || front>rear){
                cout<<"No elements in queue to remove"<<endl;
                return -1;
            }
            else{
                int value=arr[front];
                front ++;
                return value;
            }
        }
        int peek(){
            if(front==-1 || front>rear){
                cout<<"No elements in queue"<<endl;
                return -1;
            }
            else{
                return arr[front];
            }
        }
        void empty(){
            if(front==-1 || front>rear){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Queue is not empty"<<endl;
            }
            
        }
        void display(){
            if(front==-1 || front>rear){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"The elements in the queue are: ";
                for(int i=front; i<=rear; i++){
                    cout<<arr[i]<<" ";
                }
            }
        }

};

int main(){
    queue q;
    cout<<"Initially: ";q.empty();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.display();
    cout<<endl;

    cout<<"After adding elements: ";q.empty();

    cout<<"The front of the queue is: "<<q.peek()<<endl;
    cout<<"The removed element is: "<<q.dequeue()<<endl;

    cout<<"The front of the queue is: "<<q.peek()<<endl;
    cout<<"The removed element is: "<<q.dequeue()<<endl;

    cout<<"The front of the queue is: "<<q.peek()<<endl;
    cout<<"The removed element is: "<<q.dequeue()<<endl;

    cout<<"The front of the queue is: "<<q.peek()<<endl;
    cout<<"The removed element is: "<<q.dequeue()<<endl;

    
    cout<<"After removing all elements: ";q.empty();
    return 0;
}