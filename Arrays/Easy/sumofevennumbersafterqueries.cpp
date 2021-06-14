#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> A={1,2,3,4};
    vector<vector<int>> queries={{1,0},{-3,1},{-4,0},{2,3}};
    int m=queries.size();
    int n=A.size();
    vector<int> result(m,0);
    int sum=0;
    for(int i=0;i<n;i++){
        if(A[i]%2==0)
        sum+=A[i];
    }
    for(int i=0;i<m;i++){
        int index=queries[i][1];
        int val=queries[i][0];
        if(A[index]%2==0){
            sum=sum-A[index];
            A[index]+=val;
            if(A[index]%2==0){
                sum+=A[index];
            }
        }
        else{
            A[index]+=val;
            if(A[index]%2==0)
            sum+=A[index];
        }
        result[i]=sum;
    }
    for(int i=0;i<m;i++){
        cout<<result[i]<<" ";
    }
}