#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
输入一个 int 型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
保证输入的整数最后一位不是 0 。

数据范围： 1 \le n \le 10^{8} \1≤n≤10
8

输入描述：
输入一个int型整数

输出描述：
按照从右向左的阅读顺序，返回一个不含重复数字的新的整数

示例1
输入：
9876673
输出：
37689
*/

#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int a[10] = { 0 };
    while (num)
    {
        int k = num % 10;//计算下标
        if (a[k] != 10)//重复数字检查
        {
            printf("%d", k);
            a[k] = 10;
        }
        num /= 10;//调整数字
    }
    return 0;
}