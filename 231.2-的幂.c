/*
 * @lc app=leetcode.cn id=231 lang=c
 *
 * [231] 2 的幂
 */

// @lc code=start


bool isPowerOfTwo(int n){
    for(int i=0;i<n;i++)
    {
        if(pow(2,i)==n)
        {
            return true;
        }else if(pow(2,i)>n)
        {
            return false;
        }
    }
    return NULL;
}
// @lc code=end

