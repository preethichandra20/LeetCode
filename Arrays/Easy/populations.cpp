#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> logs={{1950,1961},{1956,1959}};
    /*vector<int>res(11,0);*/
    int m=logs.size();
    cout<<logs[0][0]<<" "<<logs[0][1]<<" "<<logs[1][0]<<" "<<logs[1][1];
    for(int i=0;i<m;i++)
    {
        int k=logs[i][0]-1950;
        int l=logs[i][1];
        cout<<k<<" "<<l<<endl;
    }
    /*for(int i=1;i<101;i++)
        {
         res[i]=res[i]+res[i-1];
        }
        int min=INT_MIN,ans;
        for(int i=0;i<101;i++)
        {
            if(res[i]>min)
            {
                min=res[i];
                ans=1950+i;
            }
        }
        cout<<ans;*/
}