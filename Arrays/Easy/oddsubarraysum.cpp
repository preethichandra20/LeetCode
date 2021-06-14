#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix={{3,7,8},
    {9,11,13},{15,16,17}};
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> result;
        int ans=INT_MIN;
        for(int i=0;i<m;i++)
        {
            int min=INT_MAX;
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]<=min)
                {
                    min=matrix[i][j];
                }
            }
            if(min>=ans)
                ans=min;
        }
        cout<<ans<<endl;
        int ans1=INT_MAX;
         for(int i=0;i<n;i++)
        {
            int max=INT_MIN;
            for(int j=0;j<m;j++)
            {
                if(matrix[j][i]>=max)
                {
                    max=matrix[j][i];
                }
            }
            if(max<=ans1)
                ans1=max;
            
        }
        cout<<ans1<<endl;
        if(ans1==ans)
        result.push_back(ans); 
        cout<<result.size();
        for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
}