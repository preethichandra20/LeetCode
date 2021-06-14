#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=9999;
    string s=to_string(num);
    int n=s.length();
    int m=INT_MIN;
    for(int i=0;i<n;i++)
    {
        string k=s;
        if(k[i]=='9')
        {
            k[i]='6';
        }
        else if(k[i]=='6')
        {
            k[i]='9';
        }
        int key=stoi(k);
        if(m<=key)
        {
            m=key;
        }
    }
    cout<<m;
}