#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={-1,1,-6,4,5,-6,1,4,1};
    int n=nums.size();
    map<int,int,greater<int>> mp;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }
    multimap<int,int> mp1;
    map<int,int>:: iterator itr;
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        mp1.insert({itr->second,itr->first});
    }
    multimap<int,int>:: iterator itr1;
    nums.clear();
    for(itr1=mp1.begin();itr1!=mp1.end();itr1++)
    {
        int key=itr1->first;
        int val=itr1->second;
        while(key!=0)
        {
            nums.push_back(val);
            key--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}