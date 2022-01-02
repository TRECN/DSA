#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,l,r,sum=0;
    cin>>n;
    vector<int> a1;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        a1.push_back(input);
    }   
    cin>>q;
    while(q--){
        vector<int> a(a1);
        
        cin>>l;
        cin>>r;
        for(int i=0;i<n;i++){
            int temp=a[i];
            
        }
        cout<<sum<<endl; 
        sum=0;    
    }   
}
       