#include<iostream>
using namespace std;
int main(){
    int n,q,l,r,sum=0;
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
                int j=0,f=0,s=0;
                while(j<n){
                    if(a[i]==a[j]){
                        f++;
                        s+=a[i];
                        j++;
                        a[i]=0;
                    } 
                }
                if(f>=l&&f<=r){
                    sum+=s;
                }
                else{
                    s=0;
                    f=0;
                }
            }
        }     
    }   
}
       