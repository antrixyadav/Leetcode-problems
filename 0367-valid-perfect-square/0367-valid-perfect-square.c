bool isPerfectSquare(int num) {
    if(num < 2)
        return true;
    int lb = 2, ub = num/2;
    while(lb <= ub)
    {
        int mid=(ub+lb)/2;
        if(mid == num/mid && num%mid == 0)
            return true;
        else if(mid <= num/mid)
            lb = mid + 1;
        else
            ub = mid - 1;
    }

    return false;
}



/*
bool isPerfectSquare(int num) {
    if(num < 2)
        return true;
    for(int i=2; i<=num/2; i++)
    {
        if((i*i) ==num)
            return true;
    }
    return false;
}*/