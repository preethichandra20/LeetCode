#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={7,2,5,3};
    int n=arr.size();
    /*bool ans=false;
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        int flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==2*key || key%arr[j]==0)
            {
                flag=1;
                ans=true;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    cout<<ans;*/
    bool ans=false;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(arr[i]*2)!=mp.end())
        {
            ans=true;
            break;
        }
        else if(arr[i]%2==0 && mp.find(arr[i]/2)!=mp.end())
        {
            ans=true;
            break;
        }
        mp[arr[i]]++;
    }
    cout<<ans;
}