#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* left;
  Node* right;
};

Node*  CreateNode(int data){
    Node* newNode = new Node();
    if(!newNode){
        cout<<"Memory error"<<endl;
        return NULL;
    }
    newNode->data = data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

Node* InsertNode(Node* root, int data){
    if(root==NULL){
        root=CreateNode(data);
        return root;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp->left!=NULL)
            q.push(temp->left);
        else{
            temp->left = CreateNode(data);
            return root;
        }

        if(temp->right !=NULL)
            q.push(temp->right);
        else{
            temp->right =  CreateNode(data);
            return root;
        }
    }
}

void inorder(Node* temp){
    if(temp==NULL)
        return;
    
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

int main(){

    cout<<"Inorder traversal befor insertion: ";
    inorder(root);
    cout<<endl;

    int key = 12;
    root = InsertNode(root,key);

    cout<<"Inorder traversal after insertion: ";
    inorder(root);
    cout<<endl;
}
