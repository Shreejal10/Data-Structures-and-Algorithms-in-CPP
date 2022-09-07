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
    node* n=new node(val); 

    if(head==NULL){          
        n->next=n;          
        head=n; 
        return;
    }

    node* temp = head;
    while(temp->next!=head){ 
        temp = temp->next;
    }
    temp->next=n;           
    n->next=head;
    head=n;              
}

void insertAtTail(node* &head, int val){
    node* n = new node(val); 

    if(head==NULL){          
        insertAtHead(head,val);
        return;
    }

    node* temp = head;
    while(temp->next!=head){ 
        temp = temp->next;
    }
    temp->next=n;           
    n->next=head;
}

void insertion(node* &head, int val, int pos){
    node* n = new node(val);        
    if(pos==1){
        insertAtHead(head,val);
        return;
    }
    node* previous = head;
    for(int i=1; i<pos-1; i++){
        previous = previous->next;
    }
    n->next = previous->next;
    previous->next = n;
    
}

void deleteAtHead(node* &head){
    node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* toDelete=head;
    temp->next=head->next;
    head=head->next;
    delete toDelete;
}

void deletion(node* &head, int pos){
    if(head == NULL){
        return;
    }
    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    int count = 1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;  
    delete todelete;
}

void display(node* &head){
    node* temp =head;
    do{
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    while(temp != head);
    cout<<"HEAD"<<endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    deletion(head,4);
    display(head);
    return 0;
}