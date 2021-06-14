#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> distance={7,10,1,12,11,14,5,0};
    int start=7;
    int destination=2;
    int n=distance.size();
    int cd=0,sum=0;
    if(start>destination){
        int temp=start;
        start=destination;
        destination=temp;
    }
    for(int i=0;i<n;i++){
        sum+=distance[i];
    }
    for(int i=start;i<destination;i++){
        cd+=distance[i];
    }
    int ad=abs(sum-cd);
    cout<<min(ad,cd);
}