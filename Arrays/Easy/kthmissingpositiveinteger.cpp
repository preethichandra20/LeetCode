#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,3,4,7,11};
    int k=5;
    int n=arr.size();
      int x=1,i=0,ans;
        while(k!=0 && i!=n){
            if(arr[i]==x){
                i++;
            }
            else{
                ans=x;
                k--;
            }
            x++;
        }
        if(k!=0){
            ans=x+k-1;
        }
    cout<<ans;
}