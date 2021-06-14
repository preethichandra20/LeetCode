#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> A={2};
    vector<int> B={1,3};
    int n1=A.size();
    int n2=B.size();
    int sa=0;
    int sb=0;
    for(int i=0;i<n1;i++){
        sa+=A[i];
    }
    for(int i=0;i<n2;i++){
        sb+=B[i];
    }
    vector<int> result;
    int diff=(sa-sb)/2;
    for(int i=0;i<n2;i++){
        int y=diff+B[i];
        if(find(A.begin(),A.end(),y)!=A.end()){
            result.push_back(y);
            result.push_back(B[i]);
            break;
        }
    }
    for(int i=0;i<2;i++){
        cout<<result[i]<<" ";
    }
}