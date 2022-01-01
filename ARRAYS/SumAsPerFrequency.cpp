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
        l=0,r=0;

        cin>>l;
        cin>>r;
        for(int i=0;i<n;i++){
            int temp=a[i];
            if(temp){
                int j=0,f=0,s=0;
                while(j<n){
                    if(temp==a[j]){
                        f++;
                        s+=a[j];
                        a[j]=0;
                        
                    } 
                    j++;
                }
                if(f>=l&&f<=r){
                    sum+=s;
                }
                
            }
        }
        cout<<sum<<endl; 
        sum=0;    
    }   
}
       