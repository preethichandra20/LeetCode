#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={40,30,10,10};
    int n=arr.size();
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp.insert({arr[i],0});
    }
    map<int,int> ::iterator itr;
    int rank=1;
    for(itr=mp.begin();itr!=mp.end();itr++){
        mp[itr->first]=rank;
        rank++;
    }
    for(int i=0;i<n;i++){
        int key=arr[i];
        itr=mp.find(key);
        int rank=itr->second;
        arr[i]=rank;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}