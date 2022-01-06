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
    }
    newNode->data = data;
    newNode->left=newNode->right=NULL;
}