#include<bit/stdc++.h>
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
    while(temp!=Null){
        cout<<temp->data;
        temp=temp->next;
    }
}

class Solution{
    public:
        Node* insertionSort(struct Node *head_ref){
            Node* temp=head_ref;
            
            while(temp!=NULL){
                Node *key=temp->next;
                while(temp->data>key->data){

                }
            }
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
    }
}