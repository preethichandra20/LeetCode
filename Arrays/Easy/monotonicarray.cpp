#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> A={1,3,2};
    int n=A.size();
    int isIn=1;
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            isIn=0;
            break;
                }
    }
    int isDec=1;
    for(int i=0;i<n-1;i++){
        if(A[i]<A[i+1]){
            isDec=0;
            break;
        }
    }
    bool ans=isIn||isDec;
    cout<<ans;
}
