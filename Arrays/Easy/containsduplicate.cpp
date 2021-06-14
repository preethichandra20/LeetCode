#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,3,1};
    int n=nums.size();
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    map<int,int> ::iterator itr;
    bool ans=false;
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second>1)
        {
            ans=true;
            break;
        }
    }
    cout<<ans;
}