#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,0,1,1,0,1};
    int n=nums.size();
    int ans=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==1)
        {
            count++;
        }
        else{
            ans=max(count,ans);
            count=0;
        }
    }
    if(count!=0)
    {
        ans=max(ans,count);
    }
    cout<<ans;
}