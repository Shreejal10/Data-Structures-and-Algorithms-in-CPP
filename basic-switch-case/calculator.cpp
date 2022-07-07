/*C++ Program to 
                Perform Addition when 1 is entered
                Perform Subtraction when 2 is entered
                Perform Multiplication when 3 is entered
                Perform Division when 4 is entered
*/
#include<iostream>
using namespace std;

int main() {
    int a,b,n;
    char ch;
    do {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        cout<<"Enter a number according to the calculation to perform: 1.Add 2.Subtract 3.Multiply 4.Divide: ";
        cin>>n;
        switch(n) {
            case 1:
                cout<<"Sum= "<<a+b<<endl;
                break;
            
            case 2:
                cout<<"Difference= "<<a-b<<endl;
                break;
            
            case 3:
                cout<<"Procduct= "<<a*b<<endl;
                break;
            
            case 4:
                if(b!=0){
                    cout<<"Quotient= "<<a/b<<endl;
                }
                else{
                    cout<<"Divide by zero exception"<<endl;
                }
                break;
            default:
                cout<<"Inavlid number entered"<<endl;    
        }
        cout<<"Do you wish to continue(y/n): ";
        cin>>ch;
    }
    while (ch=='y');
    return 0;
}