#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={9,6,4,2,3,5,7,0,1};
    int n=nums.size();
    int sum=0;
    int actualsum=n*(n+1)/2;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    int missingelement=actualsum-sum;
    cout<<missingelement;
}