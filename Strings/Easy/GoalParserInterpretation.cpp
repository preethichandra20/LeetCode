#include<bits/stdc++.h>
using namespace std;
int main(){
    string command="(al)G(al)()()G";
    int n=command.length();
    string result="";
    for(int i=0;i<n;i++)
    {
        if(command[i]=='G')
        {
            result+='G';
        }
        else if(command[i]=='(' && command[i+1]==')')
        {
            i=i+1;
            result+='o';
        }
        else if(command[i]=='(' && command[i+1]!=')'){
            result+='a';
            result+='l';
            i=i+3;
        }
    }
    cout<<result;
}