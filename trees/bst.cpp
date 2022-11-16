#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node *root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }
    else{
        //val > root->data
        root->right=insertBST(root->right, val);
    }
    return root;
}

Node* search(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key){
        return search(root->left, key);
    }

    //data < key
    return search(root->right, key);
}

Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node* deleteNode(Node* root, int key){
    if(key < root->data){
        root->left =  deleteNode(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteNode(root->right, key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root = NULL;
    root = insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 6);

    cout<<"The BST Traversal is: ";
    inorder(root);
    cout<<endl;

    if(search(root, 5) == NULL){
        cout<<"Key doesnt exist"<<endl;
    }
    else{
        cout<<"Key exists"<<endl;
    }

    root = deleteNode(root,2);
    cout<<"After deletion: ";
    inorder(root);
    return 0;
}