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
    }
}