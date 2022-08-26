#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};

class queue{
    private:
        node* front;
        node* rear;
        int queueSize;
    public:
        queue(){
            front=NULL;
            rear=NULL;
            queueSize=0;
        }
        void enqueue(int x){
            node* n = new node(x);
            if(front==NULL){
                rear=n;
                front=n;
                queueSize++;
                return;
            }
            rear->next=n;
            rear=n;
            queueSize++;
        }

        void dequeue(){
            if(front==NULL){
                cout<<"Queue empty"<<endl;
                return;
            }
            node* todelete=front;
            front=front->next;
            cout<<"Removed element is: "<<todelete->data<<endl;
            delete todelete;
            queueSize--;
        }

        void peek(){
            if(front==NULL){
                cout<<"Queue empty"<<endl;
                return;
            }
            cout<<"Front of the Queue is: "<<front->data<<endl;
        }
        
        bool isEmpty(){
            if(front==NULL){
                return true;
            }
            else{
                return false;
            }
        }
        void display(){
            node *temp = front;
            while (temp != NULL){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
        
        void size(){
            cout<<"Size of queue is: "<<queueSize<<endl;
        }
};


int main(){
    queue q;
    q.size();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.size();
    q.display();
    q.dequeue();
    q.display();
    q.size();
    return 0;
}