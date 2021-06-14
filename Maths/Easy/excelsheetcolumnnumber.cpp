#include<bits/stdc++.h>
using namespace std;
int main()
{
    string cT="AAA";
    int l=cT.length();
    long long int res=0;
    for(int i=0;i<l;i++)
    {
        res+=pow(26,l-i-1)*(cT[i]-'A'+1);
    }
    cout<<res;
}