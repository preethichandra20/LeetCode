#include<bits/stdc++.h>
using namespace std;
int main(){
    string address="255.100.50.0";
    string ans="";
    int n=address.length();
    for(int i=0;i<n;i++){
        if(address[i]=='.'){
            ans+='[';
            ans+='.';
            ans+=']';
        }
        else{
            ans+=address[i];
        }
    }
    cout<<ans;
}