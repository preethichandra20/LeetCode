#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="AAAAAAAAAAA";
    int l=s.length();
    map<string,int> mp;
    for(int i=0;i<=l-10;i++)
    {
        mp[s.substr(i,10)]++;
    }
    map<string,int> ::iterator itr;
        vector<string> result;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second>1)
                result.push_back(itr->first);
        }
        for(int i=0;i<result.size();i++)
        cout<<result[i]<<endl;
}