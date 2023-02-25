/*
 * @lc app=leetcode.cn id=50 lang=c
 *
 * [50] Pow(x, n)
 */

// @lc code=start


double myPow(double x, int n){
    double ans=1;
    long long num=0;

    num=n;
    
    if(x==1)
    {
        ans=1;
    }
    else if(x==-1)
    {
        if(num%2==0)
        {
            ans=1;
        }
        else if(num%2!=0)
        {
            ans=-1;
        }
    }
    else if(num<-2000000000)
    {
        ans=0;
    }
    else if(num>=0)
    {
        for(long long i=0;i<num;++i)
        {
            ans*=x;
        }
    }
    else if(num<0)
    {
        for(long long i=0;i>num;--i)
        {
            ans*=1/x;
        }
        // ans=1/ans;
    }
    return ans;
}
// @lc code=end

