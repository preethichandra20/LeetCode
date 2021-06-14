#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,0,0,0,1,0,0,1};
    int k=2;
    int n=nums.size();
    int dis=0;
    int frst1=-1;
    bool ans=true;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            if(frst1==-1){
                frst1=i;
                dis=i;
            }
            else{
                dis=abs(dis-i);
                if(dis<k){
                    ans=false;
                }
                else{
                    dis=i;
                }
            }
        }
        if(ans==false)
        break;
    }
    cout<<ans;
}