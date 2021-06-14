#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=1;
    int y=1;
    vector<vector<int>> points={{1,2},{3,3},{3,3}};
    int m=points.size();
    int n=points[0].size();
    int result=-1;
    int d=INT_MAX;
    for(int i=0;i<m;i++)
    {
        int ind=i;
        int x1=points[i][0];
        int y1=points[i][1];
        int d_new;
        if(x1==x || y1==y){
            d_new=abs(x1-x)+abs(y1-y);
            if(d_new<=d){
                d=d_new;
                result=ind;
            }
        }
    }
    cout<<result;
}