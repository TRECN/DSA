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

class Solution{

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for(int i=0;i<n-1;i++){
            cin>>data;
            tail->next=new Node(data);
            tail=tail->next;
        }
        Solution ob;
        cout<<ob.getCount(head)<<endl;
    }
}