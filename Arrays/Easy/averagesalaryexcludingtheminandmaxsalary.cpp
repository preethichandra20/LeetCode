#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> salary={4000,3000,1000,2000};
    int n=salary.size();
    sort(salary.begin(),salary.end());
    double total=0.0000;
    for(int i=1;i<n-1;i++)
    {
        total+=double(salary[i]);
    }
    double avg=0.0000+double(double(total)/double(n-2));
    cout<<double(avg);
}