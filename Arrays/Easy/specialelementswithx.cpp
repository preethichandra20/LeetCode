#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={0,4,3,0,4};
    int n=nums.size();
    int j=0;
    int result;
    while(j<=n){
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=j){
                count++;
            }
        }
        if(count==j){
            result=j;
            break;
        }
        else{
            j=j+1;
        }
    }
    cout<<result;
}