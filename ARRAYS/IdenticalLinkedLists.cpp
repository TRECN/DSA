#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

bool areIdentical(struct Node* a,struct Node *b);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2, tmp, d1, d2;
        struct Node* head1 = NULL, *tail1=NULL;
        struct Node* head2 = NULL, *tail2=NULL;
        cin>>n1;
        cin>>d1;
        head1 = new Node(d1);
        tail1 = head1; 
        while(n1-->1){
            cin>>tmp;
            tail1->next=new Node(tmp);
            tail1 = tail1->next;
        }
      }
        areIdentical(head1, head2)?cout<<"Identical"<<endl:cout<<"Not identical"<<endl;

    }
    return 0;
}

bool areIdentical(struct Node* head1,struct Node *head2){
    Node* temp1 = head1;
    Node* temp2 = head2; 
    while(true){
        if((temp1==NULL&&temp2!=NULL)||(temp1!=NULL&&temp2==NULL))
            return 0;
        if(temp1==NULL&&temp2==NULL)
            return 1;
        if(temp1->data!=temp2->data)
            return 0;

        temp1=temp1->next;
        temp2=temp2->next;
    }
    
}