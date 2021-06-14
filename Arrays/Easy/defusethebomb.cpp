#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> code={2,4,9,3};
    int k=-2;
    int n=code.size();
    if(k==0){
        for(int i=0;i<n;i++){
            code[i]=0;
        }
    }
    else{
        for(int i=0;i<n;i++){
            code.push_back(code[i]);
        }
        if(k>0){
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=i+1;j<=i+k;j++){
                    sum+=code[j];
                }
                code[i]=sum;
            }
        }
        else if(k<0){
            k=abs(k);
            int n1=code.size();
            for(int i=0;i<n;i++){
                int sum=0;
                int k1=k;
                int p=n-1-k;
                while(k1!=0){
                    sum+=code[p];
                    p++;
                    k1--;
                }
                code[i]=sum;
            }
        }
        code.erase(code.begin()+n,code.end());
    }
    for(int i=0;i<n;i++){
        cout<<code[i]<<" ";
    }
}