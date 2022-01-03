#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int countZeroes(int arr[],int n){

        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        auto ans = ob.countZeros(arr,n);
        cout<<ans<<endl;
    }
}