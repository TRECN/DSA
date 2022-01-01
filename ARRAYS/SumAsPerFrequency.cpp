#include<iostream>
using namespace std;
int main(){
    int n,q,l,r;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   
    cin>>q;
    while(q--){
        cin>>l;
        cin>>r;
        for(int i=0;i<n;i++){
            if(a[i]){
                int j=0,f;
                while(a[i]==a[j]){
                    f++;
                }
            }
        }     
    }   
}
       