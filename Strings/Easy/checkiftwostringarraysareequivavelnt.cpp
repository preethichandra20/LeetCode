#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> word1={"a", "bc"};
    vector<string> word2={"ab", "c"};
    string w1="";
    string w2="";
    int n1=word1.size();
    int n2=word2.size();
    for(int i=0;i<n1;i++){
        w1+=word1[i];
    }
    cout<<w1<<endl;
    for(int i=0;i<n2;i++){
        w2+=word2[i];
    }
    bool ans=false;
    if(w1==w2){
        ans=true;
    }
    cout<<ans;
}