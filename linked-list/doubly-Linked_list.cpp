#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* previous;

        node(int val){
            data = val;
            next=NULL;
            previous=NULL;
        }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
        head->previous=n;
    }
    head=n;
}

void insertAtTail(node* &head, int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}

void insertion(node* &head,int val, int pos){ 
    if(pos==1){
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    node* ptr = temp->next;
    

    for(int i=1; i<pos-1; i++){
        temp=ptr;
        ptr=ptr->next;
    }
    n->previous=temp;
    if(ptr!=NULL){
        n->next=ptr;
    }
    temp->next=n;
    if(ptr!=NULL){
        ptr->previous=n;
    } 
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head=head->next;
    head->previous=NULL;
    delete todelete;
}

void deleteAtTail(node* &head){
    node* todelete=head;
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        delete todelete;
        return;
    }
    else{
        while(todelete->next!=NULL){
            todelete=todelete->next;
        }
        todelete->previous->next=NULL;
        delete todelete;
    }
}

void deletion(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count =1;

    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->previous->next=temp->next;
    if(temp->next!=NULL){
        temp->next->previous=temp->previous;
    }
    
    delete temp;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head= NULL;
    insertion(head,3,1); //head,value,pos
    insertion(head,2,1);
    insertion(head,1,1);
    insertion(head,0,1);
    display(head);
    insertion(head,100,5);
    // insertion(head,200,6);
    display(head);
    return 0;
}
