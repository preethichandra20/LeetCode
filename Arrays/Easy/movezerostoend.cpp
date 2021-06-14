#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={0,1,0,3,12};
    int n=nums.size();
    int noz=0;
     vector<int> result;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            noz++;
        }
        else{
            result.push_back(nums[i]);
        }
    }
    for(int i=0;i<noz;i++){
        result.push_back(0);
    }
        for(int i=0;i<n;i++){
            nums[i]=result[i];
        }
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }   }
