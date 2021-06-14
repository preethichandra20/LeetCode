#include<bits/stdc++.h>
using namespace std;
long long int fact(int x){
		long long int f=1;
		for(int i=1; i<=x; i++){
			f=(f*i)%1000000007;
		}
		return f;
	}
int main()
{
    int n=100;
    const unsigned int M = 1000000007;
    int nop=0;
    for(int i=2;i<=n;i++)
    {
        if(i==2 || i==3 || i==5 || i==7 || i==11 || i==13 || i==17 || i==19 || i==23 || i==29 || i==31 || i==37 || i==41 || i==43 || i==47 || i==53 || i==59 || i==61 || i==67 || i==71 || i==73 || i==79 || i==83 || i==89 || i==97)
        {
            nop++;
        }
    }
    int noc=fact(n-nop);
    nop=fact(nop);
    int ans=(nop*noc)%M;
    cout<<ans;
}