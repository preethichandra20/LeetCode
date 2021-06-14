#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,2,3,4};
    int freq[501]={0};
    int n=arr.size();
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int result=-1;
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==freq[arr[i]]){
            if(k<=arr[i]){
                k=arr[i];
            }
        }
    }
    if(k!=0){
        result=k;
    }
    cout<<result;
}