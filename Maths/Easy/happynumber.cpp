#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s=to_string(n);
    int sum=0;
    while(1){
        int l=s.length();
        sum=0;
        for(int i=0;i<l;i++)
        {
            sum+=(s[i]-'0')*(s[i]-'0');
        }
        s=to_string(sum);
        if(sum==1 || sum==4 || sum==9)
        break;
    }
    bool ans=(sum==1);
    cout<<ans;
}