/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start
char * longestCommonPrefix(char ** strs, int strsSize){
    static char *target[200];
    
    for(int i=0;i<200;i++)
    {
        int judge=1;
        for(int j=0;j<200;j++)
        {
            if(strs[j][i]!=strs[j+1][i])
            {
                judge=0;
            }
        }
        if(judge==1)
        {
            target[i]=strs[0][i];
        }
    }
    return target;
}
// @lc code=end

