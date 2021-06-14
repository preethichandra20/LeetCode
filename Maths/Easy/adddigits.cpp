#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=38;
    int ans;
    if(num==0)
    ans=0;
    else if(num%9==0)
    ans=9;
    else{
        string s=to_string(num);
        int sum=0;
        for(int i=0;i<s.length();i++)
        sum+=s[i]-'0';
        ans=sum%9;
    }
    cout<<ans;
}