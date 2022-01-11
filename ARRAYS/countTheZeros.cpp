#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int countZeroes(int arr[],int n){
            int c=0;
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    c++;
                }
            }
            return c;
        }
};

