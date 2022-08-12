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
}

void insertAtTail(node* &head, int val){
    node* n = new node(val); //Prepare a new node(n)

    if(head==NULL){          //If linked list is empty, new node(n) will be head node
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){ //Find the last node
        temp = temp->next;
    }
    temp->next=n;           //Insert new node(n) after last node(at the end)
}

void insertNode(node* &head, int val, int pos){
    node* n = new node(val);        //Create a new node
    if(pos==1){
        n->next=head;
        head=n;
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
    node* toDelete=head;
    head=head->next;
    delete toDelete;
}

void deletion(node* &head, int val){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next=temp->next->next;

    delete toDelete;
}

void deleteNode(node* &head, int pos){
    if(head == NULL){
        return;
    }
    if(pos==1){
        head=head->next;
        return;
    }
    node* previous = head;
    for(int i=1; i<pos-1; i++){
        previous=previous->next;
    }
    previous->next=previous->next->next;
}

void search(node* head, int val){
    node* temp = head;
    int pos =1;
    while(temp!=NULL){
        if(temp->data==val){
            cout<<"Element found at position: "<<pos<<endl;
            return;
        }
        temp=temp->next;
        pos++;
    }
    if(temp == NULL){
        cout<<"Element not found."<<endl;
    }
}

void display(node* &head){
    node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void getLength(node* &head){
    int count=0;
    node* temp;
    temp = head;
    while(temp != 0){
        count++;
        temp=temp->next;
    }
    cout<<"Length: "<<count<<endl;
}

node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

int main(){
    
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    getLength(head);

    node* newhead = reverseRecursive(head);
    display(newhead);
    
    // search(head,4);

    // deleteNode(head,3); //pass deleteNode(head,position)
    // display(head);

    // insertNode(head,0,0); //pass insertNode(head,data,position)
    // display(head);

    // insertAtHead(head,0);
    // display(head);

    // deletion(head,2);
    // display(head);
    
    // deleteAtHead(head);
    // display(head);

    return 0;

}