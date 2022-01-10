#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> kLargest(int arr[],int n,int k){
            sort(arr,arr+n);
            vector<int> a;
            int j=1;
            while(k--){
                a.push_back(arr[n-j]);
                j++;

            }
            return a;
        }
        
};
