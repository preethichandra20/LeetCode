#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> numbers={0,0,3,4};
    int target=0;
    int n=numbers.size();
    vector<int> result;
    int start=0;
    int end=n-1;
    while(start<end){
        if(numbers[start]+numbers[end]==target){
            result.push_back(start+1);
            result.push_back(end+1);
            break;
        }
        else if(numbers[start]+numbers[end]>target)
        end--;
        else if(numbers[start]+numbers[end]<target)
        start++;
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}