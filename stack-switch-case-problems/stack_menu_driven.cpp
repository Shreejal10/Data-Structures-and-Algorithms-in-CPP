/*
	Menu driven program to peform the following stack operation:
	1.Press 1 for push operation
	2.Press 2 for pop operation
	3.Press 3 for peek operation
	4.Press 4 for display item in stack
*/
#include<iostream>
using namespace std;

class Stack{
	private:
		int* arr;
		int n;
		int top;
	public:
		Stack(){
			cout<<"Enter size of array: ";
			cin>>n;
			arr = new int[n];
			top=-1;
		}
		void push(int x){
			if(top==n-1){
				cout<<"\nStack Overflow."<<endl;
			}
			else{
				top++;
				arr[top]=x;
			}
		}
		void pop(){
			if(top==-1){
				cout<<"\nStack underflow."<<endl;
			}
			else{
				int item = arr[top];
				top--;
				cout<<"\nThe popped item is: "<<item<<endl;
			}
		}
		void peek(){
			if(top==-1){
				cout<<"\nStack is empty."<<endl;
			}
			else{
				cout<<"\nThe top of the stack is: "<<arr[top]<<endl;;
			}
		}
		void display(){
			if(top==-1){
				cout<<"\nStack is empty."<<endl;
			}
			else{
                cout<<"\nThe stack is: ";
				for(int i=top; i>=0; i--){
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
		}
};

int main(){
	Stack s;
	int choice;
	char ch;
	do{
		cout<<"Menu driven program to peform the following stack operation:"<<endl;
		cout<<"1.Press 1 for push operation"<<endl;
		cout<<"2.Press 2 for pop operation"<<endl;
		cout<<"3.Press 3 for peek operation"<<endl;
		cout<<"4.Press 4 for display item in stack"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				int x;
				cout<<"\nEnter element to push: ";
				cin>>x;
				s.push(x);
				break;
				
			case 2:
				s.pop();
				break;
				
			case 3:
				s.peek();
				break;
			
			case 4:
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