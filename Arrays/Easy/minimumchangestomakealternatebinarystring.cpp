#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="10010100";
    int n=s.length();
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
       if(i%2==0){
           if(s[i]=='0')
           c1++;
           else
           c2++;
       }
       else if(i%2!=0){
           if(s[i]=='1')
           c1++;
           else
           c2++;
       }
    }
    int count=min(c1,c2);
    cout<<count;
}