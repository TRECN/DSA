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
    public:
        int getCount(struct Node* head){
            int count=0;
            while(head!=NULL){
                ++count;
                head=head->next;
            }
            return count;
        }
};

int main(){
    int t;
    cin>>t;
  
}