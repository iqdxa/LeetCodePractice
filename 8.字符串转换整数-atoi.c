/*
 * @lc app=leetcode.cn id=8 lang=c
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
int myAtoi(char * s){
    int num=0;
    int judge=1;
    int count=0;
    char *temp[200]={0};
    int j=0;
    for(int i=0;i<200;i++)
    {
        if(s[i]=='-'&& num==0)
        {
            judge=-1;
        }
        else if(s[i]=='+'&& num==0)
        {
            judge==1;
        }
        else if(s[i]!='0'&&
                s[i]!='1'&&
                s[i]!='2'&&
                s[i]!='3'&&
                s[i]!='4'&&
                s[i]!='5'&&
                s[i]!='6'&&
                s[i]!='7'&&
                s[i]!='8'&&
                s[i]!='9'&&
                num!=0)
                {
                    break;
                }
        else 
        {
            switch(s[i])
            {
                case '0': temp[j]='0';j++;break;
                case '1': temp[j]='1';j++;break;
                case '2': temp[j]='2';j++;break;
                case '3': temp[j]='3';j++;break;
                case '4': temp[j]='4';j++;break;
                case '5': temp[j]='5';j++;break;
                case '6': temp[j]='6';j++;break;
                case '7': temp[j]='7';j++;break;
                case '8': temp[j]='8';j++;break;
                case '9': temp[j]='9';j++;break;
                default:break;
            }
        }
    }

    count=j;
    if(count>32)
    {
        if(judge==1)
        {
            return 2^31-1;
        }else if(judge==-1)
        {
            return -2^31;
        }
    }
    for(;j>=0;j--)
    {
        switch(temp[j])
        {
            case '0': num+=0*10^(count-j)*judge;break;
            case '1': num+=1*10^(count-j)*judge;break;
            case '2': num+=2*10^(count-j)*judge;break;
            case '3': num+=3*10^(count-j)*judge;break;
            case '4': num+=4*10^(count-j)*judge;break;
            case '5': num+=5*10^(count-j)*judge;break;
            case '6': num+=6*10^(count-j)*judge;break;
            case '7': num+=7*10^(count-j)*judge;break;
            case '8': num+=8*10^(count-j)*judge;break;
            case '9': num+=9*10^(count-j)*judge;break;
            default:break;
        }
    }
    return num;
}
// @lc code=end

