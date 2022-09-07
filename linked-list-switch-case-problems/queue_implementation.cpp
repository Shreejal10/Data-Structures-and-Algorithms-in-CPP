//Queue implementation using list
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

    public:
        queue(){
            front=NULL;
            rear=NULL;
        }
        void enqueue(int x){
            node* n = new node(x);
            if(front==NULL){
                rear=n;
                front=n;
                cout<<x<<" inserted into queue"<<endl;
                return;
            }
            rear->next=n;
            rear=n;
            cout<<x<<" inserted into queue"<<endl;
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
        }

        void display(){
            node *temp = front;
            cout<<"The queue is: ";
            while (temp != NULL){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
        
};


int main(){
    queue q;
    char ch;
    int choice;
    do{
        cout<<"\nMenu diven program to perform the following task: "<<endl;
        cout<<"Press 1 to enqueue element"<<endl;
        cout<<"Press 2 to dequeue element"<<endl;
        cout<<"Press 3 to display queue"<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        switch(choice){ 
            case 1:
                int x;
                cout<<"Enter element to enter: ";
                cin>>x;
                q.enqueue(x);
                break;

            case 2:
                q.dequeue();
                break;
            
            case 3:
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