#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    string s="";
    while(n!=0)
    {
        int q=n/2;
        int r=n%2;
        if(r==0)
        s+='1';
        else
        s+='0';
        n=q;
    }
    reverse(s.begin(),s.end());
    int l=s.length();
    int sum=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='1')
        sum+=pow(2,l-1-i);
    }
    cout<<sum;
}