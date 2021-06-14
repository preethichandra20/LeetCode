#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=20;
    int ans;
    if(n<=7)
    {
        ans=(n*(n+1))/2;
    }
    else{
        ans=(7*(7+1))/2;
        int p=2,temp=2;
        for(int i=8;i<=n;i++)
        {
                ans+=p;
                if(i%7==0)
                {
                    temp=temp+1;
                    p=temp;
                }
                else
                p++;

        }
    }
    cout<<ans;
}