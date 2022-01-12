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




class Solution{
    public:
        Node* reverseBetween(Node* head,int m,int n){
            Node* temp=head;
            int i=1;
            Node* M;
            Node* N;
            Node* X=temp;
            Node* N1;
            while(temp!=NULL){
                if(i<m){
                    X=temp;
                }
                if(i==m){
                    M=temp;
                }
                if(i==n){
                    N=temp;
                }

                i++;
                temp=temp->next;
            }
            N1=N->next;
            if(m==1){
                N->next=NULL;
                reverse(M);
                head=N;
                M->next=N1;
            }
            else{
                X->next=NULL;
                N->next=NULL;
                reverse(M);
                X->next=N;
                M->next=N1;
            }
            
            return head;
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