#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。

它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。

例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1+2+4+7+14=28。

输入n，请输出n以内(含n)完全数的个数。

数据范围： 1 \le n \le 5 \times 10^{5} \1≤n≤5×10
5

输入描述：
输入一个数字n

输出描述：
输出不超过n的完全数的个数

示例1
输入：
1000
输出：
3
*/


#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++)//1-n的数字
    {
        int sum = 0;
        for (int j = 1; j < i; j++)//1 - i - 1，约数不包括i
        {
            if (!(i % j))//能被整除，则累加
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}