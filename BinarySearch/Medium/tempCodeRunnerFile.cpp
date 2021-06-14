long long int begin=abs(divisor),end=abs(dividend);
    if(dividend==-2147483648)
    end=2147483648;
    long long int count=0;
    while(begin<=end)
    {
        end=end-begin;
        count++;
    }
    if(count>2147483647)
    count=2147483647;
    else if(divisor<0 && dividend>0)
    count=-count;
    else if(divisor>0 && dividend<0)
    count=-count;
    cout<<count<<endl;