#include<bits/stdc++.h> 
using namespace std; 

#define ll long long

ll f[1000001],sum[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,ans,l,r,q;
    cin>>n;
    ll a[n];
    for(i=0;i<100000;i++){
        sum[i]=0;
        f[i]=0;
    }
    for(i=0;i<n;i++){
        cin>>a[i];
        f[a[i]]++;
    }
    for(i=0;i<n;i++){
        sum[f[a[i]]]+=a[l];
    }
    for(i=2;i<=1000000;i++){
        sum[i]=sum[i]+sum[i-1];
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>l>>r;
        ans=sum[r];
        if(l>0){
            ans=ans-sum[l-1];
        }
        cout<<ans<<endl;
    }
}