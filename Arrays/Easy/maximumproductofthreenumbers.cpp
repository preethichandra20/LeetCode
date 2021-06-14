#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> nums={-100,-98,-1,2,3,4};
    int n=nums.size();
    int prod=nums[0]*nums[1]*nums[2];
    int key=nums[0]*nums[1]*nums[2];
    for(int i=3;i<n;i++)
    {
        key=key/nums[i-3];
        key=key*nums[i];
        if(prod<=key)
        {
            prod=key;
        }
    }
    cout<<prod;
}