#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={4,2,3};
    int n=nums.size(),count=0,m=INT_MIN;
    int flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]>nums[i+1])
        ++count;
        if(count>=2)
        {
            //return false;
            flag=0;
            cout<<"NO";
            break;
        }
        if(count==1)
        {
            if(nums[i+1]<m)
            nums[i+1]=nums[i];
            else
            nums[i]=nums[i+1];
        }
        m=max(m,nums[i]);
    }
    if(flag==1)
    cout<<"Yes";
}