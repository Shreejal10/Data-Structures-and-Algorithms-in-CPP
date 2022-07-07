/*C++ Program to display
                        Sunday when 1 is entered
                        Monday when 2 is entered
                        Tuesday when 3 is entered
                        Wednesday when 4 is entered
                        Thursday when 5 is entered
                        Friday when 6 is entered
                        Saturday when 7 is entered
                        
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    char ch;
    do {
        cout<<"Enter a number from 1-7: ";
        cin>>n;
        switch(n) {
            case 1:
                cout<<"Sunday"<<endl;
                break;
            
            case 2:
                cout<<"Monday"<<endl;
                break;
            
            case 3:
                cout<<"Tuesday"<<endl;
                break;
            
            case 4:
                cout<<"Wednesday"<<endl;
                break;
            
            case 5:
                cout<<"Thursday"<<endl;
                break;
            
            case 6:
                cout<<"Friday"<<endl;
                break;
            
            case 7:
                cout<<"Saturday"<<endl;
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