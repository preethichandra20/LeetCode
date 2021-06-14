#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1={2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2={2,1,4,3,9,6};
    map<int,int> mp1;
    map<int,int> mp2;
    int n1=arr1.size();
    for(int i=0;i<n1;i++)
    {
        mp1[arr1[i]]++;
    }
    int n2=arr2.size();
    for(int i=0;i<n2;i++)
    {
        mp2[arr2[i]]++;
    }
    map<int,int> ::iterator itr;
    for(itr=mp1.begin();itr!=mp1.end();itr++)
    {
        if(mp2[itr->first]==0)
        {
            arr2.push_back(itr->first);
        }
    }
    vector<int> result;
    for(int i=0;i<mp1.size();i++)
    {
        int key=arr2[i];
        int count=mp1[key];
        while(count!=0)
        {
            result.push_back(key);
            count--;
        }
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}