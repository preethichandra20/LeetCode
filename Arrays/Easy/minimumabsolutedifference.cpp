#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={40,11,26,27,-20};
    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector<vector<int>> result;
    int diff=abs(arr[1]-arr[0]);
    for(int i=1;i<n-1;i++)
    {
        int d=abs(arr[i+1]-arr[i]);
        if(d==diff)
        {
            result.push_back({arr[i],arr[i+1]});
        }
        if(d<diff){
            diff=d;
            result.clear();
            result.push_back({arr[i],arr[i+1]});
        }
    }
    int m=result.size();
    int n1=result[0].size();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}