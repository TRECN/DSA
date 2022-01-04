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


int main(){
    int t;
    cin>>t;
    while(t--){
        int N,m,n;
        cin>>N>>m>>n;
        Node *head=NULL;
        Node *temp=head;

        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            if(head==NULL){
                head=temp=new Node(data);
            }
            else{
                temp->next=new Node(data);
                temp=temp->next
            }
        }

    }
}