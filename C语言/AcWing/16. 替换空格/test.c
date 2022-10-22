#define _CRT_SECURE_NO_WARNINGS 1 

/*
请实现一个函数，把字符串中的每个空格替换成"%20"。

数据范围
0≤ 输入字符串的长度 ≤1000。
注意输出字符串的长度可能大于 1000。

样例
输入："We are happy."

输出："We%20are%20happy."
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/*
* 遍历字符串，开辟额外空间
* 从头到尾遍历原字符串
* 将数据填入
* 如果是空格，则将%20依次填入
*/
char* replaceSpaces(char* str)
{
    char* tmp = str;
    int len = strlen(str);
    int count = 0;
    while (*tmp)
    {
        if (*tmp == ' ')
        {
            count++;
        }
        tmp++;
    }
    int newlen = len + 2 * count + 1;
    char* ans = (char*)malloc(sizeof(char) * newlen);
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            ans[k++] = '%';
            ans[k++] = '2';
            ans[k++] = '0';
        }
        else
        {
            ans[k++] = str[i];
        }
    }
    return ans;
}