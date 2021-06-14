#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr1={2,1,100,3};
    vector<int> arr2={-5,-2,10,-3,7};
    int d=6;
    int n1=arr1.size();
    int n2=arr2.size();
    int count=n1;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            int diff=abs(arr1[i]-arr2[j]);
            if(diff<=d){
                count--;
                break;
            }
        }
    }
    cout<<count;
}