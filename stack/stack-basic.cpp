#include<iostream>
using namespace std;

class stack{
    private:
        int* arr;
        int top;
        int n;

    public:
        stack(){
            cout<<"Enter size of stack: ";
            cin>>n;
            arr=new int[n];
            top=-1;
        }

        void push(int x){
            if(top==n-1){
                cout<<"stack overflow"<<endl;
            }
            else{
                top++;
                arr[top]=x;
            }
        }

        int pop(){
            if(top==-1){
                cout<<"Stack underflow"<<endl;
                return -1;
            }
            else{
                int value=arr[top];
                top--;
                return value;
            }
        }

        int peek(){
            if(top==-1){
                cout<<"No element in stack"<<endl;
                return -1;
            }
            else{
                return arr[top];
            }
        }

        void empty(){
            if(top==-1){
                cout<<"The stack is empty"<<endl;
            }
            else{
                cout<<"The stack is not empty"<<endl;
            }
        }
};




int main() {
    stack st;
    cout<<"Initially: ";st.empty();
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"After pushing: ";st.empty();
    cout<<"The top of the stack is: "<<st.peek()<<endl;
    cout<<"The popped element is: "<<st.pop()<<endl;
    cout<<"After poping the top of the stack is: "<<st.peek()<<endl;
    return 0;
}