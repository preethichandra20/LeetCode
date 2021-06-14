#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> queries={3,1,2,1};
    int m=5;
    int n=queries.size();
    vector<int> per;
    for(int i=0;i<m;i++)
    {
        per.push_back(m-i);
    }
    vector<int> result;
    for(int i=0;i<n;i++){
        int key=queries[i];
        auto it=find(per.begin(),per.end(),key);
        int index=it-per.begin();
        per.erase(per.begin()+index);
        per.push_back(key);
        result.push_back(m-1-index);
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
}