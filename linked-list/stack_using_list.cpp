#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
};

class Stack{
    private: 
        node* head;
        int stackSize;
    public:
        Stack(){
            head=NULL;
            stackSize=0;
        }
        void push(int x){
            node* temp = new node();
            temp->data = x;
            temp->next = head;
            head = temp;
            stackSize++;
        }

        void pop(){
            if(head==NULL){
                cout<<"Stack is Empty"<<endl;
                return;
            }
            node* temp = head;
            head=temp->next;
            temp->next=NULL;
            cout<<"The removed element is: "<<temp->data<<endl;
            delete temp;
            stackSize--;
        }

        void top(){
            if(head==NULL){
                cout<<"Stack is Empty"<<endl;
                return;
            }
            cout<<"Top of the stack is: "<<head->data<<endl;
        }

        void display(){
            node *temp = head;
            while (temp != NULL){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }

        void size(){
            cout<<"Size of stack is: "<<stackSize<<endl;
        }
};

int main(){
    Stack s;
    s.size();
    s.push(1);
    s.push(2);
    s.size();
    s.top();
    s.display();
    s.pop();
    return 0;
}
