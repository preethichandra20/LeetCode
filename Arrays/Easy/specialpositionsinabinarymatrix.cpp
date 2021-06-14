#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat={{1,0,0},{0,0,1},{1,0,0}};
    int m=mat.size();
    int n=mat[0].size();
    int noofones=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            int key=mat[i][j];
            if(key==1){
                bool flag=true;
                int r=i;
                int c=j;
                for(int k=0;k<m;k++){
                    if(mat[k][c]!=0 && k!=r){
                        flag=false;
                        break;
                    }
                }
                if(flag!=false){
                    for(int k=0;k<n;k++){
                        if(mat[r][k]!=0 && k!=c){
                            flag=false;
                            break;
                        }
                    }
                }
                if(flag==true){
                    noofones++;
                }
            }
        }
    }
    cout<<noofones;
}