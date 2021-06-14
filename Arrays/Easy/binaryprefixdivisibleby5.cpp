#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A={1,1,1};
    int n=A.size();
    string s="";
    vector<bool> result;
    int key=0;
    for(int i=0;i<n;i++)
    {
        key+=A[i];
        if(key%5==0)
        {
            result.push_back(true);
        }
        else{
            result.push_back(false);
        }
        key=2*key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
}