/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start
bool isPalindrome(int x){
    int num[20]={0};
    int count=0;
    if(x<0)
    {
        return false;
    }else
    {
        for(int i=0;i<20;++i)
        {
            num[i]=x%10;
            x/=10;
            count++;
            if(x==0)
            {
                break;
            }
        }
    }
    for(int i=0;i<count/2;++i)
    {
        if(num[i]!=num[count-i-1])
        {
            return false;
        }
    }
    return true;
}
// @lc code=end

