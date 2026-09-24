class Solution {
public:
    bool isPalindrome(int x) 
    {
        long rev=0,m=x;
        if(x==0)
        return true;
        while(x>0)
        {
        int d=x%10;
        rev=d+rev*10;
        x=x/10;
        }
        if(m==rev&&m>0){
            return true;
        }
        else
        return false;
    }
};