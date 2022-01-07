#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};


void printList(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int N,m,n;
        cin>>N>>m>>n;
        Node *head=NULL;
        Node *temp=head;

        for(int i=0;i<N;i++){
            int data;
            cin>>data;
            if(head==NULL){
                head=temp=new Node(data);
            }
            else{
                temp->next=new Node(data);
                temp=temp->next;
            }
        }
        Solution ob;
        Node* newhead=ob.reverseBetween(head,m,n);
        printList(newhead);
        cout<<"\n";
    }
}