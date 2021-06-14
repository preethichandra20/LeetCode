#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence="leetcode";
    int n=sentence.length();
    vector<int> count(26,0);
    for(int i=0;i<n;i++){
        int j=sentence[i];
        count[j-97]++;
    }
    bool ans=true;
    for(int i=0;i<26;i++){
        if(count[i]==0)
    {
        ans=false;
        break;
    }
    }
    cout<<ans;
}