
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