#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printList(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

class Solution{
    public:
        Node* insertionSort(struct Node *head_ref){
            Node* temp=head_ref;
            
            while(temp!=NULL){
                Node *key=temp->next;
                while(key){
                    if(temp->data>key->data){
                        int t=temp->data;
                        temp->data=key->data;
                        key->data=t;
                    }
                    key=key->next;
                }
                temp=temp->next;
            }
            return head_ref;
        }
};

int main(){
    int t;
    cin>>t;
    
}