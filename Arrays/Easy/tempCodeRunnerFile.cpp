vector<int> temp(1001,0);
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        temp[arr[i]-1]=-1;
    }
    int t=1;
    int ans;
    int i=0;
    while(t!=k){
        if(temp[i]==0){
            ans=i+1;
            t++;
        }
        i++;
    }