#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> releaseTimes={12,23,36,46,62};
    string keysPressed="spuda";
    //multimap<int,char,greater<int>> slKey;
    int n=keysPressed.length();
    int val=0;
    int m=INT_MIN;
    string ans="";
    for(int i=0;i<n;i++){
        int k=releaseTimes[i]-val;
        val=releaseTimes[i];
        if(k>m){
            m=k;
            ans="";
            ans+=keysPressed[i];
        }
        else if(k==m){
            m=k;
            if(ans.length()!=0){
                if(ans[0]<=keysPressed[i]){
                    ans="";
                    ans+=keysPressed[i];
                }

            }
            else if(ans.length()==0){
                ans+=keysPressed[i];
            }
        }
    }
    cout<<ans;

}