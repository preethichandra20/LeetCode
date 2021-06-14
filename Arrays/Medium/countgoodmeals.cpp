#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> d={1,3,5,7};
    int n=d.size();
    int i=0,j=1,count=0;
    while(i<j)
    {
        int key=d[i]+d[j];
        if(key && key-1 ==0)
        count++;
        
    }
}