#include<bits/stdc++.h>
using namespace std;
void swap(int* a,int* b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
void rotate(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(&matrix[i][j],&matrix[j][i]);
        }
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            swap(&matrix[i][j],&matrix[n-1-i][j]);
        }
    }

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


    }
    return 0;
}