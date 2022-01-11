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



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head = NULL;
        Node *temp = head;
        
        for(int i=0;i<n;i++){
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
        head=ob.insertionSort(head);
        printList(head);
        cout<<endl;
        cout<<endl;
    }
}