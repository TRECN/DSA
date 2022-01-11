
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char nuts[n],bolts[n];
        for(int i=0;i<n;i++){
            cin>>nuts[i];
        }
        for(int i=0;i<n;i++){
            cin>>bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts,bolts,n);
        for(int i=0;i<n;i++){
            cout<<nuts[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<bolts[i]<<" ";
        }
        cout<<endl;
    }
}