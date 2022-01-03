#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> kLargest(int arr[],int n,int k){
            sort(arr,arr+n);
            vector<int> a(k);
            for(int i=n-1,j=0;i>0;i--,j++){
                if(k--){
                    break;
                }
                a[j]=arr[i];
            }
            return a;
        }
        
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr,n,k);
        for(auto x:ans){
            cout<<x<<" ";

        }
        cout<<endl;
    }
}