/*Should learn strings. Understood a lot about them now.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> A={"acabcddd","bcbdbcbd","baddbadb","cbdddcac","aacbcccd","ccccddda","cababaab","addcaccd"};
    vector<string> result;
    vector<int> count(26,INT_MAX);
    
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        string key=A[i];
        vector<int> temp(26,0);
        int l=key.length();
        for(int j=0;j<l;j++)
        {
            temp[key[j]-'a']++;
        }
        for(int k=0;k<26;k++)
        {
            count[k]=min(count[k],temp[k]);
        }
    }
    for(int i=0;i<26;i++)
    {
        int c=count[i];
        while(count[i]!=0)
        {
            result.push_back(string(1,i+'a'));
            count[i]--;
        }
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}