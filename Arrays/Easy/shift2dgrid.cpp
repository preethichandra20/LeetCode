#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> grid={{1,2,3},{4,5,6},{7,8,9}};
    int k=1;
    int m=grid.size();
    int n=grid[0].size();
    vector<vector<int>> result={{1,2,3},{4,5,6},{7,8,9}};
    while(k!=0){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j==n-1 && i==m-1){
                    result[i][j]=grid[0][0];
                }
               else if(j==n-1){
                    result[i][j]=grid[i+1][0];
                }
                else{
                    result[i][j]=grid[i][j+1];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=result[i][j];
            }
        }
        k--;
    }
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
}