#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
输入一个字符串和一个整数 k ，截取字符串的前k个字符并输出

数据范围：字符串长度满足 1 \le n \le 1000 \1≤n≤1000  ， 1 \le k \le n \1≤k≤n
输入描述：
1.输入待截取的字符串

2.输入一个正整数k，代表截取的长度

输出描述：
截取后的字符串

示例1
输入：
abABCcDEF
6
输出：
abABCc
示例2
输入：
bdxPKBhih
6
输出：
bdxPKB
*/

//简单题目，不写题解了

#include<stdio.h>
int main()
{
    char arr[1001] = { 0 };
    scanf("%[^\n]", arr);
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);//打印字符
    }
    return 0;
}