/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start

int romanToInt(char *s)
{
    int num = 0;
    int i = 1, v = 5, x = 10, l = 50, c = 100, d = 500, m = 1000;
    for (int j = 0; j <15; j++)
    {
        if(s[j]==NULL)
        {
            break;
        }
        if (s[j] == 'I')
        {
            if (s[j + 1] == 'V')
            {
                j++;
                num += 4;
            }
            else if (s[j + 1] == 'X')
            {
                j++;
                num += 9;
            }
            else
            {
                num += 1;
            }
        }
        else if (s[j] == 'V')
        {
            num += 5;
        }
        else if (s[j] == 'X')
        {
            if (s[j + 1] == 'L')
            {
                j++;
                num += 40;
            }
            else if (s[j + 1] == 'C')
            {
                j++;
                num += 90;
            }
            else
            {
                num += 10;
            }
        }
        else if (s[j] == 'L')
        {
            num += 50;
        }
        else if (s[j] == 'C')
        {
            if (s[j + 1] == 'D')
            {
                j++;
                num += 400;
            }
            else if (s[j + 1] == 'M')
            {
                j++;
                num += 900;
            }
            else
            {
                num += 100;
            }
        }
        else if (s[j] == 'D')
        {
            num += 500;
        }
        else if (s[j] == 'M')
        {
            num += 1000;
        }
    }
    return num;
}
// @lc code=end
