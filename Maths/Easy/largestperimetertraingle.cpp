#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={3,2,3,4};
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int ans;
    for(int i=n-1;i>=2;i--)
    {
        if(nums[i-2]+nums[i-1]>nums[i])
        {
            ans=nums[i-2]+nums[i-1]+nums[i];
            break;
        }
    }
    cout<<ans;
}