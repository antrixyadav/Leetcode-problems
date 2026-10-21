int mySqrt(int x) 
{
    int lb=0,ub=x,ans=0;
    while(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if((long long)mid*mid <= x)
        {
            ans=mid;
            lb=mid+1;
        }
        else
            ub=mid-1;
    }
    return ans;
}