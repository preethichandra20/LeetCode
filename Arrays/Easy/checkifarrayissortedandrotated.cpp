#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={2,1,3,4};
    int n=nums.size();
    vector<int> B;
    for(int i=0;i<n;i++)
    {
        B.push_back(nums[i]);
    }
    sort(nums.begin(),nums.end());
    int key=B[0];
    int x;
    for(int i=0;i<n;i++){
        if(nums[i]==key){
            x=i;
        }
    }
    bool ans=true;
    for(int i=0;i<n;i++){
        if(B[i]!=nums[(i+x)%n]){
            ans=false;
            break;
        }
    }
    cout<<ans;
}