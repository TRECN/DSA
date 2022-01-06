#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* left;
  Node* right;
};

Node*  CreateNode(int data){
    Node* newNode = Node();
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
        return NULL;
    }
}