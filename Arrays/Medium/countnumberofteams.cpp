#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> rating={2,1,3};
    int n=rating.size();
    int count=0;
    for(int i=0;i<n-2;i++){
        int p1=rating[i];
        for(int j=i+1;j<n-1;j++){
            int p2=rating[j];
            if(p1<p2){
                for(int k=j+1;k<n;k++){
                    int p3=rating[k];
                    if(p2<p3){
                        count++;
                    }
                }
            }
            else if(p1>p2){
                for(int k=j+1;k<n;k++){
                    int p3=rating[k];
                    if(p2>p3){
                        count++;
                    }
                }
            }
            }
        }
    cout<<count;
}