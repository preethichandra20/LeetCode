#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums={{1,2},{3,4}};
    int r=1;
    int c=4;
    int m=nums.size();
    int n=nums[0].size();
    vector<vector<int>> result(r,vector<int>(c,0));
    if(m*n==r*c){
        vector<int> key;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                key.push_back(nums[i][j]);
            }
        }
        int p=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result[i][j]=key[p];
                p++;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}