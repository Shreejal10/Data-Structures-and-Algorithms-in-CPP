//Wap to implement stack using list
#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
class Stack{
    private: 
        node* top;
    public:
        Stack(){
            top=NULL;
        }
        void push(int x){
            node* temp = new node();
            temp->data = x;
            temp->next = top;
            top = temp;
            cout<<top->data<<" pushed into stack"<<endl;
        }
        void pop(){
            if(top==NULL){
                cout<<"Stack is Empty"<<endl;
                return;
            }
            node* temp = top;
            top=temp->next;
            temp->next=NULL;
            cout<<"The removed element is: "<<temp->data<<endl;
            delete temp;
        }

        void display(){
            node *temp = top;
            cout<<"The stack is: ";
            while (temp != NULL){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};
int main(){
    Stack s;
    int choice;
	char ch;
	do{
		cout<<"\nMenu driven program to peform the following stack operation:"<<endl;
		cout<<"1.Press 1 for push operation"<<endl;
		cout<<"2.Press 2 for pop operation"<<endl;
		cout<<"3.Press 3 for display item in stack"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				int x;
				cout<<"Enter element to push: ";
				cin>>x;
				s.push(x);
				break;
				
			case 2:
				s.pop();
				break;
			
			case 3:
				s.display();
				break;
			
			default:
				cout<<"Wrong choice try again.";
		}
		cout<<"Do you want to continue(y/n): ";
		cin>>ch;			
	}while(ch=='y');
    return 0;
}