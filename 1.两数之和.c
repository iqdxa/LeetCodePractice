/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *num = malloc(sizeof(int)*2);
    for(int i = 0; i < numsSize - 1; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                num[0] = i;
                num[1] = j;
                *returnSize = 2;
                return num;
            }
        }
    }
    return NULL;
}
// @lc code=end

