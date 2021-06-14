#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,6,4,1};
    int n=arr.size();
    bool ans=false;
    for(int i=0;i<n-2;i++){
        if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
            ans=true;
        }
    }
    cout<<ans;
}