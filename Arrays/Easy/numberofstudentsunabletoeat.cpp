#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> students={1,1,1,0,0,1};
    vector<int> sandwiches={1,0,0,0,1,1};
    queue<int> q1;
    queue<int> q2;
    int n1=students.size();
    for(int i=0;i<n1;i++)
    {
        q1.push(students[i]);
    }
    int n2=sandwiches.size();
      for(int i=0;i<n2;i++)
    {
        q2.push(sandwiches[i]);
    }
    int n=q1.size();
    int count=0;
    while(n!=count){
        n=q1.size();
        for(int i=0;i<n;i++)
        {
            if(q1.front()==q2.front()){
                q1.pop();
                q2.pop();
            }
            else{
                q1.push(q1.front());
                q1.pop();
            }
        }
        count=q1.size();
    }
    cout<<q1.size()<<endl;
}