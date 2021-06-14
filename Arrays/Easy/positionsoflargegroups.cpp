#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abbxxxxzzy";
    s=s+'0';
    int n=s.length();
    int count=1;
    char key=s[0];
    int j=0;
    vector<vector<int>> result;
        for(int i=1;i<n;i++)
        {
            if(s[i]==key)
            {
                count++;
            }
            else{
                key=s[i];
                if(count>=3)
                {
                    vector<int> temp;
                    temp.push_back(i-count);
                    temp.push_back(i-1);
                    result[j].push_back(temp);
                    j++;
                }
                count=1;
            }
        }
        for(int i=0;i<result.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
}