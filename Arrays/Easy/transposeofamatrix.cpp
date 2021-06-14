#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int m=matrix.size();
    int n=matrix[0].size();
    vector<vector<int>> result(n , vector<int> (m, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result[i][j]=matrix[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}