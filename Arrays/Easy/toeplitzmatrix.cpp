#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix={{18},{66}};
    int m=matrix.size();
    int n=matrix[0].size();
    int ans=1;
    for(int i=0;i<m;i++){
        int key=matrix[i][0];
        int k=i+1;
        int l=1;
        while(l<=n-2){
            int val=matrix[k][l];
            cout<<val<<endl;
            k++;
            l++;
            if(val!=key){
                ans=0;
            }
        }
        if(ans==0){
            break;
        }
    }
    if(ans!=0){
        for(int i=0;i<m;i++){
            int key=matrix[i][n-1];
            cout<<key<<endl;
            int k=i-1;
            int l=n-2;
            while(k>=0){
                int val=matrix[k][l];
                cout<<val<<endl;
                k--;
                l--;
                if(val!=key){
                    ans=0;
                    break;
                }
            }
            if(ans==0){
                break;
            }
        }
    }
    cout<<bool(ans);
}