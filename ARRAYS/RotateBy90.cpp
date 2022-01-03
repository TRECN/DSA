#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix){
    int n
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>matrix(n);
        for(int i=0;i<n;i++){
            matrix[i].resize(n);
            for(int j=0;j<n;j++){
                cin>>matrix[i][j];
            }
        }
        rotate(matrix);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }

    }
    return 0;
}