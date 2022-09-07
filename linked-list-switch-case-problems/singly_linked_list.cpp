/*Wap to perform following operations in singly linked list
1.Insert node at beginning of list
2.Insert node at specific position
3.Insert node at end of list
4.Delete node from beginning of list
5.Delete node from specific position
6.Delete node at end of end of list
7.traverse the list
*/
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
void insertAtHead(node* &head, int val){
    node* n=new node(val); //Prepare a new node(n)
    n->next=head;          //Put it in front of current head
    head=n;                //Move headd of the list to point of new node(n)
    cout<<val<<" inserted at beginning of list"<<endl;
}
void insertAtTail(node* &head, int val){
    node* n = new node(val); //Prepare a new node(n)
    if(head==NULL){          //If linked list is empty, new node(n) will be head node
        head=n;
        cout<<val<<" inserted at end of list"<<endl;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){ //Find the last node
        temp = temp->next;
    }
    temp->next=n;           //Insert new node(n) after last node(at the end)
    cout<<val<<" inserted at end of list"<<endl;
}
void insertNode(node* &head, int val, int pos){
    node* n = new node(val);        //Create a new node
    if(pos==1){
        n->next=head;
        head=n;
        cout<<val<<" inserted at "<<pos<<" position of list"<<endl;
        return;
    }
    node* previous = head;
    for(int i=1; i<pos-1; i++){
        previous = previous->next;
    }
    n->next = previous->next;
    previous->next = n;
    cout<<val<<" inserted at "<<pos<<" position of list"<<endl;
}
void deleteAtHead(node* &head){
    node* toDelete=head;
    head=head->next;
    cout<<toDelete->data<<" deleted from beginning of list"<<endl;
    delete toDelete;
}
void deleteAtTail(node* &head){
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        node* temp = head;
        head=NULL;
        cout<<temp->data<<" deleted from beginning of list"<<endl;
        delete temp;
    }
    else{
        node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        cout<<temp->next->data<<" deleted from beginning of list"<<endl;
        delete temp->next;
        temp->next=NULL;
    }
}
void deleteNode(node* &head, int pos){
    if(head == NULL){
        return;
    }
    if(pos==1){
        cout<<head->data<<" deleted from beginning of list"<<endl;
        head=head->next;
        return;
    }
    node* previous = head;
    for(int i=1; i<pos-1; i++){
        previous=previous->next;
    }
    cout<<previous->next->data<<" deleted from "<<pos<<" position of list"<<endl;
    previous->next=previous->next->next;
}
void display(node* &head){
    node* temp =head;
    cout<<"The list is: ";
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head = NULL;
    int choice,data,pos;
    char c;
    do{
        cout<<"\nMenu driven program to perform the following tasks:"<<endl;
        cout<<"1.Insert node at beginning of list"<<endl;
        cout<<"2.Insert node at specific position"<<endl;
        cout<<"3.Insert node at end of list"<<endl;
        cout<<"4.Delete node from beginning of list"<<endl;
        cout<<"5.Delete node from specific position"<<endl;
        cout<<"6.Delete node at end of end of list"<<endl;
        cout<<"7.Traverse the list"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter data to enter at the beginning of list: ";
                cin>>data;
                insertAtHead(head,data);
                break;

            case 2:
                cout<<"Enter data to enter at the list and its position: ";
                cin>>data>>pos;
                insertNode(head,data,pos);
                break;
                break;

            case 3:
                cout<<"Enter data to enter at the end of list: ";
                cin>>data;
                insertAtTail(head,data);
                break;

            case 4:
                deleteAtHead(head);
                break;

            case 5:
                cout<<"Enter position to delete node from: ";
                cin>>pos;
                deleteNode(head,pos);
                break;

            case 6:
                deleteAtTail(head);
                break;

            case 7:
                display(head);
                break;

            default:
                cout<<"Wrong choice entered!!!!"<<endl;
                break;
        }
        cout<<"Do you want to conitnue(y/n): ";
        cin>>c;
        cout<<endl;
    }while(c=='y');
    cout<<"--------------------------END---------------------------"<<endl;
    return 0;
}