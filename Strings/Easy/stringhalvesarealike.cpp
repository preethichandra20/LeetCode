#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="textbook";
    int n=s.length();
    int n1=0;
    int n2=0;
    for(int i=0;i<n/2;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='o' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        n1++;
    }
    for(int i=n/2;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='o' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        n2++;
    }
    if(n1==n2)
    cout<<true;
    else
    cout<<false;
}