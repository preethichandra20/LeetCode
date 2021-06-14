#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=22;
    string s="";
    while(n!=0)
    {
        if(n%2==0)
        s+='0';
        else
        s+='1';
        n=n/2;
    }
    int l=s.length();
    int dis=INT_MIN;
    int flag=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<l;i++)
    {
        if(s[i]=='1')
        {
            flag=i-flag;
            if(flag>=dis)
            {
                dis=flag;
            }
            flag=i;
        }
    }
    cout<<dis;
}