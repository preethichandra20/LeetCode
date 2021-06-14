#include<bits/stdc++.h>
using namespace std;
int main()
{
    int candies=60,num_people=4;
    vector<int> result(num_people,0);
    int sum=1,i=0,remaining=candies;
    while(remaining!=0)
    {
    
        if(i!=num_people)
        {
         if(remaining-sum>=0)
         {
             result[i]+=sum;
             remaining=remaining-sum;
             sum++;
         } 
         else{
             result[i]+=remaining;
             remaining=0;
         }
         i++;  
        }
        else
        {
            i=0;
        }
    }
    for(int j=0;j<num_people;j++)
    cout<<result[j]<<" ";
}