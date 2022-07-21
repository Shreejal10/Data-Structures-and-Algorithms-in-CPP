#include<iostream>
using namespace std;

class queue{
    private:
        int *arr;
        int front;
        int back;
        int n;
    public:
        queue(){
            cout<<"Enter size of array: ";
            cin>>n;
            arr =new int[n];
            front=-1;
            back=-1;
        }
        void enqueue(int x){
            if(back==n-1){
                cout<<"Queue overflow"<<endl;
            }
            else{
                back++;
                arr[back]=x;
                if(front==-1){
                    front++;
                }
            }
        }
        int dequeue(){
            if(front==-1 || front>back){
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
            if(front==-1 || front>back){
                cout<<"No elements in queue"<<endl;
                return -1;
            }
            else{
                return arr[front];
            }
        }
        void empty(){
            if(front==-1 || front>back){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Queue is not empty"<<endl;
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