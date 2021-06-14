#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=3,n=3;
    vector<vector<int>> ops={};
    int p=ops.size();
    int q=ops[0].size();
    cout<<p;
    /*vector<vector<int>> vec(m,vector<int> (n,0));
    for(int i=0;i<p;i++)
    {
        int a=ops[i][0],b=ops[i][1];
        for(int j=0;j<a;j++)
        {
            for(int k=0;k<b;k++)
            {
                vec[j][k]++;
            }

        }
    }
    map<int,int> mp;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    mp[vec[i][j]]++;
}}
    map<int,int> :: iterator itr;
    int k=INT_MIN;
    for(itr=mp.begin();itr!=mp.end();itr++)
    cout<<itr->first<<" "<<itr->second<<endl;
    cout<<k;*/
}