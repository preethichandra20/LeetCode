#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={4,3,2,7,8,2,3,1};
    int n=nums.size();
    vector<int> result;
    for(int i=0;i<n;i++){
        result.push_back(-1);
    }
    for(int i=0;i<n;i++){
        int temp=abs(nums[i])-1;
        result[temp]=0;
        }
        for(int i=0;i<n;i++){
            if(result[i]==-1)
            nums[i]=0;
        }
        result.clear();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            result.push_back(i+1);
        }
        for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
}