#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> words={"hello","world","leetcode"};
    string chars="welldonehoneyr";
    vector<int> count(26,0);
    int l=chars.length();
    for(int i=0;i<l;i++)
    {
        char val=chars[i];
        count[val-'a']++;
    }
    int n=words.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        vector<int> temp(26,0);
        string key=words[i];
        int len=key.length();
        for(int j=0;j<len;j++)
        {
            temp[key[j]-'a']++;
        }
        int t=0;
        for(int k=0;k<26;k++)
        {
            if(temp[k]<=count[k])
            {
                t++;
            }
            else
            break;
        }
        if(t==26)
        {
            sum+=len;
        }
    }
    cout<<sum;
}