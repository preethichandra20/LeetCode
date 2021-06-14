#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,2,3,1};
    int k=3;
    int n=nums.size();
    map<int,int> mp;
    bool ans=false;
    for(int i=0;i<n;i++)
    {
       if(mp.find(nums[i])!=mp.end() && abs(mp[nums[i]]-i)<=k)
       {
           ans=true;
           break;
       }
       mp[nums[i]]=i;
    }
    cout<<ans;
}