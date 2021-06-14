int n=nums.size();
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=arr[i-1])
        count++;
    }
    if(count<=1)