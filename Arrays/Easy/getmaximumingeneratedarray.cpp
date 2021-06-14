#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=2;
    vector<int> temp(n+1);
    int ans;
    if(n==0)
    {
        ans=0;
    }
    else if(n==1)
    {
        ans=1;
    }
    else{
        temp[0]=0;
        temp[1]=1;
       for(int i=2;i<n+1;i++)
       {
           if(i%2==0)
           {
               temp[i]=temp[i/2];
           }
           else{
               temp[i]=temp[i/2]+temp[(i/2)+1];
           }
       }
        ans=*max_element(temp.begin(),temp.end());
    }
    cout<<ans;
}