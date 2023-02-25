/*
 * @lc app=leetcode.cn id=268 lang=c
 *
 * [268] 丢失的数字
 */

// @lc code=start


int missingNumber(int* nums, int numsSize){
    int i=0,j=0;
    for(i=0;i<numsSize;++i)
    {
        for(j=0;j<numsSize;++j)
        {
            if(nums[j]==i)
            {
                break;
            }
        }
        if(j==numsSize)
        {
            break;
        }
    }
    return i;
}
// @lc code=end

